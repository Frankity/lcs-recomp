#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0154[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 5, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 8, 0, 0,
    0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 15,
    0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0,
    0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 28, 0, 29, 0, 0,
    0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 36,
    0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0,
    0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 50,
    0, 0, 0, 51, 0, 0, 0, 52, 0, 53, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0,
    0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 62, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 0,
    0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 70, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0,
    0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0,
    80, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0,
    0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 94,
    0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 102, 103, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0,
    0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0,
    116, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0,
    0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 130,
    0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 137,
    0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 142, 0, 0, 143, 0,
    144, 0, 145, 0, 146, 0, 0, 147, 0, 148, 0, 149, 0, 150, 0, 0, 151, 0, 152, 0, 0, 153, 0, 154, 0, 155, 0, 156, 0, 0, 157, 0,
    158, 0, 159, 0, 160, 0, 0, 161, 0, 162, 0, 0, 163, 0, 164, 0, 0, 165, 0, 166, 0, 0, 167, 0, 168, 0, 0, 169, 0, 170, 0, 0,
    0, 171, 0, 172, 0, 0, 0, 173, 0, 174, 0, 0, 0, 175, 0, 176, 0, 0, 0, 177, 0, 178, 0, 0, 0, 179, 0, 180, 0, 0, 0, 181,
    0, 182, 0, 0, 0, 183, 0, 184, 0, 0, 0, 185, 0, 186, 0, 0, 0, 187, 0, 188, 0, 0, 0, 189, 0, 190, 0, 0, 0, 191, 0, 192,
    193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197,
    198, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 205, 206, 0,
    0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 211, 0, 212, 0, 0, 0,
    0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0,
    220, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0,
    0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235,
    0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 257,
    0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0, 260, 0, 0, 261, 262, 0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 265, 0, 0, 0,
    0, 0, 0, 266, 0, 267, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0,
    274, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 277, 0, 278, 0, 279, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 283,
    0, 284, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 287, 0, 288, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 292, 0,
    293, 0, 294, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0, 299, 0,
    300, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 304, 0, 0, 0, 305, 0, 306, 0, 307, 308, 0, 0, 309, 0, 0, 0, 0, 0,
    0, 310, 311, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 315, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 319,
    0, 0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 325, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 334, 0, 0, 335, 0, 0, 336, 0, 337,
    0, 338, 0, 339, 0, 340, 0, 341, 0, 342, 0, 343, 0, 344, 0, 0, 0, 345, 0, 346, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 353, 0, 0, 354, 0, 355, 0,
    0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 364, 0, 0, 0, 0, 0, 0, 365, 366, 0, 0, 0, 0, 0, 0, 0,
    367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 370, 0, 371, 0, 0, 372, 0, 373, 0, 0, 374, 0, 0,
    375, 0, 0, 376, 0, 377, 0, 378, 0, 0, 379, 0, 380, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 383, 0, 0,
    384, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 387, 0, 0, 388, 0, 389, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    391, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 0, 395, 0, 0, 396, 0, 0, 397, 0, 398, 0, 399, 0,
    0, 0, 0, 400, 401, 0, 0, 402, 0, 0, 403, 0, 404, 0, 0, 0, 405, 0, 406, 0, 407, 0, 0, 408, 0, 409, 0, 0, 0, 0, 0, 0,
    410, 0, 0, 0, 411, 0, 412, 0, 413, 0, 414, 0, 0, 415, 0, 416, 0, 0, 0, 417, 0, 418, 0, 419, 0, 420, 0, 0, 421, 0, 0, 0,
    0, 422, 0, 0, 0, 0, 0, 423, 0, 424, 0, 425, 0, 426, 0, 427, 0, 428, 0, 429, 430, 0, 431, 0, 0, 432, 0, 0, 433, 0, 434, 435,
    0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0,
    438, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 440, 0, 441, 0, 442, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 445, 446,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0,
    450, 0, 451, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 455, 0, 0, 456, 0, 0, 457, 0, 458, 0, 0, 459, 0, 0,
    460, 0, 461, 0, 0, 462, 0, 0, 463, 0, 464, 0, 0, 465, 0, 0, 466, 0, 467, 0, 0, 468, 0, 0, 469, 0, 0, 470, 0, 471, 0, 0,
    0, 0, 472, 0, 0, 473, 0, 474, 0, 0, 475, 0, 0, 476, 0, 0, 477, 0, 478, 0, 0, 0, 479, 0, 0, 480, 0, 481, 0, 0, 0, 0,
    0, 482, 0, 0, 483, 0, 0, 0, 0, 0, 484, 0, 485, 0, 0, 486, 0, 0, 487, 0, 0, 488, 0, 0, 489, 0, 0, 490, 0, 0, 491, 0,
    0, 492, 0, 0, 493, 0, 0, 0, 494, 0, 0, 0, 495, 0, 496, 0, 0, 497, 0, 0, 498, 0, 0, 499, 0, 500, 0, 501, 0, 502, 0, 0,
    503, 0, 0, 504, 0, 0, 505, 0, 506, 0, 507, 0, 0, 0, 508, 0, 0, 509, 0, 0, 510, 0, 0, 511, 0, 0, 512, 0, 513, 0, 514, 0,
    515, 0, 0, 516, 0, 517, 0, 0, 518, 0, 0, 0, 0, 0, 519, 0, 0, 520, 0, 0, 521, 0, 0, 522, 0, 0, 523, 0, 0, 524, 0, 0,
    525, 0, 526, 0, 0, 527, 0, 0, 528, 0, 529, 0, 0, 530, 0, 0, 531, 0, 0, 532, 0, 0, 533, 0, 0, 534, 0, 0, 535, 0, 536, 0,
    0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 540, 0, 0, 541, 0, 0, 0, 542, 0, 0, 543, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 545, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 547, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 551, 0, 0, 552, 0, 0, 0, 0,
    0, 553, 0, 0, 0, 0, 554, 0, 0, 0, 555, 0, 0, 556, 0, 557, 0, 558, 0, 0, 0, 0, 0, 559, 0, 560, 0, 0, 0, 561, 0, 0,
    0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 563, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0,
    566, 0, 567, 0, 0, 0, 0, 0, 568, 0, 0, 0, 569, 0, 0, 570, 0, 0, 0, 0, 571, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 575, 0, 0, 0, 0, 0, 576, 0, 0, 577, 0, 0, 578, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 582, 0,
    0, 583, 0, 0, 0, 0, 0, 584, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 587, 0, 0, 0, 0,
    0, 0, 0, 588, 0, 589, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0,
    592, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 594, 0, 595, 0, 0, 0, 0, 0, 0, 0, 596, 0, 597, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 601, 0, 602, 0, 0, 603,
    0, 604, 0, 605, 0, 0, 606, 607, 0, 0, 0, 0, 608, 0, 0, 0, 0, 609, 0, 0, 610, 0, 611, 0, 612, 0, 0, 613, 0, 0, 0, 614,
    0, 0, 0, 615, 0, 0, 616, 0, 0, 0, 617, 0, 0, 0, 618, 0, 0, 619, 0, 620, 0, 621, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    623, 0, 624, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0,
    628, 0, 0, 0, 0, 0, 629, 0, 0, 630, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 633, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 635, 0, 636, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 638, 0, 0, 639, 0, 0, 0,
    0, 640, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 643, 0, 0, 0, 0, 0, 644, 645, 0, 0, 0, 0, 0, 646, 0, 0, 0,
    0, 0, 0, 647, 0, 648, 0, 0, 0, 0, 0, 0, 649, 650, 0, 0, 651, 0, 0, 0, 0, 0, 652, 0, 0, 0, 653, 0, 0, 654, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 658, 0,
    659, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    663, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 666, 0, 0, 0, 667, 0, 0, 0, 0,
    0, 0, 668, 0, 0, 0, 669, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0,
    0, 672, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 676, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 680, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 683, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 684, 0, 685, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 688, 0, 0, 689, 0, 0, 0, 0, 0, 690, 0, 0, 691, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0,
    0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0, 0, 696, 0, 697, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 699, 0, 0,
    700, 0, 0, 0, 0, 701, 0, 0, 702, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 704, 0, 0, 0, 0, 0, 705, 706, 0, 0, 0, 0, 0,
    707, 0, 0, 0, 0, 0, 0, 708, 0, 709, 0, 0, 0, 0, 0, 0, 710, 711, 0, 0, 712, 0, 0, 0, 0, 0, 713, 0, 0, 0, 714, 0,
    0, 715, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 717, 0, 0, 0, 0, 0, 0, 0, 0, 718, 0, 0,
    0, 0, 719, 0, 720, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 724, 0, 0, 0, 725, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 727, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 729, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 0, 0, 0, 0, 731, 0,
    732, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 0, 736, 0,
    0, 0, 0, 0, 737, 0, 0, 738, 0, 0, 739, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 743, 0, 744, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 746, 0, 0, 747, 0, 0, 0, 0, 748,
    0, 0, 749, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 751, 0, 0, 0, 0, 0, 752, 753, 0, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0,
    0, 755, 0, 756, 0, 0, 0, 0, 0, 0, 757, 758, 0, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 760, 0, 761, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 763, 0, 0, 0,
    764, 0, 0, 765, 0, 766, 0, 767, 0, 0, 0, 768, 0, 0, 769, 0, 770, 771, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    772, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 773, 0, 0, 0, 0, 774, 0, 0,
    775, 0, 0, 0, 776, 0, 0, 777, 0, 778, 0, 779, 0, 0, 780, 0, 0, 781, 0, 782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 783,
    0, 784, 785, 0, 0, 786, 0, 0, 0, 787, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 788, 0, 0,
    0, 789, 0, 0, 0, 790, 0, 0, 0, 0, 791, 0, 792, 0, 793, 0, 0, 0, 0, 0, 0, 0, 794, 0, 0, 0, 0, 0, 0, 0, 795, 0,
    0, 0, 0, 0, 796, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 797, 0, 0, 0, 798, 0, 0, 0,
    799, 0, 0, 0, 0, 800, 0, 801, 0, 0, 0, 0, 802, 0, 0, 0, 0, 0, 803, 0, 804, 0, 0, 0, 0, 0, 805, 806, 0, 0, 0, 0,
    807, 0, 0, 0, 0, 0, 808, 0, 809, 0, 0, 0, 0, 0, 810, 811, 0, 812, 0, 0, 0, 813, 0, 0, 0, 0, 0, 0, 814, 0, 0, 0,
    815, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 816, 0, 817, 0, 0, 0, 0, 818, 0, 0, 819,
    0, 820, 0, 0, 0, 821, 0, 0, 822, 0, 0, 823, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 824, 0, 825, 0, 0, 0,
    0, 0, 826, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 827, 828, 0, 829, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 830, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 831, 0, 0, 832, 0, 0, 0, 0, 0, 833, 0, 834,
    0, 0, 835, 0, 836, 0, 837, 0, 0, 0, 0, 838, 0, 0, 0, 0, 0, 839, 0, 840, 0, 0, 0, 0, 0, 841, 842, 0, 0, 0, 0, 843,
};
void recomp_unit_0154_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A6C000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0154[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A6C000;
    case 2u: goto L_08A6C010;
    case 3u: goto L_08A6C028;
    case 4u: goto L_08A6C044;
    case 5u: goto L_08A6C048;
    case 6u: goto L_08A6C050;
    case 7u: goto L_08A6C06C;
    case 8u: goto L_08A6C074;
    case 9u: goto L_08A6C090;
    case 10u: goto L_08A6C098;
    case 11u: goto L_08A6C0B4;
    case 12u: goto L_08A6C0BC;
    case 13u: goto L_08A6C0D8;
    case 14u: goto L_08A6C0E0;
    case 15u: goto L_08A6C0FC;
    case 16u: goto L_08A6C104;
    case 17u: goto L_08A6C120;
    case 18u: goto L_08A6C128;
    case 19u: goto L_08A6C144;
    case 20u: goto L_08A6C14C;
    case 21u: goto L_08A6C168;
    case 22u: goto L_08A6C170;
    case 23u: goto L_08A6C184;
    case 24u: goto L_08A6C190;
    case 25u: goto L_08A6C1B4;
    case 26u: goto L_08A6C1CC;
    case 27u: goto L_08A6C1E8;
    case 28u: goto L_08A6C1EC;
    case 29u: goto L_08A6C1F4;
    case 30u: goto L_08A6C210;
    case 31u: goto L_08A6C218;
    case 32u: goto L_08A6C234;
    case 33u: goto L_08A6C23C;
    case 34u: goto L_08A6C258;
    case 35u: goto L_08A6C260;
    case 36u: goto L_08A6C27C;
    case 37u: goto L_08A6C284;
    case 38u: goto L_08A6C2A0;
    case 39u: goto L_08A6C2A8;
    case 40u: goto L_08A6C2C4;
    case 41u: goto L_08A6C2CC;
    case 42u: goto L_08A6C2E8;
    case 43u: goto L_08A6C2F0;
    case 44u: goto L_08A6C30C;
    case 45u: goto L_08A6C314;
    case 46u: goto L_08A6C328;
    case 47u: goto L_08A6C334;
    case 48u: goto L_08A6C358;
    case 49u: goto L_08A6C364;
    case 50u: goto L_08A6C37C;
    case 51u: goto L_08A6C38C;
    case 52u: goto L_08A6C39C;
    case 53u: goto L_08A6C3A4;
    case 54u: goto L_08A6C3AC;
    case 55u: goto L_08A6C3C0;
    case 56u: goto L_08A6C3D4;
    case 57u: goto L_08A6C3E4;
    case 58u: goto L_08A6C404;
    case 59u: goto L_08A6C410;
    case 60u: goto L_08A6C42C;
    case 61u: goto L_08A6C434;
    case 62u: goto L_08A6C444;
    case 63u: goto L_08A6C44C;
    case 64u: goto L_08A6C458;
    case 65u: goto L_08A6C464;
    case 66u: goto L_08A6C470;
    case 67u: goto L_08A6C494;
    case 68u: goto L_08A6C4AC;
    case 69u: goto L_08A6C4C8;
    case 70u: goto L_08A6C4CC;
    case 71u: goto L_08A6C4D4;
    case 72u: goto L_08A6C4F0;
    case 73u: goto L_08A6C4F8;
    case 74u: goto L_08A6C514;
    case 75u: goto L_08A6C51C;
    case 76u: goto L_08A6C538;
    case 77u: goto L_08A6C540;
    case 78u: goto L_08A6C55C;
    case 79u: goto L_08A6C564;
    case 80u: goto L_08A6C580;
    case 81u: goto L_08A6C588;
    case 82u: goto L_08A6C5A4;
    case 83u: goto L_08A6C5AC;
    case 84u: goto L_08A6C5C8;
    case 85u: goto L_08A6C5D0;
    case 86u: goto L_08A6C5EC;
    case 87u: goto L_08A6C5F4;
    case 88u: goto L_08A6C610;
    case 89u: goto L_08A6C618;
    case 90u: goto L_08A6C634;
    case 91u: goto L_08A6C63C;
    case 92u: goto L_08A6C658;
    case 93u: goto L_08A6C660;
    case 94u: goto L_08A6C67C;
    case 95u: goto L_08A6C684;
    case 96u: goto L_08A6C694;
    case 97u: goto L_08A6C6A4;
    case 98u: goto L_08A6C6B8;
    case 99u: goto L_08A6C6C4;
    case 100u: goto L_08A6C6E8;
    case 101u: goto L_08A6C700;
    case 102u: goto L_08A6C71C;
    case 103u: goto L_08A6C720;
    case 104u: goto L_08A6C728;
    case 105u: goto L_08A6C744;
    case 106u: goto L_08A6C74C;
    case 107u: goto L_08A6C768;
    case 108u: goto L_08A6C770;
    case 109u: goto L_08A6C78C;
    case 110u: goto L_08A6C794;
    case 111u: goto L_08A6C7B0;
    case 112u: goto L_08A6C7B8;
    case 113u: goto L_08A6C7D4;
    case 114u: goto L_08A6C7DC;
    case 115u: goto L_08A6C7F8;
    case 116u: goto L_08A6C800;
    case 117u: goto L_08A6C81C;
    case 118u: goto L_08A6C824;
    case 119u: goto L_08A6C840;
    case 120u: goto L_08A6C848;
    case 121u: goto L_08A6C864;
    case 122u: goto L_08A6C86C;
    case 123u: goto L_08A6C888;
    case 124u: goto L_08A6C890;
    case 125u: goto L_08A6C8AC;
    case 126u: goto L_08A6C8B4;
    case 127u: goto L_08A6C8D0;
    case 128u: goto L_08A6C8D8;
    case 129u: goto L_08A6C8F4;
    case 130u: goto L_08A6C8FC;
    case 131u: goto L_08A6C918;
    case 132u: goto L_08A6C920;
    case 133u: goto L_08A6C93C;
    case 134u: goto L_08A6C944;
    case 135u: goto L_08A6C960;
    case 136u: goto L_08A6C968;
    case 137u: goto L_08A6C97C;
    case 138u: goto L_08A6C988;
    case 139u: goto L_08A6C9C0;
    case 140u: goto L_08A6C9D4;
    case 141u: goto L_08A6C9E4;
    case 142u: goto L_08A6C9EC;
    case 143u: goto L_08A6C9F8;
    case 144u: goto L_08A6CA00;
    case 145u: goto L_08A6CA08;
    case 146u: goto L_08A6CA10;
    case 147u: goto L_08A6CA1C;
    case 148u: goto L_08A6CA24;
    case 149u: goto L_08A6CA2C;
    case 150u: goto L_08A6CA34;
    case 151u: goto L_08A6CA40;
    case 152u: goto L_08A6CA48;
    case 153u: goto L_08A6CA54;
    case 154u: goto L_08A6CA5C;
    case 155u: goto L_08A6CA64;
    case 156u: goto L_08A6CA6C;
    case 157u: goto L_08A6CA78;
    case 158u: goto L_08A6CA80;
    case 159u: goto L_08A6CA88;
    case 160u: goto L_08A6CA90;
    case 161u: goto L_08A6CA9C;
    case 162u: goto L_08A6CAA4;
    case 163u: goto L_08A6CAB0;
    case 164u: goto L_08A6CAB8;
    case 165u: goto L_08A6CAC4;
    case 166u: goto L_08A6CACC;
    case 167u: goto L_08A6CAD8;
    case 168u: goto L_08A6CAE0;
    case 169u: goto L_08A6CAEC;
    case 170u: goto L_08A6CAF4;
    case 171u: goto L_08A6CB04;
    case 172u: goto L_08A6CB0C;
    case 173u: goto L_08A6CB1C;
    case 174u: goto L_08A6CB24;
    case 175u: goto L_08A6CB34;
    case 176u: goto L_08A6CB3C;
    case 177u: goto L_08A6CB4C;
    case 178u: goto L_08A6CB54;
    case 179u: goto L_08A6CB64;
    case 180u: goto L_08A6CB6C;
    case 181u: goto L_08A6CB7C;
    case 182u: goto L_08A6CB84;
    case 183u: goto L_08A6CB94;
    case 184u: goto L_08A6CB9C;
    case 185u: goto L_08A6CBAC;
    case 186u: goto L_08A6CBB4;
    case 187u: goto L_08A6CBC4;
    case 188u: goto L_08A6CBCC;
    case 189u: goto L_08A6CBDC;
    case 190u: goto L_08A6CBE4;
    case 191u: goto L_08A6CBF4;
    case 192u: goto L_08A6CBFC;
    case 193u: goto L_08A6CC00;
    case 194u: goto L_08A6CC1C;
    case 195u: goto L_08A6CC48;
    case 196u: goto L_08A6CC60;
    case 197u: goto L_08A6CC7C;
    case 198u: goto L_08A6CC80;
    case 199u: goto L_08A6CC88;
    case 200u: goto L_08A6CCA4;
    case 201u: goto L_08A6CCAC;
    case 202u: goto L_08A6CCC8;
    case 203u: goto L_08A6CCD0;
    case 204u: goto L_08A6CCEC;
    case 205u: goto L_08A6CCF4;
    case 206u: goto L_08A6CCF8;
    case 207u: goto L_08A6CD04;
    case 208u: goto L_08A6CD30;
    case 209u: goto L_08A6CD48;
    case 210u: goto L_08A6CD64;
    case 211u: goto L_08A6CD68;
    case 212u: goto L_08A6CD70;
    case 213u: goto L_08A6CD8C;
    case 214u: goto L_08A6CD94;
    case 215u: goto L_08A6CDB0;
    case 216u: goto L_08A6CDB8;
    case 217u: goto L_08A6CDD4;
    case 218u: goto L_08A6CDDC;
    case 219u: goto L_08A6CDF8;
    case 220u: goto L_08A6CE00;
    case 221u: goto L_08A6CE04;
    case 222u: goto L_08A6CE10;
    case 223u: goto L_08A6CE94;
    case 224u: goto L_08A6CEB4;
    case 225u: goto L_08A6CEDC;
    case 226u: goto L_08A6CEF0;
    case 227u: goto L_08A6CF08;
    case 228u: goto L_08A6CF18;
    case 229u: goto L_08A6CF54;
    case 230u: goto L_08A6CF68;
    case 231u: goto L_08A6CFA4;
    case 232u: goto L_08A6CFC4;
    case 233u: goto L_08A6CFD0;
    case 234u: goto L_08A6CFE0;
    case 235u: goto L_08A6CFFC;
    case 236u: goto L_08A6D018;
    case 237u: goto L_08A6D024;
    case 238u: goto L_08A6D02C;
    case 239u: goto L_08A6D038;
    case 240u: goto L_08A6D044;
    case 241u: goto L_08A6D08C;
    case 242u: goto L_08A6D0AC;
    case 243u: goto L_08A6D0BC;
    case 244u: goto L_08A6D0D8;
    case 245u: goto L_08A6D0E8;
    case 246u: goto L_08A6D140;
    case 247u: goto L_08A6D154;
    case 248u: goto L_08A6D15C;
    case 249u: goto L_08A6D164;
    case 250u: goto L_08A6D198;
    case 251u: goto L_08A6D1A4;
    case 252u: goto L_08A6D1AC;
    case 253u: goto L_08A6D1BC;
    case 254u: goto L_08A6D1EC;
    case 255u: goto L_08A6D1FC;
    case 256u: goto L_08A6D258;
    case 257u: goto L_08A6D27C;
    case 258u: goto L_08A6D29C;
    case 259u: goto L_08A6D2A8;
    case 260u: goto L_08A6D2B4;
    case 261u: goto L_08A6D2C0;
    case 262u: goto L_08A6D2C4;
    case 263u: goto L_08A6D2D8;
    case 264u: goto L_08A6D2E4;
    case 265u: goto L_08A6D2F0;
    case 266u: goto L_08A6D30C;
    case 267u: goto L_08A6D314;
    case 268u: goto L_08A6D320;
    case 269u: goto L_08A6D32C;
    case 270u: goto L_08A6D344;
    case 271u: goto L_08A6D354;
    case 272u: goto L_08A6D360;
    case 273u: goto L_08A6D378;
    case 274u: goto L_08A6D380;
    case 275u: goto L_08A6D38C;
    case 276u: goto L_08A6D398;
    case 277u: goto L_08A6D3AC;
    case 278u: goto L_08A6D3B4;
    case 279u: goto L_08A6D3BC;
    case 280u: goto L_08A6D3C4;
    case 281u: goto L_08A6D3EC;
    case 282u: goto L_08A6D3F4;
    case 283u: goto L_08A6D3FC;
    case 284u: goto L_08A6D404;
    case 285u: goto L_08A6D410;
    case 286u: goto L_08A6D41C;
    case 287u: goto L_08A6D430;
    case 288u: goto L_08A6D438;
    case 289u: goto L_08A6D440;
    case 290u: goto L_08A6D448;
    case 291u: goto L_08A6D470;
    case 292u: goto L_08A6D478;
    case 293u: goto L_08A6D480;
    case 294u: goto L_08A6D488;
    case 295u: goto L_08A6D49C;
    case 296u: goto L_08A6D4A8;
    case 297u: goto L_08A6D4E8;
    case 298u: goto L_08A6D4F0;
    case 299u: goto L_08A6D4F8;
    case 300u: goto L_08A6D500;
    case 301u: goto L_08A6D50C;
    case 302u: goto L_08A6D528;
    case 303u: goto L_08A6D530;
    case 304u: goto L_08A6D538;
    case 305u: goto L_08A6D548;
    case 306u: goto L_08A6D550;
    case 307u: goto L_08A6D558;
    case 308u: goto L_08A6D55C;
    case 309u: goto L_08A6D568;
    case 310u: goto L_08A6D584;
    case 311u: goto L_08A6D588;
    case 312u: goto L_08A6D594;
    case 313u: goto L_08A6D5A8;
    case 314u: goto L_08A6D5B4;
    case 315u: goto L_08A6D5C0;
    case 316u: goto L_08A6D5CC;
    case 317u: goto L_08A6D5DC;
    case 318u: goto L_08A6D5F4;
    case 319u: goto L_08A6D5FC;
    case 320u: goto L_08A6D610;
    case 321u: goto L_08A6D618;
    case 322u: goto L_08A6D67C;
    case 323u: goto L_08A6D6AC;
    case 324u: goto L_08A6D6C0;
    case 325u: goto L_08A6D6C8;
    case 326u: goto L_08A6D6D0;
    case 327u: goto L_08A6D718;
    case 328u: goto L_08A6D730;
    case 329u: goto L_08A6D754;
    case 330u: goto L_08A6D79C;
    case 331u: goto L_08A6D7B0;
    case 332u: goto L_08A6D7C0;
    case 333u: goto L_08A6D7CC;
    case 334u: goto L_08A6D7DC;
    case 335u: goto L_08A6D7E8;
    case 336u: goto L_08A6D7F4;
    case 337u: goto L_08A6D7FC;
    case 338u: goto L_08A6D804;
    case 339u: goto L_08A6D80C;
    case 340u: goto L_08A6D814;
    case 341u: goto L_08A6D81C;
    case 342u: goto L_08A6D824;
    case 343u: goto L_08A6D82C;
    case 344u: goto L_08A6D834;
    case 345u: goto L_08A6D844;
    case 346u: goto L_08A6D84C;
    case 347u: goto L_08A6D858;
    case 348u: goto L_08A6D860;
    case 349u: goto L_08A6D9C8;
    case 350u: goto L_08A6D9D8;
    case 351u: goto L_08A6DA30;
    case 352u: goto L_08A6DA60;
    case 353u: goto L_08A6DA64;
    case 354u: goto L_08A6DA70;
    case 355u: goto L_08A6DA78;
    case 356u: goto L_08A6DA84;
    case 357u: goto L_08A6DA9C;
    case 358u: goto L_08A6DAAC;
    case 359u: goto L_08A6DAC0;
    case 360u: goto L_08A6DAD4;
    case 361u: goto L_08A6DAF4;
    case 362u: goto L_08A6DB20;
    case 363u: goto L_08A6DB38;
    case 364u: goto L_08A6DB40;
    case 365u: goto L_08A6DB5C;
    case 366u: goto L_08A6DB60;
    case 367u: goto L_08A6DB80;
    case 368u: goto L_08A6DBB0;
    case 369u: goto L_08A6DBC0;
    case 370u: goto L_08A6DBCC;
    case 371u: goto L_08A6DBD4;
    case 372u: goto L_08A6DBE0;
    case 373u: goto L_08A6DBE8;
    case 374u: goto L_08A6DBF4;
    case 375u: goto L_08A6DC00;
    case 376u: goto L_08A6DC0C;
    case 377u: goto L_08A6DC14;
    case 378u: goto L_08A6DC1C;
    case 379u: goto L_08A6DC28;
    case 380u: goto L_08A6DC30;
    case 381u: goto L_08A6DC38;
    case 382u: goto L_08A6DC68;
    case 383u: goto L_08A6DC74;
    case 384u: goto L_08A6DC80;
    case 385u: goto L_08A6DC9C;
    case 386u: goto L_08A6DCAC;
    case 387u: goto L_08A6DCB4;
    case 388u: goto L_08A6DCC0;
    case 389u: goto L_08A6DCC8;
    case 390u: goto L_08A6DCD0;
    case 391u: goto L_08A6DD00;
    case 392u: goto L_08A6DD0C;
    case 393u: goto L_08A6DD3C;
    case 394u: goto L_08A6DD44;
    case 395u: goto L_08A6DD50;
    case 396u: goto L_08A6DD5C;
    case 397u: goto L_08A6DD68;
    case 398u: goto L_08A6DD70;
    case 399u: goto L_08A6DD78;
    case 400u: goto L_08A6DD8C;
    case 401u: goto L_08A6DD90;
    case 402u: goto L_08A6DD9C;
    case 403u: goto L_08A6DDA8;
    case 404u: goto L_08A6DDB0;
    case 405u: goto L_08A6DDC0;
    case 406u: goto L_08A6DDC8;
    case 407u: goto L_08A6DDD0;
    case 408u: goto L_08A6DDDC;
    case 409u: goto L_08A6DDE4;
    case 410u: goto L_08A6DE00;
    case 411u: goto L_08A6DE10;
    case 412u: goto L_08A6DE18;
    case 413u: goto L_08A6DE20;
    case 414u: goto L_08A6DE28;
    case 415u: goto L_08A6DE34;
    case 416u: goto L_08A6DE3C;
    case 417u: goto L_08A6DE4C;
    case 418u: goto L_08A6DE54;
    case 419u: goto L_08A6DE5C;
    case 420u: goto L_08A6DE64;
    case 421u: goto L_08A6DE70;
    case 422u: goto L_08A6DE84;
    case 423u: goto L_08A6DE9C;
    case 424u: goto L_08A6DEA4;
    case 425u: goto L_08A6DEAC;
    case 426u: goto L_08A6DEB4;
    case 427u: goto L_08A6DEBC;
    case 428u: goto L_08A6DEC4;
    case 429u: goto L_08A6DECC;
    case 430u: goto L_08A6DED0;
    case 431u: goto L_08A6DED8;
    case 432u: goto L_08A6DEE4;
    case 433u: goto L_08A6DEF0;
    case 434u: goto L_08A6DEF8;
    case 435u: goto L_08A6DEFC;
    case 436u: goto L_08A6DF20;
    case 437u: goto L_08A6DF78;
    case 438u: goto L_08A6DF80;
    case 439u: goto L_08A6DF90;
    case 440u: goto L_08A6DFAC;
    case 441u: goto L_08A6DFB4;
    case 442u: goto L_08A6DFBC;
    case 443u: goto L_08A6DFD8;
    case 444u: goto L_08A6DFEC;
    case 445u: goto L_08A6DFF8;
    case 446u: goto L_08A6DFFC;
    case 447u: goto L_08A6E024;
    case 448u: goto L_08A6E040;
    case 449u: goto L_08A6E064;
    case 450u: goto L_08A6E080;
    case 451u: goto L_08A6E088;
    case 452u: goto L_08A6E094;
    case 453u: goto L_08A6E0A4;
    case 454u: goto L_08A6E0BC;
    case 455u: goto L_08A6E0C8;
    case 456u: goto L_08A6E0D4;
    case 457u: goto L_08A6E0E0;
    case 458u: goto L_08A6E0E8;
    case 459u: goto L_08A6E0F4;
    case 460u: goto L_08A6E100;
    case 461u: goto L_08A6E108;
    case 462u: goto L_08A6E114;
    case 463u: goto L_08A6E120;
    case 464u: goto L_08A6E128;
    case 465u: goto L_08A6E134;
    case 466u: goto L_08A6E140;
    case 467u: goto L_08A6E148;
    case 468u: goto L_08A6E154;
    case 469u: goto L_08A6E160;
    case 470u: goto L_08A6E16C;
    case 471u: goto L_08A6E174;
    case 472u: goto L_08A6E188;
    case 473u: goto L_08A6E194;
    case 474u: goto L_08A6E19C;
    case 475u: goto L_08A6E1A8;
    case 476u: goto L_08A6E1B4;
    case 477u: goto L_08A6E1C0;
    case 478u: goto L_08A6E1C8;
    case 479u: goto L_08A6E1D8;
    case 480u: goto L_08A6E1E4;
    case 481u: goto L_08A6E1EC;
    case 482u: goto L_08A6E204;
    case 483u: goto L_08A6E210;
    case 484u: goto L_08A6E228;
    case 485u: goto L_08A6E230;
    case 486u: goto L_08A6E23C;
    case 487u: goto L_08A6E248;
    case 488u: goto L_08A6E254;
    case 489u: goto L_08A6E260;
    case 490u: goto L_08A6E26C;
    case 491u: goto L_08A6E278;
    case 492u: goto L_08A6E284;
    case 493u: goto L_08A6E290;
    case 494u: goto L_08A6E2A0;
    case 495u: goto L_08A6E2B0;
    case 496u: goto L_08A6E2B8;
    case 497u: goto L_08A6E2C4;
    case 498u: goto L_08A6E2D0;
    case 499u: goto L_08A6E2DC;
    case 500u: goto L_08A6E2E4;
    case 501u: goto L_08A6E2EC;
    case 502u: goto L_08A6E2F4;
    case 503u: goto L_08A6E300;
    case 504u: goto L_08A6E30C;
    case 505u: goto L_08A6E318;
    case 506u: goto L_08A6E320;
    case 507u: goto L_08A6E328;
    case 508u: goto L_08A6E338;
    case 509u: goto L_08A6E344;
    case 510u: goto L_08A6E350;
    case 511u: goto L_08A6E35C;
    case 512u: goto L_08A6E368;
    case 513u: goto L_08A6E370;
    case 514u: goto L_08A6E378;
    case 515u: goto L_08A6E380;
    case 516u: goto L_08A6E38C;
    case 517u: goto L_08A6E394;
    case 518u: goto L_08A6E3A0;
    case 519u: goto L_08A6E3B8;
    case 520u: goto L_08A6E3C4;
    case 521u: goto L_08A6E3D0;
    case 522u: goto L_08A6E3DC;
    case 523u: goto L_08A6E3E8;
    case 524u: goto L_08A6E3F4;
    case 525u: goto L_08A6E400;
    case 526u: goto L_08A6E408;
    case 527u: goto L_08A6E414;
    case 528u: goto L_08A6E420;
    case 529u: goto L_08A6E428;
    case 530u: goto L_08A6E434;
    case 531u: goto L_08A6E440;
    case 532u: goto L_08A6E44C;
    case 533u: goto L_08A6E458;
    case 534u: goto L_08A6E464;
    case 535u: goto L_08A6E470;
    case 536u: goto L_08A6E478;
    case 537u: goto L_08A6E484;
    case 538u: goto L_08A6E4A8;
    case 539u: goto L_08A6E520;
    case 540u: goto L_08A6E528;
    case 541u: goto L_08A6E534;
    case 542u: goto L_08A6E544;
    case 543u: goto L_08A6E550;
    case 544u: goto L_08A6E558;
    case 545u: goto L_08A6E590;
    case 546u: goto L_08A6E5A0;
    case 547u: goto L_08A6E604;
    case 548u: goto L_08A6E608;
    case 549u: goto L_08A6E630;
    case 550u: goto L_08A6E650;
    case 551u: goto L_08A6E660;
    case 552u: goto L_08A6E66C;
    case 553u: goto L_08A6E684;
    case 554u: goto L_08A6E698;
    case 555u: goto L_08A6E6A8;
    case 556u: goto L_08A6E6B4;
    case 557u: goto L_08A6E6BC;
    case 558u: goto L_08A6E6C4;
    case 559u: goto L_08A6E6DC;
    case 560u: goto L_08A6E6E4;
    case 561u: goto L_08A6E6F4;
    case 562u: goto L_08A6E710;
    case 563u: goto L_08A6E72C;
    case 564u: goto L_08A6E734;
    case 565u: goto L_08A6E76C;
    case 566u: goto L_08A6E780;
    case 567u: goto L_08A6E788;
    case 568u: goto L_08A6E7A0;
    case 569u: goto L_08A6E7B0;
    case 570u: goto L_08A6E7BC;
    case 571u: goto L_08A6E7D0;
    case 572u: goto L_08A6E7D8;
    case 573u: goto L_08A6E804;
    case 574u: goto L_08A6E83C;
    case 575u: goto L_08A6E848;
    case 576u: goto L_08A6E860;
    case 577u: goto L_08A6E86C;
    case 578u: goto L_08A6E878;
    case 579u: goto L_08A6E8A4;
    case 580u: goto L_08A6E8C0;
    case 581u: goto L_08A6E8EC;
    case 582u: goto L_08A6E8F8;
    case 583u: goto L_08A6E904;
    case 584u: goto L_08A6E91C;
    case 585u: goto L_08A6E920;
    case 586u: goto L_08A6E964;
    case 587u: goto L_08A6E96C;
    case 588u: goto L_08A6E98C;
    case 589u: goto L_08A6E994;
    case 590u: goto L_08A6E9A4;
    case 591u: goto L_08A6E9F0;
    case 592u: goto L_08A6EA00;
    case 593u: goto L_08A6EA20;
    case 594u: goto L_08A6EA3C;
    case 595u: goto L_08A6EA44;
    case 596u: goto L_08A6EA64;
    case 597u: goto L_08A6EA6C;
    case 598u: goto L_08A6EA94;
    case 599u: goto L_08A6EAB0;
    case 600u: goto L_08A6EADC;
    case 601u: goto L_08A6EAE8;
    case 602u: goto L_08A6EAF0;
    case 603u: goto L_08A6EAFC;
    case 604u: goto L_08A6EB04;
    case 605u: goto L_08A6EB0C;
    case 606u: goto L_08A6EB18;
    case 607u: goto L_08A6EB1C;
    case 608u: goto L_08A6EB30;
    case 609u: goto L_08A6EB44;
    case 610u: goto L_08A6EB50;
    case 611u: goto L_08A6EB58;
    case 612u: goto L_08A6EB60;
    case 613u: goto L_08A6EB6C;
    case 614u: goto L_08A6EB7C;
    case 615u: goto L_08A6EB8C;
    case 616u: goto L_08A6EB98;
    case 617u: goto L_08A6EBA8;
    case 618u: goto L_08A6EBB8;
    case 619u: goto L_08A6EBC4;
    case 620u: goto L_08A6EBCC;
    case 621u: goto L_08A6EBD4;
    case 622u: goto L_08A6EBD8;
    case 623u: goto L_08A6EC00;
    case 624u: goto L_08A6EC08;
    case 625u: goto L_08A6EC10;
    case 626u: goto L_08A6EC3C;
    case 627u: goto L_08A6EC74;
    case 628u: goto L_08A6EC80;
    case 629u: goto L_08A6EC98;
    case 630u: goto L_08A6ECA4;
    case 631u: goto L_08A6ECB0;
    case 632u: goto L_08A6ECDC;
    case 633u: goto L_08A6ECF8;
    case 634u: goto L_08A6ED24;
    case 635u: goto L_08A6ED30;
    case 636u: goto L_08A6ED38;
    case 637u: goto L_08A6ED50;
    case 638u: goto L_08A6ED64;
    case 639u: goto L_08A6ED70;
    case 640u: goto L_08A6ED84;
    case 641u: goto L_08A6ED90;
    case 642u: goto L_08A6EDB0;
    case 643u: goto L_08A6EDBC;
    case 644u: goto L_08A6EDD4;
    case 645u: goto L_08A6EDD8;
    case 646u: goto L_08A6EDF0;
    case 647u: goto L_08A6EE0C;
    case 648u: goto L_08A6EE14;
    case 649u: goto L_08A6EE30;
    case 650u: goto L_08A6EE34;
    case 651u: goto L_08A6EE40;
    case 652u: goto L_08A6EE58;
    case 653u: goto L_08A6EE68;
    case 654u: goto L_08A6EE74;
    case 655u: goto L_08A6EEA8;
    case 656u: goto L_08A6EEC0;
    case 657u: goto L_08A6EEE4;
    case 658u: goto L_08A6EEF8;
    case 659u: goto L_08A6EF00;
    case 660u: goto L_08A6EF14;
    case 661u: goto L_08A6EF40;
    case 662u: goto L_08A6EF58;
    case 663u: goto L_08A6EF80;
    case 664u: goto L_08A6EF90;
    case 665u: goto L_08A6EFD4;
    case 666u: goto L_08A6EFDC;
    case 667u: goto L_08A6EFEC;
    case 668u: goto L_08A6F008;
    case 669u: goto L_08A6F018;
    case 670u: goto L_08A6F030;
    case 671u: goto L_08A6F074;
    case 672u: goto L_08A6F084;
    case 673u: goto L_08A6F08C;
    case 674u: goto L_08A6F0C4;
    case 675u: goto L_08A6F0E0;
    case 676u: goto L_08A6F108;
    case 677u: goto L_08A6F114;
    case 678u: goto L_08A6F140;
    case 679u: goto L_08A6F15C;
    case 680u: goto L_08A6F188;
    case 681u: goto L_08A6F190;
    case 682u: goto L_08A6F1E0;
    case 683u: goto L_08A6F1E4;
    case 684u: goto L_08A6F210;
    case 685u: goto L_08A6F218;
    case 686u: goto L_08A6F220;
    case 687u: goto L_08A6F24C;
    case 688u: goto L_08A6F284;
    case 689u: goto L_08A6F290;
    case 690u: goto L_08A6F2A8;
    case 691u: goto L_08A6F2B4;
    case 692u: goto L_08A6F2C0;
    case 693u: goto L_08A6F2EC;
    case 694u: goto L_08A6F308;
    case 695u: goto L_08A6F334;
    case 696u: goto L_08A6F340;
    case 697u: goto L_08A6F348;
    case 698u: goto L_08A6F360;
    case 699u: goto L_08A6F374;
    case 700u: goto L_08A6F380;
    case 701u: goto L_08A6F394;
    case 702u: goto L_08A6F3A0;
    case 703u: goto L_08A6F3C0;
    case 704u: goto L_08A6F3CC;
    case 705u: goto L_08A6F3E4;
    case 706u: goto L_08A6F3E8;
    case 707u: goto L_08A6F400;
    case 708u: goto L_08A6F41C;
    case 709u: goto L_08A6F424;
    case 710u: goto L_08A6F440;
    case 711u: goto L_08A6F444;
    case 712u: goto L_08A6F450;
    case 713u: goto L_08A6F468;
    case 714u: goto L_08A6F478;
    case 715u: goto L_08A6F484;
    case 716u: goto L_08A6F4B8;
    case 717u: goto L_08A6F4D0;
    case 718u: goto L_08A6F4F4;
    case 719u: goto L_08A6F508;
    case 720u: goto L_08A6F510;
    case 721u: goto L_08A6F524;
    case 722u: goto L_08A6F550;
    case 723u: goto L_08A6F568;
    case 724u: goto L_08A6F590;
    case 725u: goto L_08A6F5A0;
    case 726u: goto L_08A6F5E4;
    case 727u: goto L_08A6F5EC;
    case 728u: goto L_08A6F620;
    case 729u: goto L_08A6F63C;
    case 730u: goto L_08A6F650;
    case 731u: goto L_08A6F678;
    case 732u: goto L_08A6F680;
    case 733u: goto L_08A6F688;
    case 734u: goto L_08A6F6B4;
    case 735u: goto L_08A6F6EC;
    case 736u: goto L_08A6F6F8;
    case 737u: goto L_08A6F710;
    case 738u: goto L_08A6F71C;
    case 739u: goto L_08A6F728;
    case 740u: goto L_08A6F754;
    case 741u: goto L_08A6F770;
    case 742u: goto L_08A6F79C;
    case 743u: goto L_08A6F7A8;
    case 744u: goto L_08A6F7B0;
    case 745u: goto L_08A6F7C8;
    case 746u: goto L_08A6F7DC;
    case 747u: goto L_08A6F7E8;
    case 748u: goto L_08A6F7FC;
    case 749u: goto L_08A6F808;
    case 750u: goto L_08A6F828;
    case 751u: goto L_08A6F834;
    case 752u: goto L_08A6F84C;
    case 753u: goto L_08A6F850;
    case 754u: goto L_08A6F868;
    case 755u: goto L_08A6F884;
    case 756u: goto L_08A6F88C;
    case 757u: goto L_08A6F8A8;
    case 758u: goto L_08A6F8AC;
    case 759u: goto L_08A6F8C4;
    case 760u: goto L_08A6F920;
    case 761u: goto L_08A6F928;
    case 762u: goto L_08A6F95C;
    case 763u: goto L_08A6F970;
    case 764u: goto L_08A6F980;
    case 765u: goto L_08A6F98C;
    case 766u: goto L_08A6F994;
    case 767u: goto L_08A6F99C;
    case 768u: goto L_08A6F9AC;
    case 769u: goto L_08A6F9B8;
    case 770u: goto L_08A6F9C0;
    case 771u: goto L_08A6F9C4;
    case 772u: goto L_08A6FA00;
    case 773u: goto L_08A6FA60;
    case 774u: goto L_08A6FA74;
    case 775u: goto L_08A6FA80;
    case 776u: goto L_08A6FA90;
    case 777u: goto L_08A6FA9C;
    case 778u: goto L_08A6FAA4;
    case 779u: goto L_08A6FAAC;
    case 780u: goto L_08A6FAB8;
    case 781u: goto L_08A6FAC4;
    case 782u: goto L_08A6FACC;
    case 783u: goto L_08A6FAFC;
    case 784u: goto L_08A6FB04;
    case 785u: goto L_08A6FB08;
    case 786u: goto L_08A6FB14;
    case 787u: goto L_08A6FB24;
    case 788u: goto L_08A6FB74;
    case 789u: goto L_08A6FB84;
    case 790u: goto L_08A6FB94;
    case 791u: goto L_08A6FBA8;
    case 792u: goto L_08A6FBB0;
    case 793u: goto L_08A6FBB8;
    case 794u: goto L_08A6FBD8;
    case 795u: goto L_08A6FBF8;
    case 796u: goto L_08A6FC10;
    case 797u: goto L_08A6FC60;
    case 798u: goto L_08A6FC70;
    case 799u: goto L_08A6FC80;
    case 800u: goto L_08A6FC94;
    case 801u: goto L_08A6FC9C;
    case 802u: goto L_08A6FCB0;
    case 803u: goto L_08A6FCC8;
    case 804u: goto L_08A6FCD0;
    case 805u: goto L_08A6FCE8;
    case 806u: goto L_08A6FCEC;
    case 807u: goto L_08A6FD00;
    case 808u: goto L_08A6FD18;
    case 809u: goto L_08A6FD20;
    case 810u: goto L_08A6FD38;
    case 811u: goto L_08A6FD3C;
    case 812u: goto L_08A6FD44;
    case 813u: goto L_08A6FD54;
    case 814u: goto L_08A6FD70;
    case 815u: goto L_08A6FD80;
    case 816u: goto L_08A6FDD4;
    case 817u: goto L_08A6FDDC;
    case 818u: goto L_08A6FDF0;
    case 819u: goto L_08A6FDFC;
    case 820u: goto L_08A6FE04;
    case 821u: goto L_08A6FE14;
    case 822u: goto L_08A6FE20;
    case 823u: goto L_08A6FE2C;
    case 824u: goto L_08A6FE68;
    case 825u: goto L_08A6FE70;
    case 826u: goto L_08A6FE88;
    case 827u: goto L_08A6FED0;
    case 828u: goto L_08A6FED4;
    case 829u: goto L_08A6FEDC;
    case 830u: goto L_08A6FF1C;
    case 831u: goto L_08A6FF50;
    case 832u: goto L_08A6FF5C;
    case 833u: goto L_08A6FF74;
    case 834u: goto L_08A6FF7C;
    case 835u: goto L_08A6FF88;
    case 836u: goto L_08A6FF90;
    case 837u: goto L_08A6FF98;
    case 838u: goto L_08A6FFAC;
    case 839u: goto L_08A6FFC4;
    case 840u: goto L_08A6FFCC;
    case 841u: goto L_08A6FFE4;
    case 842u: goto L_08A6FFE8;
    case 843u: goto L_08A6FFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A6C000:
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A6C170;
      }
      goto L_08A6C010;
    }
