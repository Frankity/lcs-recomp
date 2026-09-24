#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0163[4092] = {
    1, 0, 0, 2, 0, 3, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 6, 0, 0, 0, 7, 8, 0, 0, 0, 0, 9, 0, 0, 10, 0, 11,
    0, 0, 0, 12, 0, 0, 13, 0, 14, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0,
    0, 18, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 22, 0, 23, 0, 24, 0, 0, 0, 25, 0, 0, 26, 0, 27, 0,
    28, 0, 29, 0, 30, 0, 31, 0, 32, 0, 33, 0, 34, 0, 35, 0, 36, 0, 37, 0, 38, 0, 39, 0, 40, 0, 41, 0, 0, 42, 0, 0,
    43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 46, 0, 47, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 52,
    0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 58, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0,
    61, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 66, 0, 67, 0, 0, 68, 0, 69, 0, 0, 70, 0, 71, 0, 0,
    0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 74, 0, 75, 0, 0, 0, 76, 0, 77, 0, 0, 78, 0, 79, 0, 80, 0, 81, 0, 82, 0,
    83, 0, 84, 0, 0, 85, 0, 86, 0, 0, 87, 0, 88, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 92, 0, 93, 0, 94, 0,
    95, 0, 96, 0, 97, 0, 98, 0, 0, 0, 99, 0, 100, 0, 0, 0, 101, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0,
    0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0, 112, 0, 0, 113, 0, 114,
    0, 0, 0, 115, 0, 116, 0, 0, 117, 0, 118, 0, 0, 119, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0,
    123, 0, 124, 0, 125, 0, 0, 0, 126, 0, 127, 0, 128, 0, 129, 0, 0, 0, 130, 0, 131, 0, 0, 0, 132, 133, 0, 0, 0, 0, 0, 0,
    134, 0, 135, 0, 0, 136, 0, 137, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0,
    0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 149, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0,
    0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0,
    156, 0, 0, 0, 0, 157, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0,
    0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 165, 0, 0, 166, 0, 0, 167, 0, 168, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 171, 0, 172,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 179, 0, 0,
    180, 0, 0, 0, 181, 182, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 187, 0, 0, 0, 188, 0, 189, 0, 190, 0,
    0, 0, 0, 0, 0, 191, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 195, 0, 0, 196,
    0, 0, 197, 0, 0, 0, 198, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0,
    0, 0, 0, 202, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0,
    0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216,
    0, 217, 0, 218, 0, 219, 0, 220, 0, 0, 221, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 224, 0, 225, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 230, 0, 231, 0, 232, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 234, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 239,
    0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248,
    0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 254, 0, 255, 0, 256, 0, 257, 0, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 0,
    260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 264, 0, 265, 0, 0, 0, 266, 0, 267, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 271, 272, 0, 0, 0, 273,
    274, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 277, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 281, 0, 282, 0, 0, 0,
    0, 0, 0, 283, 0, 284, 0, 0, 0, 0, 285, 0, 286, 0, 0, 0, 287, 0, 288, 0, 0, 289, 0, 290, 0, 291, 0, 0, 0, 0, 292, 0,
    0, 293, 0, 0, 0, 0, 294, 0, 295, 0, 296, 0, 0, 0, 297, 0, 298, 0, 299, 0, 0, 300, 0, 0, 301, 0, 0, 302, 0, 0, 0, 0,
    0, 0, 0, 0, 303, 0, 0, 304, 0, 305, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 308, 0, 0, 309, 0, 0, 310, 0, 311,
    0, 0, 312, 0, 313, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 317, 0, 318, 0, 319, 0, 0, 320, 0,
    0, 0, 321, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 324, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0,
    0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 329, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333,
    0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 0, 341, 0, 0, 342, 0, 0, 343, 0, 0, 344, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 350, 0, 0, 351, 0, 352, 0, 0, 0, 353, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356,
    0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 361, 0,
    0, 0, 362, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 365, 0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 369, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 372, 0, 373, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 376, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 378, 0, 379, 0, 0, 380, 0, 381, 0, 0, 382, 0, 0, 383, 0, 0, 384, 0, 0, 0, 385, 0, 386, 387, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 390, 0, 0, 0, 391, 0, 392, 0, 0, 0, 393, 0, 0, 394, 0, 395, 0,
    396, 0, 397, 0, 0, 398, 0, 0, 399, 0, 400, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 405, 0,
    406, 0, 0, 407, 0, 408, 0, 409, 0, 0, 410, 0, 411, 0, 0, 0, 412, 0, 0, 0, 413, 0, 414, 0, 0, 415, 0, 416, 0, 0, 417, 0,
    0, 0, 0, 0, 418, 0, 419, 0, 0, 420, 0, 421, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 0,
    0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 428, 0, 429, 0, 430, 0, 431, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0,
    0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 437, 0, 438, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 0, 441, 0, 442, 0, 0, 0,
    443, 0, 444, 0, 445, 0, 446, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 455, 0, 0, 456, 0, 0, 0, 457, 0,
    0, 0, 458, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 462, 0, 463, 0, 464, 0, 465, 0, 0, 466, 0, 467, 0, 0, 0, 468, 0, 0, 0, 469, 0, 470, 0, 471, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 478, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 485,
    0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0,
    0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 491,
    0, 492, 0, 493, 494, 0, 0, 495, 0, 0, 0, 0, 496, 0, 497, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0,
    500, 0, 501, 0, 502, 503, 0, 0, 504, 0, 0, 0, 0, 505, 0, 506, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509,
    0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0,
    0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 515, 0, 0, 0, 516, 0, 0, 517, 0, 518, 0, 0, 519, 520, 0, 0, 0,
    521, 0, 522, 0, 0, 0, 0, 523, 0, 0, 524, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 527, 0, 0, 528,
    0, 0, 0, 529, 0, 530, 0, 0, 0, 0, 531, 0, 0, 0, 0, 532, 0, 0, 533, 0, 0, 534, 0, 535, 0, 0, 0, 536, 0, 537, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 539, 540, 0, 541, 0, 0, 542, 0, 0, 543, 0, 0, 0, 544,
    0, 545, 0, 546, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 550, 0, 0, 551, 0, 0, 0, 0, 552, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 555, 0, 556, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 558, 0, 559, 0, 560, 0, 0, 561, 0, 562, 0, 563, 0,
    564, 0, 565, 0, 566, 0, 0, 0, 567, 0, 0, 0, 568, 0, 569, 0, 570, 0, 0, 571, 0, 0, 572, 0, 0, 573, 0, 0, 0, 574, 0, 0,
    0, 575, 0, 576, 0, 0, 0, 0, 577, 0, 0, 578, 0, 0, 579, 0, 580, 0, 0, 0, 581, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 584, 0, 0, 585, 0, 0, 586, 587, 0, 588, 0, 589, 0, 0, 590, 0, 0, 0, 591,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 594,
    0, 595, 0, 596, 0, 597, 0, 598, 0, 599, 0, 600, 0, 601, 0, 602, 0, 603, 0, 604, 0, 605, 0, 606, 0, 607, 0, 608, 0, 609, 610, 0,
    611, 0, 0, 612, 0, 613, 0, 614, 0, 0, 615, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 618, 0, 0, 0, 0, 0,
    619, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 621, 0, 622, 0, 623, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 625, 0,
    626, 0, 627, 0, 0, 628, 0, 0, 629, 0, 0, 630, 631, 0, 0, 632, 0, 633, 0, 0, 0, 0, 0, 634, 0, 635, 0, 0, 636, 0, 637, 0,
    638, 0, 0, 0, 0, 0, 639, 0, 0, 640, 0, 641, 0, 0, 642, 0, 0, 643, 0, 644, 0, 645, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0,
    0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 653, 654, 0, 655, 0, 0, 0, 0, 0, 656, 0, 0, 657, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 664, 0, 0, 665, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 668, 0, 0,
    0, 0, 669, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 672, 0, 673, 0, 674, 0, 0, 0, 0, 0,
    675, 0, 0, 676, 0, 0, 0, 0, 0, 677, 0, 678, 0, 679, 0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0, 0, 0, 0, 681, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 684, 0, 685, 0, 686, 0, 0, 0, 687, 688, 0, 0, 0,
    0, 689, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 690, 691, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 694, 0, 0, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 697, 0, 0, 0, 698,
    0, 0, 0, 0, 0, 0, 699, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 0, 0, 702, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 703, 704, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 706, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 710, 0, 0, 0, 0,
    711, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 713, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 716, 0, 0, 717, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0, 719, 0, 0, 0, 720, 0, 721, 722, 0, 0,
    0, 723, 0, 0, 724, 0, 0, 725, 0, 0, 0, 726, 0, 727, 0, 0, 0, 0, 0, 0, 728, 0, 0, 0, 729, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 731, 0, 732, 0, 0, 0, 733, 0, 0, 0, 734, 0, 735, 0, 0, 736, 0, 0, 0,
    0, 0, 0, 737, 738, 0, 0, 739, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 741, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 744, 0, 0, 0, 745, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 747, 0, 0, 0, 748, 0, 0, 0, 0, 0, 749, 0, 750, 751, 0, 752, 0, 0, 0, 0,
    0, 0, 753, 0, 0, 0, 0, 754, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 756, 0, 0, 757, 0, 0, 758, 0, 759, 760, 0, 761, 0, 0,
    762, 0, 0, 0, 0, 0, 763, 0, 0, 764, 0, 0, 765, 0, 0, 766, 0, 0, 767, 0, 0, 768, 0, 0, 769, 0, 0, 770, 0, 0, 771, 0,
    0, 772, 0, 773, 0, 774, 0, 0, 0, 0, 775, 0, 776, 0, 0, 0, 0, 777, 0, 778, 0, 0, 0, 0, 779, 0, 780, 0, 0, 0, 0, 781,
    0, 782, 0, 0, 0, 0, 783, 0, 784, 0, 0, 0, 0, 785, 0, 786, 0, 0, 0, 0, 787, 0, 788, 0, 0, 0, 0, 789, 0, 790, 0, 0,
    0, 0, 791, 0, 792, 0, 793, 0, 794, 0, 795, 0, 796, 0, 797, 0, 798, 0, 799, 0, 800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    801, 0, 0, 0, 0, 0, 0, 0, 0, 802, 0, 0, 803, 0, 0, 804, 0, 805, 806, 0, 807, 0, 0, 808, 0, 0, 0, 0, 0, 809, 0, 0,
    810, 0, 0, 811, 0, 0, 812, 0, 0, 813, 0, 0, 814, 0, 0, 815, 0, 0, 816, 0, 0, 817, 0, 0, 818, 0, 819, 0, 820, 0, 0, 0,
    0, 821, 0, 822, 0, 0, 0, 0, 823, 0, 824, 0, 0, 0, 0, 825, 0, 826, 0, 0, 0, 0, 827, 0, 828, 0, 0, 0, 0, 829, 0, 830,
    0, 0, 0, 0, 831, 0, 832, 0, 0, 0, 0, 833, 0, 834, 0, 0, 0, 0, 835, 0, 836, 0, 837, 0, 838, 0, 839, 0, 840, 0, 841, 0,
    842, 0, 843, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 844, 0, 0, 0, 0, 0, 0, 0, 0, 845, 0, 0, 846, 0, 0, 847, 0, 848,
    849, 0, 850, 0, 0, 851, 0, 0, 0, 0, 0, 852, 0, 0, 853, 0, 0, 854, 0, 0, 855, 0, 0, 856, 0, 0, 857, 0, 0, 858, 0, 0,
    859, 0, 0, 860, 0, 0, 861, 0, 862, 0, 863, 0, 0, 0, 0, 864, 0, 865, 0, 0, 0, 0, 866, 0, 867, 0, 0, 0, 0, 868, 0, 869,
    0, 0, 0, 0, 870, 0, 871, 0, 0, 0, 0, 872, 0, 873, 0, 0, 0, 0, 874, 0, 875, 0, 0, 0, 0, 876, 0, 877,
};
void recomp_unit_0163_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A90000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0163[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A90000;
    case 2u: goto L_08A9000C;
    case 3u: goto L_08A90014;
    case 4u: goto L_08A90028;
    case 5u: goto L_08A90030;
    case 6u: goto L_08A90040;
    case 7u: goto L_08A90050;
    case 8u: goto L_08A90054;
    case 9u: goto L_08A90068;
    case 10u: goto L_08A90074;
    case 11u: goto L_08A9007C;
    case 12u: goto L_08A9008C;
    case 13u: goto L_08A90098;
    case 14u: goto L_08A900A0;
    case 15u: goto L_08A900AC;
    case 16u: goto L_08A900B8;
    case 17u: goto L_08A900F8;
    case 18u: goto L_08A90104;
    case 19u: goto L_08A90114;
    case 20u: goto L_08A90124;
    case 21u: goto L_08A90138;
    case 22u: goto L_08A90144;
    case 23u: goto L_08A9014C;
    case 24u: goto L_08A90154;
    case 25u: goto L_08A90164;
    case 26u: goto L_08A90170;
    case 27u: goto L_08A90178;
    case 28u: goto L_08A90180;
    case 29u: goto L_08A90188;
    case 30u: goto L_08A90190;
    case 31u: goto L_08A90198;
    case 32u: goto L_08A901A0;
    case 33u: goto L_08A901A8;
    case 34u: goto L_08A901B0;
    case 35u: goto L_08A901B8;
    case 36u: goto L_08A901C0;
    case 37u: goto L_08A901C8;
    case 38u: goto L_08A901D0;
    case 39u: goto L_08A901D8;
    case 40u: goto L_08A901E0;
    case 41u: goto L_08A901E8;
    case 42u: goto L_08A901F4;
    case 43u: goto L_08A90200;
    case 44u: goto L_08A90210;
    case 45u: goto L_08A90220;
    case 46u: goto L_08A90228;
    case 47u: goto L_08A90230;
    case 48u: goto L_08A90244;
    case 49u: goto L_08A9024C;
    case 50u: goto L_08A9026C;
    case 51u: goto L_08A90274;
    case 52u: goto L_08A9027C;
    case 53u: goto L_08A9028C;
    case 54u: goto L_08A90294;
    case 55u: goto L_08A902A8;
    case 56u: goto L_08A902C0;
    case 57u: goto L_08A902C8;
    case 58u: goto L_08A902D4;
    case 59u: goto L_08A902DC;
    case 60u: goto L_08A902E4;
    case 61u: goto L_08A90300;
    case 62u: goto L_08A90308;
    case 63u: goto L_08A90318;
    case 64u: goto L_08A90334;
    case 65u: goto L_08A9033C;
    case 66u: goto L_08A90344;
    case 67u: goto L_08A9034C;
    case 68u: goto L_08A90358;
    case 69u: goto L_08A90360;
    case 70u: goto L_08A9036C;
    case 71u: goto L_08A90374;
    case 72u: goto L_08A90394;
    case 73u: goto L_08A9039C;
    case 74u: goto L_08A903AC;
    case 75u: goto L_08A903B4;
    case 76u: goto L_08A903C4;
    case 77u: goto L_08A903CC;
    case 78u: goto L_08A903D8;
    case 79u: goto L_08A903E0;
    case 80u: goto L_08A903E8;
    case 81u: goto L_08A903F0;
    case 82u: goto L_08A903F8;
    case 83u: goto L_08A90400;
    case 84u: goto L_08A90408;
    case 85u: goto L_08A90414;
    case 86u: goto L_08A9041C;
    case 87u: goto L_08A90428;
    case 88u: goto L_08A90430;
    case 89u: goto L_08A90440;
    case 90u: goto L_08A90450;
    case 91u: goto L_08A90460;
    case 92u: goto L_08A90468;
    case 93u: goto L_08A90470;
    case 94u: goto L_08A90478;
    case 95u: goto L_08A90480;
    case 96u: goto L_08A90488;
    case 97u: goto L_08A90490;
    case 98u: goto L_08A90498;
    case 99u: goto L_08A904A8;
    case 100u: goto L_08A904B0;
    case 101u: goto L_08A904C0;
    case 102u: goto L_08A904C4;
    case 103u: goto L_08A904E8;
    case 104u: goto L_08A904F0;
    case 105u: goto L_08A90514;
    case 106u: goto L_08A90538;
    case 107u: goto L_08A90540;
    case 108u: goto L_08A90548;
    case 109u: goto L_08A90550;
    case 110u: goto L_08A90558;
    case 111u: goto L_08A90560;
    case 112u: goto L_08A90568;
    case 113u: goto L_08A90574;
    case 114u: goto L_08A9057C;
    case 115u: goto L_08A9058C;
    case 116u: goto L_08A90594;
    case 117u: goto L_08A905A0;
    case 118u: goto L_08A905A8;
    case 119u: goto L_08A905B4;
    case 120u: goto L_08A905BC;
    case 121u: goto L_08A905C4;
    case 122u: goto L_08A905F4;
    case 123u: goto L_08A90600;
    case 124u: goto L_08A90608;
    case 125u: goto L_08A90610;
    case 126u: goto L_08A90620;
    case 127u: goto L_08A90628;
    case 128u: goto L_08A90630;
    case 129u: goto L_08A90638;
    case 130u: goto L_08A90648;
    case 131u: goto L_08A90650;
    case 132u: goto L_08A90660;
    case 133u: goto L_08A90664;
    case 134u: goto L_08A90680;
    case 135u: goto L_08A90688;
    case 136u: goto L_08A90694;
    case 137u: goto L_08A9069C;
    case 138u: goto L_08A906A8;
    case 139u: goto L_08A906B4;
    case 140u: goto L_08A906C0;
    case 141u: goto L_08A906CC;
    case 142u: goto L_08A906D4;
    case 143u: goto L_08A906EC;
    case 144u: goto L_08A906F4;
    case 145u: goto L_08A90714;
    case 146u: goto L_08A90724;
    case 147u: goto L_08A90788;
    case 148u: goto L_08A90794;
    case 149u: goto L_08A907AC;
    case 150u: goto L_08A907B0;
    case 151u: goto L_08A907B8;
    case 152u: goto L_08A907E8;
    case 153u: goto L_08A907F8;
    case 154u: goto L_08A90808;
    case 155u: goto L_08A90878;
    case 156u: goto L_08A90880;
    case 157u: goto L_08A90894;
    case 158u: goto L_08A908A0;
    case 159u: goto L_08A908A8;
    case 160u: goto L_08A908C0;
    case 161u: goto L_08A908E4;
    case 162u: goto L_08A908F8;
    case 163u: goto L_08A90918;
    case 164u: goto L_08A90920;
    case 165u: goto L_08A90928;
    case 166u: goto L_08A90934;
    case 167u: goto L_08A90940;
    case 168u: goto L_08A90948;
    case 169u: goto L_08A90958;
    case 170u: goto L_08A90964;
    case 171u: goto L_08A90974;
    case 172u: goto L_08A9097C;
    case 173u: goto L_08A909A4;
    case 174u: goto L_08A909A8;
    case 175u: goto L_08A909D8;
    case 176u: goto L_08A90A24;
    case 177u: goto L_08A90A68;
    case 178u: goto L_08A90A70;
    case 179u: goto L_08A90A74;
    case 180u: goto L_08A90A80;
    case 181u: goto L_08A90A90;
    case 182u: goto L_08A90A94;
    case 183u: goto L_08A90A9C;
    case 184u: goto L_08A90AA8;
    case 185u: goto L_08A90AC8;
    case 186u: goto L_08A90AD4;
    case 187u: goto L_08A90AD8;
    case 188u: goto L_08A90AE8;
    case 189u: goto L_08A90AF0;
    case 190u: goto L_08A90AF8;
    case 191u: goto L_08A90B14;
    case 192u: goto L_08A90B18;
    case 193u: goto L_08A90B60;
    case 194u: goto L_08A90B68;
    case 195u: goto L_08A90B70;
    case 196u: goto L_08A90B7C;
    case 197u: goto L_08A90B88;
    case 198u: goto L_08A90B98;
    case 199u: goto L_08A90BA0;
    case 200u: goto L_08A90BAC;
    case 201u: goto L_08A90BF4;
    case 202u: goto L_08A90C0C;
    case 203u: goto L_08A90C14;
    case 204u: goto L_08A90C20;
    case 205u: goto L_08A90C6C;
    case 206u: goto L_08A90C8C;
    case 207u: goto L_08A90C94;
    case 208u: goto L_08A90CAC;
    case 209u: goto L_08A90D18;
    case 210u: goto L_08A90D20;
    case 211u: goto L_08A90D28;
    case 212u: goto L_08A90D30;
    case 213u: goto L_08A90D4C;
    case 214u: goto L_08A90D5C;
    case 215u: goto L_08A90D6C;
    case 216u: goto L_08A90D7C;
    case 217u: goto L_08A90D84;
    case 218u: goto L_08A90D8C;
    case 219u: goto L_08A90D94;
    case 220u: goto L_08A90D9C;
    case 221u: goto L_08A90DA8;
    case 222u: goto L_08A90DB4;
    case 223u: goto L_08A90DC4;
    case 224u: goto L_08A90E0C;
    case 225u: goto L_08A90E14;
    case 226u: goto L_08A90E1C;
    case 227u: goto L_08A90E30;
    case 228u: goto L_08A90E4C;
    case 229u: goto L_08A90E54;
    case 230u: goto L_08A90E60;
    case 231u: goto L_08A90E68;
    case 232u: goto L_08A90E70;
    case 233u: goto L_08A90EB0;
    case 234u: goto L_08A90EB8;
    case 235u: goto L_08A90EC4;
    case 236u: goto L_08A90ED0;
    case 237u: goto L_08A90EEC;
    case 238u: goto L_08A90EF4;
    case 239u: goto L_08A90EFC;
    case 240u: goto L_08A90F04;
    case 241u: goto L_08A90F24;
    case 242u: goto L_08A90F3C;
    case 243u: goto L_08A90F44;
    case 244u: goto L_08A90FB0;
    case 245u: goto L_08A90FB8;
    case 246u: goto L_08A91040;
    case 247u: goto L_08A91048;
    case 248u: goto L_08A9107C;
    case 249u: goto L_08A910A0;
    case 250u: goto L_08A910A8;
    case 251u: goto L_08A910DC;
    case 252u: goto L_08A91114;
    case 253u: goto L_08A91128;
    case 254u: goto L_08A91134;
    case 255u: goto L_08A9113C;
    case 256u: goto L_08A91144;
    case 257u: goto L_08A9114C;
    case 258u: goto L_08A91158;
    case 259u: goto L_08A91160;
    case 260u: goto L_08A91180;
    case 261u: goto L_08A911B0;
    case 262u: goto L_08A911B8;
    case 263u: goto L_08A911D0;
    case 264u: goto L_08A9120C;
    case 265u: goto L_08A91214;
    case 266u: goto L_08A91224;
    case 267u: goto L_08A9122C;
    case 268u: goto L_08A91238;
    case 269u: goto L_08A9124C;
    case 270u: goto L_08A91260;
    case 271u: goto L_08A91268;
    case 272u: goto L_08A9126C;
    case 273u: goto L_08A9127C;
    case 274u: goto L_08A91280;
    case 275u: goto L_08A9128C;
    case 276u: goto L_08A912A4;
    case 277u: goto L_08A912AC;
    case 278u: goto L_08A912BC;
    case 279u: goto L_08A912C8;
    case 280u: goto L_08A912DC;
    case 281u: goto L_08A912E8;
    case 282u: goto L_08A912F0;
    case 283u: goto L_08A9130C;
    case 284u: goto L_08A91314;
    case 285u: goto L_08A91328;
    case 286u: goto L_08A91330;
    case 287u: goto L_08A91340;
    case 288u: goto L_08A91348;
    case 289u: goto L_08A91354;
    case 290u: goto L_08A9135C;
    case 291u: goto L_08A91364;
    case 292u: goto L_08A91378;
    case 293u: goto L_08A91384;
    case 294u: goto L_08A91398;
    case 295u: goto L_08A913A0;
    case 296u: goto L_08A913A8;
    case 297u: goto L_08A913B8;
    case 298u: goto L_08A913C0;
    case 299u: goto L_08A913C8;
    case 300u: goto L_08A913D4;
    case 301u: goto L_08A913E0;
    case 302u: goto L_08A913EC;
    case 303u: goto L_08A91410;
    case 304u: goto L_08A9141C;
    case 305u: goto L_08A91424;
    case 306u: goto L_08A91430;
    case 307u: goto L_08A91454;
    case 308u: goto L_08A9145C;
    case 309u: goto L_08A91468;
    case 310u: goto L_08A91474;
    case 311u: goto L_08A9147C;
    case 312u: goto L_08A91488;
    case 313u: goto L_08A91490;
    case 314u: goto L_08A9149C;
    case 315u: goto L_08A914A8;
    case 316u: goto L_08A914D0;
    case 317u: goto L_08A914DC;
    case 318u: goto L_08A914E4;
    case 319u: goto L_08A914EC;
    case 320u: goto L_08A914F8;
    case 321u: goto L_08A91508;
    case 322u: goto L_08A91510;
    case 323u: goto L_08A91544;
    case 324u: goto L_08A9154C;
    case 325u: goto L_08A91554;
    case 326u: goto L_08A91564;
    case 327u: goto L_08A91584;
    case 328u: goto L_08A915A0;
    case 329u: goto L_08A915A8;
    case 330u: goto L_08A915B8;
    case 331u: goto L_08A915C8;
    case 332u: goto L_08A915E4;
    case 333u: goto L_08A915FC;
    case 334u: goto L_08A91610;
    case 335u: goto L_08A91628;
    case 336u: goto L_08A9163C;
    case 337u: goto L_08A91648;
    case 338u: goto L_08A91660;
    case 339u: goto L_08A9169C;
    case 340u: goto L_08A916A4;
    case 341u: goto L_08A916B0;
    case 342u: goto L_08A916BC;
    case 343u: goto L_08A916C8;
    case 344u: goto L_08A916D4;
    case 345u: goto L_08A916DC;
    case 346u: goto L_08A916FC;
    case 347u: goto L_08A9172C;
    case 348u: goto L_08A91734;
    case 349u: goto L_08A9174C;
    case 350u: goto L_08A91788;
    case 351u: goto L_08A91794;
    case 352u: goto L_08A9179C;
    case 353u: goto L_08A917AC;
    case 354u: goto L_08A917B8;
    case 355u: goto L_08A917C4;
    case 356u: goto L_08A917FC;
    case 357u: goto L_08A9180C;
    case 358u: goto L_08A91818;
    case 359u: goto L_08A91840;
    case 360u: goto L_08A91870;
    case 361u: goto L_08A91878;
    case 362u: goto L_08A91888;
    case 363u: goto L_08A91890;
    case 364u: goto L_08A918AC;
    case 365u: goto L_08A918B4;
    case 366u: goto L_08A918BC;
    case 367u: goto L_08A918C4;
    case 368u: goto L_08A918F4;
    case 369u: goto L_08A918F8;
    case 370u: goto L_08A91928;
    case 371u: goto L_08A91934;
    case 372u: goto L_08A91988;
    case 373u: goto L_08A91990;
    case 374u: goto L_08A919A0;
    case 375u: goto L_08A919B0;
    case 376u: goto L_08A919BC;
    case 377u: goto L_08A919C0;
    case 378u: goto L_08A91A04;
    case 379u: goto L_08A91A0C;
    case 380u: goto L_08A91A18;
    case 381u: goto L_08A91A20;
    case 382u: goto L_08A91A2C;
    case 383u: goto L_08A91A38;
    case 384u: goto L_08A91A44;
    case 385u: goto L_08A91A54;
    case 386u: goto L_08A91A5C;
    case 387u: goto L_08A91A60;
    case 388u: goto L_08A91AA4;
    case 389u: goto L_08A91AB0;
    case 390u: goto L_08A91ABC;
    case 391u: goto L_08A91ACC;
    case 392u: goto L_08A91AD4;
    case 393u: goto L_08A91AE4;
    case 394u: goto L_08A91AF0;
    case 395u: goto L_08A91AF8;
    case 396u: goto L_08A91B00;
    case 397u: goto L_08A91B08;
    case 398u: goto L_08A91B14;
    case 399u: goto L_08A91B20;
    case 400u: goto L_08A91B28;
    case 401u: goto L_08A91B30;
    case 402u: goto L_08A91B40;
    case 403u: goto L_08A91B58;
    case 404u: goto L_08A91B68;
    case 405u: goto L_08A91B78;
    case 406u: goto L_08A91B80;
    case 407u: goto L_08A91B8C;
    case 408u: goto L_08A91B94;
    case 409u: goto L_08A91B9C;
    case 410u: goto L_08A91BA8;
    case 411u: goto L_08A91BB0;
    case 412u: goto L_08A91BC0;
    case 413u: goto L_08A91BD0;
    case 414u: goto L_08A91BD8;
    case 415u: goto L_08A91BE4;
    case 416u: goto L_08A91BEC;
    case 417u: goto L_08A91BF8;
    case 418u: goto L_08A91C10;
    case 419u: goto L_08A91C18;
    case 420u: goto L_08A91C24;
    case 421u: goto L_08A91C2C;
    case 422u: goto L_08A91C3C;
    case 423u: goto L_08A91C4C;
    case 424u: goto L_08A91C5C;
    case 425u: goto L_08A91C70;
    case 426u: goto L_08A91C88;
    case 427u: goto L_08A91C98;
    case 428u: goto L_08A91CAC;
    case 429u: goto L_08A91CB4;
    case 430u: goto L_08A91CBC;
    case 431u: goto L_08A91CC4;
    case 432u: goto L_08A91CCC;
    case 433u: goto L_08A91CE0;
    case 434u: goto L_08A91CF0;
    case 435u: goto L_08A91D14;
    case 436u: goto L_08A91D28;
    case 437u: goto L_08A91D2C;
    case 438u: goto L_08A91D34;
    case 439u: goto L_08A91D44;
    case 440u: goto L_08A91D54;
    case 441u: goto L_08A91D68;
    case 442u: goto L_08A91D70;
    case 443u: goto L_08A91D80;
    case 444u: goto L_08A91D88;
    case 445u: goto L_08A91D90;
    case 446u: goto L_08A91D98;
    case 447u: goto L_08A91DA0;
    case 448u: goto L_08A91DB4;
    case 449u: goto L_08A91DC4;
    case 450u: goto L_08A91DD4;
    case 451u: goto L_08A91DE0;
    case 452u: goto L_08A91DF4;
    case 453u: goto L_08A91E28;
    case 454u: goto L_08A91E54;
    case 455u: goto L_08A91E5C;
    case 456u: goto L_08A91E68;
    case 457u: goto L_08A91E78;
    case 458u: goto L_08A91E88;
    case 459u: goto L_08A91EA0;
    case 460u: goto L_08A91EB4;
    case 461u: goto L_08A91EE8;
    case 462u: goto L_08A91F1C;
    case 463u: goto L_08A91F24;
    case 464u: goto L_08A91F2C;
    case 465u: goto L_08A91F34;
    case 466u: goto L_08A91F40;
    case 467u: goto L_08A91F48;
    case 468u: goto L_08A91F58;
    case 469u: goto L_08A91F68;
    case 470u: goto L_08A91F70;
    case 471u: goto L_08A91F78;
    case 472u: goto L_08A91FAC;
    case 473u: goto L_08A91FB4;
    case 474u: goto L_08A92020;
    case 475u: goto L_08A92094;
    case 476u: goto L_08A920BC;
    case 477u: goto L_08A920E4;
    case 478u: goto L_08A920EC;
    case 479u: goto L_08A92120;
    case 480u: goto L_08A92144;
    case 481u: goto L_08A9214C;
    case 482u: goto L_08A92180;
    case 483u: goto L_08A921B8;
    case 484u: goto L_08A921EC;
    case 485u: goto L_08A921FC;
    case 486u: goto L_08A92208;
    case 487u: goto L_08A92278;
    case 488u: goto L_08A92288;
    case 489u: goto L_08A922C8;
    case 490u: goto L_08A922EC;
    case 491u: goto L_08A922FC;
    case 492u: goto L_08A92304;
    case 493u: goto L_08A9230C;
    case 494u: goto L_08A92310;
    case 495u: goto L_08A9231C;
    case 496u: goto L_08A92330;
    case 497u: goto L_08A92338;
    case 498u: goto L_08A9234C;
    case 499u: goto L_08A92370;
    case 500u: goto L_08A92380;
    case 501u: goto L_08A92388;
    case 502u: goto L_08A92390;
    case 503u: goto L_08A92394;
    case 504u: goto L_08A923A0;
    case 505u: goto L_08A923B4;
    case 506u: goto L_08A923BC;
    case 507u: goto L_08A923C4;
    case 508u: goto L_08A923E8;
    case 509u: goto L_08A9247C;
    case 510u: goto L_08A9249C;
    case 511u: goto L_08A924C4;
    case 512u: goto L_08A924F4;
    case 513u: goto L_08A9250C;
    case 514u: goto L_08A92530;
    case 515u: goto L_08A9253C;
    case 516u: goto L_08A9254C;
    case 517u: goto L_08A92558;
    case 518u: goto L_08A92560;
    case 519u: goto L_08A9256C;
    case 520u: goto L_08A92570;
    case 521u: goto L_08A92580;
    case 522u: goto L_08A92588;
    case 523u: goto L_08A9259C;
    case 524u: goto L_08A925A8;
    case 525u: goto L_08A925C0;
    case 526u: goto L_08A925D8;
    case 527u: goto L_08A925F0;
    case 528u: goto L_08A925FC;
    case 529u: goto L_08A9260C;
    case 530u: goto L_08A92614;
    case 531u: goto L_08A92628;
    case 532u: goto L_08A9263C;
    case 533u: goto L_08A92648;
    case 534u: goto L_08A92654;
    case 535u: goto L_08A9265C;
    case 536u: goto L_08A9266C;
    case 537u: goto L_08A92674;
    case 538u: goto L_08A926BC;
    case 539u: goto L_08A926C8;
    case 540u: goto L_08A926CC;
    case 541u: goto L_08A926D4;
    case 542u: goto L_08A926E0;
    case 543u: goto L_08A926EC;
    case 544u: goto L_08A926FC;
    case 545u: goto L_08A92704;
    case 546u: goto L_08A9270C;
    case 547u: goto L_08A92714;
    case 548u: goto L_08A92748;
    case 549u: goto L_08A92754;
    case 550u: goto L_08A92790;
    case 551u: goto L_08A9279C;
    case 552u: goto L_08A927B0;
    case 553u: goto L_08A927B8;
    case 554u: goto L_08A927E0;
    case 555u: goto L_08A927E8;
    case 556u: goto L_08A927F0;
    case 557u: goto L_08A92844;
    case 558u: goto L_08A9284C;
    case 559u: goto L_08A92854;
    case 560u: goto L_08A9285C;
    case 561u: goto L_08A92868;
    case 562u: goto L_08A92870;
    case 563u: goto L_08A92878;
    case 564u: goto L_08A92880;
    case 565u: goto L_08A92888;
    case 566u: goto L_08A92890;
    case 567u: goto L_08A928A0;
    case 568u: goto L_08A928B0;
    case 569u: goto L_08A928B8;
    case 570u: goto L_08A928C0;
    case 571u: goto L_08A928CC;
    case 572u: goto L_08A928D8;
    case 573u: goto L_08A928E4;
    case 574u: goto L_08A928F4;
    case 575u: goto L_08A92904;
    case 576u: goto L_08A9290C;
    case 577u: goto L_08A92920;
    case 578u: goto L_08A9292C;
    case 579u: goto L_08A92938;
    case 580u: goto L_08A92940;
    case 581u: goto L_08A92950;
    case 582u: goto L_08A92958;
    case 583u: goto L_08A929A0;
    case 584u: goto L_08A929B4;
    case 585u: goto L_08A929C0;
    case 586u: goto L_08A929CC;
    case 587u: goto L_08A929D0;
    case 588u: goto L_08A929D8;
    case 589u: goto L_08A929E0;
    case 590u: goto L_08A929EC;
    case 591u: goto L_08A929FC;
    case 592u: goto L_08A92A28;
    case 593u: goto L_08A92A64;
    case 594u: goto L_08A92A7C;
    case 595u: goto L_08A92A84;
    case 596u: goto L_08A92A8C;
    case 597u: goto L_08A92A94;
    case 598u: goto L_08A92A9C;
    case 599u: goto L_08A92AA4;
    case 600u: goto L_08A92AAC;
    case 601u: goto L_08A92AB4;
    case 602u: goto L_08A92ABC;
    case 603u: goto L_08A92AC4;
    case 604u: goto L_08A92ACC;
    case 605u: goto L_08A92AD4;
    case 606u: goto L_08A92ADC;
    case 607u: goto L_08A92AE4;
    case 608u: goto L_08A92AEC;
    case 609u: goto L_08A92AF4;
    case 610u: goto L_08A92AF8;
    case 611u: goto L_08A92B00;
    case 612u: goto L_08A92B0C;
    case 613u: goto L_08A92B14;
    case 614u: goto L_08A92B1C;
    case 615u: goto L_08A92B28;
    case 616u: goto L_08A92B38;
    case 617u: goto L_08A92B58;
    case 618u: goto L_08A92B68;
    case 619u: goto L_08A92B80;
    case 620u: goto L_08A92BB4;
    case 621u: goto L_08A92BBC;
    case 622u: goto L_08A92BC4;
    case 623u: goto L_08A92BCC;
    case 624u: goto L_08A92BE8;
    case 625u: goto L_08A92BF8;
    case 626u: goto L_08A92C00;
    case 627u: goto L_08A92C08;
    case 628u: goto L_08A92C14;
    case 629u: goto L_08A92C20;
    case 630u: goto L_08A92C2C;
    case 631u: goto L_08A92C30;
    case 632u: goto L_08A92C3C;
    case 633u: goto L_08A92C44;
    case 634u: goto L_08A92C5C;
    case 635u: goto L_08A92C64;
    case 636u: goto L_08A92C70;
    case 637u: goto L_08A92C78;
    case 638u: goto L_08A92C80;
    case 639u: goto L_08A92C98;
    case 640u: goto L_08A92CA4;
    case 641u: goto L_08A92CAC;
    case 642u: goto L_08A92CB8;
    case 643u: goto L_08A92CC4;
    case 644u: goto L_08A92CCC;
    case 645u: goto L_08A92CD4;
    case 646u: goto L_08A92CE0;
    case 647u: goto L_08A92D04;
    case 648u: goto L_08A92D7C;
    case 649u: goto L_08A92DF4;
    case 650u: goto L_08A92E30;
    case 651u: goto L_08A92E34;
    case 652u: goto L_08A92E6C;
    case 653u: goto L_08A92E98;
    case 654u: goto L_08A92E9C;
    case 655u: goto L_08A92EA4;
    case 656u: goto L_08A92EBC;
    case 657u: goto L_08A92EC8;
    case 658u: goto L_08A92EDC;
    case 659u: goto L_08A92F40;
    case 660u: goto L_08A92F64;
    case 661u: goto L_08A92FB0;
    case 662u: goto L_08A92FC4;
    case 663u: goto L_08A92FE4;
    case 664u: goto L_08A93010;
    case 665u: goto L_08A9301C;
    case 666u: goto L_08A93028;
    case 667u: goto L_08A93068;
    case 668u: goto L_08A93074;
    case 669u: goto L_08A93088;
    case 670u: goto L_08A930A0;
    case 671u: goto L_08A930C4;
    case 672u: goto L_08A930D8;
    case 673u: goto L_08A930E0;
    case 674u: goto L_08A930E8;
    case 675u: goto L_08A93100;
    case 676u: goto L_08A9310C;
    case 677u: goto L_08A93124;
    case 678u: goto L_08A9312C;
    case 679u: goto L_08A93134;
    case 680u: goto L_08A93150;
    case 681u: goto L_08A93174;
    case 682u: goto L_08A9319C;
    case 683u: goto L_08A931B4;
    case 684u: goto L_08A931CC;
    case 685u: goto L_08A931D4;
    case 686u: goto L_08A931DC;
    case 687u: goto L_08A931EC;
    case 688u: goto L_08A931F0;
    case 689u: goto L_08A93204;
    case 690u: goto L_08A93244;
    case 691u: goto L_08A93248;
    case 692u: goto L_08A93258;
    case 693u: goto L_08A932A4;
    case 694u: goto L_08A932A8;
    case 695u: goto L_08A932B8;
    case 696u: goto L_08A932DC;
    case 697u: goto L_08A932EC;
    case 698u: goto L_08A932FC;
    case 699u: goto L_08A93318;
    case 700u: goto L_08A93324;
    case 701u: goto L_08A93344;
    case 702u: goto L_08A93358;
    case 703u: goto L_08A933BC;
    case 704u: goto L_08A933C0;
    case 705u: goto L_08A933D0;
    case 706u: goto L_08A93410;
    case 707u: goto L_08A93424;
    case 708u: goto L_08A93440;
    case 709u: goto L_08A93458;
    case 710u: goto L_08A9346C;
    case 711u: goto L_08A93480;
    case 712u: goto L_08A934C8;
    case 713u: goto L_08A93510;
    case 714u: goto L_08A93544;
    case 715u: goto L_08A93564;
    case 716u: goto L_08A9366C;
    case 717u: goto L_08A93678;
    case 718u: goto L_08A936C4;
    case 719u: goto L_08A936D8;
    case 720u: goto L_08A936E8;
    case 721u: goto L_08A936F0;
    case 722u: goto L_08A936F4;
    case 723u: goto L_08A93704;
    case 724u: goto L_08A93710;
    case 725u: goto L_08A9371C;
    case 726u: goto L_08A9372C;
    case 727u: goto L_08A93734;
    case 728u: goto L_08A93750;
    case 729u: goto L_08A93760;
    case 730u: goto L_08A937B0;
    case 731u: goto L_08A937B4;
    case 732u: goto L_08A937BC;
    case 733u: goto L_08A937CC;
    case 734u: goto L_08A937DC;
    case 735u: goto L_08A937E4;
    case 736u: goto L_08A937F0;
    case 737u: goto L_08A9380C;
    case 738u: goto L_08A93810;
    case 739u: goto L_08A9381C;
    case 740u: goto L_08A93860;
    case 741u: goto L_08A9386C;
    case 742u: goto L_08A93898;
    case 743u: goto L_08A938D4;
    case 744u: goto L_08A938DC;
    case 745u: goto L_08A938EC;
    case 746u: goto L_08A93918;
    case 747u: goto L_08A93930;
    case 748u: goto L_08A93940;
    case 749u: goto L_08A93958;
    case 750u: goto L_08A93960;
    case 751u: goto L_08A93964;
    case 752u: goto L_08A9396C;
    case 753u: goto L_08A93988;
    case 754u: goto L_08A9399C;
    case 755u: goto L_08A939A4;
    case 756u: goto L_08A939C8;
    case 757u: goto L_08A939D4;
    case 758u: goto L_08A939E0;
    case 759u: goto L_08A939E8;
    case 760u: goto L_08A939EC;
    case 761u: goto L_08A939F4;
    case 762u: goto L_08A93A00;
    case 763u: goto L_08A93A18;
    case 764u: goto L_08A93A24;
    case 765u: goto L_08A93A30;
    case 766u: goto L_08A93A3C;
    case 767u: goto L_08A93A48;
    case 768u: goto L_08A93A54;
    case 769u: goto L_08A93A60;
    case 770u: goto L_08A93A6C;
    case 771u: goto L_08A93A78;
    case 772u: goto L_08A93A84;
    case 773u: goto L_08A93A8C;
    case 774u: goto L_08A93A94;
    case 775u: goto L_08A93AA8;
    case 776u: goto L_08A93AB0;
    case 777u: goto L_08A93AC4;
    case 778u: goto L_08A93ACC;
    case 779u: goto L_08A93AE0;
    case 780u: goto L_08A93AE8;
    case 781u: goto L_08A93AFC;
    case 782u: goto L_08A93B04;
    case 783u: goto L_08A93B18;
    case 784u: goto L_08A93B20;
    case 785u: goto L_08A93B34;
    case 786u: goto L_08A93B3C;
    case 787u: goto L_08A93B50;
    case 788u: goto L_08A93B58;
    case 789u: goto L_08A93B6C;
    case 790u: goto L_08A93B74;
    case 791u: goto L_08A93B88;
    case 792u: goto L_08A93B90;
    case 793u: goto L_08A93B98;
    case 794u: goto L_08A93BA0;
    case 795u: goto L_08A93BA8;
    case 796u: goto L_08A93BB0;
    case 797u: goto L_08A93BB8;
    case 798u: goto L_08A93BC0;
    case 799u: goto L_08A93BC8;
    case 800u: goto L_08A93BD0;
    case 801u: goto L_08A93C00;
    case 802u: goto L_08A93C24;
    case 803u: goto L_08A93C30;
    case 804u: goto L_08A93C3C;
    case 805u: goto L_08A93C44;
    case 806u: goto L_08A93C48;
    case 807u: goto L_08A93C50;
    case 808u: goto L_08A93C5C;
    case 809u: goto L_08A93C74;
    case 810u: goto L_08A93C80;
    case 811u: goto L_08A93C8C;
    case 812u: goto L_08A93C98;
    case 813u: goto L_08A93CA4;
    case 814u: goto L_08A93CB0;
    case 815u: goto L_08A93CBC;
    case 816u: goto L_08A93CC8;
    case 817u: goto L_08A93CD4;
    case 818u: goto L_08A93CE0;
    case 819u: goto L_08A93CE8;
    case 820u: goto L_08A93CF0;
    case 821u: goto L_08A93D04;
    case 822u: goto L_08A93D0C;
    case 823u: goto L_08A93D20;
    case 824u: goto L_08A93D28;
    case 825u: goto L_08A93D3C;
    case 826u: goto L_08A93D44;
    case 827u: goto L_08A93D58;
    case 828u: goto L_08A93D60;
    case 829u: goto L_08A93D74;
    case 830u: goto L_08A93D7C;
    case 831u: goto L_08A93D90;
    case 832u: goto L_08A93D98;
    case 833u: goto L_08A93DAC;
    case 834u: goto L_08A93DB4;
    case 835u: goto L_08A93DC8;
    case 836u: goto L_08A93DD0;
    case 837u: goto L_08A93DD8;
    case 838u: goto L_08A93DE0;
    case 839u: goto L_08A93DE8;
    case 840u: goto L_08A93DF0;
    case 841u: goto L_08A93DF8;
    case 842u: goto L_08A93E00;
    case 843u: goto L_08A93E08;
    case 844u: goto L_08A93E38;
    case 845u: goto L_08A93E5C;
    case 846u: goto L_08A93E68;
    case 847u: goto L_08A93E74;
    case 848u: goto L_08A93E7C;
    case 849u: goto L_08A93E80;
    case 850u: goto L_08A93E88;
    case 851u: goto L_08A93E94;
    case 852u: goto L_08A93EAC;
    case 853u: goto L_08A93EB8;
    case 854u: goto L_08A93EC4;
    case 855u: goto L_08A93ED0;
    case 856u: goto L_08A93EDC;
    case 857u: goto L_08A93EE8;
    case 858u: goto L_08A93EF4;
    case 859u: goto L_08A93F00;
    case 860u: goto L_08A93F0C;
    case 861u: goto L_08A93F18;
    case 862u: goto L_08A93F20;
    case 863u: goto L_08A93F28;
    case 864u: goto L_08A93F3C;
    case 865u: goto L_08A93F44;
    case 866u: goto L_08A93F58;
    case 867u: goto L_08A93F60;
    case 868u: goto L_08A93F74;
    case 869u: goto L_08A93F7C;
    case 870u: goto L_08A93F90;
    case 871u: goto L_08A93F98;
    case 872u: goto L_08A93FAC;
    case 873u: goto L_08A93FB4;
    case 874u: goto L_08A93FC8;
    case 875u: goto L_08A93FD0;
    case 876u: goto L_08A93FE4;
    case 877u: goto L_08A93FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A90000:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9000Cu);
    ctx.gpr[5] = (0u | 132u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x08A9000Cu) goto L_08A9000C;
    return;
L_08A9000C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90144;
      }
      goto L_08A90014;
    }
L_08A90014:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A90068;
      }
      goto L_08A90028;
    }
L_08A90028:
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    goto L_08A90030;
L_08A90030:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A90054;
      }
      goto L_08A90040;
    }
L_08A90040:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A90054;
      }
      goto L_08A90050;
    }
L_08A90050:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08A90054;
L_08A90054:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A90030;
      }
      goto L_08A90068;
    }
L_08A90068:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A900A0;
      }
      goto L_08A90074;
    }
L_08A90074:
    ctx.gpr[31] = (0x08A9007Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A9007Cu) goto L_08A9007C;
    return;
L_08A9007C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A90144;
      }
      goto L_08A9008C;
    }
L_08A9008C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A90098u);
    ctx.gpr[5] = (0u | 130u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x08A90098u) goto L_08A90098;
    return;
L_08A90098:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90144;
      }
      goto L_08A900A0;
    }
L_08A900A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A900ACu);
    ctx.gpr[5] = (0u | 135u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x08A900ACu) goto L_08A900AC;
    return;
L_08A900AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A90144;
      }
      goto L_08A900B8;
    }
L_08A900B8:
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (17352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A90144;
      }
      goto L_08A900F8;
    }
L_08A900F8:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A90104u);
    ctx.gpr[5] = (0u | 136u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x08A90104u) goto L_08A90104;
    return;