L_08A6C010:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-28176)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6C028:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 624u);
    ctx.gpr[31] = (0x08A6C044u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C044u) goto L_08A6C044;
    return;
L_08A6C044:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6C048;
L_08A6C048:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C184;
      }
      goto L_08A6C050;
    }
L_08A6C050:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 639u);
    ctx.gpr[31] = (0x08A6C06Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C06Cu) goto L_08A6C06C;
    return;
L_08A6C06C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C048;
      }
      goto L_08A6C074;
    }
L_08A6C074:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 642u);
    ctx.gpr[31] = (0x08A6C090u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C090u) goto L_08A6C090;
    return;
L_08A6C090:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C048;
      }
      goto L_08A6C098;
    }
L_08A6C098:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 636u);
    ctx.gpr[31] = (0x08A6C0B4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C0B4u) goto L_08A6C0B4;
    return;
L_08A6C0B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C048;
      }
      goto L_08A6C0BC;
    }
L_08A6C0BC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 631u);
    ctx.gpr[31] = (0x08A6C0D8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C0D8u) goto L_08A6C0D8;
    return;
L_08A6C0D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C048;
      }
      goto L_08A6C0E0;
    }
L_08A6C0E0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 627u);
    ctx.gpr[31] = (0x08A6C0FCu);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C0FCu) goto L_08A6C0FC;
    return;