L_08A90104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A90144;
      }
      goto L_08A90114;
    }
L_08A90114:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A90144;
      }
      goto L_08A90124;
    }
L_08A90124:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A90138u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 85u, 0x089A064Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90138u) goto L_08A90138;
    return;
L_08A90138:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A90144u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 798u, 0x0899FF9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90144u) goto L_08A90144;
    return;
L_08A90144:
    ctx.gpr[31] = (0x08A9014Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x08A9014Cu) goto L_08A9014C;
    return;
L_08A9014C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A901E8;
      }
      goto L_08A90154;
    }
L_08A90154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2084)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A901E0;
      }
      goto L_08A90164;
    }
L_08A90164:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A901B0;
      }
      goto L_08A90170;
    }
L_08A90170:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A901A0;
      }
      goto L_08A90178;
    }
L_08A90178:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A901E0;
      }
      goto L_08A90180;
    }
L_08A90180:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A901C0;
      }
      goto L_08A90188;
    }
L_08A90188:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A901D0;
      }
      goto L_08A90190;
    }
L_08A90190:
    ctx.gpr[31] = (0x08A90198u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A90CAC;
L_08A90198:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9026C;
      }
      goto L_08A901A0;
    }
L_08A901A0:
    ctx.gpr[31] = (0x08A901A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A90CAC;
L_08A901A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9026C;
      }
      goto L_08A901B0;
    }
L_08A901B0:
    ctx.gpr[31] = (0x08A901B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A90CAC;
L_08A901B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9026C;
      }
      goto L_08A901C0;
    }
L_08A901C0:
    ctx.gpr[31] = (0x08A901C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A90CAC;
L_08A901C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9026C;
      }
      goto L_08A901D0;
    }
L_08A901D0:
    ctx.gpr[31] = (0x08A901D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A90CAC;
L_08A901D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9026C;
      }
      goto L_08A901E0;
    }
L_08A901E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9026C;
      }
      goto L_08A901E8;
    }
L_08A901E8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9026C;
      }
      goto L_08A901F4;
    }
L_08A901F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9026C;
      }
      goto L_08A90200;
    }
L_08A90200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A9026C;
      }
      goto L_08A90210;
    }
L_08A90210:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(398))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9026C;
      }
      goto L_08A90220;
    }
L_08A90220:
    ctx.gpr[31] = (0x08A90228u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 91u, 0x089A46CCu>(ctx, &aot_mem) && ctx.pc == 0x08A90228u) goto L_08A90228;
    return;
L_08A90228:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9026C;
      }
      goto L_08A90230;
    }
L_08A90230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(596)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9026C;
      }
      goto L_08A90244;
    }
L_08A90244:
    ctx.gpr[31] = (0x08A9024Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 219u, 0x089ED5CCu>(ctx, &aot_mem) && ctx.pc == 0x08A9024Cu) goto L_08A9024C;
    return;
L_08A9024C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 17u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A9026C;
L_08A9026C:
    ctx.gpr[31] = (0x08A90274u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x08A90274u) goto L_08A90274;
    return;
L_08A90274:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9028C;
      }
      goto L_08A9027C;
    }
L_08A9027C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A90294;
      }
      goto L_08A9028C;
    }
L_08A9028C:
    ctx.gpr[31] = (0x08A90294u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 604u, 0x08A8EED0u>(ctx, &aot_mem) && ctx.pc == 0x08A90294u) goto L_08A90294;
    return;
L_08A90294:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(50) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9069C;
      }
      goto L_08A902A8;
    }
L_08A902A8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-20936)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A902C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9069C;
      }
      goto L_08A902C8;
    }
L_08A902C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A902E4;
      }
      goto L_08A902D4;
    }
L_08A902D4:
    ctx.gpr[31] = (0x08A902DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x08A902DCu) goto L_08A902DC;
    return;
L_08A902DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A903F8;
      }
      goto L_08A902E4;
    }
L_08A902E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[31] = (0x08A90300u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 510u, 0x089AA50Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90300u) goto L_08A90300;
    return;
L_08A90300:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A903F8;
      }
      goto L_08A90308;
    }
L_08A90308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A903F0;
      }
      goto L_08A90318;
    }
L_08A90318:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2068)));
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A903F0;
      }
      goto L_08A90334;
    }
L_08A90334:
    ctx.gpr[31] = (0x08A9033Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9033Cu) goto L_08A9033C;
    return;
L_08A9033C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A903F0;
      }
      goto L_08A90344;
    }
L_08A90344:
    ctx.gpr[31] = (0x08A9034Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9034Cu) goto L_08A9034C;
    return;
L_08A9034C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A90374;
      }
      goto L_08A90358;
    }
L_08A90358:
    ctx.gpr[31] = (0x08A90360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90360u) goto L_08A90360;
    return;
L_08A90360:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9036Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 629u, 0x08A8F084u>(ctx, &aot_mem) && ctx.pc == 0x08A9036Cu) goto L_08A9036C;
    return;
L_08A9036C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A903F8;
      }
      goto L_08A90374;
    }
L_08A90374:
    ctx.gpr[4] = (16294u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2068)));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A903E0;
      }
      goto L_08A90394;
    }
L_08A90394:
    ctx.gpr[31] = (0x08A9039Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9039Cu) goto L_08A9039C;
    return;
L_08A9039C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A903C4;
      }
      goto L_08A903AC;
    }
L_08A903AC:
    ctx.gpr[31] = (0x08A903B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A903B4u) goto L_08A903B4;
    return;
L_08A903B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A903E0;
      }
      goto L_08A903C4;
    }
L_08A903C4:
    ctx.gpr[31] = (0x08A903CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A903CCu) goto L_08A903CC;
    return;
L_08A903CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A903D8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 629u, 0x08A8F084u>(ctx, &aot_mem) && ctx.pc == 0x08A903D8u) goto L_08A903D8;
    return;
L_08A903D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A903F8;
      }
      goto L_08A903E0;
    }
L_08A903E0:
    ctx.gpr[31] = (0x08A903E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x08A903E8u) goto L_08A903E8;
    return;
L_08A903E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A903F8;
      }
      goto L_08A903F0;
    }
L_08A903F0:
    ctx.gpr[31] = (0x08A903F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x08A903F8u) goto L_08A903F8;
    return;
L_08A903F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9069C;
      }
      goto L_08A90400;
    }
L_08A90400:
    ctx.gpr[31] = (0x08A90408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90408u) goto L_08A90408;
    return;
L_08A90408:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A905BC;
      }
      goto L_08A90414;
    }
L_08A90414:
    ctx.gpr[31] = (0x08A9041Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9041Cu) goto L_08A9041C;
    return;
L_08A9041C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90450;
      }
      goto L_08A90428;
    }
L_08A90428:
    ctx.gpr[31] = (0x08A90430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90430u) goto L_08A90430;
    return;
L_08A90430:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(541)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A90450;
      }
      goto L_08A90440;
    }
L_08A90440:
    ctx.gpr[4] = (16294u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1340), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A90450;
L_08A90450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A90608;
      }
      goto L_08A90460;
    }
L_08A90460:
    ctx.gpr[31] = (0x08A90468u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 510u, 0x089AA50Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90468u) goto L_08A90468;
    return;
L_08A90468:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90608;
      }
      goto L_08A90470;
    }
L_08A90470:
    ctx.gpr[31] = (0x08A90478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A90478u) goto L_08A90478;
    return;
L_08A90478:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A904F0;
      }
      goto L_08A90480;
    }
L_08A90480:
    ctx.gpr[31] = (0x08A90488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90488u) goto L_08A90488;
    return;
L_08A90488:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A904F0;
      }
      goto L_08A90490;
    }
L_08A90490:
    ctx.gpr[31] = (0x08A90498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90498u) goto L_08A90498;
    return;
L_08A90498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 58u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
        goto L_08A904C4;
    }
    goto L_08A904A8;
L_08A904A8:
    ctx.gpr[31] = (0x08A904B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A904B0u) goto L_08A904B0;
    return;
L_08A904B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A904F0;
      }
      goto L_08A904C0;
    }
L_08A904C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
    goto L_08A904C4;
L_08A904C4:
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A904E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 629u, 0x08A8F084u>(ctx, &aot_mem) && ctx.pc == 0x08A904E8u) goto L_08A904E8;
    return;
L_08A904E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90608;
      }
      goto L_08A904F0;
    }