L_08A6C0FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C048;
      }
      goto L_08A6C104;
    }
L_08A6C104:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 634u);
    ctx.gpr[31] = (0x08A6C120u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C120u) goto L_08A6C120;
    return;
L_08A6C120:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C048;
      }
      goto L_08A6C128;
    }
L_08A6C128:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 644u);
    ctx.gpr[31] = (0x08A6C144u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C144u) goto L_08A6C144;
    return;
L_08A6C144:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C048;
      }
      goto L_08A6C14C;
    }
L_08A6C14C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 647u);
    ctx.gpr[31] = (0x08A6C168u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C168u) goto L_08A6C168;
    return;
L_08A6C168:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C048;
      }
      goto L_08A6C170;
    }
L_08A6C170:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6C184u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08A6CC1C;
L_08A6C184:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6C190:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A6C314;
      }
      goto L_08A6C1B4;
    }
L_08A6C1B4:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-28016)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6C1CC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 648u);
    ctx.gpr[31] = (0x08A6C1E8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C1E8u) goto L_08A6C1E8;
    return;
L_08A6C1E8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6C1EC;
L_08A6C1EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C328;
      }
      goto L_08A6C1F4;
    }
L_08A6C1F4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 662u);
    ctx.gpr[31] = (0x08A6C210u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C210u) goto L_08A6C210;
    return;
L_08A6C210:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C1EC;
      }
      goto L_08A6C218;
    }
L_08A6C218:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 665u);
    ctx.gpr[31] = (0x08A6C234u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C234u) goto L_08A6C234;
    return;
L_08A6C234:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C1EC;
      }
      goto L_08A6C23C;
    }
L_08A6C23C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 660u);
    ctx.gpr[31] = (0x08A6C258u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C258u) goto L_08A6C258;
    return;
L_08A6C258:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C1EC;
      }
      goto L_08A6C260;
    }
L_08A6C260:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 656u);
    ctx.gpr[31] = (0x08A6C27Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C27Cu) goto L_08A6C27C;
    return;
L_08A6C27C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C1EC;
      }
      goto L_08A6C284;
    }
L_08A6C284:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 651u);
    ctx.gpr[31] = (0x08A6C2A0u);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C2A0u) goto L_08A6C2A0;
    return;
L_08A6C2A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C1EC;
      }
      goto L_08A6C2A8;
    }
L_08A6C2A8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 658u);
    ctx.gpr[31] = (0x08A6C2C4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C2C4u) goto L_08A6C2C4;
    return;
L_08A6C2C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C1EC;
      }
      goto L_08A6C2CC;
    }
L_08A6C2CC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 667u);
    ctx.gpr[31] = (0x08A6C2E8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C2E8u) goto L_08A6C2E8;
    return;
L_08A6C2E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C1EC;
      }
      goto L_08A6C2F0;
    }
L_08A6C2F0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 670u);
    ctx.gpr[31] = (0x08A6C30Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C30Cu) goto L_08A6C30C;
    return;
L_08A6C30C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C1EC;
      }
      goto L_08A6C314;
    }
L_08A6C314:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6C328u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08A6CD04;
L_08A6C328:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6C334:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 111 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 112 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A6C3A4;
      }
      goto L_08A6C358;
    }
L_08A6C358:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 110 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C38C;
      }
      goto L_08A6C364;
    }
L_08A6C364:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 3997u);
    ctx.gpr[31] = (0x08A6C37Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C37Cu) goto L_08A6C37C;
    return;
L_08A6C37C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 5u);
      if (branch_taken) {
          goto L_08A6C3C0;
      }
      goto L_08A6C38C;
    }
L_08A6C38C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A6C39Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A6CC1C;
L_08A6C39C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C3D4;
      }
      goto L_08A6C3A4;
    }
L_08A6C3A4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C38C;
      }
      goto L_08A6C3AC;
    }
L_08A6C3AC:
    ctx.gpr[4] = (0u | 4000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[2] = (0u | 4000u);
    ctx.gpr[16] = (0u | 5u);
    goto L_08A6C3C0;
L_08A6C3C0:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[16]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_08A6C3D4;
L_08A6C3D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6C3E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 111 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A6C44C;
      }
      goto L_08A6C404;
    }
L_08A6C404:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 110 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C434;
      }
      goto L_08A6C410;
    }
L_08A6C410:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4017u);
    ctx.gpr[31] = (0x08A6C42Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C42Cu) goto L_08A6C42C;
    return;
L_08A6C42C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C464;
      }
      goto L_08A6C434;
    }
L_08A6C434:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A6C444u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    goto L_08A6CC1C;
L_08A6C444:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C464;
      }
      goto L_08A6C44C;
    }
L_08A6C44C:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 112 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C434;
      }
      goto L_08A6C458;
    }
L_08A6C458:
    ctx.gpr[4] = (0u | 4020u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 4020u);
    goto L_08A6C464;
L_08A6C464:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6C470:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A6C6A4;
      }
      goto L_08A6C494;
    }
L_08A6C494:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-27856)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6C4AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 990u);
    ctx.gpr[31] = (0x08A6C4C8u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C4C8u) goto L_08A6C4C8;
    return;
L_08A6C4C8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6C4CC;
L_08A6C4CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C6B8;
      }
      goto L_08A6C4D4;
    }
L_08A6C4D4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 982u);
    ctx.gpr[31] = (0x08A6C4F0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C4F0u) goto L_08A6C4F0;
    return;
L_08A6C4F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C4CC;
      }
      goto L_08A6C4F8;
    }
L_08A6C4F8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 972u);
    ctx.gpr[31] = (0x08A6C514u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C514u) goto L_08A6C514;
    return;
L_08A6C514:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C4CC;
      }
      goto L_08A6C51C;
    }
L_08A6C51C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 980u);
    ctx.gpr[31] = (0x08A6C538u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C538u) goto L_08A6C538;
    return;
L_08A6C538:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C4CC;
      }
      goto L_08A6C540;
    }
L_08A6C540:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 969u);
    ctx.gpr[31] = (0x08A6C55Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C55Cu) goto L_08A6C55C;
    return;
L_08A6C55C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C4CC;
      }
      goto L_08A6C564;
    }
L_08A6C564:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 976u);
    ctx.gpr[31] = (0x08A6C580u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C580u) goto L_08A6C580;
    return;
L_08A6C580:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C4CC;
      }
      goto L_08A6C588;
    }
L_08A6C588:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 978u);
    ctx.gpr[31] = (0x08A6C5A4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C5A4u) goto L_08A6C5A4;
    return;
L_08A6C5A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C4CC;
      }
      goto L_08A6C5AC;
    }
L_08A6C5AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6C5C8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C5C8u) goto L_08A6C5C8;
    return;
L_08A6C5C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C4CC;
      }
      goto L_08A6C5D0;
    }
L_08A6C5D0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 985u);
    ctx.gpr[31] = (0x08A6C5ECu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C5ECu) goto L_08A6C5EC;
    return;
L_08A6C5EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C4CC;
      }
      goto L_08A6C5F4;
    }
L_08A6C5F4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6C610u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C610u) goto L_08A6C610;
    return;
L_08A6C610:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C4CC;
      }
      goto L_08A6C618;
    }
L_08A6C618:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 987u);
    ctx.gpr[31] = (0x08A6C634u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C634u) goto L_08A6C634;
    return;
L_08A6C634:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C4CC;
      }
      goto L_08A6C63C;
    }
L_08A6C63C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6C658u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C658u) goto L_08A6C658;
    return;
L_08A6C658:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C4CC;
      }
      goto L_08A6C660;
    }
L_08A6C660:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6C67Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C67Cu) goto L_08A6C67C;
    return;
L_08A6C67C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C4CC;
      }
      goto L_08A6C684;
    }
L_08A6C684:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A6C4CC;
      }
      goto L_08A6C694;
    }
L_08A6C694:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A6C4CC;
      }
      goto L_08A6C6A4;
    }
L_08A6C6A4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6C6B8u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08A6CC1C;
L_08A6C6B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6C6C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A6C968;
      }
      goto L_08A6C6E8;
    }
L_08A6C6E8:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-27696)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6C700:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3305u);
    ctx.gpr[31] = (0x08A6C71Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C71Cu) goto L_08A6C71C;
    return;
L_08A6C71C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6C720;
L_08A6C720:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C97C;
      }
      goto L_08A6C728;
    }
L_08A6C728:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3301u);
    ctx.gpr[31] = (0x08A6C744u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C744u) goto L_08A6C744;
    return;
L_08A6C744:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C720;
      }
      goto L_08A6C74C;
    }
L_08A6C74C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3298u);
    ctx.gpr[31] = (0x08A6C768u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C768u) goto L_08A6C768;
    return;
L_08A6C768:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C720;
      }
      goto L_08A6C770;
    }
L_08A6C770:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3296u);
    ctx.gpr[31] = (0x08A6C78Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C78Cu) goto L_08A6C78C;
    return;
L_08A6C78C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C720;
      }
      goto L_08A6C794;
    }
L_08A6C794:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3285u);
    ctx.gpr[31] = (0x08A6C7B0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C7B0u) goto L_08A6C7B0;
    return;
L_08A6C7B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C720;
      }
      goto L_08A6C7B8;
    }
L_08A6C7B8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3292u);
    ctx.gpr[31] = (0x08A6C7D4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C7D4u) goto L_08A6C7D4;
    return;
L_08A6C7D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C720;
      }
      goto L_08A6C7DC;
    }
L_08A6C7DC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3288u);
    ctx.gpr[31] = (0x08A6C7F8u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C7F8u) goto L_08A6C7F8;
    return;
L_08A6C7F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C720;
      }
      goto L_08A6C800;
    }
L_08A6C800:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3294u);
    ctx.gpr[31] = (0x08A6C81Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C81Cu) goto L_08A6C81C;
    return;
L_08A6C81C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C720;
      }
      goto L_08A6C824;
    }
L_08A6C824:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6C840u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C840u) goto L_08A6C840;
    return;
L_08A6C840:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C720;
      }
      goto L_08A6C848;
    }
L_08A6C848:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6C864u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C864u) goto L_08A6C864;
    return;
L_08A6C864:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C720;
      }
      goto L_08A6C86C;
    }
L_08A6C86C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3303u);
    ctx.gpr[31] = (0x08A6C888u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C888u) goto L_08A6C888;
    return;
L_08A6C888:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C720;
      }
      goto L_08A6C890;
    }
L_08A6C890:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6C8ACu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C8ACu) goto L_08A6C8AC;
    return;
L_08A6C8AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C720;
      }
      goto L_08A6C8B4;
    }
L_08A6C8B4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6C8D0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C8D0u) goto L_08A6C8D0;
    return;
L_08A6C8D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C720;
      }
      goto L_08A6C8D8;
    }
L_08A6C8D8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6C8F4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C8F4u) goto L_08A6C8F4;
    return;
L_08A6C8F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C720;
      }
      goto L_08A6C8FC;
    }
L_08A6C8FC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6C918u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C918u) goto L_08A6C918;
    return;
L_08A6C918:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C720;
      }
      goto L_08A6C920;
    }
L_08A6C920:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6C93Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C93Cu) goto L_08A6C93C;
    return;
L_08A6C93C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C720;
      }
      goto L_08A6C944;
    }
L_08A6C944:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6C960u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6C960u) goto L_08A6C960;
    return;
L_08A6C960:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6C720;
      }
      goto L_08A6C968;
    }
L_08A6C968:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6C97Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08A6CD04;
L_08A6C97C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6C988:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] & 65535u);
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-8152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A6C9D4;
      }
      goto L_08A6C9C0;
    }
L_08A6C9C0:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A6C9D4;
L_08A6C9D4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A6C9E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23544));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x089866B8u>(ctx, &aot_mem) && ctx.pc == 0x08A6C9E4u) goto L_08A6C9E4;
    return;
L_08A6C9E4:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A6CBE4;
      }
      goto L_08A6C9EC;
    }
L_08A6C9EC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A6C9F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23552));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x089866B8u>(ctx, &aot_mem) && ctx.pc == 0x08A6C9F8u) goto L_08A6C9F8;
    return;
L_08A6C9F8:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_08A6CBCC;
      }
      goto L_08A6CA00;
    }
L_08A6CA00:
    ctx.gpr[31] = (0x08A6CA08u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23560));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x089866B8u>(ctx, &aot_mem) && ctx.pc == 0x08A6CA08u) goto L_08A6CA08;
    return;
L_08A6CA08:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A6CBCC;
      }
      goto L_08A6CA10;
    }
L_08A6CA10:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A6CA1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23568));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x089866B8u>(ctx, &aot_mem) && ctx.pc == 0x08A6CA1Cu) goto L_08A6CA1C;
    return;
L_08A6CA1C:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_08A6CBB4;
      }
      goto L_08A6CA24;
    }
L_08A6CA24:
    ctx.gpr[31] = (0x08A6CA2Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23576));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x089866B8u>(ctx, &aot_mem) && ctx.pc == 0x08A6CA2Cu) goto L_08A6CA2C;
    return;
L_08A6CA2C:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A6CBB4;
      }
      goto L_08A6CA34;
    }
L_08A6CA34:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A6CA40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23584));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x089866B8u>(ctx, &aot_mem) && ctx.pc == 0x08A6CA40u) goto L_08A6CA40;
    return;
L_08A6CA40:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A6CB9C;
      }
      goto L_08A6CA48;
    }
L_08A6CA48:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A6CA54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23592));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x089866B8u>(ctx, &aot_mem) && ctx.pc == 0x08A6CA54u) goto L_08A6CA54;
    return;
L_08A6CA54:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_08A6CB84;
      }
      goto L_08A6CA5C;
    }
L_08A6CA5C:
    ctx.gpr[31] = (0x08A6CA64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23600));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x089866B8u>(ctx, &aot_mem) && ctx.pc == 0x08A6CA64u) goto L_08A6CA64;
    return;
L_08A6CA64:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A6CB84;
      }
      goto L_08A6CA6C;
    }
L_08A6CA6C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A6CA78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23608));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x089866B8u>(ctx, &aot_mem) && ctx.pc == 0x08A6CA78u) goto L_08A6CA78;
    return;
L_08A6CA78:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_08A6CB6C;
      }
      goto L_08A6CA80;
    }
L_08A6CA80:
    ctx.gpr[31] = (0x08A6CA88u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23616));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x089866B8u>(ctx, &aot_mem) && ctx.pc == 0x08A6CA88u) goto L_08A6CA88;
    return;
L_08A6CA88:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A6CB6C;
      }
      goto L_08A6CA90;
    }
L_08A6CA90:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A6CA9Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23624));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x089866B8u>(ctx, &aot_mem) && ctx.pc == 0x08A6CA9Cu) goto L_08A6CA9C;
    return;
L_08A6CA9C:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A6CB54;
      }
      goto L_08A6CAA4;
    }
L_08A6CAA4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A6CAB0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23632));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x089866B8u>(ctx, &aot_mem) && ctx.pc == 0x08A6CAB0u) goto L_08A6CAB0;
    return;
L_08A6CAB0:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A6CB3C;
      }
      goto L_08A6CAB8;
    }
L_08A6CAB8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A6CAC4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23640));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x089866B8u>(ctx, &aot_mem) && ctx.pc == 0x08A6CAC4u) goto L_08A6CAC4;
    return;
L_08A6CAC4:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A6CB24;
      }
      goto L_08A6CACC;
    }
L_08A6CACC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A6CAD8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23648));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x089866B8u>(ctx, &aot_mem) && ctx.pc == 0x08A6CAD8u) goto L_08A6CAD8;
    return;
L_08A6CAD8:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A6CB0C;
      }
      goto L_08A6CAE0;
    }
L_08A6CAE0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A6CAECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23656));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x089866B8u>(ctx, &aot_mem) && ctx.pc == 0x08A6CAECu) goto L_08A6CAEC;
    return;
L_08A6CAEC:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A6CBFC;
      }
      goto L_08A6CAF4;
    }
L_08A6CAF4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6CB04u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 885u, 0x08A6BE6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6CB04u) goto L_08A6CB04;
    return;
L_08A6CB04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CC00;
      }
      goto L_08A6CB0C;
    }
L_08A6CB0C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6CB1Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 864u, 0x08A6BCECu>(ctx, &aot_mem) && ctx.pc == 0x08A6CB1Cu) goto L_08A6CB1C;
    return;
L_08A6CB1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CC00;
      }
      goto L_08A6CB24;
    }
L_08A6CB24:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6CB34u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 841u, 0x08A6BB48u>(ctx, &aot_mem) && ctx.pc == 0x08A6CB34u) goto L_08A6CB34;
    return;
L_08A6CB34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CC00;
      }
      goto L_08A6CB3C;
    }
L_08A6CB3C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6CB4Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 820u, 0x08A6B9C8u>(ctx, &aot_mem) && ctx.pc == 0x08A6CB4Cu) goto L_08A6CB4C;
    return;
L_08A6CB4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CC00;
      }
      goto L_08A6CB54;
    }
L_08A6CB54:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6CB64u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 795u, 0x08A6B800u>(ctx, &aot_mem) && ctx.pc == 0x08A6CB64u) goto L_08A6CB64;
    return;
L_08A6CB64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CC00;
      }
      goto L_08A6CB6C;
    }
L_08A6CB6C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6CB7Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 727u, 0x08A6B370u>(ctx, &aot_mem) && ctx.pc == 0x08A6CB7Cu) goto L_08A6CB7C;
    return;
L_08A6CB7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CC00;
      }
      goto L_08A6CB84;
    }
L_08A6CB84:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6CB94u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 741u, 0x08A6B464u>(ctx, &aot_mem) && ctx.pc == 0x08A6CB94u) goto L_08A6CB94;
    return;
L_08A6CB94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CC00;
      }
      goto L_08A6CB9C;
    }
L_08A6CB9C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6CBACu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 755u, 0x08A6B558u>(ctx, &aot_mem) && ctx.pc == 0x08A6CBACu) goto L_08A6CBAC;
    return;
L_08A6CBAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CC00;
      }
      goto L_08A6CBB4;
    }
L_08A6CBB4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6CBC4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 769u, 0x08A6B64Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6CBC4u) goto L_08A6CBC4;
    return;
L_08A6CBC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CC00;
      }
      goto L_08A6CBCC;
    }
L_08A6CBCC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6CBDCu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 781u, 0x08A6B70Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6CBDCu) goto L_08A6CBDC;
    return;
L_08A6CBDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CC00;
      }
      goto L_08A6CBE4;
    }
L_08A6CBE4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6CBF4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 713u, 0x08A6B27Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6CBF4u) goto L_08A6CBF4;
    return;
L_08A6CBF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CC00;
      }
      goto L_08A6CBFC;
    }
L_08A6CBFC:
    ctx.gpr[2] = (0u | 5662u);
    goto L_08A6CC00;
L_08A6CC00:
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
L_08A6CC1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17236), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-103));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(37) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A6CCF4;
      }
      goto L_08A6CC48;
    }
L_08A6CC48:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-27536)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6CC60:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2615u);
    ctx.gpr[31] = (0x08A6CC7Cu);
    ctx.gpr[8] = (0u | 51u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6CC7Cu) goto L_08A6CC7C;
    return;
L_08A6CC7C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6CC80;
L_08A6CC80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CCF8;
      }
      goto L_08A6CC88;
    }
L_08A6CC88:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2587u);
    ctx.gpr[31] = (0x08A6CCA4u);
    ctx.gpr[8] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6CCA4u) goto L_08A6CCA4;
    return;
L_08A6CCA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6CC80;
      }
      goto L_08A6CCAC;
    }
L_08A6CCAC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2666u);
    ctx.gpr[31] = (0x08A6CCC8u);
    ctx.gpr[8] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6CCC8u) goto L_08A6CCC8;
    return;
L_08A6CCC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6CC80;
      }
      goto L_08A6CCD0;
    }
L_08A6CCD0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2687u);
    ctx.gpr[31] = (0x08A6CCECu);
    ctx.gpr[8] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6CCECu) goto L_08A6CCEC;
    return;
L_08A6CCEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6CC80;
      }
      goto L_08A6CCF4;
    }
L_08A6CCF4:
    ctx.gpr[2] = (0u | 5662u);
    goto L_08A6CCF8;
L_08A6CCF8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6CD04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17236), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-103));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(37) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A6CE00;
      }
      goto L_08A6CD30;
    }
L_08A6CD30:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-27384)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6CD48:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1480u);
    ctx.gpr[31] = (0x08A6CD64u);
    ctx.gpr[8] = (0u | 34u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6CD64u) goto L_08A6CD64;
    return;
L_08A6CD64:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6CD68;
L_08A6CD68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CE04;
      }
      goto L_08A6CD70;
    }
L_08A6CD70:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1464u);
    ctx.gpr[31] = (0x08A6CD8Cu);
    ctx.gpr[8] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6CD8Cu) goto L_08A6CD8C;
    return;
L_08A6CD8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6CD68;
      }
      goto L_08A6CD94;
    }
L_08A6CD94:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1514u);
    ctx.gpr[31] = (0x08A6CDB0u);
    ctx.gpr[8] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6CDB0u) goto L_08A6CDB0;
    return;
L_08A6CDB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6CD68;
      }
      goto L_08A6CDB8;
    }
L_08A6CDB8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1525u);
    ctx.gpr[31] = (0x08A6CDD4u);
    ctx.gpr[8] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6CDD4u) goto L_08A6CDD4;
    return;
L_08A6CDD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6CD68;
      }
      goto L_08A6CDDC;
    }
L_08A6CDDC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1538u);
    ctx.gpr[31] = (0x08A6CDF8u);
    ctx.gpr[8] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6CDF8u) goto L_08A6CDF8;
    return;
L_08A6CDF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6CD68;
      }
      goto L_08A6CE00;
    }
L_08A6CE00:
    ctx.gpr[2] = (0u | 5662u);
    goto L_08A6CE04;
L_08A6CE04:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6CE10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (17761u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[4] = (17008u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2768));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (16384u << 16u);
    ctx.gpr[20] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[30] = (0u | 201u);
    ctx.gpr[23] = (0u | 15591u);
    ctx.gpr[22] = (0u | 5u);
    ctx.gpr[21] = (0u | 8u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(10384));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    goto L_08A6CE94;
L_08A6CE94:
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CF54;
      }
      goto L_08A6CEB4;
    }
L_08A6CEB4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x08A6CEDCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A6D618;
L_08A6CEDC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6CF54;
      }
      goto L_08A6CEF0;
    }
L_08A6CEF0:
    ctx.fpr[13] = std::sqrt(ctx.fpr[12]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6CF08u);
    ctx.gpr[5] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A6CF08u) goto L_08A6CF08;
    return;
L_08A6CF08:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6CF54;
      }
      goto L_08A6CF18;
    }
L_08A6CF18:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A6CF54u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CF54u) goto L_08A6CF54;
    return;
L_08A6CF54:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CE94;
      }
      goto L_08A6CF68;
    }
L_08A6CF68:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08A6CFA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (2233u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-3080));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(848)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A6CFE0;
      }
      goto L_08A6CFC4;
    }
L_08A6CFC4:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(848)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A6D038;
      }
      goto L_08A6CFD0;
    }
L_08A6CFD0:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12960));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(117)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D038;
      }
      goto L_08A6CFE0;
    }
L_08A6CFE0:
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(5956)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D038;
      }
      goto L_08A6CFFC;
    }
L_08A6CFFC:
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(5988)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A6D02C;
      }
      goto L_08A6D018;
    }
L_08A6D018:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(5962)));
    ctx.gpr[31] = (0x08A6D024u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 477u, 0x08A79C98u>(ctx, &aot_mem) && ctx.pc == 0x08A6D024u) goto L_08A6D024;
    return;
L_08A6D024:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D038;
      }
      goto L_08A6D02C;
    }
L_08A6D02C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A6D038u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 559u, 0x08A7AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D038u) goto L_08A6D038;
    return;
L_08A6D038:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6D044:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5956)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08A6D08Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A6D618;
L_08A6D08C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (17561u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6D140;
      }
      goto L_08A6D0AC;
    }
L_08A6D0AC:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A6D0BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 287u, 0x08A5DDB0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D0BCu) goto L_08A6D0BC;
    return;
L_08A6D0BC:
    ctx.gpr[6] = (16908u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A6D0D8u);
    ctx.gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A6D0D8u) goto L_08A6D0D8;
    return;
L_08A6D0D8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6D140;
      }
      goto L_08A6D0E8;
    }
L_08A6D0E8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (0u | 211u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 15591u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A6D140u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D140u) goto L_08A6D140;
    return;
L_08A6D140:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6D154:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6D15C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6D164:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A6D258;
      }
      goto L_08A6D198;
    }
L_08A6D198:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D258;
      }
      goto L_08A6D1A4;
    }
L_08A6D1A4:
    ctx.gpr[31] = (0x08A6D1ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 243u, 0x08A5DA60u>(ctx, &aot_mem) && ctx.pc == 0x08A6D1ACu) goto L_08A6D1AC;
    return;
L_08A6D1AC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 5662u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A6D258;
      }
      goto L_08A6D1BC;
    }
L_08A6D1BC:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[19] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(21892), ctx.gpr[17]);
    ctx.gpr[20] = (ctx.gpr[16] + ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(21900), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(21902), static_cast<std::uint8_t>(0u));
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(21904), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A6D1ECu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A6D1ECu) goto L_08A6D1EC;
    return;
L_08A6D1EC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A6D1FCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 338u, 0x088B5F74u>(ctx, &aot_mem) && ctx.pc == 0x08A6D1FCu) goto L_08A6D1FC;
    return;
L_08A6D1FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21944)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[21]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(21916), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(21888), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11040));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(21908), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(21908), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08A6D258;
L_08A6D258:
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
L_08A6D27C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A6D2C0;
      }
      goto L_08A6D29C;
    }
L_08A6D29C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D2C0;
      }
      goto L_08A6D2A8;
    }
L_08A6D2A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6D2B4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 43u, 0x08A7C53Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6D2B4u) goto L_08A6D2B4;
    return;
L_08A6D2B4:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(21900)));
      if (branch_taken) {
          goto L_08A6D2C4;
      }
      goto L_08A6D2C0;
    }