L_08A904F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1320)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16025u << 16u);
      if (branch_taken) {
          goto L_08A905A8;
      }
      goto L_08A90514;
    }
L_08A90514:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1320)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A905A8;
      }
      goto L_08A90538;
    }
L_08A90538:
    ctx.gpr[31] = (0x08A90540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A90540u) goto L_08A90540;
    return;
L_08A90540:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90608;
      }
      goto L_08A90548;
    }
L_08A90548:
    ctx.gpr[31] = (0x08A90550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A90550u) goto L_08A90550;
    return;
L_08A90550:
    ctx.gpr[31] = (0x08A90558u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 2u, 0x088A0004u>(ctx, &aot_mem) && ctx.pc == 0x08A90558u) goto L_08A90558;
    return;
L_08A90558:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90608;
      }
      goto L_08A90560;
    }
L_08A90560:
    ctx.gpr[31] = (0x08A90568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A90568u) goto L_08A90568;
    return;
L_08A90568:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(541)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A90608;
      }
      goto L_08A90574;
    }
L_08A90574:
    ctx.gpr[31] = (0x08A9057Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A9057Cu) goto L_08A9057C;
    return;
L_08A9057C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A90608;
      }
      goto L_08A9058C;
    }
L_08A9058C:
    ctx.gpr[31] = (0x08A90594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A90594u) goto L_08A90594;
    return;
L_08A90594:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A905A0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 127u, 0x08888CB8u>(ctx, &aot_mem) && ctx.pc == 0x08A905A0u) goto L_08A905A0;
    return;
L_08A905A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90608;
      }
      goto L_08A905A8;
    }
L_08A905A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A905B4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x08A905B4u) goto L_08A905B4;
    return;
L_08A905B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90608;
      }
      goto L_08A905BC;
    }
L_08A905BC:
    ctx.gpr[31] = (0x08A905C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 759u, 0x0899FD54u>(ctx, &aot_mem) && ctx.pc == 0x08A905C4u) goto L_08A905C4;
    return;
L_08A905C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A905F4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 85u, 0x089A064Cu>(ctx, &aot_mem) && ctx.pc == 0x08A905F4u) goto L_08A905F4;
    return;
L_08A905F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A90600u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 798u, 0x0899FF9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90600u) goto L_08A90600;
    return;
L_08A90600:
    ctx.gpr[31] = (0x08A90608u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 538u, 0x08886BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A90608u) goto L_08A90608;
    return;
L_08A90608:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9069C;
      }
      goto L_08A90610;
    }
L_08A90610:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A90694;
      }
      goto L_08A90620;
    }
L_08A90620:
    ctx.gpr[31] = (0x08A90628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90628u) goto L_08A90628;
    return;
L_08A90628:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90694;
      }
      goto L_08A90630;
    }
L_08A90630:
    ctx.gpr[31] = (0x08A90638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90638u) goto L_08A90638;
    return;
L_08A90638:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (16294u << 16u);
      if (branch_taken) {
          goto L_08A90664;
      }
      goto L_08A90648;
    }
L_08A90648:
    ctx.gpr[31] = (0x08A90650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90650u) goto L_08A90650;
    return;
L_08A90650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A90694;
      }
      goto L_08A90660;
    }
L_08A90660:
    ctx.gpr[4] = (16294u << 16u);
    goto L_08A90664;
L_08A90664:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2068)));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A90694;
      }
      goto L_08A90680;
    }
L_08A90680:
    ctx.gpr[31] = (0x08A90688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90688u) goto L_08A90688;
    return;
L_08A90688:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A90694u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 629u, 0x08A8F084u>(ctx, &aot_mem) && ctx.pc == 0x08A90694u) goto L_08A90694;
    return;
L_08A90694:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9069C;
      }
      goto L_08A9069C;
    }
L_08A9069C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A906B4;
      }
      goto L_08A906A8;
    }
L_08A906A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A906B4u);
    ctx.gpr[5] = (0u | 129u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x08A906B4u) goto L_08A906B4;
    return;
L_08A906B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A907E8;
      }
      goto L_08A906C0;
    }
L_08A906C0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A906CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F7ACu>(ctx, &aot_mem) && ctx.pc == 0x08A906CCu) goto L_08A906CC;
    return;
L_08A906CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A906F4;
      }
      goto L_08A906D4;
    }
L_08A906D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(152));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A906ECu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A906ECu) goto L_08A906EC;
    return;
L_08A906EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A907B0;
      }
      goto L_08A906F4;
    }
L_08A906F4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[6] = (0u | 17u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 31u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A907B0;
      }
      goto L_08A90714;
    }
L_08A90714:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08A90724u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 559u, 0x088EF634u>(ctx, &aot_mem) && ctx.pc == 0x08A90724u) goto L_08A90724;
    return;
L_08A90724:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08A90788u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 489u, 0x088C697Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90788u) goto L_08A90788;
    return;
L_08A90788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A907B0;
      }
      goto L_08A90794;
    }
L_08A90794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(152));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A907ACu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A907ACu) goto L_08A907AC;
    return;
L_08A907AC:
    ctx.gpr[17] = (0u | 1u);
    goto L_08A907B0;
L_08A907B0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A907E8;
      }
      goto L_08A907B8;
    }
L_08A907B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A907E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 228u, 0x088D91E4u>(ctx, &aot_mem) && ctx.pc == 0x08A907E8u) goto L_08A907E8;
    return;
L_08A907E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2112)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A9097C;
      }
      goto L_08A907F8;
    }
L_08A907F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A9097C;
      }
      goto L_08A90808;
    }
L_08A90808:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16166u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16051u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08A90878u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 72u, 0x088C8430u>(ctx, &aot_mem) && ctx.pc == 0x08A90878u) goto L_08A90878;
    return;
L_08A90878:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A908F8;
      }
      goto L_08A90880;
    }
L_08A90880:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2112), 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2076), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A90894u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A909D8;
L_08A90894:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A908A0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x08A908A0u) goto L_08A908A0;
    return;
L_08A908A0:
    ctx.gpr[31] = (0x08A908A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A908A8u) goto L_08A908A8;
    return;
L_08A908A8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25148)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25144)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A908C0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08A908C0u) goto L_08A908C0;
    return;
L_08A908C0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08A908E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 278u, 0x089A1468u>(ctx, &aot_mem) && ctx.pc == 0x08A908E4u) goto L_08A908E4;
    return;
L_08A908E4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2104), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A90974;
      }
      goto L_08A908F8;
    }
L_08A908F8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2112), 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08A90918u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 138u, 0x08850DACu>(ctx, &aot_mem) && ctx.pc == 0x08A90918u) goto L_08A90918;
    return;
L_08A90918:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90974;
      }
      goto L_08A90920;
    }
L_08A90920:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(84));
    goto L_08A90928;
L_08A90928:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1428)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90948;
      }
      goto L_08A90934;
    }
L_08A90934:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A90940u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 596u, 0x0899F290u>(ctx, &aot_mem) && ctx.pc == 0x08A90940u) goto L_08A90940;
    return;
L_08A90940:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90958;
      }
      goto L_08A90948;
    }
L_08A90948:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08A90928;
      }
      goto L_08A90958;
    }
L_08A90958:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A90964u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x08A90964u) goto L_08A90964;
    return;
L_08A90964:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_08A90974;
L_08A90974:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A909A8;
      }
      goto L_08A9097C;
    }
L_08A9097C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(292)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A909A8;
      }
      goto L_08A909A4;
    }
L_08A909A4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2112), 0u);
    goto L_08A909A8;
L_08A909A8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A909D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-8108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] << 7u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90C94;
      }
      goto L_08A90A24;
    }
L_08A90A24:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2064));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(25)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A90A70;
      }
      goto L_08A90A68;
    }
L_08A90A68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(25)));
      if (branch_taken) {
          goto L_08A90A74;
      }
      goto L_08A90A70;
    }
L_08A90A70:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    goto L_08A90A74;
L_08A90A74:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A90C94;
      }
      goto L_08A90A80;
    }
L_08A90A80:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2072), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A90AE8;
      }
      goto L_08A90A90;
    }
L_08A90A90:
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    goto L_08A90A94;
L_08A90A94:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A90AC8;
      }
      goto L_08A90A9C;
    }
L_08A90A9C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(816)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A90AC8;
      }
      goto L_08A90AA8;
    }
L_08A90AA8:
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(816), 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[8] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A90AD8;
      }
      goto L_08A90AC8;
    }
L_08A90AC8:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(816)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90AD8;
      }
      goto L_08A90AD4;
    }
L_08A90AD4:
    ctx.gpr[5] = (ctx.gpr[8] & 255u);
    goto L_08A90AD8;
L_08A90AD8:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A90A94;
      }
      goto L_08A90AE8;
    }
L_08A90AE8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A90B14;
      }
      goto L_08A90AF0;
    }
L_08A90AF0:
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), 0u);
        goto L_08A90B18;
    }
    goto L_08A90AF8;
L_08A90AF8:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(816)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(816), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(816), 0u);
    goto L_08A90B14;
L_08A90B14:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), 0u);
    goto L_08A90B18;
L_08A90B18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(596), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-8193));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2076), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2077), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2078), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A90B60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 474u, 0x088868F4u>(ctx, &aot_mem) && ctx.pc == 0x08A90B60u) goto L_08A90B60;
    return;
L_08A90B60:
    ctx.gpr[31] = (0x08A90B68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x08A90B68u) goto L_08A90B68;
    return;
L_08A90B68:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90C94;
      }
      goto L_08A90B70;
    }
L_08A90B70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90BA0;
      }
      goto L_08A90B7C;
    }
L_08A90B7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A90BA0;
      }
      goto L_08A90B88;
    }
L_08A90B88:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A90B98u);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x08A90B98u) goto L_08A90B98;
    return;
L_08A90B98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90C94;
      }
      goto L_08A90BA0;
    }
L_08A90BA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90C14;
      }
      goto L_08A90BAC;
    }
L_08A90BAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A90C14;
      }
      goto L_08A90BF4;
    }
L_08A90BF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[6] = (16416u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A90C0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 336u, 0x089A1828u>(ctx, &aot_mem) && ctx.pc == 0x08A90C0Cu) goto L_08A90C0C;
    return;
L_08A90C0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90C8C;
      }
      goto L_08A90C14;
    }
L_08A90C14:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[31] = (0x08A90C20u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90C20u) goto L_08A90C20;
    return;
L_08A90C20:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A90C6Cu);
    ctx.gpr[6] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 361u, 0x089A1960u>(ctx, &aot_mem) && ctx.pc == 0x08A90C6Cu) goto L_08A90C6C;
    return;
L_08A90C6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A90C8Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x08A90C8Cu) goto L_08A90C8C;
    return;
L_08A90C8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90C94;
      }
      goto L_08A90C94;
    }
L_08A90C94:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A90CAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-368));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[17]);
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2064));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A90D18u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A90D18u) goto L_08A90D18;
    return;
L_08A90D18:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-8108)));
        goto L_08A90D30;
    }
    goto L_08A90D20;
L_08A90D20:
    ctx.gpr[31] = (0x08A90D28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A90D28u) goto L_08A90D28;
    return;
L_08A90D28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A90D4C;
      }
      goto L_08A90D30;
    }
L_08A90D30:
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A90D4C;
L_08A90D4C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A90D6C;
      }
      goto L_08A90D5C;
    }
L_08A90D5C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90D8C;
      }
      goto L_08A90D6C;
    }
L_08A90D6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A90D84;
      }
      goto L_08A90D7C;
    }
L_08A90D7C:
    ctx.gpr[31] = (0x08A90D84u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A909D8;
L_08A90D84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91EB4;
      }
      goto L_08A90D8C;
    }
L_08A90D8C:
    ctx.gpr[31] = (0x08A90D94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 424u, 0x08ACA960u>(ctx, &aot_mem) && ctx.pc == 0x08A90D94u) goto L_08A90D94;
    return;
L_08A90D94:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90E54;
      }
      goto L_08A90D9C;
    }
L_08A90D9C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2072)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90E54;
      }
      goto L_08A90DA8;
    }
L_08A90DA8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2073)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A90E54;
      }
      goto L_08A90DB4;
    }
L_08A90DB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90EB0;
      }
      goto L_08A90DC4;
    }
L_08A90DC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2078), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2073), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-8193));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A90E0Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 759u, 0x0899FD54u>(ctx, &aot_mem) && ctx.pc == 0x08A90E0Cu) goto L_08A90E0C;
    return;
L_08A90E0C:
    ctx.gpr[31] = (0x08A90E14u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 474u, 0x088868F4u>(ctx, &aot_mem) && ctx.pc == 0x08A90E14u) goto L_08A90E14;
    return;
L_08A90E14:
    ctx.gpr[31] = (0x08A90E1Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A909D8;
L_08A90E1C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(596), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(848), 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A90E30u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 247u, 0x089A11A4u>(ctx, &aot_mem) && ctx.pc == 0x08A90E30u) goto L_08A90E30;
    return;
L_08A90E30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2068)));
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A90EB0;
      }
      goto L_08A90E4C;
    }
L_08A90E4C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2076), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08A90EB0;
      }
      goto L_08A90E54;
    }
L_08A90E54:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2078)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90EB0;
      }
      goto L_08A90E60;
    }
L_08A90E60:
    ctx.gpr[31] = (0x08A90E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 424u, 0x08ACA960u>(ctx, &aot_mem) && ctx.pc == 0x08A90E68u) goto L_08A90E68;
    return;
L_08A90E68:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A90EB0;
      }
      goto L_08A90E70;
    }
L_08A90E70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2078), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2073), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2076), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (65535u << 16u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A90EB0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A909D8;
L_08A90EB0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A91A20;
      }
      goto L_08A90EB8;
    }
L_08A90EB8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2073)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A91554;
      }
      goto L_08A90EC4;
    }
L_08A90EC4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2072)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9122C;
      }
      goto L_08A90ED0;
    }
L_08A90ED0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08A90EECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 138u, 0x08850DACu>(ctx, &aot_mem) && ctx.pc == 0x08A90EECu) goto L_08A90EEC;
    return;
L_08A90EEC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9122C;
      }
      goto L_08A90EF4;
    }
L_08A90EF4:
    ctx.gpr[31] = (0x08A90EFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A90EFCu) goto L_08A90EFC;
    return;
L_08A90EFC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9122C;
      }
      goto L_08A90F04;
    }
L_08A90F04:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08A90F24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90F24u) goto L_08A90F24;
    return;
L_08A90F24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2068)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9122C;
      }
      goto L_08A90F3C;
    }
L_08A90F3C:
    ctx.gpr[31] = (0x08A90F44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A90F44u) goto L_08A90F44;
    return;
L_08A90F44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9122C;
      }
      goto L_08A90FB0;
    }
L_08A90FB0:
    ctx.gpr[31] = (0x08A90FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A90FB8u) goto L_08A90FB8;
    return;
L_08A90FB8:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A91048;
      }
      goto L_08A91040;
    }
L_08A91040:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A9107C;
      }
      goto L_08A91048;
    }
L_08A91048:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A9107C;
L_08A9107C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A910A8;
      }
      goto L_08A910A0;
    }
L_08A910A0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A910DC;
      }
      goto L_08A910A8;
    }
L_08A910A8:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A910DC;
L_08A910DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16204u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A91214;
      }
      goto L_08A91114;
    }
L_08A91114:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A91128u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 85u, 0x089A064Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91128u) goto L_08A91128;
    return;
L_08A91128:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A91134u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x08A91134u) goto L_08A91134;
    return;
L_08A91134:
    ctx.gpr[31] = (0x08A9113Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 2u, 0x089A000Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9113Cu) goto L_08A9113C;
    return;
L_08A9113C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9122C;
      }
      goto L_08A91144;
    }
L_08A91144:
    ctx.gpr[31] = (0x08A9114Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A9114Cu) goto L_08A9114C;
    return;
L_08A9114C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A91158u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 228u, 0x088D91E4u>(ctx, &aot_mem) && ctx.pc == 0x08A91158u) goto L_08A91158;
    return;
L_08A91158:
    ctx.gpr[31] = (0x08A91160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A91160u) goto L_08A91160;
    return;
L_08A91160:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25156)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25152)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A91180u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08A91180u) goto L_08A91180;
    return;
L_08A91180:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[16] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A911B0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 262u, 0x089A12E4u>(ctx, &aot_mem) && ctx.pc == 0x08A911B0u) goto L_08A911B0;
    return;
L_08A911B0:
    ctx.gpr[31] = (0x08A911B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A911B8u) goto L_08A911B8;
    return;
L_08A911B8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25164)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25160)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A911D0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08A911D0u) goto L_08A911D0;
    return;
L_08A911D0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25172)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25168)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A9120Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 247u, 0x089A11A4u>(ctx, &aot_mem) && ctx.pc == 0x08A9120Cu) goto L_08A9120C;
    return;
L_08A9120C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9122C;
      }
      goto L_08A91214;
    }
L_08A91214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9122C;
      }
      goto L_08A91224;
    }
L_08A91224:
    ctx.gpr[31] = (0x08A9122Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x08A9122Cu) goto L_08A9122C;
    return;
L_08A9122C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2072)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9124C;
      }
      goto L_08A91238;
    }
L_08A91238:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(25)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A913C8;
      }
      goto L_08A9124C;
    }
L_08A9124C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(25)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A91268;
      }
      goto L_08A91260;
    }
L_08A91260:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(25)));
      if (branch_taken) {
          goto L_08A9126C;
      }
      goto L_08A91268;
    }
L_08A91268:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    goto L_08A9126C;
L_08A9126C:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2068)));
      if (branch_taken) {
          goto L_08A912BC;
      }
      goto L_08A9127C;
    }
L_08A9127C:
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08A91280;
L_08A91280:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(816)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A912AC;
      }
      goto L_08A9128C;
    }
L_08A9128C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(816)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(2068)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A912AC;
      }
      goto L_08A912A4;
    }
L_08A912A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(816)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2068)));
    goto L_08A912AC;
L_08A912AC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A91280;
      }
      goto L_08A912BC;
    }
L_08A912BC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2072)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9135C;
      }
      goto L_08A912C8;
    }
L_08A912C8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(25)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A912F0;
      }
      goto L_08A912DC;
    }
L_08A912DC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A912E8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 584u, 0x08A8ED44u>(ctx, &aot_mem) && ctx.pc == 0x08A912E8u) goto L_08A912E8;
    return;
L_08A912E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A913C0;
      }
      goto L_08A912F0;
    }
L_08A912F0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2068)));
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A91328;
      }
      goto L_08A9130C;
    }
L_08A9130C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A913C0;
      }
      goto L_08A91314;
    }
L_08A91314:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2068)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A913C0;
      }
      goto L_08A91328;
    }
L_08A91328:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91348;
      }
      goto L_08A91330;
    }
L_08A91330:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A91348;
      }
      goto L_08A91340;
    }
L_08A91340:
    ctx.gpr[31] = (0x08A91348u);
    // nop
    goto L_08A909D8;
L_08A91348:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A91354u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 584u, 0x08A8ED44u>(ctx, &aot_mem) && ctx.pc == 0x08A91354u) goto L_08A91354;
    return;
L_08A91354:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A913C0;
      }
      goto L_08A9135C;
    }
L_08A9135C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A913C0;
      }
      goto L_08A91364;
    }