L_08A6D2C0:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A6D2C4;
L_08A6D2C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6D2D8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A6D30C;
      }
      goto L_08A6D2E4;
    }
L_08A6D2E4:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D30C;
      }
      goto L_08A6D2F0;
    }
L_08A6D2F0:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(21888), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(21856), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(21860), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(21864), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08A6D30C;
L_08A6D30C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6D314:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A6D378;
      }
      goto L_08A6D320;
    }
L_08A6D320:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D378;
      }
      goto L_08A6D32C;
    }
L_08A6D32C:
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21892)));
    ctx.gpr[7] = (0u | 5662u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A6D378;
      }
      goto L_08A6D344;
    }
L_08A6D344:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(21900)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A6D378;
      }
      goto L_08A6D354;
    }
L_08A6D354:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(21902)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D378;
      }
      goto L_08A6D360;
    }
L_08A6D360:
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(21916), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(21916), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(21902), static_cast<std::uint8_t>(0u));
    goto L_08A6D378;
L_08A6D378:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6D380:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A6D3C4;
      }
      goto L_08A6D38C;
    }
L_08A6D38C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D3BC;
      }
      goto L_08A6D398;
    }
L_08A6D398:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(21902)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A6D3B4;
      }
      goto L_08A6D3AC;
    }
L_08A6D3AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A6D3FC;
      }
      goto L_08A6D3B4;
    }
L_08A6D3B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A6D3FC;
      }
      goto L_08A6D3BC;
    }
L_08A6D3BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A6D3FC;
      }
      goto L_08A6D3C4;
    }
L_08A6D3C4:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11052));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] & 63u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D3F4;
      }
      goto L_08A6D3EC;
    }
L_08A6D3EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A6D3FC;
      }
      goto L_08A6D3F4;
    }
L_08A6D3F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A6D3FC;
      }
      goto L_08A6D3FC;
    }
L_08A6D3FC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6D404:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A6D448;
      }
      goto L_08A6D410;
    }
L_08A6D410:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D440;
      }
      goto L_08A6D41C;
    }
L_08A6D41C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(21902)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A6D438;
      }
      goto L_08A6D430;
    }
L_08A6D430:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A6D480;
      }
      goto L_08A6D438;
    }
L_08A6D438:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A6D480;
      }
      goto L_08A6D440;
    }
L_08A6D440:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A6D480;
      }
      goto L_08A6D448;
    }
L_08A6D448:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11060));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] & 63u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D478;
      }
      goto L_08A6D470;
    }
L_08A6D470:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A6D480;
      }
      goto L_08A6D478;
    }
L_08A6D478:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A6D480;
      }
      goto L_08A6D480;
    }
L_08A6D480:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6D488:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A6D500;
      }
      goto L_08A6D49C;
    }
L_08A6D49C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
      if (branch_taken) {
          goto L_08A6D500;
      }
      goto L_08A6D4A8;
    }
L_08A6D4A8:
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(21892), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(21900), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(21902), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(21904), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(21916), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(21888), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(21908), 0u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(21918), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (2233u << 16u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
      if (branch_taken) {
          goto L_08A6D4F8;
      }
      goto L_08A6D4E8;
    }
L_08A6D4E8:
    ctx.gpr[31] = (0x08A6D4F0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 368u, 0x088B61B8u>(ctx, &aot_mem) && ctx.pc == 0x08A6D4F0u) goto L_08A6D4F0;
    return;
L_08A6D4F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D500;
      }
      goto L_08A6D4F8;
    }
L_08A6D4F8:
    ctx.gpr[31] = (0x08A6D500u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 368u, 0x088B61B8u>(ctx, &aot_mem) && ctx.pc == 0x08A6D500u) goto L_08A6D500;
    return;
L_08A6D500:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6D50C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3080));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(912)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A6D550;
      }
      goto L_08A6D528;
    }
L_08A6D528:
    ctx.gpr[31] = (0x08A6D530u);
    // nop
    goto L_08A6D404;
L_08A6D530:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A6D548;
      }
      goto L_08A6D538;
    }
L_08A6D538:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D558;
      }
      goto L_08A6D548;
    }
L_08A6D548:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A6D55C;
      }
      goto L_08A6D550;
    }
L_08A6D550:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A6D55C;
      }
      goto L_08A6D558;
    }
L_08A6D558:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A6D55C;
L_08A6D55C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6D568:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A6D5FC;
      }
      goto L_08A6D584;
    }
L_08A6D584:
    ctx.gpr[17] = (0u | 0u);
    goto L_08A6D588;
L_08A6D588:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6D594u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 43u, 0x08A7C53Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6D594u) goto L_08A6D594;
    return;
L_08A6D594:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D588;
      }
      goto L_08A6D5A8;
    }
L_08A6D5A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21918)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D5C0;
      }
      goto L_08A6D5B4;
    }
L_08A6D5B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21919)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D5CC;
      }
      goto L_08A6D5C0;
    }
L_08A6D5C0:
    ctx.gpr[4] = (0u | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21920), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A6D5FC;
      }
      goto L_08A6D5CC;
    }
L_08A6D5CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21920)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 127 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D5FC;
      }
      goto L_08A6D5DC;
    }
L_08A6D5DC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21920), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21920)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D5FC;
      }
      goto L_08A6D5F4;
    }
L_08A6D5F4:
    ctx.gpr[4] = (0u | 127u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21920), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A6D5FC;
L_08A6D5FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6D610:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6D618:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
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
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16166u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[0];
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6D67C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(10384));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(21945)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A6D6C8;
      }
      goto L_08A6D6AC;
    }
L_08A6D6AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1962)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1960)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1962)));
        goto L_08A6D6D0;
    }
    goto L_08A6D6C0;
L_08A6D6C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DA78;
      }
      goto L_08A6D6C8;
    }
L_08A6D6C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DB60;
      }
      goto L_08A6D6D0;
    }
L_08A6D6D0:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1920)));
    ctx.gpr[7] = (0u - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(38)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D7B0;
      }
      goto L_08A6D718;
    }
L_08A6D718:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11068));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11108)));
    goto L_08A6D730;
L_08A6D730:
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[8] = (ctx.hi);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A6D79C;
      }
      goto L_08A6D754;
    }
L_08A6D754:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1962)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1920)));
    ctx.gpr[8] = (0u - ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[7] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A6DA78;
      }
      goto L_08A6D79C;
    }
L_08A6D79C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 10 ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11108)));
        goto L_08A6D730;
    }
    goto L_08A6D7B0;
L_08A6D7B0:
    ctx.gpr[19] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(4229) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-25456));
      if (branch_taken) {
          goto L_08A6D7E8;
      }
      goto L_08A6D7C0;
    }
L_08A6D7C0:
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(5156) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D7E8;
      }
      goto L_08A6D7CC;
    }
L_08A6D7CC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x08A6D7DCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 325u, 0x088B5EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A6D7DCu) goto L_08A6D7DC;
    return;
L_08A6D7DC:
    ctx.gpr[4] = (ctx.gpr[2] & 255u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A6D7FC;
      }
      goto L_08A6D7E8;
    }
L_08A6D7E8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A6D7F4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 318u, 0x088B5E80u>(ctx, &aot_mem) && ctx.pc == 0x08A6D7F4u) goto L_08A6D7F4;
    return;
L_08A6D7F4:
    ctx.gpr[4] = (ctx.gpr[2] & 255u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A6D7FC;
L_08A6D7FC:
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_08A6D814;
    }
    goto L_08A6D804;
L_08A6D804:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A6DA78;
      }
      goto L_08A6D80C;
    }
L_08A6D80C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D82C;
      }
      goto L_08A6D814;
    }
L_08A6D814:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A6D860;
      }
      goto L_08A6D81C;
    }
L_08A6D81C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DA78;
      }
      goto L_08A6D824;
    }
L_08A6D824:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DA78;
      }
      goto L_08A6D82C;
    }
L_08A6D82C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D84C;
      }
      goto L_08A6D834;
    }
L_08A6D834:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x08A6D844u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 320u, 0x088B5EA0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D844u) goto L_08A6D844;
    return;
L_08A6D844:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D858;
      }
      goto L_08A6D84C;
    }
L_08A6D84C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A6D858u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 306u, 0x088B5DF4u>(ctx, &aot_mem) && ctx.pc == 0x08A6D858u) goto L_08A6D858;
    return;
L_08A6D858:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DA78;
      }
      goto L_08A6D860;
    }
L_08A6D860:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1962)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1920)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1962)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1920)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1962)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1920)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[5] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1962)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[7] = (0u - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1920)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A6D9C8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A6D9C8u) goto L_08A6D9C8;
    return;
L_08A6D9C8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6D9D8u);
    ctx.gpr[5] = (0u | 750u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A6D9D8u) goto L_08A6D9D8;
    return;
L_08A6D9D8:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1962)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[7] = (0u - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1920)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(38)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A6DA64;
      }
      goto L_08A6DA30;
    }
L_08A6DA30:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11108)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11068));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11108), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11108)));
    ctx.gpr[6] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A6DA64;
      }
      goto L_08A6DA60;
    }
L_08A6DA60:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11108), static_cast<std::uint8_t>(0u));
    goto L_08A6DA64;
L_08A6DA64:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6DA70u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A6DA70u) goto L_08A6DA70;
    return;
L_08A6DA70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DA78;
      }
      goto L_08A6DA78;
    }
L_08A6DA78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1962)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DA9C;
      }
      goto L_08A6DA84;
    }
L_08A6DA84:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1962), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A6DAAC;
      }
      goto L_08A6DA9C;
    }
L_08A6DA9C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1962), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    goto L_08A6DAAC;
L_08A6DAAC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] << 6u);
      if (branch_taken) {
          goto L_08A6DB38;
      }
      goto L_08A6DAC0;
    }
L_08A6DAC0:
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[20]);
    goto L_08A6DAD4;
L_08A6DAD4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1920)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(37))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6DB20;
      }
      goto L_08A6DAF4;
    }
L_08A6DAF4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1920)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(37))))));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[31] = (0x08A6DB20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 260u, 0x08A5DB30u>(ctx, &aot_mem) && ctx.pc == 0x08A6DB20u) goto L_08A6DB20;
    return;
L_08A6DB20:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08A6DAD4;
      }
      goto L_08A6DB38;
    }
L_08A6DB38:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 20u);
    goto L_08A6DB40;
L_08A6DB40:
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1920), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DB40;
      }
      goto L_08A6DB5C;
    }
L_08A6DB5C:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1960), static_cast<std::uint8_t>(0u));
    goto L_08A6DB60;
L_08A6DB60:
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
L_08A6DB80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(21945)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A6DC30;
      }
      goto L_08A6DBB0;
    }
L_08A6DBB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21946)));
    ctx.gpr[16] = (2233u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-25456));
      if (branch_taken) {
          goto L_08A6DBE8;
      }
      goto L_08A6DBC0;
    }
L_08A6DBC0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6DBCCu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 304u, 0x088B5DD4u>(ctx, &aot_mem) && ctx.pc == 0x08A6DBCCu) goto L_08A6DBCC;
    return;
L_08A6DBCC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DEFC;
      }
      goto L_08A6DBD4;
    }
L_08A6DBD4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6DBE0u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 298u, 0x088B5D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6DBE0u) goto L_08A6DBE0;
    return;
L_08A6DBE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DEFC;
      }
      goto L_08A6DBE8;
    }
L_08A6DBE8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6DBF4u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 304u, 0x088B5DD4u>(ctx, &aot_mem) && ctx.pc == 0x08A6DBF4u) goto L_08A6DBF4;
    return;
L_08A6DBF4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A6DC14;
      }
      goto L_08A6DC00;
    }
L_08A6DC00:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < -1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DEFC;
      }
      goto L_08A6DC0C;
    }
L_08A6DC0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DEFC;
      }
      goto L_08A6DC14;
    }
L_08A6DC14:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A6DEFC;
      }
      goto L_08A6DC1C;
    }
L_08A6DC1C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6DC28u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 298u, 0x088B5D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6DC28u) goto L_08A6DC28;
    return;
L_08A6DC28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DEFC;
      }
      goto L_08A6DC30;
    }
L_08A6DC30:
    ctx.gpr[31] = (0x08A6DC38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 157u, 0x08A60F24u>(ctx, &aot_mem) && ctx.pc == 0x08A6DC38u) goto L_08A6DC38;
    return;
L_08A6DC38:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08A6DC68u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6DC68u) goto L_08A6DC68;
    return;
L_08A6DC68:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DEFC;
      }
      goto L_08A6DC74;
    }
L_08A6DC74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A6DE64;
      }
      goto L_08A6DC80;
    }
L_08A6DC80:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5960)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DE64;
      }
      goto L_08A6DC9C;
    }
L_08A6DC9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 56u);
      if (branch_taken) {
          goto L_08A6DCC8;
      }
      goto L_08A6DCAC;
    }
L_08A6DCAC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A6DCC8;
      }
      goto L_08A6DCB4;
    }
L_08A6DCB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DCC8;
      }
      goto L_08A6DCC0;
    }
L_08A6DCC0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DE3C;
      }
      goto L_08A6DCC8;
    }
L_08A6DCC8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DD00;
      }
      goto L_08A6DCD0;
    }
L_08A6DCD0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-130));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[20] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(8020));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[21] = (2233u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-25456));
      if (branch_taken) {
          goto L_08A6DD44;
      }
      goto L_08A6DD00;
    }
L_08A6DD00:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DD3C;
      }
      goto L_08A6DD0C;
    }
L_08A6DD0C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-130));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[20] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(8020));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[21] = (2233u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-25456));
      if (branch_taken) {
          goto L_08A6DD44;
      }
      goto L_08A6DD3C;
    }
L_08A6DD3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DEFC;
      }
      goto L_08A6DD44;
    }
L_08A6DD44:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A6DD50u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 304u, 0x088B5DD4u>(ctx, &aot_mem) && ctx.pc == 0x08A6DD50u) goto L_08A6DD50;
    return;
L_08A6DD50:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A6DD70;
      }
      goto L_08A6DD5C;
    }
L_08A6DD5C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < -1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DE64;
      }
      goto L_08A6DD68;
    }
L_08A6DD68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DE64;
      }
      goto L_08A6DD70;
    }
L_08A6DD70:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A6DE64;
      }
      goto L_08A6DD78;
    }
L_08A6DD78:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (0u | 16u);
      if (branch_taken) {
          goto L_08A6DDC0;
      }
      goto L_08A6DD8C;
    }
L_08A6DD8C:
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08A6DD90;
L_08A6DD90:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(4104)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DDB0;
      }
      goto L_08A6DD9C;
    }
L_08A6DD9C:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(4044)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A6DDB0;
      }
      goto L_08A6DDA8;
    }
L_08A6DDA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A6DDC0;
      }
      goto L_08A6DDB0;
    }
L_08A6DDB0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A6DD90;
      }
      goto L_08A6DDC0;
    }
L_08A6DDC0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DE34;
      }
      goto L_08A6DDC8;
    }
L_08A6DDC8:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
        goto L_08A6DDE4;
    }
    goto L_08A6DDD0;
L_08A6DDD0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08A6DDDCu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 298u, 0x088B5D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6DDDCu) goto L_08A6DDDC;
    return;
L_08A6DDDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DE34;
      }
      goto L_08A6DDE4;
    }
L_08A6DDE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 4u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DE34;
      }
      goto L_08A6DE00;
    }
L_08A6DE00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_08A6DE20;
      }
      goto L_08A6DE10;
    }
L_08A6DE10:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A6DE34;
      }
      goto L_08A6DE18;
    }
L_08A6DE18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DE28;
      }
      goto L_08A6DE20;
    }
L_08A6DE20:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A6DE34;
      }
      goto L_08A6DE28;
    }
L_08A6DE28:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08A6DE34u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 298u, 0x088B5D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6DE34u) goto L_08A6DE34;
    return;
L_08A6DE34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DE64;
      }
      goto L_08A6DE3C;
    }
L_08A6DE3C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (2233u << 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
      if (branch_taken) {
          goto L_08A6DE5C;
      }
      goto L_08A6DE4C;
    }
L_08A6DE4C:
    ctx.gpr[31] = (0x08A6DE54u);
    ctx.gpr[5] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 368u, 0x088B61B8u>(ctx, &aot_mem) && ctx.pc == 0x08A6DE54u) goto L_08A6DE54;
    return;
L_08A6DE54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DE64;
      }
      goto L_08A6DE5C;
    }
L_08A6DE5C:
    ctx.gpr[31] = (0x08A6DE64u);
    ctx.gpr[5] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 368u, 0x088B61B8u>(ctx, &aot_mem) && ctx.pc == 0x08A6DE64u) goto L_08A6DE64;
    return;
L_08A6DE64:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DEFC;
      }
      goto L_08A6DE70;
    }
L_08A6DE70:
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(325)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DECC;
      }
      goto L_08A6DE84;
    }
L_08A6DE84:
    ctx.gpr[19] = (ctx.gpr[19] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[19]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-27232)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6DE9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 61u);
      if (branch_taken) {
          goto L_08A6DED0;
      }
      goto L_08A6DEA4;
    }
L_08A6DEA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 66u);
      if (branch_taken) {
          goto L_08A6DED0;
      }
      goto L_08A6DEAC;
    }
L_08A6DEAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 62u);
      if (branch_taken) {
          goto L_08A6DED0;
      }
      goto L_08A6DEB4;
    }
L_08A6DEB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 63u);
      if (branch_taken) {
          goto L_08A6DED0;
      }
      goto L_08A6DEBC;
    }
L_08A6DEBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 64u);
      if (branch_taken) {
          goto L_08A6DED0;
      }
      goto L_08A6DEC4;
    }
L_08A6DEC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 65u);
      if (branch_taken) {
          goto L_08A6DED0;
      }
      goto L_08A6DECC;
    }
L_08A6DECC:
    ctx.gpr[17] = (0u | 0u);
    goto L_08A6DED0;
L_08A6DED0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DEFC;
      }
      goto L_08A6DED8;
    }
L_08A6DED8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21956)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A6DEFC;
      }
      goto L_08A6DEE4;
    }
L_08A6DEE4:
    ctx.gpr[5] = (ctx.gpr[17] & 255u);
    ctx.gpr[31] = (0x08A6DEF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 930u, 0x08A9B5B0u>(ctx, &aot_mem) && ctx.pc == 0x08A6DEF0u) goto L_08A6DEF0;
    return;
L_08A6DEF0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DEFC;
      }
      goto L_08A6DEF8;
    }
L_08A6DEF8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21956), ctx.gpr[17]);
    goto L_08A6DEFC;
L_08A6DEFC:
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
L_08A6DF20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A6DF78u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 350u, 0x08A5E138u>(ctx, &aot_mem) && ctx.pc == 0x08A6DF78u) goto L_08A6DF78;
    return;
L_08A6DF78:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    ctx.gpr[20] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A6DFBC;
      }
      goto L_08A6DF80;
    }
L_08A6DF80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-29520)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DFB4;
      }
      goto L_08A6DF90;
    }
L_08A6DF90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-29520)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-27104)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6DFAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DFBC;
      }
      goto L_08A6DFB4;
    }
L_08A6DFB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E484;
      }
      goto L_08A6DFBC;
    }
L_08A6DFBC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A6DFD8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A6D618;
L_08A6DFD8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 4u);
      if (branch_taken) {
          goto L_08A6DFF8;
      }
      goto L_08A6DFEC;
    }
L_08A6DFEC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A6DFFC;
      }
      goto L_08A6DFF8;
    }
L_08A6DFF8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    goto L_08A6DFFC;
L_08A6DFFC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-130));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A6E040;
      }
      goto L_08A6E024;
    }
L_08A6E024:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6E064;
      }
      goto L_08A6E040;
    }
L_08A6E040:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A6E064;
L_08A6E064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-29520)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(612)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[19];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6E094;
      }
      goto L_08A6E080;
    }
L_08A6E080:
    ctx.gpr[31] = (0x08A6E088u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 350u, 0x08A5E138u>(ctx, &aot_mem) && ctx.pc == 0x08A6E088u) goto L_08A6E088;
    return;
L_08A6E088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A6E0BC;
      }
      goto L_08A6E094;
    }
L_08A6E094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E478;
      }
      goto L_08A6E0A4;
    }
L_08A6E0A4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-27032)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E0BC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E0C8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 565u, 0x08A72910u>(ctx, &aot_mem) && ctx.pc == 0x08A6E0C8u) goto L_08A6E0C8;
    return;
L_08A6E0C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E0D4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 517u, 0x08A725D0u>(ctx, &aot_mem) && ctx.pc == 0x08A6E0D4u) goto L_08A6E0D4;
    return;
L_08A6E0D4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E0E0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 660u, 0x08A5F904u>(ctx, &aot_mem) && ctx.pc == 0x08A6E0E0u) goto L_08A6E0E0;
    return;
L_08A6E0E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E484;
      }
      goto L_08A6E0E8;
    }
L_08A6E0E8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E0F4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 709u, 0x08A5FD78u>(ctx, &aot_mem) && ctx.pc == 0x08A6E0F4u) goto L_08A6E0F4;
    return;
L_08A6E0F4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E100u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 565u, 0x08A72910u>(ctx, &aot_mem) && ctx.pc == 0x08A6E100u) goto L_08A6E100;
    return;
L_08A6E100:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E478;
      }
      goto L_08A6E108;
    }
L_08A6E108:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E114u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A6E4A8;
L_08A6E114:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E120u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 565u, 0x08A72910u>(ctx, &aot_mem) && ctx.pc == 0x08A6E120u) goto L_08A6E120;
    return;
L_08A6E120:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E478;
      }
      goto L_08A6E128;
    }
L_08A6E128:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E134u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 697u, 0x08A5FC14u>(ctx, &aot_mem) && ctx.pc == 0x08A6E134u) goto L_08A6E134;
    return;
L_08A6E134:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E140u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 565u, 0x08A72910u>(ctx, &aot_mem) && ctx.pc == 0x08A6E140u) goto L_08A6E140;
    return;
L_08A6E140:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E478;
      }
      goto L_08A6E148;
    }
L_08A6E148:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E154u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 11u, 0x08A60110u>(ctx, &aot_mem) && ctx.pc == 0x08A6E154u) goto L_08A6E154;
    return;
L_08A6E154:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E160u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 565u, 0x08A72910u>(ctx, &aot_mem) && ctx.pc == 0x08A6E160u) goto L_08A6E160;
    return;
L_08A6E160:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E16Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 419u, 0x08A71DE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6E16Cu) goto L_08A6E16C;
    return;
L_08A6E16C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E478;
      }
      goto L_08A6E174;
    }
L_08A6E174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1000));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A6E19C;
      }
      goto L_08A6E188;
    }
L_08A6E188:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E194u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A6E4A8;
L_08A6E194:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E1A8;
      }
      goto L_08A6E19C;
    }
L_08A6E19C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E1A8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 762u, 0x08A73F1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6E1A8u) goto L_08A6E1A8;
    return;
L_08A6E1A8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E1B4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 724u, 0x08A5FF6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6E1B4u) goto L_08A6E1B4;
    return;
L_08A6E1B4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E1C0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 565u, 0x08A72910u>(ctx, &aot_mem) && ctx.pc == 0x08A6E1C0u) goto L_08A6E1C0;
    return;
L_08A6E1C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E478;
      }
      goto L_08A6E1C8;
    }
L_08A6E1C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A6E1D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 584u, 0x08A5F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08A6E1D8u) goto L_08A6E1D8;
    return;
L_08A6E1D8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E1E4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 27u, 0x08A701C8u>(ctx, &aot_mem) && ctx.pc == 0x08A6E1E4u) goto L_08A6E1E4;
    return;
L_08A6E1E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E278;
      }
      goto L_08A6E1EC;
    }
L_08A6E1EC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8096)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6E210;
      }
      goto L_08A6E204;
    }
L_08A6E204:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E210u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 29u, 0x08A701D8u>(ctx, &aot_mem) && ctx.pc == 0x08A6E210u) goto L_08A6E210;
    return;
L_08A6E210:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A6E230;
      }
      goto L_08A6E228;
    }
L_08A6E228:
    ctx.gpr[31] = (0x08A6E230u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 455u, 0x08A720F0u>(ctx, &aot_mem) && ctx.pc == 0x08A6E230u) goto L_08A6E230;
    return;
L_08A6E230:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E23Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 517u, 0x08A5ED94u>(ctx, &aot_mem) && ctx.pc == 0x08A6E23Cu) goto L_08A6E23C;
    return;
L_08A6E23C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E248u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 517u, 0x08A725D0u>(ctx, &aot_mem) && ctx.pc == 0x08A6E248u) goto L_08A6E248;
    return;
L_08A6E248:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E254u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 679u, 0x08A5FAB4u>(ctx, &aot_mem) && ctx.pc == 0x08A6E254u) goto L_08A6E254;
    return;
L_08A6E254:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E260u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 660u, 0x08A5F904u>(ctx, &aot_mem) && ctx.pc == 0x08A6E260u) goto L_08A6E260;
    return;
L_08A6E260:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E26Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 53u, 0x08A70404u>(ctx, &aot_mem) && ctx.pc == 0x08A6E26Cu) goto L_08A6E26C;
    return;
L_08A6E26C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E278u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 419u, 0x08A71DE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6E278u) goto L_08A6E278;
    return;
L_08A6E278:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E284u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 565u, 0x08A72910u>(ctx, &aot_mem) && ctx.pc == 0x08A6E284u) goto L_08A6E284;
    return;
L_08A6E284:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1352), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6E478;
      }
      goto L_08A6E290;
    }
L_08A6E290:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A6E2A0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 584u, 0x08A5F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08A6E2A0u) goto L_08A6E2A0;
    return;
L_08A6E2A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 211 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -954 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A6E2F4;
      }
      goto L_08A6E2B0;
    }
L_08A6E2B0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 169u);
      if (branch_taken) {
          goto L_08A6E2E4;
      }
      goto L_08A6E2B8;
    }
L_08A6E2B8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < -955 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E320;
      }
      goto L_08A6E2C4;
    }
L_08A6E2C4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E2D0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A6FA00;
L_08A6E2D0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E2DCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 660u, 0x08A5F904u>(ctx, &aot_mem) && ctx.pc == 0x08A6E2DCu) goto L_08A6E2DC;
    return;
L_08A6E2DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E464;
      }
      goto L_08A6E2E4;
    }
L_08A6E2E4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A6E2C4;
      }
      goto L_08A6E2EC;
    }
L_08A6E2EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E320;
      }
      goto L_08A6E2F4;
    }
L_08A6E2F4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 213 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E320;
      }
      goto L_08A6E300;
    }
L_08A6E300:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E30Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 435u, 0x08A5E624u>(ctx, &aot_mem) && ctx.pc == 0x08A6E30Cu) goto L_08A6E30C;
    return;
L_08A6E30C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E318u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 660u, 0x08A5F904u>(ctx, &aot_mem) && ctx.pc == 0x08A6E318u) goto L_08A6E318;
    return;
L_08A6E318:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E464;
      }
      goto L_08A6E320;
    }
L_08A6E320:
    ctx.gpr[31] = (0x08A6E328u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 126u, 0x088A08E8u>(ctx, &aot_mem) && ctx.pc == 0x08A6E328u) goto L_08A6E328;
    return;
L_08A6E328:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
        goto L_08A6E370;
    }
    goto L_08A6E338;
L_08A6E338:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E380;
      }
      goto L_08A6E344;
    }
L_08A6E344:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E350u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A6E4A8;
L_08A6E350:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E35Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 419u, 0x08A71DE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6E35Cu) goto L_08A6E35C;
    return;
L_08A6E35C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E368u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 660u, 0x08A5F904u>(ctx, &aot_mem) && ctx.pc == 0x08A6E368u) goto L_08A6E368;
    return;
L_08A6E368:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E464;
      }
      goto L_08A6E370;
    }
L_08A6E370:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E380;
      }
      goto L_08A6E378;
    }
L_08A6E378:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E464;
      }
      goto L_08A6E380;
    }
L_08A6E380:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E38Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 27u, 0x08A701C8u>(ctx, &aot_mem) && ctx.pc == 0x08A6E38Cu) goto L_08A6E38C;
    return;
L_08A6E38C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E464;
      }
      goto L_08A6E394;
    }
L_08A6E394:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E3A0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 468u, 0x08A5E8A4u>(ctx, &aot_mem) && ctx.pc == 0x08A6E3A0u) goto L_08A6E3A0;
    return;
L_08A6E3A0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8096)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6E3C4;
      }
      goto L_08A6E3B8;
    }
L_08A6E3B8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E3C4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 29u, 0x08A701D8u>(ctx, &aot_mem) && ctx.pc == 0x08A6E3C4u) goto L_08A6E3C4;
    return;
L_08A6E3C4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E3D0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 455u, 0x08A720F0u>(ctx, &aot_mem) && ctx.pc == 0x08A6E3D0u) goto L_08A6E3D0;
    return;
L_08A6E3D0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E3DCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 419u, 0x08A71DE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6E3DCu) goto L_08A6E3DC;
    return;
L_08A6E3DC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E3E8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 517u, 0x08A5ED94u>(ctx, &aot_mem) && ctx.pc == 0x08A6E3E8u) goto L_08A6E3E8;
    return;
L_08A6E3E8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E3F4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 517u, 0x08A725D0u>(ctx, &aot_mem) && ctx.pc == 0x08A6E3F4u) goto L_08A6E3F4;
    return;
L_08A6E3F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A6E400u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 621u, 0x08A5F66Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6E400u) goto L_08A6E400;
    return;
L_08A6E400:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E414;
      }
      goto L_08A6E408;
    }
L_08A6E408:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E414u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 550u, 0x08A5F008u>(ctx, &aot_mem) && ctx.pc == 0x08A6E414u) goto L_08A6E414;
    return;
L_08A6E414:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A6E420u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 655u, 0x08A5F8C8u>(ctx, &aot_mem) && ctx.pc == 0x08A6E420u) goto L_08A6E420;
    return;
L_08A6E420:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E434;
      }
      goto L_08A6E428;
    }
L_08A6E428:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E434u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 639u, 0x08A5F72Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6E434u) goto L_08A6E434;
    return;
L_08A6E434:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E440u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 679u, 0x08A5FAB4u>(ctx, &aot_mem) && ctx.pc == 0x08A6E440u) goto L_08A6E440;
    return;
L_08A6E440:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E44Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 53u, 0x08A70404u>(ctx, &aot_mem) && ctx.pc == 0x08A6E44Cu) goto L_08A6E44C;
    return;
L_08A6E44C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E458u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 660u, 0x08A5F904u>(ctx, &aot_mem) && ctx.pc == 0x08A6E458u) goto L_08A6E458;
    return;
L_08A6E458:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E464u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 564u, 0x08A5F164u>(ctx, &aot_mem) && ctx.pc == 0x08A6E464u) goto L_08A6E464;
    return;
L_08A6E464:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E470u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 565u, 0x08A72910u>(ctx, &aot_mem) && ctx.pc == 0x08A6E470u) goto L_08A6E470;
    return;
L_08A6E470:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1580), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A6E478;
L_08A6E478:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6E484u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 418u, 0x08A5E474u>(ctx, &aot_mem) && ctx.pc == 0x08A6E484u) goto L_08A6E484;
    return;
L_08A6E484:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E4A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-368));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
    ctx.gpr[6] = (18292u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 9216u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[20]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A6F99C;
      }
      goto L_08A6E520;
    }
L_08A6E520:
    ctx.gpr[31] = (0x08A6E528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A6E528u) goto L_08A6E528;
    return;
L_08A6E528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[2] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08A6E558;
    }
    goto L_08A6E534;
L_08A6E534:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25440));
    ctx.gpr[31] = (0x08A6E544u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 27u, 0x08A980DCu>(ctx, &aot_mem) && ctx.pc == 0x08A6E544u) goto L_08A6E544;
    return;
L_08A6E544:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A6E550u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1088u, 0x08A97F64u>(ctx, &aot_mem) && ctx.pc == 0x08A6E550u) goto L_08A6E550;
    return;
L_08A6E550:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A6E590;
      }
      goto L_08A6E558;
    }
L_08A6E558:
    ctx.gpr[5] = (17279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(588)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[4] << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[22] = (ctx.gpr[4] << 16u);
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 16u));
    goto L_08A6E590;
L_08A6E590:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[31] = (0x08A6E5A0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 527u, 0x08A06A44u>(ctx, &aot_mem) && ctx.pc == 0x08A6E5A0u) goto L_08A6E5A0;
    return;
L_08A6E5A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6E608;
      }
      goto L_08A6E604;
    }
L_08A6E604:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    goto L_08A6E608;
L_08A6E608:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_08A6E650;
      }
      goto L_08A6E630;
    }
L_08A6E630:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (15969u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(852)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] / ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E684;
      }
      goto L_08A6E650;
    }
L_08A6E650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A6E66C;
      }
      goto L_08A6E660;
    }
L_08A6E660:
    ctx.gpr[4] = (16256u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A6E684;
      }
      goto L_08A6E66C;
    }
L_08A6E66C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (15969u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1496)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] / ctx.fpr[12];
    goto L_08A6E684;
L_08A6E684:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[24]) || std::isnan(ctx.fpr[12])) && ctx.fpr[24] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6E6C4;
      }
      goto L_08A6E698;
    }
L_08A6E698:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E6BC;
      }
      goto L_08A6E6A8;
    }
L_08A6E6A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E6BC;
      }
      goto L_08A6E6B4;
    }
L_08A6E6B4:
    ctx.gpr[31] = (0x08A6E6BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A6E6BCu) goto L_08A6E6BC;
    return;
L_08A6E6BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A6F9C4;
      }
      goto L_08A6E6C4;
    }
L_08A6E6C4:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6E6E4;
      }
      goto L_08A6E6DC;
    }
L_08A6E6DC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A6E6E4;
L_08A6E6E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A6E6F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 287u, 0x08A5DDB0u>(ctx, &aot_mem) && ctx.pc == 0x08A6E6F4u) goto L_08A6E6F4;
    return;
L_08A6E6F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (17046u << 16u);
      if (branch_taken) {
          goto L_08A6E76C;
      }
      goto L_08A6E710;
    }
L_08A6E710:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16840u << 16u);
      if (branch_taken) {
          goto L_08A6E734;
      }
      goto L_08A6E72C;
    }
L_08A6E72C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A6E780;
      }
      goto L_08A6E734;
    }
L_08A6E734:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (17046u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A6E780;
      }
      goto L_08A6E76C;
    }
L_08A6E76C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A6E780;
L_08A6E780:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6E964;
      }
      goto L_08A6E788;
    }
L_08A6E788:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (17274u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A6E7A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A6E7A0u) goto L_08A6E7A0;
    return;
L_08A6E7A0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6E964;
      }
      goto L_08A6E7B0;
    }
L_08A6E7B0:
    ctx.gpr[4] = (0u | 88u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A6E904;
      }
      goto L_08A6E7BC;
    }
L_08A6E7BC:
    ctx.gpr[4] = (0u | 5599u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 35u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A6E7D8;
      }
      goto L_08A6E7D0;
    }
L_08A6E7D0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) <= 0;
    ctx.gpr[4] = (17517u << 16u);
      if (branch_taken) {
          goto L_08A6E878;
      }
      goto L_08A6E7D8;
    }
L_08A6E7D8:
    ctx.gpr[4] = (17420u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (0u | 4600u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.gpr[4] = (0u | 563u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
        goto L_08A6E804;
    }
    goto L_08A6E804;
L_08A6E804:
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[7] = (0u | 255u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.lo);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (20224u << 16u);
      if (branch_taken) {
          goto L_08A6E848;
      }
      goto L_08A6E83C;
    }
L_08A6E83C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6E860;
      }
      goto L_08A6E848;
    }
L_08A6E848:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    goto L_08A6E860;
L_08A6E860:
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08A6E86C;
    }
    goto L_08A6E86C;
L_08A6E86C:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A6E920;
      }
      goto L_08A6E878;
    }
L_08A6E878:
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (20224u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (0u | 3651u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 949u);
      if (branch_taken) {
          goto L_08A6E8C0;
      }
      goto L_08A6E8A4;
    }
L_08A6E8A4:
    ctx.gpr[5] = (17517u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6E8EC;
      }
      goto L_08A6E8C0;
    }
L_08A6E8C0:
    ctx.gpr[5] = (17517u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    goto L_08A6E8EC;
L_08A6E8EC:
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08A6E8F8;
    }
    goto L_08A6E8F8;
L_08A6E8F8:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A6E920;
      }
      goto L_08A6E904;
    }
L_08A6E904:
    ctx.gpr[5] = (0u | 199u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A6E91Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A6E91Cu) goto L_08A6E91C;
    return;
L_08A6E91C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    goto L_08A6E920;
L_08A6E920:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[4] = (16576u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17274u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A6E964u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A6E964u) goto L_08A6E964;
    return;
L_08A6E964:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E994;
      }
      goto L_08A6E96C;
    }
L_08A6E96C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(192));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A6E98Cu);
    ctx.gpr[5] = (0u | 18u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6E98Cu) goto L_08A6E98C;
    return;
L_08A6E98C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6EA00;
      }
      goto L_08A6E994;
    }
L_08A6E994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A6E9F0;
      }
      goto L_08A6E9A4;
    }
L_08A6E9A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (49440u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6EA00;
      }
      goto L_08A6E9F0;
    }
L_08A6E9F0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
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
    goto L_08A6EA00;
L_08A6EA00:
    ctx.gpr[4] = (18073u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6F970;
      }
      goto L_08A6EA20;
    }
L_08A6EA20:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6EA44;
      }
      goto L_08A6EA3C;
    }
L_08A6EA3C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A6EA64;
      }
      goto L_08A6EA44;
    }