L_08A91364:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(25)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A913C0;
      }
      goto L_08A91378;
    }
L_08A91378:
    ctx.gpr[5] = (16672u << 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A913A8;
      }
      goto L_08A91384;
    }
L_08A91384:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2068)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A913A8;
      }
      goto L_08A91398;
    }
L_08A91398:
    ctx.gpr[31] = (0x08A913A0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A909D8;
L_08A913A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A913C0;
      }
      goto L_08A913A8;
    }
L_08A913A8:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A913C0;
      }
      goto L_08A913B8;
    }
L_08A913B8:
    ctx.gpr[31] = (0x08A913C0u);
    // nop
    goto L_08A909D8;
L_08A913C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A913D4;
      }
      goto L_08A913C8;
    }
L_08A913C8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A913D4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 584u, 0x08A8ED44u>(ctx, &aot_mem) && ctx.pc == 0x08A913D4u) goto L_08A913D4;
    return;
L_08A913D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2072)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91EB4;
      }
      goto L_08A913E0;
    }
L_08A913E0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A91424;
      }
      goto L_08A913EC;
    }
L_08A913EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A91424;
      }
      goto L_08A91410;
    }
L_08A91410:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A9141Cu);
    ctx.gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 609u, 0x0899F378u>(ctx, &aot_mem) && ctx.pc == 0x08A9141Cu) goto L_08A9141C;
    return;
L_08A9141C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9149C;
      }
      goto L_08A91424;
    }
L_08A91424:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A9149C;
      }
      goto L_08A91430;
    }
L_08A91430:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9149C;
      }
      goto L_08A91454;
    }
L_08A91454:
    ctx.gpr[31] = (0x08A9145Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9145Cu) goto L_08A9145C;
    return;
L_08A9145C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9149C;
      }
      goto L_08A91468;
    }
L_08A91468:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A91474u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 663u, 0x0899F6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A91474u) goto L_08A91474;
    return;
L_08A91474:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A91490;
      }
      goto L_08A9147C;
    }
L_08A9147C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A91488u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 609u, 0x0899F378u>(ctx, &aot_mem) && ctx.pc == 0x08A91488u) goto L_08A91488;
    return;
L_08A91488:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9149C;
      }
      goto L_08A91490;
    }
L_08A91490:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A9149Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 609u, 0x0899F378u>(ctx, &aot_mem) && ctx.pc == 0x08A9149Cu) goto L_08A9149C;
    return;
L_08A9149C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2075)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A914DC;
      }
      goto L_08A914A8;
    }
L_08A914A8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A914DC;
      }
      goto L_08A914D0;
    }
L_08A914D0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A914DCu);
    ctx.gpr[5] = (0u | 113u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x08A914DCu) goto L_08A914DC;
    return;
L_08A914DC:
    ctx.gpr[31] = (0x08A914E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A914E4u) goto L_08A914E4;
    return;
L_08A914E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91EB4;
      }
      goto L_08A914EC;
    }
L_08A914EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2075)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91508;
      }
      goto L_08A914F8;
    }
L_08A914F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(27)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2075), static_cast<std::uint8_t>(0u));
    goto L_08A91508;
L_08A91508:
    ctx.gpr[31] = (0x08A91510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 175u, 0x089D5818u>(ctx, &aot_mem) && ctx.pc == 0x08A91510u) goto L_08A91510;
    return;
L_08A91510:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2068)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A91EB4;
      }
      goto L_08A91544;
    }
L_08A91544:
    ctx.gpr[31] = (0x08A9154Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A909D8;
L_08A9154C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91EB4;
      }
      goto L_08A91554;
    }
L_08A91554:
    ctx.gpr[17] = (0u | 17u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A91564u);
    ctx.gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 609u, 0x0899F378u>(ctx, &aot_mem) && ctx.pc == 0x08A91564u) goto L_08A91564;
    return;
L_08A91564:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08A91584u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91584u) goto L_08A91584;
    return;
L_08A91584:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A915A0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 85u, 0x089A064Cu>(ctx, &aot_mem) && ctx.pc == 0x08A915A0u) goto L_08A915A0;
    return;
L_08A915A0:
    ctx.gpr[31] = (0x08A915A8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 2u, 0x089A000Cu>(ctx, &aot_mem) && ctx.pc == 0x08A915A8u) goto L_08A915A8;
    return;
L_08A915A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A915E4;
      }
      goto L_08A915B8;
    }
L_08A915B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91A18;
      }
      goto L_08A915C8;
    }
L_08A915C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91A18;
      }
      goto L_08A915E4;
    }
L_08A915E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1788)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9179C;
      }
      goto L_08A915FC;
    }
L_08A915FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2068)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A91788;
      }
      goto L_08A91610;
    }
L_08A91610:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08A91628u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 259u, 0x08A4D17Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91628u) goto L_08A91628;
    return;
L_08A91628:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A9163Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 179u, 0x0890D00Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9163Cu) goto L_08A9163C;
    return;
L_08A9163C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A91648u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 178u, 0x0890D004u>(ctx, &aot_mem) && ctx.pc == 0x08A91648u) goto L_08A91648;
    return;
L_08A91648:
    ctx.gpr[7] = (ctx.gpr[18] << 6u);
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A91660u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 645u, 0x088B7FA4u>(ctx, &aot_mem) && ctx.pc == 0x08A91660u) goto L_08A91660;
    return;
L_08A91660:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08A9169Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 489u, 0x088C697Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9169Cu) goto L_08A9169C;
    return;
L_08A9169C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A916BC;
      }
      goto L_08A916A4;
    }
L_08A916A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9172C;
      }
      goto L_08A916B0;
    }
L_08A916B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A9172C;
      }
      goto L_08A916BC;
    }
L_08A916BC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A916C8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 516u, 0x0899EDBCu>(ctx, &aot_mem) && ctx.pc == 0x08A916C8u) goto L_08A916C8;
    return;
L_08A916C8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A916D4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 228u, 0x088D91E4u>(ctx, &aot_mem) && ctx.pc == 0x08A916D4u) goto L_08A916D4;
    return;
L_08A916D4:
    ctx.gpr[31] = (0x08A916DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A916DCu) goto L_08A916DC;
    return;
L_08A916DC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25156)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25152)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A916FCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08A916FCu) goto L_08A916FC;
    return;
L_08A916FC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[16] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A9172Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 262u, 0x089A12E4u>(ctx, &aot_mem) && ctx.pc == 0x08A9172Cu) goto L_08A9172C;
    return;
L_08A9172C:
    ctx.gpr[31] = (0x08A91734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A91734u) goto L_08A91734;
    return;
L_08A91734:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25164)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25160)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A9174Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08A9174Cu) goto L_08A9174C;
    return;
L_08A9174C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25172)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25168)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A91788u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 247u, 0x089A11A4u>(ctx, &aot_mem) && ctx.pc == 0x08A91788u) goto L_08A91788;
    return;
L_08A91788:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A91794u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x08A91794u) goto L_08A91794;
    return;
L_08A91794:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91A18;
      }
      goto L_08A9179C;
    }
L_08A9179C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A91A18;
      }
      goto L_08A917AC;
    }
L_08A917AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A91A18;
      }
      goto L_08A917B8;
    }
L_08A917B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2078)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A91A18;
      }
      goto L_08A917C4;
    }
L_08A917C4:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2068)));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A91890;
      }
      goto L_08A917FC;
    }
L_08A917FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A91818;
      }
      goto L_08A9180C;
    }
L_08A9180C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A91818u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 686u, 0x088877F4u>(ctx, &aot_mem) && ctx.pc == 0x08A91818u) goto L_08A91818;
    return;
L_08A91818:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A91A18;
      }
      goto L_08A91840;
    }
L_08A91840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2073), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (65535u << 16u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A91870u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 584u, 0x08A8ED44u>(ctx, &aot_mem) && ctx.pc == 0x08A91870u) goto L_08A91870;
    return;
L_08A91870:
    ctx.gpr[31] = (0x08A91878u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91878u) goto L_08A91878;
    return;
L_08A91878:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x08A91888u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x08A91888u) goto L_08A91888;
    return;
L_08A91888:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91A18;
      }
      goto L_08A91890;
    }
L_08A91890:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2068)));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A91928;
      }
      goto L_08A918AC;
    }
L_08A918AC:
    ctx.gpr[31] = (0x08A918B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A918B4u) goto L_08A918B4;
    return;
L_08A918B4:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
        goto L_08A918F8;
    }
    goto L_08A918BC;
L_08A918BC:
    ctx.gpr[31] = (0x08A918C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A918C4u) goto L_08A918C4;
    return;
L_08A918C4:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (14289u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A91928;
      }
      goto L_08A918F4;
    }
L_08A918F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    goto L_08A918F8;
L_08A918F8:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2073), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (65535u << 16u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A91A18;
      }
      goto L_08A91928;
    }
L_08A91928:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2064)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A91988;
      }
      goto L_08A91934;
    }
L_08A91934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2064)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[18];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[19];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
      if (branch_taken) {
          goto L_08A91990;
      }
      goto L_08A91988;
    }
L_08A91988:
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A91990;
L_08A91990:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A91A0C;
      }
      goto L_08A919A0;
    }
L_08A919A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
        goto L_08A919C0;
    }
    goto L_08A919B0;
L_08A919B0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A919BCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 686u, 0x088877F4u>(ctx, &aot_mem) && ctx.pc == 0x08A919BCu) goto L_08A919BC;
    return;
L_08A919BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    goto L_08A919C0;
L_08A919C0:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2073), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (65535u << 16u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A91A04u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 584u, 0x08A8ED44u>(ctx, &aot_mem) && ctx.pc == 0x08A91A04u) goto L_08A91A04;
    return;
L_08A91A04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91A18;
      }
      goto L_08A91A0C;
    }
L_08A91A0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_08A91A18;
L_08A91A18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91EB4;
      }
      goto L_08A91A20;
    }
L_08A91A20:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2073)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91AD4;
      }
      goto L_08A91A2C;
    }
L_08A91A2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2078)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A91AD4;
      }
      goto L_08A91A38;
    }
L_08A91A38:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2072)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
        goto L_08A91A60;
    }
    goto L_08A91A44;
L_08A91A44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 22u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
        goto L_08A91A60;
    }
    goto L_08A91A54;
L_08A91A54:
    ctx.gpr[31] = (0x08A91A5Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A909D8;
L_08A91A5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    goto L_08A91A60;
L_08A91A60:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2073), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (65535u << 16u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91AB0;
      }
      goto L_08A91AA4;
    }
L_08A91AA4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A91AB0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 686u, 0x088877F4u>(ctx, &aot_mem) && ctx.pc == 0x08A91AB0u) goto L_08A91AB0;
    return;
L_08A91AB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91EB4;
      }
      goto L_08A91ABC;
    }
L_08A91ABC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A91ACCu);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x08A91ACCu) goto L_08A91ACC;
    return;
L_08A91ACC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91EB4;
      }
      goto L_08A91AD4;
    }
L_08A91AD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A91EB4;
      }
      goto L_08A91AE4;
    }
L_08A91AE4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2072)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91AF8;
      }
      goto L_08A91AF0;
    }
L_08A91AF0:
    ctx.gpr[31] = (0x08A91AF8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A909D8;
L_08A91AF8:
    ctx.gpr[31] = (0x08A91B00u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x08A91B00u) goto L_08A91B00;
    return;
L_08A91B00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91EB4;
      }
      goto L_08A91B08;
    }
L_08A91B08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91C2C;
      }
      goto L_08A91B14;
    }
L_08A91B14:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A91C2C;
      }
      goto L_08A91B20;
    }
L_08A91B20:
    ctx.gpr[31] = (0x08A91B28u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 101u, 0x088A07B0u>(ctx, &aot_mem) && ctx.pc == 0x08A91B28u) goto L_08A91B28;
    return;
L_08A91B28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91BD8;
      }
      goto L_08A91B30;
    }
L_08A91B30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91BB0;
      }
      goto L_08A91B40;
    }
L_08A91B40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A91B80;
      }
      goto L_08A91B58;
    }
L_08A91B58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A91EB4;
      }
      goto L_08A91B68;
    }
L_08A91B68:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A91B78u);
    ctx.gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x08A91B78u) goto L_08A91B78;
    return;
L_08A91B78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91EB4;
      }
      goto L_08A91B80;
    }
L_08A91B80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x08A91B8Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x08A91B8Cu) goto L_08A91B8C;
    return;
L_08A91B8C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91EB4;
      }
      goto L_08A91B94;
    }
L_08A91B94:
    ctx.gpr[31] = (0x08A91B9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91B9Cu) goto L_08A91B9C;
    return;
L_08A91B9C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A91BA8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 215u, 0x08944EA0u>(ctx, &aot_mem) && ctx.pc == 0x08A91BA8u) goto L_08A91BA8;
    return;
L_08A91BA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91EB4;
      }
      goto L_08A91BB0;
    }
L_08A91BB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A91EB4;
      }
      goto L_08A91BC0;
    }
L_08A91BC0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A91BD0u);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x08A91BD0u) goto L_08A91BD0;
    return;
L_08A91BD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91EB4;
      }
      goto L_08A91BD8;
    }
L_08A91BD8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1332), 0u);
    ctx.gpr[31] = (0x08A91BE4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 474u, 0x088868F4u>(ctx, &aot_mem) && ctx.pc == 0x08A91BE4u) goto L_08A91BE4;
    return;
L_08A91BE4:
    ctx.gpr[31] = (0x08A91BECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A91BECu) goto L_08A91BEC;
    return;
L_08A91BEC:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
        goto L_08A91C10;
    }
    goto L_08A91BF8;
L_08A91BF8:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
      if (branch_taken) {
          goto L_08A91C18;
      }
      goto L_08A91C10;
    }
L_08A91C10:
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    goto L_08A91C18;
L_08A91C18:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A91C24u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 278u, 0x089A1468u>(ctx, &aot_mem) && ctx.pc == 0x08A91C24u) goto L_08A91C24;
    return;
L_08A91C24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91EB4;
      }
      goto L_08A91C2C;
    }
L_08A91C2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A91EB4;
      }
      goto L_08A91C3C;
    }
L_08A91C3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A91EB4;
      }
      goto L_08A91C4C;
    }
L_08A91C4C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(428)));
    ctx.gpr[30] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A91EB4;
      }
      goto L_08A91C5C;
    }
L_08A91C5C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16840u << 16u);
      if (branch_taken) {
          goto L_08A91EB4;
      }
      goto L_08A91C70;
    }
L_08A91C70:
    ctx.gpr[22] = (0u | 6u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[20] = (2230u << 16u);
    goto L_08A91C88;
L_08A91C88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A91EA0;
      }
      goto L_08A91C98;
    }
L_08A91C98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A91CBC;
      }
      goto L_08A91CAC;
    }
L_08A91CAC:
    ctx.gpr[31] = (0x08A91CB4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1828)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 845u, 0x089A38C0u>(ctx, &aot_mem) && ctx.pc == 0x08A91CB4u) goto L_08A91CB4;
    return;
L_08A91CB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91D70;
      }
      goto L_08A91CBC;
    }
L_08A91CBC:
    ctx.gpr[31] = (0x08A91CC4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1828)));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x08A91CC4u) goto L_08A91CC4;
    return;
L_08A91CC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91D70;
      }
      goto L_08A91CCC;
    }
L_08A91CCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A91D2C;
      }
      goto L_08A91CE0;
    }
L_08A91CE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1392)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91D2C;
      }
      goto L_08A91CF0;
    }
L_08A91CF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1392)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 6u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91D2C;
      }
      goto L_08A91D14;
    }
L_08A91D14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1392)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A91D2C;
      }
      goto L_08A91D28;
    }
L_08A91D28:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    goto L_08A91D2C;
L_08A91D2C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A91D68;
      }
      goto L_08A91D34;
    }
L_08A91D34:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A91D44u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x08A91D44u) goto L_08A91D44;
    return;
L_08A91D44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[31] = (0x08A91D54u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x08A91D54u) goto L_08A91D54;
    return;
L_08A91D54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (ctx.gpr[5] | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(408), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A91EB4;
      }
      goto L_08A91D68;
    }
L_08A91D68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91EA0;
      }
      goto L_08A91D70;
    }
L_08A91D70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A91EA0;
      }
      goto L_08A91D80;
    }
L_08A91D80:
    ctx.gpr[31] = (0x08A91D88u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1828)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x08A91D88u) goto L_08A91D88;
    return;
L_08A91D88:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A91EA0;
      }
      goto L_08A91D90;
    }
L_08A91D90:
    ctx.gpr[31] = (0x08A91D98u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1828)));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x08A91D98u) goto L_08A91D98;
    return;
L_08A91D98:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91EA0;
      }
      goto L_08A91DA0;
    }
L_08A91DA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91EA0;
      }
      goto L_08A91DB4;
    }
L_08A91DB4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A91EA0;
      }
      goto L_08A91DC4;
    }
L_08A91DC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A91EA0;
      }
      goto L_08A91DD4;
    }
L_08A91DD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A91EA0;
      }
      goto L_08A91DE0;
    }
L_08A91DE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1780)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91EA0;
      }
      goto L_08A91DF4;
    }
L_08A91DF4:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A91EA0;
      }
      goto L_08A91E28;
    }
L_08A91E28:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08A91E54u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 339u, 0x088C5B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91E54u) goto L_08A91E54;
    return;
L_08A91E54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91EA0;
      }
      goto L_08A91E5C;
    }
L_08A91E5C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A91E68u);
    ctx.gpr[5] = (0u | 134u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x08A91E68u) goto L_08A91E68;
    return;
L_08A91E68:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 14u);
    ctx.gpr[31] = (0x08A91E78u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x08A91E78u) goto L_08A91E78;
    return;
L_08A91E78:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08A91E88u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x08A91E88u) goto L_08A91E88;
    return;
L_08A91E88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31072));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(2100), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A91EB4;
      }
      goto L_08A91EA0;
    }
L_08A91EA0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A91C88;
      }
      goto L_08A91EB4;
    }
L_08A91EB4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A91EE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A91F58;
      }
      goto L_08A91F1C;
    }
L_08A91F1C:
    ctx.gpr[31] = (0x08A91F24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A91F24u) goto L_08A91F24;
    return;
L_08A91F24:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A923BC;
      }
      goto L_08A91F2C;
    }
L_08A91F2C:
    ctx.gpr[31] = (0x08A91F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A91F34u) goto L_08A91F34;
    return;
L_08A91F34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91F58;
      }
      goto L_08A91F40;
    }
L_08A91F40:
    ctx.gpr[31] = (0x08A91F48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A91F48u) goto L_08A91F48;
    return;
L_08A91F48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A923BC;
      }
      goto L_08A91F58;
    }
L_08A91F58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2108)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A91F78;
      }
      goto L_08A91F68;
    }
L_08A91F68:
    ctx.gpr[31] = (0x08A91F70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2108)));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 243u, 0x08841C34u>(ctx, &aot_mem) && ctx.pc == 0x08A91F70u) goto L_08A91F70;
    return;
L_08A91F70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A923C4;
      }
      goto L_08A91F78;
    }
L_08A91F78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2096)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A923C4;
      }
      goto L_08A91FAC;
    }
L_08A91FAC:
    ctx.gpr[31] = (0x08A91FB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A91FB4u) goto L_08A91FB4;
    return;