L_08A6EA44:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16153u << 16u);
    ctx.fpr[26] = ctx.fpr[24] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = ctx.fpr[26] / ctx.fpr[13];
    goto L_08A6EA64;
L_08A6EA64:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_08A6EBD8;
      }
      goto L_08A6EA6C;
    }
L_08A6EA6C:
    ctx.gpr[4] = (17882u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (20224u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 1300u);
      if (branch_taken) {
          goto L_08A6EAB0;
      }
      goto L_08A6EA94;
    }
L_08A6EA94:
    ctx.gpr[5] = (17882u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6EADC;
      }
      goto L_08A6EAB0;
    }
L_08A6EAB0:
    ctx.gpr[5] = (17882u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[23] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[23] = (ctx.gpr[5] + ctx.gpr[23]);
    goto L_08A6EADC;
L_08A6EADC:
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[23] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
        goto L_08A6EAE8;
    }
    goto L_08A6EAE8;
L_08A6EAE8:
    ctx.gpr[31] = (0x08A6EAF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A6EAF0u) goto L_08A6EAF0;
    return;
L_08A6EAF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A6EB1C;
      }
      goto L_08A6EAFC;
    }
L_08A6EAFC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A6EB0C;
      }
      goto L_08A6EB04;
    }
L_08A6EB04:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6EB1C;
      }
      goto L_08A6EB0C;
    }
L_08A6EB0C:
    ctx.gpr[4] = (ctx.gpr[23] < static_cast<std::uint32_t>(1300) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6EB1C;
      }
      goto L_08A6EB18;
    }
L_08A6EB18:
    ctx.gpr[23] = (0u | 1300u);
    goto L_08A6EB1C;
L_08A6EB1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 213u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A6EBD4;
      }
      goto L_08A6EB30;
    }
L_08A6EB30:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[5] = (0u | 30u);
    ctx.gpr[31] = (0x08A6EB44u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 304u, 0x088B5DD4u>(ctx, &aot_mem) && ctx.pc == 0x08A6EB44u) goto L_08A6EB44;
    return;
L_08A6EB44:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A6EB58;
      }
      goto L_08A6EB50;
    }
L_08A6EB50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6EBD4;
      }
      goto L_08A6EB58;
    }
L_08A6EB58:
    ctx.gpr[31] = (0x08A6EB60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6EB60u) goto L_08A6EB60;
    return;
L_08A6EB60:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6EBA8;
      }
      goto L_08A6EB6C;
    }
L_08A6EB6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A6EBA8;
      }
      goto L_08A6EB7C;
    }
L_08A6EB7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A6EBA8;
      }
      goto L_08A6EB8C;
    }
L_08A6EB8C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6EBA8;
      }
      goto L_08A6EB98;
    }
L_08A6EB98:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 30u);
    ctx.gpr[31] = (0x08A6EBA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 298u, 0x088B5D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6EBA8u) goto L_08A6EBA8;
    return;
L_08A6EBA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6EBCC;
      }
      goto L_08A6EBB8;
    }
L_08A6EBB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6EBCC;
      }
      goto L_08A6EBC4;
    }
L_08A6EBC4:
    ctx.gpr[31] = (0x08A6EBCCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A6EBCCu) goto L_08A6EBCC;
    return;
L_08A6EBCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A6F9C4;
      }
      goto L_08A6EBD4;
    }
L_08A6EBD4:
    ctx.gpr[4] = (16256u << 16u);
    goto L_08A6EBD8;
L_08A6EBD8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    ctx.gpr[4] = (17150u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_08A6EE40;
      }
      goto L_08A6EC00;
    }
L_08A6EC00:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A6EC10;
      }
      goto L_08A6EC08;
    }
L_08A6EC08:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) <= 0;
    ctx.gpr[4] = (17768u << 16u);
      if (branch_taken) {
          goto L_08A6ECB0;
      }
      goto L_08A6EC10;
    }
L_08A6EC10:
    ctx.gpr[4] = (17673u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (0u | 18000u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.gpr[4] = (0u | 2204u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
        goto L_08A6EC3C;
    }
    goto L_08A6EC3C;
L_08A6EC3C:
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[8] = (0u | 255u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.lo);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (20224u << 16u);
      if (branch_taken) {
          goto L_08A6EC80;
      }
      goto L_08A6EC74;
    }
L_08A6EC74:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6EC98;
      }
      goto L_08A6EC80;
    }
L_08A6EC80:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    goto L_08A6EC98;
L_08A6EC98:
    ctx.gpr[8] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08A6ECA4;
    }
    goto L_08A6ECA4;
L_08A6ECA4:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A6ED38;
      }
      goto L_08A6ECB0;
    }
L_08A6ECB0:
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (20224u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (0u | 14287u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 3713u);
      if (branch_taken) {
          goto L_08A6ECF8;
      }
      goto L_08A6ECDC;
    }
L_08A6ECDC:
    ctx.gpr[5] = (17768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4096u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6ED24;
      }
      goto L_08A6ECF8;
    }
L_08A6ECF8:
    ctx.gpr[5] = (17768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4096u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    goto L_08A6ED24;
L_08A6ED24:
    ctx.gpr[8] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08A6ED30;
    }
    goto L_08A6ED30;
L_08A6ED30:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A6ED38;
L_08A6ED38:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6EDD8;
      }
      goto L_08A6ED50;
    }
L_08A6ED50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A6ED70;
      }
      goto L_08A6ED64;
    }
L_08A6ED64:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A6ED70;
L_08A6ED70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08A6ED90;
      }
      goto L_08A6ED84;
    }
L_08A6ED84:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_08A6ED90;
L_08A6ED90:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (20224u << 16u);
      if (branch_taken) {
          goto L_08A6EDBC;
      }
      goto L_08A6EDB0;
    }
L_08A6EDB0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6EDD4;
      }
      goto L_08A6EDBC;
    }
L_08A6EDBC:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08A6EDD4;
L_08A6EDD4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A6EDD8;
L_08A6EDD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(11112)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6EE14;
      }
      goto L_08A6EDF0;
    }
L_08A6EDF0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(197));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
        goto L_08A6EE0C;
    }
    goto L_08A6EE0C;
L_08A6EE0C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A6EE34;
      }
      goto L_08A6EE14;
    }
L_08A6EE14:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-197));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
        goto L_08A6EE30;
    }
    goto L_08A6EE30;
L_08A6EE30:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A6EE34;
L_08A6EE34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(11112), ctx.gpr[4]);
    goto L_08A6EE40;
L_08A6EE40:
    ctx.gpr[6] = (17164u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6EE58u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A6EE58u) goto L_08A6EE58;
    return;
L_08A6EE58:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6EFD4;
      }
      goto L_08A6EE68;
    }
L_08A6EE68:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A6EEF8;
      }
      goto L_08A6EE74;
    }
L_08A6EE74:
    ctx.gpr[4] = (0u | 5590u);
    ctx.gpr[5] = (18042u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 30u);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (18042u << 16u);
      if (branch_taken) {
          goto L_08A6EEC0;
      }
      goto L_08A6EEA8;
    }
L_08A6EEA8:
    ctx.gpr[4] = (18042u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6EEE4;
      }
      goto L_08A6EEC0;
    }
L_08A6EEC0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08A6EEE4;
L_08A6EEE4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A6EF90;
      }
      goto L_08A6EEF8;
    }
L_08A6EEF8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6EF14;
      }
      goto L_08A6EF00;
    }
L_08A6EF00:
    ctx.gpr[4] = (0u | 5600u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 35u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A6EF90;
      }
      goto L_08A6EF14;
    }
L_08A6EF14:
    ctx.gpr[4] = (18042u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 37u);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A6EF58;
      }
      goto L_08A6EF40;
    }
L_08A6EF40:
    ctx.gpr[4] = (18042u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6EF80;
      }
      goto L_08A6EF58;
    }
L_08A6EF58:
    ctx.gpr[4] = (18042u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08A6EF80;
L_08A6EF80:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A6EF90;
L_08A6EF90:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[4] = (16576u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17164u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A6EFD4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A6EFD4u) goto L_08A6EFD4;
    return;
L_08A6EFD4:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[4] = (16128u << 16u);
      if (branch_taken) {
          goto L_08A6F1E4;
      }
      goto L_08A6EFDC;
    }
L_08A6EFDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (16128u << 16u);
      if (branch_taken) {
          goto L_08A6F1E4;
      }
      goto L_08A6EFEC;
    }
L_08A6EFEC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16128u << 16u);
      if (branch_taken) {
          goto L_08A6F1E4;
      }
      goto L_08A6F008;
    }
L_08A6F008:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16128u << 16u);
      if (branch_taken) {
          goto L_08A6F1E4;
      }
      goto L_08A6F018;
    }
L_08A6F018:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16128u << 16u);
      if (branch_taken) {
          goto L_08A6F1E4;
      }
      goto L_08A6F030;
    }
L_08A6F030:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17036u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[5] = (16880u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A6F074u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A6F074u) goto L_08A6F074;
    return;
L_08A6F074:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (16128u << 16u);
      if (branch_taken) {
          goto L_08A6F1E4;
      }
      goto L_08A6F084;
    }
L_08A6F084:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (17723u << 16u);
      if (branch_taken) {
          goto L_08A6F114;
      }
      goto L_08A6F08C;
    }
L_08A6F08C:
    ctx.gpr[5] = (17723u << 16u);
    ctx.gpr[4] = (0u | 5592u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 30u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (17723u << 16u);
      if (branch_taken) {
          goto L_08A6F0E0;
      }
      goto L_08A6F0C4;
    }
L_08A6F0C4:
    ctx.gpr[4] = (17723u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6F108;
      }
      goto L_08A6F0E0;
    }
L_08A6F0E0:
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08A6F108;
L_08A6F108:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A6F190;
      }
      goto L_08A6F114;
    }
L_08A6F114:
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 42u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A6F15C;
      }
      goto L_08A6F140;
    }
L_08A6F140:
    ctx.gpr[4] = (17723u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6F188;
      }
      goto L_08A6F15C;
    }
L_08A6F15C:
    ctx.gpr[4] = (17723u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08A6F188;
L_08A6F188:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A6F190;
L_08A6F190:
    ctx.gpr[4] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16576u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16880u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A6F1E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A6F1E0u) goto L_08A6F1E0;
    return;
L_08A6F1E0:
    ctx.gpr[4] = (16128u << 16u);
    goto L_08A6F1E4;
L_08A6F1E4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (17150u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A6F450;
      }
      goto L_08A6F210;
    }
L_08A6F210:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A6F220;
      }
      goto L_08A6F218;
    }
L_08A6F218:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) <= 0;
    ctx.gpr[5] = (17640u << 16u);
      if (branch_taken) {
          goto L_08A6F2C0;
      }
      goto L_08A6F220;
    }
L_08A6F220:
    ctx.gpr[5] = (17545u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (0u | 9000u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    ctx.gpr[5] = (0u | 1102u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
        goto L_08A6F24C;
    }
    goto L_08A6F24C;
L_08A6F24C:
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[8] = (0u | 255u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (ctx.lo);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (20224u << 16u);
      if (branch_taken) {
          goto L_08A6F290;
      }
      goto L_08A6F284;
    }
L_08A6F284:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6F2A8;
      }
      goto L_08A6F290;
    }
L_08A6F290:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    goto L_08A6F2A8;
L_08A6F2A8:
    ctx.gpr[8] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_08A6F2B4;
    }
    goto L_08A6F2B4;
L_08A6F2B4:
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A6F348;
      }
      goto L_08A6F2C0;
    }
L_08A6F2C0:
    ctx.gpr[5] = (ctx.gpr[5] | 8192u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (20224u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[7] = (0u | 7143u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (0u | 1857u);
      if (branch_taken) {
          goto L_08A6F308;
      }
      goto L_08A6F2EC;
    }
L_08A6F2EC:
    ctx.gpr[6] = (17640u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 8192u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6F334;
      }
      goto L_08A6F308;
    }
L_08A6F308:
    ctx.gpr[6] = (17640u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 8192u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    goto L_08A6F334;
L_08A6F334:
    ctx.gpr[8] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_08A6F340;
    }
    goto L_08A6F340;
L_08A6F340:
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    goto L_08A6F348;
L_08A6F348:
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6F3E8;
      }
      goto L_08A6F360;
    }
L_08A6F360:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A6F380;
      }
      goto L_08A6F374;
    }
L_08A6F374:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A6F380;
L_08A6F380:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08A6F3A0;
      }
      goto L_08A6F394;
    }
L_08A6F394:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_08A6F3A0;
L_08A6F3A0:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (20224u << 16u);
      if (branch_taken) {
          goto L_08A6F3CC;
      }
      goto L_08A6F3C0;
    }
L_08A6F3C0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6F3E4;
      }
      goto L_08A6F3CC;
    }
L_08A6F3CC:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    goto L_08A6F3E4;
L_08A6F3E4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    goto L_08A6F3E8;
L_08A6F3E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(11116)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F424;
      }
      goto L_08A6F400;
    }
L_08A6F400:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(11116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(98));
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
        goto L_08A6F41C;
    }
    goto L_08A6F41C;
L_08A6F41C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A6F444;
      }
      goto L_08A6F424;
    }
L_08A6F424:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(11116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-98));
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
        goto L_08A6F440;
    }
    goto L_08A6F440;
L_08A6F440:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    goto L_08A6F444;
L_08A6F444:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(11116), ctx.gpr[5]);
    goto L_08A6F450;
L_08A6F450:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (17164u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A6F468u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A6F468u) goto L_08A6F468;
    return;
L_08A6F468:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6F5E4;
      }
      goto L_08A6F478;
    }
L_08A6F478:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A6F508;
      }
      goto L_08A6F484;
    }
L_08A6F484:
    ctx.gpr[4] = (0u | 5591u);
    ctx.gpr[5] = (18042u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 30u);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (18042u << 16u);
      if (branch_taken) {
          goto L_08A6F4D0;
      }
      goto L_08A6F4B8;
    }
L_08A6F4B8:
    ctx.gpr[4] = (18042u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6F4F4;
      }
      goto L_08A6F4D0;
    }
L_08A6F4D0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08A6F4F4;
L_08A6F4F4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A6F5A0;
      }
      goto L_08A6F508;
    }
L_08A6F508:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F524;
      }
      goto L_08A6F510;
    }
L_08A6F510:
    ctx.gpr[4] = (0u | 5602u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 35u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A6F5A0;
      }
      goto L_08A6F524;
    }
L_08A6F524:
    ctx.gpr[4] = (18042u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 38u);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A6F568;
      }
      goto L_08A6F550;
    }
L_08A6F550:
    ctx.gpr[4] = (18042u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6F590;
      }
      goto L_08A6F568;
    }
L_08A6F568:
    ctx.gpr[4] = (18042u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08A6F590;
L_08A6F590:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A6F5A0;
L_08A6F5A0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[4] = (16576u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17164u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A6F5E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A6F5E4u) goto L_08A6F5E4;
    return;
L_08A6F5E4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A6F928;
      }
      goto L_08A6F5EC;
    }
L_08A6F5EC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A6F970;
      }
      goto L_08A6F620;
    }
L_08A6F620:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6F970;
      }
      goto L_08A6F63C;
    }
L_08A6F63C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (17096u << 16u);
      if (branch_taken) {
          goto L_08A6F970;
      }
      goto L_08A6F650;
    }
L_08A6F650:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A6F678u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A6F678u) goto L_08A6F678;
    return;
L_08A6F678:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08A6F688;
      }
      goto L_08A6F680;
    }
L_08A6F680:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) <= 0;
    ctx.gpr[4] = (17768u << 16u);
      if (branch_taken) {
          goto L_08A6F728;
      }
      goto L_08A6F688;
    }
L_08A6F688:
    ctx.gpr[4] = (17673u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (0u | 18000u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.gpr[4] = (0u | 2204u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
        goto L_08A6F6B4;
    }
    goto L_08A6F6B4;
L_08A6F6B4:
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[7] = (0u | 255u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.lo);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (20224u << 16u);
      if (branch_taken) {
          goto L_08A6F6F8;
      }
      goto L_08A6F6EC;
    }
L_08A6F6EC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6F710;
      }
      goto L_08A6F6F8;
    }
L_08A6F6F8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    goto L_08A6F710;
L_08A6F710:
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08A6F71C;
    }
    goto L_08A6F71C;
L_08A6F71C:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A6F7B0;
      }
      goto L_08A6F728;
    }
L_08A6F728:
    ctx.gpr[5] = (ctx.gpr[4] | 4096u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (20224u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u | 14287u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (0u | 3713u);
      if (branch_taken) {
          goto L_08A6F770;
      }
      goto L_08A6F754;
    }
L_08A6F754:
    ctx.gpr[6] = (17768u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 4096u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6F79C;
      }
      goto L_08A6F770;
    }
L_08A6F770:
    ctx.gpr[6] = (17768u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 4096u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    goto L_08A6F79C;
L_08A6F79C:
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_08A6F7A8;
    }
    goto L_08A6F7A8;
L_08A6F7A8:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A6F7B0;
L_08A6F7B0:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6F850;
      }
      goto L_08A6F7C8;
    }
L_08A6F7C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A6F7E8;
      }
      goto L_08A6F7DC;
    }
L_08A6F7DC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A6F7E8;
L_08A6F7E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08A6F808;
      }
      goto L_08A6F7FC;
    }
L_08A6F7FC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_08A6F808;
L_08A6F808:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[12] + ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (20224u << 16u);
      if (branch_taken) {
          goto L_08A6F834;
      }
      goto L_08A6F828;
    }
L_08A6F828:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A6F84C;
      }
      goto L_08A6F834;
    }
L_08A6F834:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08A6F84C;
L_08A6F84C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A6F850;
L_08A6F850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(11120)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F88C;
      }
      goto L_08A6F868;
    }
L_08A6F868:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11120)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(197));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
        goto L_08A6F884;
    }
    goto L_08A6F884;
L_08A6F884:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A6F8AC;
      }
      goto L_08A6F88C;
    }
L_08A6F88C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11120)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-197));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
        goto L_08A6F8A8;
    }
    goto L_08A6F8A8;
L_08A6F8A8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A6F8AC;
L_08A6F8AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(11120), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 5601u);
      if (branch_taken) {
          goto L_08A6F970;
      }
      goto L_08A6F8C4;
    }
L_08A6F8C4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 35u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16544u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16800u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A6F920u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A6F920u) goto L_08A6F920;
    return;
L_08A6F920:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F970;
      }
      goto L_08A6F928;
    }
L_08A6F928:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6F95Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A6D618;
L_08A6F95C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
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
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A6F970;
L_08A6F970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F994;
      }
      goto L_08A6F980;
    }
L_08A6F980:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F994;
      }
      goto L_08A6F98C;
    }
L_08A6F98C:
    ctx.gpr[31] = (0x08A6F994u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A6F994u) goto L_08A6F994;
    return;
L_08A6F994:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A6F9C4;
      }
      goto L_08A6F99C;
    }
L_08A6F99C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F9C0;
      }
      goto L_08A6F9AC;
    }
L_08A6F9AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F9C0;
      }
      goto L_08A6F9B8;
    }
L_08A6F9B8:
    ctx.gpr[31] = (0x08A6F9C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A6F9C0u) goto L_08A6F9C0;
    return;
L_08A6F9C0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A6F9C4;
L_08A6F9C4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6FA00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[6]);
    ctx.gpr[6] = (17561u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 8192u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[18]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 22u, 0x08A70178u>(ctx, &aot_mem); return;
      }
      goto L_08A6FA60;
    }
L_08A6FA60:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[19] = (0u | 17u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[31] = (0x08A6FA74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 304u, 0x088B5DD4u>(ctx, &aot_mem) && ctx.pc == 0x08A6FA74u) goto L_08A6FA74;
    return;
L_08A6FA74:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A6FAAC;
      }
      goto L_08A6FA80;
    }
L_08A6FA80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 26u, 0x08A7019Cu>(ctx, &aot_mem); return;
      }
      goto L_08A6FA90;
    }
L_08A6FA90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 26u, 0x08A7019Cu>(ctx, &aot_mem); return;
      }
      goto L_08A6FA9C;
    }
L_08A6FA9C:
    ctx.gpr[31] = (0x08A6FAA4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A6FAA4u) goto L_08A6FAA4;
    return;
L_08A6FAA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 26u, 0x08A7019Cu>(ctx, &aot_mem); return;
      }
      goto L_08A6FAAC;
    }
L_08A6FAAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08A6FAB8u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A6FAB8u) goto L_08A6FAB8;
    return;
L_08A6FAB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A6FACC;
      }
      goto L_08A6FAC4;
    }
L_08A6FAC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08A6FB08;
      }
      goto L_08A6FACC;
    }
L_08A6FACC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6FB04;
      }
      goto L_08A6FAFC;
    }
L_08A6FAFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08A6FB08;
      }
      goto L_08A6FB04;
    }
L_08A6FB04:
    ctx.gpr[20] = (0u | 0u);
    goto L_08A6FB08;
L_08A6FB08:
    ctx.gpr[4] = (0u | 169u);
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A6FDF0;
      }
      goto L_08A6FB14;
    }
L_08A6FB14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1729)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6FBB0;
      }
      goto L_08A6FB24;
    }
L_08A6FB24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (17150u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (17914u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[21] = (0u | 127u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (20224u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
        goto L_08A6FB74;
    }
    goto L_08A6FB74;
L_08A6FB74:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
        goto L_08A6FB94;
    }
    goto L_08A6FB84;
L_08A6FB84:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(14000));
      if (branch_taken) {
          goto L_08A6FBA8;
      }
      goto L_08A6FB94;
    }
L_08A6FB94:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(14000));
    goto L_08A6FBA8;
L_08A6FBA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6FBB8;
      }
      goto L_08A6FBB0;
    }
L_08A6FBB0:
    ctx.gpr[21] = (0u | 127u);
    ctx.gpr[18] = (0u | 25000u);
    goto L_08A6FBB8;
L_08A6FBB8:
    ctx.gpr[4] = (16025u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6FC94;
      }
      goto L_08A6FBD8;
    }
L_08A6FBD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6FC94;
      }
      goto L_08A6FBF8;
    }
L_08A6FBF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(588)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6FC94;
      }
      goto L_08A6FC10;
    }
L_08A6FC10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1732)));
    ctx.gpr[4] = (17150u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 127u);
    ctx.gpr[4] = (17914u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
        goto L_08A6FC60;
    }
    goto L_08A6FC60;
L_08A6FC60:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
        goto L_08A6FC80;
    }
    goto L_08A6FC70;
L_08A6FC70:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(14000));
      if (branch_taken) {
          goto L_08A6FC94;
      }
      goto L_08A6FC80;
    }
L_08A6FC80:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(14000));
    goto L_08A6FC94;
L_08A6FC94:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6FD3C;
      }
      goto L_08A6FC9C;
    }
L_08A6FC9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(692)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6FCD0;
      }
      goto L_08A6FCB0;
    }
L_08A6FCB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(692)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
        goto L_08A6FCC8;
    }
    goto L_08A6FCC8;
L_08A6FCC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A6FCEC;
      }
      goto L_08A6FCD0;
    }
L_08A6FCD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(692)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
        goto L_08A6FCE8;
    }
    goto L_08A6FCE8;
L_08A6FCE8:
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    goto L_08A6FCEC;
L_08A6FCEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(688)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6FD20;
      }
      goto L_08A6FD00;
    }
L_08A6FD00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(688)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(800));
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
        goto L_08A6FD18;
    }
    goto L_08A6FD18;
L_08A6FD18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A6FD3C;
      }
      goto L_08A6FD20;
    }
L_08A6FD20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(688)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-800));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
        goto L_08A6FD38;
    }
    goto L_08A6FD38;
L_08A6FD38:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A6FD3C;
L_08A6FD3C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6FDD4;
      }
      goto L_08A6FD44;
    }
L_08A6FD44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A6FD54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 287u, 0x08A5DDB0u>(ctx, &aot_mem) && ctx.pc == 0x08A6FD54u) goto L_08A6FD54;
    return;
L_08A6FD54:
    ctx.gpr[6] = (16908u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[21] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A6FD70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A6FD70u) goto L_08A6FD70;
    return;
L_08A6FD70:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08A6FDD4;
      }
      goto L_08A6FD80;
    }
L_08A6FD80:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5563u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A6FDD4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A6FDD4u) goto L_08A6FDD4;
    return;
L_08A6FDD4:
    if (ctx.gpr[20] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        (void)rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 23u, 0x08A7017Cu>(ctx, &aot_mem); return;
    }
    goto L_08A6FDDC;
L_08A6FDDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(692), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(688), ctx.gpr[18]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 22u, 0x08A70178u>(ctx, &aot_mem); return;
      }
      goto L_08A6FDF0;
    }
L_08A6FDF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        (void)rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 23u, 0x08A7017Cu>(ctx, &aot_mem); return;
    }
    goto L_08A6FDFC;
L_08A6FDFC:
    if (ctx.gpr[20] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08A6FE2C;
    }
    goto L_08A6FE04;
L_08A6FE04:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25440));
    ctx.gpr[31] = (0x08A6FE14u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 27u, 0x08A980DCu>(ctx, &aot_mem) && ctx.pc == 0x08A6FE14u) goto L_08A6FE14;
    return;
L_08A6FE14:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A6FE20u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1088u, 0x08A97F64u>(ctx, &aot_mem) && ctx.pc == 0x08A6FE20u) goto L_08A6FE20;
    return;
L_08A6FE20:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A6FE68;
      }
      goto L_08A6FE2C;
    }
L_08A6FE2C:
    ctx.gpr[5] = (17279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(588)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[4] << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[22] = (ctx.gpr[4] << 16u);
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    goto L_08A6FE68;
L_08A6FE68:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
        goto L_08A6FE70;
    }
    goto L_08A6FE70;
L_08A6FE70:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) & 0x7FFFFFFFu);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    ctx.gpr[31] = (0x08A6FE88u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 527u, 0x08A06A44u>(ctx, &aot_mem) && ctx.pc == 0x08A6FE88u) goto L_08A6FE88;
    return;
L_08A6FE88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6FED4;
      }
      goto L_08A6FED0;
    }
L_08A6FED0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    goto L_08A6FED4;
L_08A6FED4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) <= 0;
    ctx.gpr[4] = (ctx.gpr[22] << 7u);
      if (branch_taken) {
          goto L_08A6FF7C;
      }
      goto L_08A6FEDC;
    }
L_08A6FEDC:
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[22]);
    ctx.gpr[4] = (0u | 255u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[6] = (ctx.lo);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[18] = (0u | 127u);
        goto L_08A6FF1C;
    }
    goto L_08A6FF1C;
L_08A6FF1C:
    ctx.gpr[5] = (ctx.gpr[22] << 6u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[22] = (0u | 22000u);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14000));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08A6FF5C;
      }
      goto L_08A6FF50;
    }
L_08A6FF50:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_08A6FF5C;
L_08A6FF5C:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[21] = (0u | 22000u);
        goto L_08A6FF74;
    }
    goto L_08A6FF74;
L_08A6FF74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08A6FF88;
      }
      goto L_08A6FF7C;
    }
L_08A6FF7C:
    ctx.gpr[18] = (0u | 127u);
    ctx.gpr[21] = (0u | 18000u);
    ctx.gpr[22] = (0u | 1u);
    goto L_08A6FF88;
L_08A6FF88:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 5u, 0x08A70038u>(ctx, &aot_mem); return;
      }
      goto L_08A6FF90;
    }
L_08A6FF90:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 5u, 0x08A70038u>(ctx, &aot_mem); return;
      }
      goto L_08A6FF98;
    }
L_08A6FF98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(692)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6FFCC;
      }
      goto L_08A6FFAC;
    }
L_08A6FFAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(692)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
        goto L_08A6FFC4;
    }
    goto L_08A6FFC4;
L_08A6FFC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A6FFE8;
      }
      goto L_08A6FFCC;
    }
L_08A6FFCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(692)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
        goto L_08A6FFE4;
    }
    goto L_08A6FFE4;
L_08A6FFE4:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A6FFE8;
L_08A6FFE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(688)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 3u, 0x08A7001Cu>(ctx, &aot_mem); return;
      }
      goto L_08A6FFFC;
    }
L_08A6FFFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.pc = 0x08A70000u; return;
}

void recomp_unit_0154(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0154_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_154(Runtime &runtime) {
    runtime.register_generated_unit(154u, 0x08A6C000u, 16384u, &recomp_unit_0154, &recomp_unit_0154_entry);
    runtime.register_function(0x08A6C000u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C010u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C028u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C044u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C048u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C050u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C06Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C074u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C090u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C098u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C0B4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C0BCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C0D8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C0E0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C0FCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C104u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C120u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C128u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C144u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C14Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C168u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C170u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C184u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C190u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C1B4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C1CCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C1E8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C1ECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C1F4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C210u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C218u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C234u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C23Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C258u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C260u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C27Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C284u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C2A0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C2A8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C2C4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C2CCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C2E8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C2F0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C30Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C314u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C328u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C334u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C358u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C364u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C37Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C38Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C39Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C3A4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C3ACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C3C0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C3D4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C3E4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C404u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C410u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C42Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C434u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C444u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C44Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C458u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C464u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C470u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C494u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C4ACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C4C8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C4CCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C4D4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C4F0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C4F8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C514u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C51Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C538u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C540u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C55Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C564u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C580u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C588u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C5A4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C5ACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C5C8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C5D0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C5ECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C5F4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C610u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C618u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C634u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C63Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C658u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C660u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C67Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C684u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C694u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C6A4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C6B8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C6C4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C6E8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C700u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C71Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C720u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C728u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C744u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C74Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C768u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C770u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C78Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C794u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C7B0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C7B8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C7D4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C7DCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C7F8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C800u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C81Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C824u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C840u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C848u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C864u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C86Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C888u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C890u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C8ACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C8B4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C8D0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C8D8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C8F4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C8FCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C918u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C920u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C93Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C944u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C960u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C968u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C97Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C988u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C9C0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C9D4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C9E4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C9ECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C9F8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA00u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA08u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA10u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA1Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA24u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA2Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA34u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA40u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA48u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA54u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA5Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA64u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA6Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA78u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA80u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA88u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA90u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA9Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CAA4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CAB0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CAB8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CAC4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CACCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CAD8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CAE0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CAECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CAF4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CB04u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CB0Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CB1Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CB24u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CB34u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CB3Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CB4Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CB54u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CB64u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CB6Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CB7Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CB84u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CB94u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CB9Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CBACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CBB4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CBC4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CBCCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CBDCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CBE4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CBF4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CBFCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CC00u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CC1Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CC48u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CC60u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CC7Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CC80u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CC88u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CCA4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CCACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CCC8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CCD0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CCECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CCF4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CCF8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CD04u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CD30u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CD48u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CD64u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CD68u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CD70u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CD8Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CD94u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CDB0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CDB8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CDD4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CDDCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CDF8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CE00u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CE04u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CE10u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CE94u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CEB4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CEDCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CEF0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CF08u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CF18u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CF54u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CF68u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CFA4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CFC4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CFD0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CFE0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CFFCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D018u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D024u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D02Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D038u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D044u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D08Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D0ACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D0BCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D0D8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D0E8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D140u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D154u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D15Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D164u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D198u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D1A4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D1ACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D1BCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D1ECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D1FCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D258u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D27Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D29Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D2A8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D2B4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D2C0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D2C4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D2D8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D2E4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D2F0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D30Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D314u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D320u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D32Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D344u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D354u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D360u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D378u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D380u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D38Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D398u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D3ACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D3B4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D3BCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D3C4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D3ECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D3F4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D3FCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D404u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D410u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D41Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D430u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D438u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D440u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D448u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D470u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D478u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D480u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D488u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D49Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D4A8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D4E8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D4F0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D4F8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D500u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D50Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D528u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D530u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D538u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D548u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D550u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D558u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D55Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D568u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D584u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D588u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D594u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D5A8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D5B4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D5C0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D5CCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D5DCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D5F4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D5FCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D610u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D618u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D67Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D6ACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D6C0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D6C8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D6D0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D718u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D730u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D754u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D79Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D7B0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D7C0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D7CCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D7DCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D7E8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D7F4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D7FCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D804u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D80Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D814u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D81Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D824u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D82Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D834u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D844u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D84Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D858u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D860u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D9C8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D9D8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DA30u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DA60u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DA64u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DA70u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DA78u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DA84u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DA9Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DAACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DAC0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DAD4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DAF4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DB20u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DB38u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DB40u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DB5Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DB60u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DB80u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DBB0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DBC0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DBCCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DBD4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DBE0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DBE8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DBF4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DC00u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DC0Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DC14u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DC1Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DC28u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DC30u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DC38u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DC68u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DC74u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DC80u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DC9Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DCACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DCB4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DCC0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DCC8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DCD0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD00u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD0Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD3Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD44u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD50u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD5Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD68u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD70u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD78u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD8Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD90u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD9Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DDA8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DDB0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DDC0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DDC8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DDD0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DDDCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DDE4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DE00u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DE10u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DE18u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DE20u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DE28u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DE34u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DE3Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DE4Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DE54u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DE5Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DE64u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DE70u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DE84u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DE9Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DEA4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DEACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DEB4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DEBCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DEC4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DECCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DED0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DED8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DEE4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DEF0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DEF8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DEFCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DF20u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DF78u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DF80u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DF90u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DFACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DFB4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DFBCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DFD8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DFECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DFF8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DFFCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E024u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E040u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E064u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E080u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E088u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E094u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E0A4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E0BCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E0C8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E0D4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E0E0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E0E8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E0F4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E100u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E108u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E114u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E120u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E128u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E134u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E140u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E148u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E154u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E160u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E16Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E174u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E188u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E194u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E19Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E1A8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E1B4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E1C0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E1C8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E1D8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E1E4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E1ECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E204u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E210u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E228u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E230u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E23Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E248u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E254u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E260u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E26Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E278u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E284u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E290u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E2A0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E2B0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E2B8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E2C4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E2D0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E2DCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E2E4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E2ECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E2F4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E300u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E30Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E318u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E320u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E328u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E338u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E344u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E350u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E35Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E368u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E370u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E378u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E380u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E38Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E394u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E3A0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E3B8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E3C4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E3D0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E3DCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E3E8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E3F4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E400u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E408u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E414u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E420u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E428u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E434u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E440u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E44Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E458u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E464u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E470u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E478u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E484u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E4A8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E520u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E528u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E534u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E544u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E550u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E558u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E590u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E5A0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E604u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E608u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E630u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E650u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E660u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E66Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E684u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E698u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E6A8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E6B4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E6BCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E6C4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E6DCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E6E4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E6F4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E710u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E72Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E734u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E76Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E780u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E788u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E7A0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E7B0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E7BCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E7D0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E7D8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E804u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E83Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E848u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E860u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E86Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E878u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E8A4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E8C0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E8ECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E8F8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E904u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E91Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E920u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E964u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E96Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E98Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E994u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E9A4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E9F0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EA00u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EA20u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EA3Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EA44u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EA64u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EA6Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EA94u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EAB0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EADCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EAE8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EAF0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EAFCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EB04u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EB0Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EB18u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EB1Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EB30u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EB44u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EB50u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EB58u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EB60u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EB6Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EB7Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EB8Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EB98u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EBA8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EBB8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EBC4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EBCCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EBD4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EBD8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EC00u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EC08u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EC10u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EC3Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EC74u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EC80u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EC98u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ECA4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ECB0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ECDCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ECF8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ED24u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ED30u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ED38u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ED50u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ED64u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ED70u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ED84u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ED90u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EDB0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EDBCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EDD4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EDD8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EDF0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EE0Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EE14u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EE30u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EE34u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EE40u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EE58u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EE68u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EE74u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EEA8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EEC0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EEE4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EEF8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EF00u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EF14u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EF40u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EF58u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EF80u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EF90u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EFD4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EFDCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EFECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F008u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F018u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F030u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F074u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F084u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F08Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F0C4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F0E0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F108u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F114u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F140u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F15Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F188u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F190u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F1E0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F1E4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F210u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F218u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F220u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F24Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F284u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F290u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F2A8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F2B4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F2C0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F2ECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F308u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F334u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F340u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F348u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F360u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F374u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F380u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F394u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F3A0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F3C0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F3CCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F3E4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F3E8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F400u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F41Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F424u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F440u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F444u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F450u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F468u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F478u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F484u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F4B8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F4D0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F4F4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F508u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F510u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F524u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F550u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F568u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F590u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F5A0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F5E4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F5ECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F620u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F63Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F650u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F678u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F680u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F688u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F6B4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F6ECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F6F8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F710u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F71Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F728u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F754u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F770u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F79Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F7A8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F7B0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F7C8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F7DCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F7E8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F7FCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F808u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F828u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F834u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F84Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F850u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F868u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F884u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F88Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F8A8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F8ACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F8C4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F920u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F928u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F95Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F970u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F980u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F98Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F994u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F99Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F9ACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F9B8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F9C0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F9C4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FA00u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FA60u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FA74u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FA80u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FA90u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FA9Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FAA4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FAACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FAB8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FAC4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FACCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FAFCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FB04u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FB08u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FB14u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FB24u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FB74u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FB84u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FB94u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FBA8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FBB0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FBB8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FBD8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FBF8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FC10u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FC60u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FC70u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FC80u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FC94u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FC9Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FCB0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FCC8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FCD0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FCE8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FCECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FD00u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FD18u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FD20u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FD38u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FD3Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FD44u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FD54u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FD70u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FD80u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FDD4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FDDCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FDF0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FDFCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FE04u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FE14u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FE20u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FE2Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FE68u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FE70u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FE88u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FED0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FED4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FEDCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FF1Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FF50u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FF5Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FF74u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FF7Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FF88u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FF90u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FF98u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FFACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FFC4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FFCCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FFE4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FFE8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FFFCu, &recomp_unit_0154, "recomp_unit_0154");
}
} // namespace psprecomp