L_08A91FB4:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A92020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A92020u) goto L_08A92020;
    return;
L_08A92020:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (17505u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A923B4;
      }
      goto L_08A92094;
    }
L_08A92094:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A923B4;
      }
      goto L_08A920BC;
    }
L_08A920BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A920EC;
      }
      goto L_08A920E4;
    }
L_08A920E4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A92120;
      }
      goto L_08A920EC;
    }
L_08A920EC:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A92120;
L_08A92120:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9214C;
      }
      goto L_08A92144;
    }
L_08A92144:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A92180;
      }
      goto L_08A9214C;
    }
L_08A9214C:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A92180;
L_08A92180:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16204u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A923B4;
      }
      goto L_08A921B8;
    }
L_08A921B8:
    ctx.gpr[18] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-26868)));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[31] = (0x08A921ECu);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 376u, 0x089757BCu>(ctx, &aot_mem) && ctx.pc == 0x08A921ECu) goto L_08A921EC;
    return;
L_08A921EC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A923B4;
      }
      goto L_08A921FC;
    }
L_08A921FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A923B4;
      }
      goto L_08A92208;
    }
L_08A92208:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.execute_vfpu_vx2i(1u, 0u, 1u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A923B4;
      }
      goto L_08A92278;
    }
L_08A92278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x08A92288u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 711u, 0x08977838u>(ctx, &aot_mem) && ctx.pc == 0x08A92288u) goto L_08A92288;
    return;
L_08A92288:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A92338;
      }
      goto L_08A922C8;
    }
L_08A922C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (16329u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A92304;
      }
      goto L_08A922EC;
    }
L_08A922EC:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A92304;
      }
      goto L_08A922FC;
    }
L_08A922FC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[22];
      if (branch_taken) {
          goto L_08A92310;
      }
      goto L_08A92304;
    }
L_08A92304:
    ctx.gpr[31] = (0x08A9230Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x08A9230Cu) goto L_08A9230C;
    return;
L_08A9230C:
    ctx.fpr[20] = ctx.fpr[0] + ctx.fpr[22];
    goto L_08A92310;
L_08A92310:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9231Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A288A8u>(ctx, &aot_mem) && ctx.pc == 0x08A9231Cu) goto L_08A9231C;
    return;
L_08A9231C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2108)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A92330u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 225u, 0x08841B48u>(ctx, &aot_mem) && ctx.pc == 0x08A92330u) goto L_08A92330;
    return;
L_08A92330:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A923B4;
      }
      goto L_08A92338;
    }
L_08A92338:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A923B4;
      }
      goto L_08A9234C;
    }
L_08A9234C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (16329u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A92388;
      }
      goto L_08A92370;
    }
L_08A92370:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A92388;
      }
      goto L_08A92380;
    }
L_08A92380:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[22];
      if (branch_taken) {
          goto L_08A92394;
      }
      goto L_08A92388;
    }
L_08A92388:
    ctx.gpr[31] = (0x08A92390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x08A92390u) goto L_08A92390;
    return;
L_08A92390:
    ctx.fpr[20] = ctx.fpr[0] - ctx.fpr[22];
    goto L_08A92394;
L_08A92394:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A923A0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A288A8u>(ctx, &aot_mem) && ctx.pc == 0x08A923A0u) goto L_08A923A0;
    return;
L_08A923A0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2108)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A923B4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 225u, 0x08841B48u>(ctx, &aot_mem) && ctx.pc == 0x08A923B4u) goto L_08A923B4;
    return;
L_08A923B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A923C4;
      }
      goto L_08A923BC;
    }
L_08A923BC:
    ctx.gpr[31] = (0x08A923C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A909D8;
L_08A923C4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A923E8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25108)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(25104)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25132)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2229u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[3] = (2229u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(25112), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2229u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(25120), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(25116), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25124), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(25136), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9247C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(16912));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08A9249Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20736));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9249Cu) goto L_08A9249C;
    return;
L_08A9249C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[7] + ctx.gpr[16]);
    goto L_08A924C4;
L_08A924C4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
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
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A924C4;
      }
      goto L_08A924F4;
    }
L_08A924F4:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6112), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9250C:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(16912));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6112), 0u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8148)));
    goto L_08A92530;
L_08A92530:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92570;
      }
      goto L_08A9253C;
    }
L_08A9253C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32)));
    ctx.gpr[9] = (ctx.gpr[9] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A92558;
      }
      goto L_08A9254C;
    }
L_08A9254C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A92560;
      }
      goto L_08A92558;
    }
L_08A92558:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), 0u);
    goto L_08A92560;
L_08A92560:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A92570;
      }
      goto L_08A9256C;
    }
L_08A9256C:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    goto L_08A92570;
L_08A92570:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A92530;
      }
      goto L_08A92580;
    }
L_08A92580:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A92588:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16912));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (ctx.gpr[5] | 0u);
    goto L_08A9259C;
L_08A9259C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A925FC;
      }
      goto L_08A925A8;
    }
L_08A925A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A925FC;
      }
      goto L_08A925C0;
    }
L_08A925C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A925FC;
      }
      goto L_08A925D8;
    }
L_08A925D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A925FC;
      }
      goto L_08A925F0;
    }
L_08A925F0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92614;
      }
      goto L_08A925FC;
    }
L_08A925FC:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A9259C;
      }
      goto L_08A9260C;
    }
L_08A9260C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92628;
      }
      goto L_08A92614;
    }
L_08A92614:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A926CC;
      }
      goto L_08A92628;
    }
L_08A92628:
    ctx.gpr[9] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-6112)));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[8]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[10] = (ctx.gpr[8] << 4u);
      if (branch_taken) {
          goto L_08A9266C;
      }
      goto L_08A9263C;
    }
L_08A9263C:
    ctx.gpr[2] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[2]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[5]);
    goto L_08A92648;
L_08A92648:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9265C;
      }
      goto L_08A92654;
    }
L_08A92654:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-6112), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08A9266C;
      }
      goto L_08A9265C;
    }
L_08A9265C:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[8]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A92648;
      }
      goto L_08A9266C;
    }
L_08A9266C:
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A926CC;
      }
      goto L_08A92674;
    }
L_08A92674:
    ctx.gpr[8] = (ctx.gpr[8] << 4u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[10] = (2230u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[6] = (ctx.gpr[10] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[9] + ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A926C8;
      }
      goto L_08A926BC;
    }
L_08A926BC:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A926CC;
      }
      goto L_08A926C8;
    }
L_08A926C8:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(36), 0u);
    goto L_08A926CC;
L_08A926CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A926D4:
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16912));
    goto L_08A926E0;
L_08A926E0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A92704;
      }
      goto L_08A926EC;
    }
L_08A926EC:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A926E0;
      }
      goto L_08A926FC;
    }
L_08A926FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9270C;
      }
      goto L_08A92704;
    }
L_08A92704:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[2] = (0u | 1u);
    goto L_08A9270C;
L_08A9270C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A92714:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[9] = (2269u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(16912));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[3] = (ctx.gpr[9] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[3]);
    ctx.gpr[11] = (ctx.gpr[5] | 0u);
    ctx.gpr[3] = (17008u << 16u);
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08A92748;
L_08A92748:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A9279C;
      }
      goto L_08A92754;
    }
L_08A92754:
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    ctx.gpr[3] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9279C;
      }
      goto L_08A92790;
    }
L_08A92790:
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    goto L_08A9279C;
L_08A9279C:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(48));
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[10]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A92748;
      }
      goto L_08A927B0;
    }
L_08A927B0:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A927B8:
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16912));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A927E8;
      }
      goto L_08A927E0;
    }
L_08A927E0:
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    goto L_08A927E8;
L_08A927E8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A927F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[22] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(16912));
    ctx.gpr[20] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[23] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A9285C;
      }
      goto L_08A92844;
    }
L_08A92844:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A92890;
      }
      goto L_08A9284C;
    }
L_08A9284C:
    ctx.gpr[31] = (0x08A92854u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 577u, 0x08A06D88u>(ctx, &aot_mem) && ctx.pc == 0x08A92854u) goto L_08A92854;
    return;
L_08A92854:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A928A0;
      }
      goto L_08A9285C;
    }
L_08A9285C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A92880;
      }
      goto L_08A92868;
    }
L_08A92868:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92890;
      }
      goto L_08A92870;
    }
L_08A92870:
    ctx.gpr[31] = (0x08A92878u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 585u, 0x08A06E18u>(ctx, &aot_mem) && ctx.pc == 0x08A92878u) goto L_08A92878;
    return;
L_08A92878:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A928A0;
      }
      goto L_08A92880;
    }
L_08A92880:
    ctx.gpr[31] = (0x08A92888u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 581u, 0x08A06DD0u>(ctx, &aot_mem) && ctx.pc == 0x08A92888u) goto L_08A92888;
    return;
L_08A92888:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A928A0;
      }
      goto L_08A92890;
    }
L_08A92890:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x08A928A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20688));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 541u, 0x08AFA638u>(ctx, &aot_mem) && ctx.pc == 0x08A928A0u) goto L_08A928A0;
    return;
L_08A928A0:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_08A928B0;
L_08A928B0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92904;
      }
      goto L_08A928B8;
    }
L_08A928B8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A92904;
      }
      goto L_08A928C0;
    }
L_08A928C0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A928F4;
      }
      goto L_08A928CC;
    }
L_08A928CC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A928F4;
      }
      goto L_08A928D8;
    }
L_08A928D8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A928F4;
      }
      goto L_08A928E4;
    }
L_08A928E4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_08A928F4;
L_08A928F4:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < 64 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A928B0;
      }
      goto L_08A92904;
    }
L_08A92904:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A929FC;
      }
      goto L_08A9290C;
    }
L_08A9290C:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6112)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_08A92950;
      }
      goto L_08A92920;
    }
L_08A92920:
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[22]);
    goto L_08A9292C;
L_08A9292C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A92940;
      }
      goto L_08A92938;
    }
L_08A92938:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A92950;
      }
      goto L_08A92940;
    }
L_08A92940:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A9292C;
      }
      goto L_08A92950;
    }
L_08A92950:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A929D0;
      }
      goto L_08A92958;
    }
L_08A92958:
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A929B4;
      }
      goto L_08A929A0;
    }
L_08A929A0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08A929B4u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08A929B4u) goto L_08A929B4;
    return;
L_08A929B4:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A929CC;
      }
      goto L_08A929C0;
    }
L_08A929C0:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A929D0;
      }
      goto L_08A929CC;
    }
L_08A929CC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), 0u);
    goto L_08A929D0;
L_08A929D0:
    ctx.gpr[31] = (0x08A929D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A929D8u) goto L_08A929D8;
    return;
L_08A929D8:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A929FC;
      }
      goto L_08A929E0;
    }
L_08A929E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A929FC;
      }
      goto L_08A929EC;
    }
L_08A929EC:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A929FCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A92A28;
L_08A929FC:
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
L_08A92A28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(18) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08A92AF4;
      }
      goto L_08A92A64;
    }
L_08A92A64:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-20624)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A92A7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 7u);
      if (branch_taken) {
          goto L_08A92AF8;
      }
      goto L_08A92A84;
    }
L_08A92A84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 4u);
      if (branch_taken) {
          goto L_08A92AF8;
      }
      goto L_08A92A8C;
    }
L_08A92A8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 5u);
      if (branch_taken) {
          goto L_08A92AF8;
      }
      goto L_08A92A94;
    }
L_08A92A94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 6u);
      if (branch_taken) {
          goto L_08A92AF8;
      }
      goto L_08A92A9C;
    }
L_08A92A9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A92AF8;
      }
      goto L_08A92AA4;
    }
L_08A92AA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 3u);
      if (branch_taken) {
          goto L_08A92AF8;
      }
      goto L_08A92AAC;
    }
L_08A92AAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A92AF8;
      }
      goto L_08A92AB4;
    }
L_08A92AB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 10u);
      if (branch_taken) {
          goto L_08A92AF8;
      }
      goto L_08A92ABC;
    }
L_08A92ABC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 11u);
      if (branch_taken) {
          goto L_08A92AF8;
      }
      goto L_08A92AC4;
    }
L_08A92AC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 13u);
      if (branch_taken) {
          goto L_08A92AF8;
      }
      goto L_08A92ACC;
    }
L_08A92ACC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 14u);
      if (branch_taken) {
          goto L_08A92AF8;
      }
      goto L_08A92AD4;
    }
L_08A92AD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 15u);
      if (branch_taken) {
          goto L_08A92AF8;
      }
      goto L_08A92ADC;
    }
L_08A92ADC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 17u);
      if (branch_taken) {
          goto L_08A92AF8;
      }
      goto L_08A92AE4;
    }
L_08A92AE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 18u);
      if (branch_taken) {
          goto L_08A92AF8;
      }
      goto L_08A92AEC;
    }
L_08A92AEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 19u);
      if (branch_taken) {
          goto L_08A92AF8;
      }
      goto L_08A92AF4;
    }
L_08A92AF4:
    ctx.gpr[19] = (0u | 0u);
    goto L_08A92AF8;
L_08A92AF8:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A92BBC;
      }
      goto L_08A92B00;
    }
L_08A92B00:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A92B0Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 153u, 0x0899D3B0u>(ctx, &aot_mem) && ctx.pc == 0x08A92B0Cu) goto L_08A92B0C;
    return;
L_08A92B0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92BBC;
      }
      goto L_08A92B14;
    }
L_08A92B14:
    ctx.gpr[31] = (0x08A92B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92B1Cu) goto L_08A92B1C;
    return;
L_08A92B1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A92BBC;
      }
      goto L_08A92B28;
    }
L_08A92B28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92BBC;
      }
      goto L_08A92B38;
    }
L_08A92B38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A92BB4;
      }
      goto L_08A92B58;
    }
L_08A92B58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A92BB4;
      }
      goto L_08A92B68;
    }
L_08A92B68:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A92B80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20636));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 762u, 0x0893BD08u>(ctx, &aot_mem) && ctx.pc == 0x08A92B80u) goto L_08A92B80;
    return;
L_08A92B80:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(50));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), ctx.gpr[5]);
    goto L_08A92BB4;
L_08A92BB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92CE0;
      }
      goto L_08A92BBC;
    }
L_08A92BBC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92CE0;
      }
      goto L_08A92BC4;
    }
L_08A92BC4:
    ctx.gpr[31] = (0x08A92BCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92BCCu) goto L_08A92BCC;
    return;
L_08A92BCC:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A92BE8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08A92BE8u) goto L_08A92BE8;
    return;
L_08A92BE8:
    ctx.gpr[4] = (16736u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A92BF8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACDBC0u>(ctx, &aot_mem) && ctx.pc == 0x08A92BF8u) goto L_08A92BF8;
    return;
L_08A92BF8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_08A92C3C;
      }
      goto L_08A92C00;
    }
L_08A92C00:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A92C30;
      }
      goto L_08A92C08;
    }
L_08A92C08:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A92C30;
      }
      goto L_08A92C14;
    }
L_08A92C14:
    ctx.gpr[4] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A92C30;
      }
      goto L_08A92C20;
    }
L_08A92C20:
    ctx.gpr[4] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A92C78;
      }
      goto L_08A92C2C;
    }
L_08A92C2C:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08A92C30;
L_08A92C30:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29514)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92C78;
      }
      goto L_08A92C3C;
    }
L_08A92C3C:
    ctx.gpr[31] = (0x08A92C44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92C44u) goto L_08A92C44;
    return;
L_08A92C44:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2064));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A92C5Cu);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 306u, 0x08ACD40Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92C5Cu) goto L_08A92C5C;
    return;
L_08A92C5C:
    ctx.gpr[31] = (0x08A92C64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92C64u) goto L_08A92C64;
    return;
L_08A92C64:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A92C70u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 215u, 0x08944EA0u>(ctx, &aot_mem) && ctx.pc == 0x08A92C70u) goto L_08A92C70;
    return;
L_08A92C70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92C98;
      }
      goto L_08A92C78;
    }
L_08A92C78:
    ctx.gpr[31] = (0x08A92C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92C80u) goto L_08A92C80;
    return;
L_08A92C80:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2064));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A92C98u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 302u, 0x08ACD3A8u>(ctx, &aot_mem) && ctx.pc == 0x08A92C98u) goto L_08A92C98;
    return;
L_08A92C98:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A92CB8;
      }
      goto L_08A92CA4;
    }
L_08A92CA4:
    ctx.gpr[31] = (0x08A92CACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92CACu) goto L_08A92CAC;
    return;
L_08A92CAC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A92CB8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 215u, 0x08944EA0u>(ctx, &aot_mem) && ctx.pc == 0x08A92CB8u) goto L_08A92CB8;
    return;
L_08A92CB8:
    ctx.gpr[4] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 18u);
      if (branch_taken) {
          goto L_08A92CCC;
      }
      goto L_08A92CC4;
    }
L_08A92CC4:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A92CE0;
      }
      goto L_08A92CCC;
    }
L_08A92CCC:
    ctx.gpr[31] = (0x08A92CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92CD4u) goto L_08A92CD4;
    return;
L_08A92CD4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A92CE0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 215u, 0x08944EA0u>(ctx, &aot_mem) && ctx.pc == 0x08A92CE0u) goto L_08A92CE0;
    return;
L_08A92CE0:
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
L_08A92D04:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25180)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(25176)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[11] = (2229u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(25184), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(25192), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(25188), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(25196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(25200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A92D7C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25212)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(25208)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[11] = (2229u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(25216), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(25224), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(25220), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(25228), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(25232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A92DF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
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
    ctx.execute_vfpu_vdot_ct<4u, 0u, 1u, 4u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<4u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A92E34;
      }
      goto L_08A92E30;
    }
L_08A92E30:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08A92E34;
L_08A92E34:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::asin(vfpu_s[i]) * 0.63661977236758134308f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<64u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[12])) && ctx.fpr[14] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A92E98;
      }
      goto L_08A92E6C;
    }
L_08A92E6C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A92E9C;
      }
      goto L_08A92E98;
    }
L_08A92E98:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A92E9C;
L_08A92E9C:
    ctx.gpr[31] = (0x08A92EA4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08A92EA4u) goto L_08A92EA4;
    return;
L_08A92EA4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25244)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25240)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A92EBCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08A92EBCu) goto L_08A92EBC;
    return;
L_08A92EBC:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A92EC8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 561u, 0x08AF6AF8u>(ctx, &aot_mem) && ctx.pc == 0x08A92EC8u) goto L_08A92EC8;
    return;
L_08A92EC8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A92EDC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vf2h(64u, 0u, 2u);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A92F40:
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[6]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[5]);
    ctx.execute_vfpu_vh2f(1u, 0u, 2u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A92F64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A92FB0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    goto L_08A93028;
L_08A92FB0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A92FC4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A92FE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26768));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-26768)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9301C;
      }
      goto L_08A93010;
    }
L_08A93010:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x08A9301Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 139u, 0x089C8BB0u>(ctx, &aot_mem) && ctx.pc == 0x08A9301Cu) goto L_08A9301C;
    return;
L_08A9301C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A93028:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (2233u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-26768));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26768)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A93074;
      }
      goto L_08A93068;
    }
L_08A93068:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A93074u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 139u, 0x089C8BB0u>(ctx, &aot_mem) && ctx.pc == 0x08A93074u) goto L_08A93074;
    return;
L_08A93074:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A93088u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 131u, 0x089C8AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A93088u) goto L_08A93088;
    return;
L_08A93088:
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
L_08A930A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A930E0;
      }
      goto L_08A930C4;
    }
L_08A930C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A9310C;
      }
      goto L_08A930D8;
    }
L_08A930D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A930E8;
      }
      goto L_08A930E0;
    }
L_08A930E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A93248;
      }
      goto L_08A930E8;
    }
L_08A930E8:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & 2u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9312C;
      }
      goto L_08A93100;
    }
L_08A93100:
    ctx.gpr[7] = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A93134;
      }
      goto L_08A9310C;
    }
L_08A9310C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A93124u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A93544;
L_08A93124:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A93248;
      }
      goto L_08A9312C;
    }
L_08A9312C:
    ctx.gpr[7] = (0u | 10u);
    ctx.gpr[9] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
    goto L_08A93134;
L_08A93134:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (ctx.lo);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    goto L_08A93150;
L_08A93150:
    ctx.gpr[2] = (ctx.gpr[10] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[2]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[2] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A93204;
      }
      goto L_08A93174;
    }
L_08A93174:
    ctx.gpr[6] = (ctx.gpr[10] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[6]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A931F0;
      }
      goto L_08A9319C;
    }
L_08A9319C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A931D4;
      }
      goto L_08A931B4;
    }
L_08A931B4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 2u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A931EC;
      }
      goto L_08A931CC;
    }
L_08A931CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
      if (branch_taken) {
          goto L_08A931F0;
      }
      goto L_08A931D4;
    }
L_08A931D4:
    ctx.gpr[31] = (0x08A931DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A93544;
L_08A931DC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[2] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A93248;
      }
      goto L_08A931EC;
    }
L_08A931EC:
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    goto L_08A931F0;
L_08A931F0:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A93150;
      }
      goto L_08A93204;
    }
L_08A93204:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[9] - ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A93244u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A93544;
L_08A93244:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A93248;
L_08A93248:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A93258:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] & 16u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A932A8;
      }
      goto L_08A932A4;
    }
L_08A932A4:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08A932A8;
L_08A932A8:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A93344;
      }
      goto L_08A932B8;
    }
L_08A932B8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[8] = (ctx.gpr[5] & 2u);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (0u < ctx.gpr[8] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] << 3u);
      if (branch_taken) {
          goto L_08A932EC;
      }
      goto L_08A932DC;
    }
L_08A932DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A932FC;
      }
      goto L_08A932EC;
    }
L_08A932EC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    goto L_08A932FC;
L_08A932FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A93344;
      }
      goto L_08A93318;
    }
L_08A93318:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08A93324u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
    goto L_08A92F40;
L_08A93324:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08A93344;
L_08A93344:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A93358:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 16u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A933C0;
      }
      goto L_08A933BC;
    }
L_08A933BC:
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    goto L_08A933C0;
L_08A933C0:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A93510;
      }
      goto L_08A933D0;
    }
L_08A933D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A93424;
      }
      goto L_08A93410;
    }
L_08A93410:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A93424;
      }
      goto L_08A93424;
    }
L_08A93424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A93510;
      }
      goto L_08A93440;
    }
L_08A93440:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.gpr[21] = (ctx.gpr[18] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A93458u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    goto L_08A92EDC;
L_08A93458:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(98));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x08A9346Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08A92EDC;
L_08A9346C:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(14));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(14));
    ctx.gpr[31] = (0x08A93480u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_08A92EDC;
L_08A93480:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[19] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[19]));
    ctx.gpr[19] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[19]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(1u, 0u, 2u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08A934C8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_08A92F40;
L_08A934C8:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08A93510;
L_08A93510:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A93544:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A9366C;
      }
      goto L_08A93564;
    }
L_08A93564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[7]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[7]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[7]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(6)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A9366Cu);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    goto L_08A92DF4;
L_08A9366C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A93678:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_vfpu_scalar_bits_ct<24u>(ctx.gpr[16]);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(0));
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<28u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<28u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(4)));
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[13]);
    ctx.gpr[15] = (ctx.gpr[15] + ctx.gpr[13]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.gpr[25] = (aot_mem.aot_load16(ctx.gpr[24] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A937CC;
      }
      goto L_08A936C4;
    }
L_08A936C4:
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(12)));
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<0u, 28u, 1u, 7u>();
    if (((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.vfpu_scalar_bits_ct<0u>());
        goto L_08A937CC;
    }
    goto L_08A936D8;
L_08A936D8:
    ctx.gpr[14] = (aot_mem.aot_load16(ctx.gpr[24] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[14]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (ctx.gpr[25] & 2u);
      if (branch_taken) {
          goto L_08A937CC;
      }
      goto L_08A936E8;
    }
L_08A936E8:
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(10));
        goto L_08A936F4;
    }
    goto L_08A936F0;
L_08A936F0:
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(16));
    goto L_08A936F4;
L_08A936F4:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[14] = (ctx.lo);
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[13]);
    ctx.gpr[15] = (ctx.gpr[12] | 0u);
    goto L_08A93704;
L_08A93704:
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[16]);
    if (ctx.gpr[12] != ctx.gpr[14]) {
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(8), ctx.gpr[8]));
        goto L_08A93734;
    }
    goto L_08A93710;
L_08A93710:
    ctx.gpr[9] = (ctx.gpr[3] & 2u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[13] + static_cast<std::uint32_t>(8), ctx.gpr[8]));
        goto L_08A9372C;
    }
    goto L_08A9371C;
L_08A9371C:
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.vfpu_scalar_bits_ct<28u>());
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[12] = (ctx.gpr[12] - ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A937BC;
      }
      goto L_08A9372C;
    }
L_08A9372C:
    ctx.gpr[12] = (ctx.gpr[13] | 0u);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
    goto L_08A93734;
L_08A93734:
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(11), ctx.gpr[8]));
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[8]);
    ctx.execute_vfpu_vh2f(1u, 32u, 1u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<0u, 28u, 1u, 2u>();
    if (((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u) {
    ctx.gpr[15] = (ctx.gpr[12] | 0u);
        goto L_08A93704;
    }
    goto L_08A93750;
L_08A93750:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.vfpu_scalar_bits_ct<0u>());
    ctx.gpr[8] = (ctx.gpr[25] & 1u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[15] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
      if (branch_taken) {
          goto L_08A937BC;
      }
      goto L_08A93760;
    }
L_08A93760:
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[15] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[15] + static_cast<std::uint32_t>(4), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[15] + static_cast<std::uint32_t>(7), ctx.gpr[9]));
    ctx.set_vfpu_scalar_bits_ct<16u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<48u>(ctx.gpr[9]);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(4), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(7), ctx.gpr[9]));
    ctx.set_vfpu_scalar_bits_ct<80u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<112u>(ctx.gpr[9]);
    ctx.execute_vfpu_vh2f(1u, 16u, 2u);
    ctx.execute_vfpu_vh2f(2u, 80u, 2u);
    ctx.execute_vfpu_vdot_ct<16u, 1u, 2u, 4u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::asin(vfpu_s[i]) * 0.63661977236758134308f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vocp(16u, 16u, 1u);
    ctx.execute_vfpu_vcmp_ct<16u, 28u, 1u, 1u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<48u, 1u>(vfpu_d); }
      if (branch_taken) {
          goto L_08A937B4;
      }
      goto L_08A937B0;
    }
L_08A937B0:
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<48u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<48u, 1u>(vfpu_d); }
    goto L_08A937B4;
L_08A937B4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<16u>());
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<48u>());
    goto L_08A937BC;
L_08A937BC:
    ctx.gpr[8] = (ctx.gpr[12] - ctx.gpr[13]);
    ctx.gpr[9] = (ctx.gpr[15] - ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    goto L_08A937CC;
L_08A937CC:
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (ctx.gpr[3] & 16u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A937E4;
      }
      goto L_08A937DC;
    }
L_08A937DC:
    ctx.set_vfpu_scalar_bits_ct<44u>(ctx.gpr[8]);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<12u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<44u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 1u>(vfpu_d); }
    goto L_08A937E4;
L_08A937E4:
    ctx.execute_vfpu_vcmp_ct<12u, 28u, 1u, 7u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_08A93810;
      }
      goto L_08A937F0;
    }
L_08A937F0:
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(8), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(11), ctx.gpr[8]));
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[8]);
    ctx.execute_vfpu_vh2f(20u, 32u, 1u);
    ctx.execute_vfpu_vcmp_ct<20u, 28u, 1u, 1u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<52u, 1u>(vfpu_d); }
      if (branch_taken) {
          goto L_08A93810;
      }
      goto L_08A9380C;
    }
L_08A9380C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<52u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] / vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 1u>(vfpu_d); }
    goto L_08A93810;
L_08A93810:
    ctx.gpr[8] = (ctx.gpr[25] & 2u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A93860;
      }
      goto L_08A9381C;
    }
L_08A9381C:
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[15] + static_cast<std::uint32_t>(10), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[15] + static_cast<std::uint32_t>(13), ctx.gpr[8]));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[15] + static_cast<std::uint32_t>(14)));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[9]);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(10), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(13), ctx.gpr[8]));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[12] + static_cast<std::uint32_t>(14)));
    ctx.set_vfpu_scalar_bits_ct<64u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<96u>(ctx.gpr[9]);
    ctx.execute_vfpu_vh2f(1u, 0u, 2u);
    ctx.execute_vfpu_vh2f(2u, 64u, 2u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<2u, 2u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 12u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08A93860;
L_08A93860:
    ctx.gpr[8] = (ctx.gpr[25] & 1u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A938DC;
      }
      goto L_08A9386C;
    }
L_08A9386C:
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_vfpu_scalar_bits_ct<48u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[15] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[15] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[15] + static_cast<std::uint32_t>(4), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[15] + static_cast<std::uint32_t>(7), ctx.gpr[9]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[9]);
    ctx.execute_vfpu_vcmp_ct<16u, 28u, 1u, 1u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    ctx.execute_vfpu_vh2f(1u, 0u, 2u);
      if (branch_taken) {
          goto L_08A938D4;
      }
      goto L_08A93898;
    }
L_08A93898:
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(4), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(7), ctx.gpr[9]));
    ctx.set_vfpu_scalar_bits_ct<64u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<96u>(ctx.gpr[9]);
    ctx.execute_vfpu_vh2f(2u, 64u, 2u);
    ctx.execute_vfpu_vocp(52u, 20u, 1u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<4u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<52u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<36u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<8u, 2u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<4u, 8u, 48u, 2u>();
    ctx.execute_vfpu_vscl_ct<2u, 2u, 4u, 4u>();
    ctx.execute_vfpu_vscl_ct<1u, 1u, 36u, 4u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 4u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 4u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 4u>(vfpu_d); }
    goto L_08A938D4;
L_08A938D4:
    ctx.execute_vfpu_vscl_ct<1u, 1u, 12u, 4u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08A938DC;
L_08A938DC:
    ctx.gpr[16] = (ctx.vfpu_scalar_bits_ct<24u>());
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A938EC:
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
L_08A93918:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A9399C;
      }
      goto L_08A93930;
    }
L_08A93930:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3248));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (ctx.lo);
    goto L_08A93940;
L_08A93940:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
        goto L_08A93960;
    }
    goto L_08A93958;
L_08A93958:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A93964;
      }
      goto L_08A93960;
    }
L_08A93960:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    goto L_08A93964;
L_08A93964:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A93988;
      }
      goto L_08A9396C;
    }
L_08A9396C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11740)));
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(636), ctx.gpr[10]);
    goto L_08A93988;
L_08A93988:
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3248));
      if (branch_taken) {
          goto L_08A93940;
      }
      goto L_08A9399C;
    }
L_08A9399C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A939A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A939F4;
      }
      goto L_08A939C8;
    }
L_08A939C8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A939D4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A939D4u) goto L_08A939D4;
    return;
L_08A939D4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A939EC;
      }
      goto L_08A939E0;
    }
L_08A939E0:
    ctx.gpr[31] = (0x08A939E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A939E8u) goto L_08A939E8;
    return;
L_08A939E8:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A939EC;
L_08A939EC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A939F4;
L_08A939F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A93A00u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20552));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A93A00u) goto L_08A93A00;
    return;
L_08A93A00:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A93A18u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A93A18u) goto L_08A93A18;
    return;
L_08A93A18:
    ctx.gpr[4] = (0u | 259u);
    ctx.gpr[31] = (0x08A93A24u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08A93A24u) goto L_08A93A24;
    return;
L_08A93A24:
    ctx.gpr[4] = (0u | 263u);
    ctx.gpr[31] = (0x08A93A30u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08A93A30u) goto L_08A93A30;
    return;
L_08A93A30:
    ctx.gpr[4] = (0u | 272u);
    ctx.gpr[31] = (0x08A93A3Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08A93A3Cu) goto L_08A93A3C;
    return;
L_08A93A3C:
    ctx.gpr[4] = (0u | 274u);
    ctx.gpr[31] = (0x08A93A48u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08A93A48u) goto L_08A93A48;
    return;
L_08A93A48:
    ctx.gpr[4] = (0u | 277u);
    ctx.gpr[31] = (0x08A93A54u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08A93A54u) goto L_08A93A54;
    return;
L_08A93A54:
    ctx.gpr[4] = (0u | 281u);
    ctx.gpr[31] = (0x08A93A60u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08A93A60u) goto L_08A93A60;
    return;
L_08A93A60:
    ctx.gpr[4] = (0u | 276u);
    ctx.gpr[31] = (0x08A93A6Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08A93A6Cu) goto L_08A93A6C;
    return;
L_08A93A6C:
    ctx.gpr[4] = (0u | 285u);
    ctx.gpr[31] = (0x08A93A78u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08A93A78u) goto L_08A93A78;
    return;
L_08A93A78:
    ctx.gpr[4] = (0u | 288u);
    ctx.gpr[31] = (0x08A93A84u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08A93A84u) goto L_08A93A84;
    return;
L_08A93A84:
    ctx.gpr[31] = (0x08A93A8Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x08A93A8Cu) goto L_08A93A8C;
    return;
L_08A93A8C:
    ctx.gpr[31] = (0x08A93A94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93A94u) goto L_08A93A94;
    return;
L_08A93A94:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A93AA8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08A93AA8u) goto L_08A93AA8;
    return;
L_08A93AA8:
    ctx.gpr[31] = (0x08A93AB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93AB0u) goto L_08A93AB0;
    return;
L_08A93AB0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A93AC4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08A93AC4u) goto L_08A93AC4;
    return;
L_08A93AC4:
    ctx.gpr[31] = (0x08A93ACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93ACCu) goto L_08A93ACC;
    return;
L_08A93ACC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[31] = (0x08A93AE0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08A93AE0u) goto L_08A93AE0;
    return;
L_08A93AE0:
    ctx.gpr[31] = (0x08A93AE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93AE8u) goto L_08A93AE8;
    return;
L_08A93AE8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[31] = (0x08A93AFCu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08A93AFCu) goto L_08A93AFC;
    return;
L_08A93AFC:
    ctx.gpr[31] = (0x08A93B04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93B04u) goto L_08A93B04;
    return;
L_08A93B04:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 19u);
    ctx.gpr[6] = (0u | 50u);
    ctx.gpr[31] = (0x08A93B18u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08A93B18u) goto L_08A93B18;
    return;
L_08A93B18:
    ctx.gpr[31] = (0x08A93B20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93B20u) goto L_08A93B20;
    return;
L_08A93B20:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 22u);
    ctx.gpr[6] = (0u | 150u);
    ctx.gpr[31] = (0x08A93B34u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08A93B34u) goto L_08A93B34;
    return;
L_08A93B34:
    ctx.gpr[31] = (0x08A93B3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93B3Cu) goto L_08A93B3C;
    return;
L_08A93B3C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 27u);
    ctx.gpr[6] = (0u | 120u);
    ctx.gpr[31] = (0x08A93B50u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08A93B50u) goto L_08A93B50;
    return;
L_08A93B50:
    ctx.gpr[31] = (0x08A93B58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93B58u) goto L_08A93B58;
    return;
L_08A93B58:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 28u);
    ctx.gpr[6] = (0u | 25u);
    ctx.gpr[31] = (0x08A93B6Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08A93B6Cu) goto L_08A93B6C;
    return;
L_08A93B6C:
    ctx.gpr[31] = (0x08A93B74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93B74u) goto L_08A93B74;
    return;
L_08A93B74:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 31u);
    ctx.gpr[6] = (0u | 250u);
    ctx.gpr[31] = (0x08A93B88u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08A93B88u) goto L_08A93B88;
    return;
L_08A93B88:
    ctx.gpr[31] = (0x08A93B90u);
    ctx.gpr[4] = (0u | 259u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93B90u) goto L_08A93B90;
    return;
L_08A93B90:
    ctx.gpr[31] = (0x08A93B98u);
    ctx.gpr[4] = (0u | 274u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93B98u) goto L_08A93B98;
    return;
L_08A93B98:
    ctx.gpr[31] = (0x08A93BA0u);
    ctx.gpr[4] = (0u | 281u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93BA0u) goto L_08A93BA0;
    return;
L_08A93BA0:
    ctx.gpr[31] = (0x08A93BA8u);
    ctx.gpr[4] = (0u | 263u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93BA8u) goto L_08A93BA8;
    return;
L_08A93BA8:
    ctx.gpr[31] = (0x08A93BB0u);
    ctx.gpr[4] = (0u | 272u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93BB0u) goto L_08A93BB0;
    return;
L_08A93BB0:
    ctx.gpr[31] = (0x08A93BB8u);
    ctx.gpr[4] = (0u | 277u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93BB8u) goto L_08A93BB8;
    return;
L_08A93BB8:
    ctx.gpr[31] = (0x08A93BC0u);
    ctx.gpr[4] = (0u | 276u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93BC0u) goto L_08A93BC0;
    return;
L_08A93BC0:
    ctx.gpr[31] = (0x08A93BC8u);
    ctx.gpr[4] = (0u | 285u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93BC8u) goto L_08A93BC8;
    return;
L_08A93BC8:
    ctx.gpr[31] = (0x08A93BD0u);
    ctx.gpr[4] = (0u | 288u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93BD0u) goto L_08A93BD0;
    return;
L_08A93BD0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7564), ctx.gpr[4]);
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
L_08A93C00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A93C50;
      }
      goto L_08A93C24;
    }
L_08A93C24:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A93C30u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A93C30u) goto L_08A93C30;
    return;
L_08A93C30:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A93C48;
      }
      goto L_08A93C3C;
    }
L_08A93C3C:
    ctx.gpr[31] = (0x08A93C44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A93C44u) goto L_08A93C44;
    return;
L_08A93C44:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A93C48;
L_08A93C48:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A93C50;
L_08A93C50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A93C5Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20552));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A93C5Cu) goto L_08A93C5C;
    return;
L_08A93C5C:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A93C74u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A93C74u) goto L_08A93C74;
    return;
L_08A93C74:
    ctx.gpr[4] = (0u | 268u);
    ctx.gpr[31] = (0x08A93C80u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08A93C80u) goto L_08A93C80;
    return;
L_08A93C80:
    ctx.gpr[4] = (0u | 270u);
    ctx.gpr[31] = (0x08A93C8Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08A93C8Cu) goto L_08A93C8C;
    return;
L_08A93C8C:
    ctx.gpr[4] = (0u | 291u);
    ctx.gpr[31] = (0x08A93C98u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08A93C98u) goto L_08A93C98;
    return;
L_08A93C98:
    ctx.gpr[4] = (0u | 275u);
    ctx.gpr[31] = (0x08A93CA4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08A93CA4u) goto L_08A93CA4;
    return;
L_08A93CA4:
    ctx.gpr[4] = (0u | 279u);
    ctx.gpr[31] = (0x08A93CB0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08A93CB0u) goto L_08A93CB0;
    return;
L_08A93CB0:
    ctx.gpr[4] = (0u | 283u);
    ctx.gpr[31] = (0x08A93CBCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08A93CBCu) goto L_08A93CBC;
    return;
L_08A93CBC:
    ctx.gpr[4] = (0u | 280u);
    ctx.gpr[31] = (0x08A93CC8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08A93CC8u) goto L_08A93CC8;
    return;
L_08A93CC8:
    ctx.gpr[4] = (0u | 286u);
    ctx.gpr[31] = (0x08A93CD4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08A93CD4u) goto L_08A93CD4;
    return;
L_08A93CD4:
    ctx.gpr[4] = (0u | 287u);
    ctx.gpr[31] = (0x08A93CE0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08A93CE0u) goto L_08A93CE0;
    return;
L_08A93CE0:
    ctx.gpr[31] = (0x08A93CE8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x08A93CE8u) goto L_08A93CE8;
    return;
L_08A93CE8:
    ctx.gpr[31] = (0x08A93CF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93CF0u) goto L_08A93CF0;
    return;
L_08A93CF0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A93D04u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08A93D04u) goto L_08A93D04;
    return;
L_08A93D04:
    ctx.gpr[31] = (0x08A93D0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93D0Cu) goto L_08A93D0C;
    return;
L_08A93D0C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[31] = (0x08A93D20u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08A93D20u) goto L_08A93D20;
    return;
L_08A93D20:
    ctx.gpr[31] = (0x08A93D28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93D28u) goto L_08A93D28;
    return;
L_08A93D28:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[6] = (0u | 40u);
    ctx.gpr[31] = (0x08A93D3Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08A93D3Cu) goto L_08A93D3C;
    return;
L_08A93D3C:
    ctx.gpr[31] = (0x08A93D44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93D44u) goto L_08A93D44;
    return;
L_08A93D44:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 21u);
    ctx.gpr[6] = (0u | 25u);
    ctx.gpr[31] = (0x08A93D58u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08A93D58u) goto L_08A93D58;
    return;
L_08A93D58:
    ctx.gpr[31] = (0x08A93D60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93D60u) goto L_08A93D60;
    return;
L_08A93D60:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 24u);
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[31] = (0x08A93D74u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08A93D74u) goto L_08A93D74;
    return;
L_08A93D74:
    ctx.gpr[31] = (0x08A93D7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93D7Cu) goto L_08A93D7C;
    return;
L_08A93D7C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 26u);
    ctx.gpr[6] = (0u | 150u);
    ctx.gpr[31] = (0x08A93D90u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08A93D90u) goto L_08A93D90;
    return;
L_08A93D90:
    ctx.gpr[31] = (0x08A93D98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93D98u) goto L_08A93D98;
    return;
L_08A93D98:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 29u);
    ctx.gpr[6] = (0u | 21u);
    ctx.gpr[31] = (0x08A93DACu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08A93DACu) goto L_08A93DAC;
    return;
L_08A93DAC:
    ctx.gpr[31] = (0x08A93DB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93DB4u) goto L_08A93DB4;
    return;
L_08A93DB4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 30u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08A93DC8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08A93DC8u) goto L_08A93DC8;
    return;
L_08A93DC8:
    ctx.gpr[31] = (0x08A93DD0u);
    ctx.gpr[4] = (0u | 268u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93DD0u) goto L_08A93DD0;
    return;
L_08A93DD0:
    ctx.gpr[31] = (0x08A93DD8u);
    ctx.gpr[4] = (0u | 270u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93DD8u) goto L_08A93DD8;
    return;
L_08A93DD8:
    ctx.gpr[31] = (0x08A93DE0u);
    ctx.gpr[4] = (0u | 291u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93DE0u) goto L_08A93DE0;
    return;
L_08A93DE0:
    ctx.gpr[31] = (0x08A93DE8u);
    ctx.gpr[4] = (0u | 275u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93DE8u) goto L_08A93DE8;
    return;
L_08A93DE8:
    ctx.gpr[31] = (0x08A93DF0u);
    ctx.gpr[4] = (0u | 279u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93DF0u) goto L_08A93DF0;
    return;
L_08A93DF0:
    ctx.gpr[31] = (0x08A93DF8u);
    ctx.gpr[4] = (0u | 283u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93DF8u) goto L_08A93DF8;
    return;
L_08A93DF8:
    ctx.gpr[31] = (0x08A93E00u);
    ctx.gpr[4] = (0u | 280u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93E00u) goto L_08A93E00;
    return;
L_08A93E00:
    ctx.gpr[31] = (0x08A93E08u);
    ctx.gpr[4] = (0u | 286u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93E08u) goto L_08A93E08;
    return;
L_08A93E08:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7564)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7564), ctx.gpr[4]);
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
L_08A93E38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A93E88;
      }
      goto L_08A93E5C;
    }
L_08A93E5C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A93E68u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A93E68u) goto L_08A93E68;
    return;
L_08A93E68:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A93E80;
      }
      goto L_08A93E74;
    }
L_08A93E74:
    ctx.gpr[31] = (0x08A93E7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A93E7Cu) goto L_08A93E7C;
    return;
L_08A93E7C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A93E80;
L_08A93E80:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A93E88;
L_08A93E88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A93E94u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20552));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A93E94u) goto L_08A93E94;
    return;
L_08A93E94:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A93EACu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A93EACu) goto L_08A93EAC;
    return;
L_08A93EAC:
    ctx.gpr[4] = (0u | 269u);
    ctx.gpr[31] = (0x08A93EB8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08A93EB8u) goto L_08A93EB8;
    return;
L_08A93EB8:
    ctx.gpr[4] = (0u | 270u);
    ctx.gpr[31] = (0x08A93EC4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08A93EC4u) goto L_08A93EC4;
    return;
L_08A93EC4:
    ctx.gpr[4] = (0u | 275u);
    ctx.gpr[31] = (0x08A93ED0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08A93ED0u) goto L_08A93ED0;
    return;
L_08A93ED0:
    ctx.gpr[4] = (0u | 278u);
    ctx.gpr[31] = (0x08A93EDCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08A93EDCu) goto L_08A93EDC;
    return;
L_08A93EDC:
    ctx.gpr[4] = (0u | 284u);
    ctx.gpr[31] = (0x08A93EE8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08A93EE8u) goto L_08A93EE8;
    return;
L_08A93EE8:
    ctx.gpr[4] = (0u | 280u);
    ctx.gpr[31] = (0x08A93EF4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08A93EF4u) goto L_08A93EF4;
    return;
L_08A93EF4:
    ctx.gpr[4] = (0u | 286u);
    ctx.gpr[31] = (0x08A93F00u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08A93F00u) goto L_08A93F00;
    return;
L_08A93F00:
    ctx.gpr[4] = (0u | 290u);
    ctx.gpr[31] = (0x08A93F0Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08A93F0Cu) goto L_08A93F0C;
    return;
L_08A93F0C:
    ctx.gpr[4] = (0u | 294u);
    ctx.gpr[31] = (0x08A93F18u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08A93F18u) goto L_08A93F18;
    return;
L_08A93F18:
    ctx.gpr[31] = (0x08A93F20u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x08A93F20u) goto L_08A93F20;
    return;
L_08A93F20:
    ctx.gpr[31] = (0x08A93F28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93F28u) goto L_08A93F28;
    return;
L_08A93F28:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A93F3Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08A93F3Cu) goto L_08A93F3C;
    return;
L_08A93F3C:
    ctx.gpr[31] = (0x08A93F44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93F44u) goto L_08A93F44;
    return;
L_08A93F44:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[31] = (0x08A93F58u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08A93F58u) goto L_08A93F58;
    return;
L_08A93F58:
    ctx.gpr[31] = (0x08A93F60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93F60u) goto L_08A93F60;
    return;
L_08A93F60:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[6] = (0u | 40u);
    ctx.gpr[31] = (0x08A93F74u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08A93F74u) goto L_08A93F74;
    return;
L_08A93F74:
    ctx.gpr[31] = (0x08A93F7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93F7Cu) goto L_08A93F7C;
    return;
L_08A93F7C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 20u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x08A93F90u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08A93F90u) goto L_08A93F90;
    return;
L_08A93F90:
    ctx.gpr[31] = (0x08A93F98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93F98u) goto L_08A93F98;
    return;
L_08A93F98:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 25u);
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[31] = (0x08A93FACu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08A93FACu) goto L_08A93FAC;
    return;
L_08A93FAC:
    ctx.gpr[31] = (0x08A93FB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93FB4u) goto L_08A93FB4;
    return;
L_08A93FB4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 26u);
    ctx.gpr[6] = (0u | 150u);
    ctx.gpr[31] = (0x08A93FC8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08A93FC8u) goto L_08A93FC8;
    return;
L_08A93FC8:
    ctx.gpr[31] = (0x08A93FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93FD0u) goto L_08A93FD0;
    return;
L_08A93FD0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 29u);
    ctx.gpr[6] = (0u | 21u);
    ctx.gpr[31] = (0x08A93FE4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08A93FE4u) goto L_08A93FE4;
    return;
L_08A93FE4:
    ctx.gpr[31] = (0x08A93FECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93FECu) goto L_08A93FEC;
    return;
L_08A93FEC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 33u);
    ctx.gpr[6] = (0u | 500u);
    ctx.gpr[31] = (0x08A94000u);
    ctx.gpr[7] = (0u | 1u);
    (void)rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0163(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0163_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_163(Runtime &runtime) {
    runtime.register_generated_unit(163u, 0x08A90000u, 16384u, &recomp_unit_0163, &recomp_unit_0163_entry);
    runtime.register_function(0x08A90000u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9000Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90014u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90028u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90030u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90040u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90050u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90054u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90068u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90074u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9007Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9008Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90098u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A900A0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A900ACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A900B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A900F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90104u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90114u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90124u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90138u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90144u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9014Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90154u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90164u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90170u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90178u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90180u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90188u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90190u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90198u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A901A0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A901A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A901B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A901B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A901C0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A901C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A901D0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A901D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A901E0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A901E8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A901F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90200u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90210u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90220u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90228u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90230u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90244u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9024Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9026Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90274u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9027Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9028Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90294u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A902A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A902C0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A902C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A902D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A902DCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A902E4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90300u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90308u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90318u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90334u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9033Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90344u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9034Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90358u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90360u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9036Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90374u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90394u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9039Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A903ACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A903B4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A903C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A903CCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A903D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A903E0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A903E8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A903F0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A903F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90400u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90408u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90414u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9041Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90428u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90430u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90440u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90450u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90460u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90468u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90470u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90478u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90480u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90488u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90490u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90498u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A904A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A904B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A904C0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A904C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A904E8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A904F0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90514u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90538u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90540u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90548u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90550u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90558u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90560u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90568u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90574u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9057Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9058Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90594u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A905A0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A905A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A905B4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A905BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A905C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A905F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90600u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90608u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90610u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90620u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90628u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90630u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90638u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90648u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90650u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90660u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90664u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90680u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90688u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90694u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9069Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A906A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A906B4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A906C0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A906CCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A906D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A906ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A906F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90714u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90724u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90788u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90794u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A907ACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A907B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A907B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A907E8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A907F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90808u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90878u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90880u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90894u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A908A0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A908A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A908C0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A908E4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A908F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90918u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90920u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90928u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90934u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90940u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90948u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90958u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90964u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90974u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9097Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A909A4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A909A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A909D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90A24u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90A68u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90A70u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90A74u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90A80u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90A90u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90A94u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90A9Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90AA8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90AC8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90AD4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90AD8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90AE8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90AF0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90AF8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90B14u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90B18u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90B60u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90B68u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90B70u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90B7Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90B88u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90B98u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90BA0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90BACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90BF4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90C0Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90C14u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90C20u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90C6Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90C8Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90C94u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90CACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90D18u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90D20u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90D28u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90D30u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90D4Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90D5Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90D6Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90D7Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90D84u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90D8Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90D94u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90D9Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90DA8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90DB4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90DC4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90E0Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90E14u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90E1Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90E30u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90E4Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90E54u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90E60u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90E68u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90E70u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90EB0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90EB8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90EC4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90ED0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90EECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90EF4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90EFCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90F04u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90F24u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90F3Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90F44u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90FB0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90FB8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91040u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91048u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9107Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A910A0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A910A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A910DCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91114u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91128u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91134u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9113Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91144u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9114Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91158u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91160u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91180u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A911B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A911B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A911D0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9120Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91214u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91224u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9122Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91238u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9124Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91260u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91268u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9126Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9127Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91280u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9128Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A912A4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A912ACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A912BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A912C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A912DCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A912E8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A912F0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9130Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91314u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91328u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91330u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91340u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91348u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91354u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9135Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91364u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91378u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91384u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91398u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A913A0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A913A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A913B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A913C0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A913C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A913D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A913E0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A913ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91410u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9141Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91424u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91430u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91454u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9145Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91468u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91474u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9147Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91488u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91490u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9149Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A914A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A914D0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A914DCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A914E4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A914ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A914F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91508u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91510u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91544u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9154Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91554u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91564u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91584u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A915A0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A915A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A915B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A915C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A915E4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A915FCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91610u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91628u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9163Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91648u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91660u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9169Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A916A4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A916B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A916BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A916C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A916D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A916DCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A916FCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9172Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91734u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9174Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91788u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91794u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9179Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A917ACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A917B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A917C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A917FCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9180Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91818u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91840u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91870u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91878u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91888u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91890u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A918ACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A918B4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A918BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A918C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A918F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A918F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91928u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91934u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91988u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91990u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A919A0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A919B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A919BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A919C0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A04u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A0Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A18u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A20u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A2Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A38u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A44u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A54u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A5Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A60u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91AA4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91AB0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91ABCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91ACCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91AD4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91AE4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91AF0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91AF8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B00u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B08u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B14u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B20u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B28u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B30u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B40u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B58u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B68u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B78u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B80u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B8Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B94u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B9Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91BA8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91BB0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91BC0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91BD0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91BD8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91BE4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91BECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91BF8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91C10u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91C18u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91C24u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91C2Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91C3Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91C4Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91C5Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91C70u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91C88u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91C98u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91CACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91CB4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91CBCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91CC4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91CCCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91CE0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91CF0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91D14u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91D28u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91D2Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91D34u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91D44u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91D54u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91D68u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91D70u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91D80u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91D88u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91D90u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91D98u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91DA0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91DB4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91DC4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91DD4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91DE0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91DF4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91E28u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91E54u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91E5Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91E68u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91E78u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91E88u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91EA0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91EB4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91EE8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91F1Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91F24u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91F2Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91F34u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91F40u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91F48u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91F58u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91F68u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91F70u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91F78u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91FACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91FB4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92020u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92094u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A920BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A920E4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A920ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92120u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92144u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9214Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92180u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A921B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A921ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A921FCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92208u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92278u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92288u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A922C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A922ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A922FCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92304u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9230Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92310u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9231Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92330u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92338u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9234Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92370u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92380u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92388u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92390u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92394u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A923A0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A923B4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A923BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A923C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A923E8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9247Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9249Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A924C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A924F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9250Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92530u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9253Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9254Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92558u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92560u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9256Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92570u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92580u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92588u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9259Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A925A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A925C0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A925D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A925F0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A925FCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9260Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92614u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92628u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9263Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92648u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92654u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9265Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9266Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92674u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A926BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A926C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A926CCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A926D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A926E0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A926ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A926FCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92704u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9270Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92714u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92748u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92754u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92790u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9279Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A927B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A927B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A927E0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A927E8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A927F0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92844u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9284Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92854u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9285Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92868u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92870u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92878u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92880u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92888u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92890u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A928A0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A928B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A928B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A928C0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A928CCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A928D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A928E4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A928F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92904u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9290Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92920u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9292Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92938u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92940u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92950u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92958u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A929A0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A929B4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A929C0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A929CCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A929D0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A929D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A929E0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A929ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A929FCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92A28u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92A64u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92A7Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92A84u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92A8Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92A94u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92A9Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92AA4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92AACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92AB4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92ABCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92AC4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92ACCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92AD4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92ADCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92AE4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92AECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92AF4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92AF8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B00u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B0Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B14u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B1Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B28u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B38u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B58u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B68u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B80u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92BB4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92BBCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92BC4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92BCCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92BE8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92BF8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92C00u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92C08u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92C14u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92C20u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92C2Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92C30u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92C3Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92C44u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92C5Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92C64u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92C70u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92C78u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92C80u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92C98u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92CA4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92CACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92CB8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92CC4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92CCCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92CD4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92CE0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92D04u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92D7Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92DF4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E30u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E34u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E6Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E98u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E9Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92EA4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92EBCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92EC8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92EDCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92F40u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92F64u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92FB0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92FC4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92FE4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93010u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9301Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93028u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93068u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93074u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93088u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A930A0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A930C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A930D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A930E0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A930E8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93100u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9310Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93124u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9312Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93134u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93150u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93174u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9319Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A931B4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A931CCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A931D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A931DCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A931ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A931F0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93204u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93244u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93248u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93258u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A932A4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A932A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A932B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A932DCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A932ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A932FCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93318u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93324u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93344u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93358u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A933BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A933C0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A933D0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93410u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93424u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93440u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93458u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9346Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93480u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A934C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93510u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93544u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93564u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9366Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93678u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A936C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A936D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A936E8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A936F0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A936F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93704u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93710u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9371Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9372Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93734u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93750u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93760u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A937B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A937B4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A937BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A937CCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A937DCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A937E4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A937F0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9380Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93810u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9381Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93860u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9386Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93898u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A938D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A938DCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A938ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93918u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93930u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93940u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93958u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93960u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93964u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9396Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93988u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9399Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A939A4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A939C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A939D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A939E0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A939E8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A939ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A939F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A00u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A18u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A24u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A30u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A3Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A48u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A54u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A60u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A6Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A78u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A84u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A8Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A94u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93AA8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93AB0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93AC4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93ACCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93AE0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93AE8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93AFCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B04u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B18u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B20u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B34u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B3Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B50u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B58u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B6Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B74u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B88u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B90u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B98u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93BA0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93BA8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93BB0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93BB8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93BC0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93BC8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93BD0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93C00u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93C24u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93C30u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93C3Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93C44u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93C48u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93C50u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93C5Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93C74u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93C80u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93C8Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93C98u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93CA4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93CB0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93CBCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93CC8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93CD4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93CE0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93CE8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93CF0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93D04u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93D0Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93D20u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93D28u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93D3Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93D44u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93D58u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93D60u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93D74u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93D7Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93D90u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93D98u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93DACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93DB4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93DC8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93DD0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93DD8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93DE0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93DE8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93DF0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93DF8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93E00u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93E08u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93E38u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93E5Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93E68u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93E74u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93E7Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93E80u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93E88u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93E94u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93EACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93EB8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93EC4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93ED0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93EDCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93EE8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93EF4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93F00u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93F0Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93F18u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93F20u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93F28u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93F3Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93F44u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93F58u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93F60u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93F74u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93F7Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93F90u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93F98u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93FACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93FB4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93FC8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93FD0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93FE4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93FECu, &recomp_unit_0163, "recomp_unit_0163");
}
} // namespace psprecomp
