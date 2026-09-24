#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0127[4091] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 8,
    0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0,
    0, 16, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 26, 0, 27, 0,
    0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32,
    0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37,
    0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 43, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0,
    0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49,
    0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 53, 0, 54, 0, 55, 0, 56, 0, 57, 0, 0, 58, 0, 59, 0, 0, 60, 0,
    61, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 67, 0, 0, 68, 0, 0, 0, 0, 0,
    0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 73, 74, 0, 75, 0,
    0, 76, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 0, 80, 0, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 85, 0, 86, 0,
    0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 91, 0, 0, 92, 0, 0, 93, 0, 94, 0,
    0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 106, 0, 0,
    0, 0, 0, 0, 0, 107, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 112, 0, 0, 0, 0, 0, 0, 113,
    0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0,
    0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0,
    126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0,
    133, 0, 0, 0, 134, 0, 0, 0, 135, 136, 0, 0, 0, 0, 137, 0, 0, 138, 0, 139, 0, 0, 0, 140, 0, 0, 141, 0, 142, 0, 143, 0,
    0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 150, 0,
    151, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0,
    159, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 163, 0, 164, 0, 165, 0, 166, 0, 167, 0, 0, 0, 168, 0, 169, 0, 170, 0, 171,
    0, 172, 0, 173, 0, 174, 0, 0, 175, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 178, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 183, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 190, 0,
    0, 0, 191, 0, 0, 192, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196,
    0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 201, 202, 0, 0, 203,
    0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 208, 0,
    0, 209, 0, 0, 210, 0, 0, 0, 0, 211, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 221, 0, 222, 0, 223, 224, 0,
    225, 0, 0, 0, 226, 0, 227, 0, 0, 228, 229, 0, 230, 0, 0, 231, 0, 232, 0, 233, 234, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 236,
    237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0,
    0, 0, 0, 241, 0, 0, 0, 0, 242, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 247, 0, 248, 0, 0, 249, 0, 0, 250, 0, 251, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0,
    0, 256, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 260, 261, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 264,
    0, 0, 0, 265, 0, 266, 0, 267, 0, 268, 0, 269, 270, 0, 271, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 274, 275, 0, 276, 0, 0,
    0, 0, 277, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 282, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 287, 0, 0, 0, 288, 0, 0, 0, 289, 0, 290, 0, 0, 291, 0, 292, 0,
    0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 297, 0, 298,
    0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 302, 303, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 305, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 310, 0, 311, 0, 0, 312, 0, 0,
    0, 313, 0, 314, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 319, 0, 320, 321, 0, 322, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 326, 0, 327, 0,
    0, 0, 0, 0, 0, 0, 328, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 333, 0, 0,
    334, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 337, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 342, 0, 343, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0,
    0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 354, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 365, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 370, 0,
    371, 0, 372, 0, 373, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0,
    379, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 382, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0,
    387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 390, 391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0,
    0, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 397, 0, 0, 0, 0, 398, 0, 399, 0, 0, 400, 0, 401, 402, 0,
    403, 0, 0, 0, 404, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 0, 408, 0, 0, 409, 410, 0, 411, 0, 0, 412, 0, 413,
    0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 416, 417, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 421, 0, 422, 0, 423,
    424, 0, 425, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 429, 0, 430, 0, 431, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0,
    434, 435, 0, 436, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 439, 0, 0, 0, 0, 0, 0, 440, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 443, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 446, 0, 447, 0, 0, 448, 0, 449, 0, 0, 0, 450, 0, 0,
    0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0,
    454, 0, 455, 0, 0, 0, 456, 0, 0, 0, 457, 458, 0, 459, 0, 460, 0, 0, 0, 0, 0, 461, 462, 463, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 464, 0, 465, 466, 0, 467, 0, 0, 0, 0, 468, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 472, 0, 0,
    0, 0, 0, 0, 473, 0, 474, 0, 0, 0, 0, 475, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0,
    0, 480, 0, 0, 481, 0, 482, 0, 0, 483, 0, 0, 484, 0, 0, 0, 485, 0, 0, 486, 0, 0, 487, 0, 0, 0, 488, 0, 0, 489, 0, 490,
    0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 493, 0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 0,
    0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 501, 0,
    502, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506,
    0, 0, 507, 0, 508, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 511, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 512, 0, 0, 513, 0, 514, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0,
    517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 519, 0, 520, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0,
    0, 525, 0, 0, 526, 0, 527, 0, 0, 0, 528, 0, 0, 529, 0, 0, 530, 0, 0, 0, 531, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 533, 0, 0, 534, 0, 535, 0, 536, 0, 0, 537, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 541, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 543,
    544, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 546, 0, 547, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 549, 0, 0, 550, 0, 0, 0, 551, 0, 552, 0, 0, 0, 553, 0, 0, 554, 0, 555, 0, 556, 0, 557, 0, 0, 558, 0, 0, 0, 559,
    0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 562, 0, 563, 0, 0, 0, 0, 0, 0, 564,
    0, 0, 0, 565, 0, 566, 0, 567, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 570, 0, 0, 571, 0, 0, 0, 0,
    572, 0, 0, 573, 0, 574, 0, 575, 0, 0, 0, 576, 0, 0, 0, 577, 0, 0, 0, 578, 0, 579, 0, 0, 0, 580, 581, 0, 0, 0, 582, 0,
    0, 0, 0, 583, 0, 0, 584, 0, 585, 0, 586, 0, 0, 0, 587, 0, 0, 0, 588, 0, 0, 0, 589, 0, 590, 0, 0, 0, 591, 592, 0, 0,
    0, 593, 0, 0, 0, 0, 594, 0, 0, 595, 0, 0, 0, 0, 596, 0, 0, 597, 0, 0, 0, 598, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0,
    600, 0, 601, 0, 602, 0, 0, 0, 603, 0, 604, 0, 605, 0, 606, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 608, 0, 0, 0, 0,
    0, 0, 0, 609, 610, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 612, 0, 613, 0, 614, 0, 0, 0, 615, 0, 616, 0, 617, 0, 618,
    0, 0, 0, 0, 0, 619, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 621, 622, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 624, 0, 625, 0, 0, 626, 627, 0, 0, 0, 628, 0, 0, 629, 0, 630, 0, 0, 631, 0, 632, 633, 0, 0, 0, 0, 0,
    0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 636, 0, 0, 0, 637, 0, 0, 0, 638, 0, 639, 0, 0, 0, 640, 0, 0,
    641, 0, 642, 0, 643, 0, 644, 0, 0, 0, 645, 0, 0, 646, 0, 0, 647, 0, 0, 0, 0, 0, 0, 648, 649, 0, 0, 0, 0, 0, 0, 650,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 652, 0, 0, 653, 0, 0, 0, 654, 0, 0, 655, 0, 656, 0, 657, 0, 0, 658, 0, 659,
    0, 0, 0, 660, 0, 0, 661, 0, 0, 0, 662, 0, 0, 663, 664, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 666, 0, 667, 0, 0, 668, 669, 0, 0, 0, 670, 0, 0, 671, 0, 672, 0, 0, 673, 0, 674, 675, 0, 0, 0, 0, 0, 0, 676,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 678, 0, 0, 679, 680, 0, 0, 0, 681, 0, 0, 682, 0, 0, 683, 0,
    0, 0, 684, 0, 0, 0, 685, 0, 0, 686, 0, 687, 0, 0, 688, 689, 0, 690, 0, 0, 691, 0, 0, 0, 692, 0, 0, 0, 0, 693, 0, 694,
    0, 695, 0, 0, 696, 697, 0, 0, 698, 0, 699, 700, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 0, 0, 0, 0, 0, 702, 0, 703, 0, 0,
    704, 0, 705, 0, 0, 706, 0, 0, 0, 707, 0, 708, 0, 709, 0, 0, 0, 0, 0, 710, 711, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 713, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 716, 0, 0, 717, 0, 718, 0, 0, 719, 0,
    0, 0, 0, 720, 0, 0, 721, 0, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 723, 0, 0, 724, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 726, 0, 0, 727, 0, 0, 728, 0, 729, 0, 0, 730, 0, 0, 0, 0, 731, 0, 0, 732, 0,
    0, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 735, 0, 736, 0, 0, 737, 0, 0, 0, 738, 0, 0,
    0, 0, 739, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 741, 0, 0, 742, 0, 743, 0, 744, 0, 745, 0, 0, 746, 0, 0,
    0, 0, 747, 0, 0, 748, 749, 0, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 752, 0, 0, 0,
    0, 753, 0, 754, 0, 755, 0, 0, 756, 0, 0, 757, 0, 758, 0, 0, 759, 760, 0, 0, 761, 0, 762, 0, 0, 763, 0, 0, 764, 0, 765, 0,
    0, 766, 0, 0, 0, 767, 768, 0, 0, 0, 0, 0, 0, 769, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 770, 0, 771, 0, 0, 772,
    773, 0, 0, 0, 774, 0, 0, 0, 0, 0, 0, 775, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 776, 0, 777, 0, 0, 778, 779,
    0, 0, 780, 0, 0, 781, 0, 0, 0, 0, 0, 0, 0, 782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 783, 0, 784, 0, 0,
    785, 786, 0, 0, 787, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0, 0, 789, 0, 0, 0, 0, 0, 0, 0, 790, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 791, 0, 0, 0, 792, 0, 0, 0, 793, 0, 0, 794, 0, 0, 795, 0, 0, 0, 796, 0, 0, 0, 0, 0, 797,
    0, 0, 0, 0, 0, 0, 0, 798, 0, 0, 0, 799, 0, 0, 800, 0, 0, 0, 0, 0, 801, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 802,
    0, 0, 0, 803, 0, 0, 0, 0, 804, 0, 0, 805, 0, 0, 806, 807, 0, 0, 0, 0, 808, 0, 0, 809, 0, 0, 0, 0, 0, 0, 0, 0,
    810, 0, 0, 0, 0, 0, 811, 0, 0, 0, 812, 0, 0, 813, 0, 0, 814, 0, 815, 0, 0, 816, 0, 0, 0, 0, 0, 817, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 818, 0, 0, 0, 819, 0, 820, 0, 0, 0, 821, 0, 822, 0, 823, 0, 0, 824, 0, 0, 825, 0, 0, 0,
    826, 0, 827, 0, 828, 0, 0, 0, 0, 0, 829, 0, 0, 830, 0, 0, 0, 0, 831, 0, 832, 0, 0, 833, 0, 0, 834, 0, 0, 835, 0, 836,
    0, 0, 0, 0, 0, 0, 837, 0, 0, 0, 838, 0, 839, 0, 0, 0, 0, 840, 0, 0, 0, 0, 0, 0, 0, 0, 841, 0, 0, 0, 0, 0,
    0, 0, 0, 842, 0, 0, 843, 0, 844, 0, 0, 0, 845, 0, 0, 0, 846, 0, 0, 0, 847, 0, 0, 0, 0, 0, 0, 848, 0, 849, 0, 850,
    0, 851, 0, 852, 0, 0, 853, 0, 854, 0, 855, 0, 0, 0, 0, 856, 0, 857, 0, 0, 858, 0, 0, 859, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 860, 0, 0, 0, 861, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 862, 0, 863,
    0, 0, 0, 0, 0, 864, 0, 0, 0, 865, 0, 0, 0, 0, 0, 0, 866, 0, 0, 0, 0, 0, 0, 0, 0, 0, 867, 0, 0, 0, 868, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 869, 0, 870, 0, 0, 0, 0, 0, 871, 0,
    0, 0, 872, 0, 0, 0, 0, 0, 0, 873, 0, 0, 0, 874, 0, 0, 875, 0, 876, 0, 0, 0, 0, 877, 0, 878, 0, 0, 879, 0, 0, 0,
    880, 0, 0, 0, 881, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 882, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 883, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 884, 0, 0, 0, 0, 0, 0, 885, 0, 0,
    886, 0, 0, 0, 0, 0, 0, 0, 887, 0, 0, 0, 0, 0, 0, 0, 0, 0, 888, 0, 0, 0, 0, 0, 0, 0, 889, 0, 0, 0, 0, 0,
    890, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 891, 0, 0, 892, 0, 0, 893, 0, 894, 0, 0, 0, 0, 0, 0, 0, 0, 0, 895, 0,
    0, 0, 896, 0, 0, 0, 0, 0, 0, 0, 897, 0, 0, 0, 0, 0, 0, 898, 0, 0, 899, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 900, 0, 0, 0, 901, 0, 0, 0, 0, 0, 902, 0, 0, 0, 903, 0, 0, 0, 0, 0, 0, 904,
};
void recomp_unit_0127_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A00000u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0127[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A00000;
    case 2u: goto L_08A00008;
    case 3u: goto L_08A00024;
    case 4u: goto L_08A00030;
    case 5u: goto L_08A00044;
    case 6u: goto L_08A00058;
    case 7u: goto L_08A0006C;
    case 8u: goto L_08A0007C;
    case 9u: goto L_08A00090;
    case 10u: goto L_08A000A0;
    case 11u: goto L_08A000BC;
    case 12u: goto L_08A000C8;
    case 13u: goto L_08A000D0;
    case 14u: goto L_08A000E0;
    case 15u: goto L_08A000F4;
    case 16u: goto L_08A00104;
    case 17u: goto L_08A0010C;
    case 18u: goto L_08A00124;
    case 19u: goto L_08A00144;
    case 20u: goto L_08A0015C;
    case 21u: goto L_08A00178;
    case 22u: goto L_08A00190;
    case 23u: goto L_08A001B8;
    case 24u: goto L_08A001D8;
    case 25u: goto L_08A001EC;
    case 26u: goto L_08A001F0;
    case 27u: goto L_08A001F8;
    case 28u: goto L_08A0020C;
    case 29u: goto L_08A00220;
    case 30u: goto L_08A0023C;
    case 31u: goto L_08A0025C;
    case 32u: goto L_08A0027C;
    case 33u: goto L_08A00294;
    case 34u: goto L_08A002B0;
    case 35u: goto L_08A002C8;
    case 36u: goto L_08A002F0;
    case 37u: goto L_08A002FC;
    case 38u: goto L_08A00308;
    case 39u: goto L_08A00324;
    case 40u: goto L_08A00328;
    case 41u: goto L_08A0033C;
    case 42u: goto L_08A00350;
    case 43u: goto L_08A00354;
    case 44u: goto L_08A0035C;
    case 45u: goto L_08A00378;
    case 46u: goto L_08A00398;
    case 47u: goto L_08A003D0;
    case 48u: goto L_08A003E8;
    case 49u: goto L_08A003FC;
    case 50u: goto L_08A00410;
    case 51u: goto L_08A00420;
    case 52u: goto L_08A00430;
    case 53u: goto L_08A00438;
    case 54u: goto L_08A00440;
    case 55u: goto L_08A00448;
    case 56u: goto L_08A00450;
    case 57u: goto L_08A00458;
    case 58u: goto L_08A00464;
    case 59u: goto L_08A0046C;
    case 60u: goto L_08A00478;
    case 61u: goto L_08A00480;
    case 62u: goto L_08A00494;
    case 63u: goto L_08A004A4;
    case 64u: goto L_08A004AC;
    case 65u: goto L_08A004C4;
    case 66u: goto L_08A004D8;
    case 67u: goto L_08A004DC;
    case 68u: goto L_08A004E8;
    case 69u: goto L_08A00504;
    case 70u: goto L_08A00534;
    case 71u: goto L_08A00558;
    case 72u: goto L_08A00564;
    case 73u: goto L_08A0056C;
    case 74u: goto L_08A00570;
    case 75u: goto L_08A00578;
    case 76u: goto L_08A00584;
    case 77u: goto L_08A00590;
    case 78u: goto L_08A0059C;
    case 79u: goto L_08A005A8;
    case 80u: goto L_08A005B8;
    case 81u: goto L_08A005C4;
    case 82u: goto L_08A005D0;
    case 83u: goto L_08A005DC;
    case 84u: goto L_08A005E8;
    case 85u: goto L_08A005F0;
    case 86u: goto L_08A005F8;
    case 87u: goto L_08A0060C;
    case 88u: goto L_08A00628;
    case 89u: goto L_08A00648;
    case 90u: goto L_08A00650;
    case 91u: goto L_08A00658;
    case 92u: goto L_08A00664;
    case 93u: goto L_08A00670;
    case 94u: goto L_08A00678;
    case 95u: goto L_08A0068C;
    case 96u: goto L_08A006A0;
    case 97u: goto L_08A006C4;
    case 98u: goto L_08A006D0;
    case 99u: goto L_08A006F0;
    case 100u: goto L_08A00708;
    case 101u: goto L_08A00720;
    case 102u: goto L_08A00728;
    case 103u: goto L_08A00738;
    case 104u: goto L_08A00760;
    case 105u: goto L_08A00770;
    case 106u: goto L_08A00774;
    case 107u: goto L_08A00794;
    case 108u: goto L_08A00798;
    case 109u: goto L_08A007A4;
    case 110u: goto L_08A007CC;
    case 111u: goto L_08A007DC;
    case 112u: goto L_08A007E0;
    case 113u: goto L_08A007FC;
    case 114u: goto L_08A00804;
    case 115u: goto L_08A00810;
    case 116u: goto L_08A00834;
    case 117u: goto L_08A00848;
    case 118u: goto L_08A0085C;
    case 119u: goto L_08A00870;
    case 120u: goto L_08A00884;
    case 121u: goto L_08A00898;
    case 122u: goto L_08A008AC;
    case 123u: goto L_08A008C0;
    case 124u: goto L_08A008C8;
    case 125u: goto L_08A008EC;
    case 126u: goto L_08A00900;
    case 127u: goto L_08A00914;
    case 128u: goto L_08A00928;
    case 129u: goto L_08A00934;
    case 130u: goto L_08A00944;
    case 131u: goto L_08A00968;
    case 132u: goto L_08A00974;
    case 133u: goto L_08A00980;
    case 134u: goto L_08A00990;
    case 135u: goto L_08A009A0;
    case 136u: goto L_08A009A4;
    case 137u: goto L_08A009B8;
    case 138u: goto L_08A009C4;
    case 139u: goto L_08A009CC;
    case 140u: goto L_08A009DC;
    case 141u: goto L_08A009E8;
    case 142u: goto L_08A009F0;
    case 143u: goto L_08A009F8;
    case 144u: goto L_08A00A08;
    case 145u: goto L_08A00A30;
    case 146u: goto L_08A00A38;
    case 147u: goto L_08A00A4C;
    case 148u: goto L_08A00A58;
    case 149u: goto L_08A00A70;
    case 150u: goto L_08A00A78;
    case 151u: goto L_08A00A80;
    case 152u: goto L_08A00A8C;
    case 153u: goto L_08A00A9C;
    case 154u: goto L_08A00ABC;
    case 155u: goto L_08A00AC4;
    case 156u: goto L_08A00AD4;
    case 157u: goto L_08A00AF0;
    case 158u: goto L_08A00AF8;
    case 159u: goto L_08A00B00;
    case 160u: goto L_08A00B08;
    case 161u: goto L_08A00B24;
    case 162u: goto L_08A00B2C;
    case 163u: goto L_08A00B34;
    case 164u: goto L_08A00B3C;
    case 165u: goto L_08A00B44;
    case 166u: goto L_08A00B4C;
    case 167u: goto L_08A00B54;
    case 168u: goto L_08A00B64;
    case 169u: goto L_08A00B6C;
    case 170u: goto L_08A00B74;
    case 171u: goto L_08A00B7C;
    case 172u: goto L_08A00B84;
    case 173u: goto L_08A00B8C;
    case 174u: goto L_08A00B94;
    case 175u: goto L_08A00BA0;
    case 176u: goto L_08A00BB4;
    case 177u: goto L_08A00BBC;
    case 178u: goto L_08A00BCC;
    case 179u: goto L_08A00BD8;
    case 180u: goto L_08A00BE0;
    case 181u: goto L_08A00C28;
    case 182u: goto L_08A00C34;
    case 183u: goto L_08A00C3C;
    case 184u: goto L_08A00C4C;
    case 185u: goto L_08A00C58;
    case 186u: goto L_08A00C70;
    case 187u: goto L_08A00C94;
    case 188u: goto L_08A00CDC;
    case 189u: goto L_08A00CF0;
    case 190u: goto L_08A00CF8;
    case 191u: goto L_08A00D08;
    case 192u: goto L_08A00D14;
    case 193u: goto L_08A00D24;
    case 194u: goto L_08A00D2C;
    case 195u: goto L_08A00D58;
    case 196u: goto L_08A00D7C;
    case 197u: goto L_08A00D94;
    case 198u: goto L_08A00DB8;
    case 199u: goto L_08A00DD8;
    case 200u: goto L_08A00DE4;
    case 201u: goto L_08A00DEC;
    case 202u: goto L_08A00DF0;
    case 203u: goto L_08A00DFC;
    case 204u: goto L_08A00E08;
    case 205u: goto L_08A00E4C;
    case 206u: goto L_08A00E5C;
    case 207u: goto L_08A00E70;
    case 208u: goto L_08A00E78;
    case 209u: goto L_08A00E84;
    case 210u: goto L_08A00E90;
    case 211u: goto L_08A00EA4;
    case 212u: goto L_08A00EA8;
    case 213u: goto L_08A00ED0;
    case 214u: goto L_08A00F28;
    case 215u: goto L_08A00F48;
    case 216u: goto L_08A00F94;
    case 217u: goto L_08A00FA8;
    case 218u: goto L_08A00FB8;
    case 219u: goto L_08A00FD0;
    case 220u: goto L_08A00FDC;
    case 221u: goto L_08A00FE4;
    case 222u: goto L_08A00FEC;
    case 223u: goto L_08A00FF4;
    case 224u: goto L_08A00FF8;
    case 225u: goto L_08A01000;
    case 226u: goto L_08A01010;
    case 227u: goto L_08A01018;
    case 228u: goto L_08A01024;
    case 229u: goto L_08A01028;
    case 230u: goto L_08A01030;
    case 231u: goto L_08A0103C;
    case 232u: goto L_08A01044;
    case 233u: goto L_08A0104C;
    case 234u: goto L_08A01050;
    case 235u: goto L_08A01058;
    case 236u: goto L_08A0107C;
    case 237u: goto L_08A01080;
    case 238u: goto L_08A01090;
    case 239u: goto L_08A010C4;
    case 240u: goto L_08A010F4;
    case 241u: goto L_08A0110C;
    case 242u: goto L_08A01120;
    case 243u: goto L_08A01124;
    case 244u: goto L_08A0113C;
    case 245u: goto L_08A01150;
    case 246u: goto L_08A0115C;
    case 247u: goto L_08A01184;
    case 248u: goto L_08A0118C;
    case 249u: goto L_08A01198;
    case 250u: goto L_08A011A4;
    case 251u: goto L_08A011AC;
    case 252u: goto L_08A011C4;
    case 253u: goto L_08A011CC;
    case 254u: goto L_08A011D8;
    case 255u: goto L_08A011F4;
    case 256u: goto L_08A01204;
    case 257u: goto L_08A01214;
    case 258u: goto L_08A0121C;
    case 259u: goto L_08A0123C;
    case 260u: goto L_08A01244;
    case 261u: goto L_08A01248;
    case 262u: goto L_08A01250;
    case 263u: goto L_08A01270;
    case 264u: goto L_08A0127C;
    case 265u: goto L_08A0128C;
    case 266u: goto L_08A01294;
    case 267u: goto L_08A0129C;
    case 268u: goto L_08A012A4;
    case 269u: goto L_08A012AC;
    case 270u: goto L_08A012B0;
    case 271u: goto L_08A012B8;
    case 272u: goto L_08A012C8;
    case 273u: goto L_08A012D4;
    case 274u: goto L_08A012E8;
    case 275u: goto L_08A012EC;
    case 276u: goto L_08A012F4;
    case 277u: goto L_08A01308;
    case 278u: goto L_08A01314;
    case 279u: goto L_08A01320;
    case 280u: goto L_08A0133C;
    case 281u: goto L_08A01348;
    case 282u: goto L_08A01350;
    case 283u: goto L_08A01358;
    case 284u: goto L_08A0138C;
    case 285u: goto L_08A013A0;
    case 286u: goto L_08A013B4;
    case 287u: goto L_08A013BC;
    case 288u: goto L_08A013CC;
    case 289u: goto L_08A013DC;
    case 290u: goto L_08A013E4;
    case 291u: goto L_08A013F0;
    case 292u: goto L_08A013F8;
    case 293u: goto L_08A01410;
    case 294u: goto L_08A01444;
    case 295u: goto L_08A0145C;
    case 296u: goto L_08A01464;
    case 297u: goto L_08A01474;
    case 298u: goto L_08A0147C;
    case 299u: goto L_08A0148C;
    case 300u: goto L_08A0149C;
    case 301u: goto L_08A014AC;
    case 302u: goto L_08A014BC;
    case 303u: goto L_08A014C0;
    case 304u: goto L_08A014E0;
    case 305u: goto L_08A01508;
    case 306u: goto L_08A01514;
    case 307u: goto L_08A01524;
    case 308u: goto L_08A0153C;
    case 309u: goto L_08A01558;
    case 310u: goto L_08A01560;
    case 311u: goto L_08A01568;
    case 312u: goto L_08A01574;
    case 313u: goto L_08A01584;
    case 314u: goto L_08A0158C;
    case 315u: goto L_08A01590;
    case 316u: goto L_08A015A8;
    case 317u: goto L_08A015BC;
    case 318u: goto L_08A015C4;
    case 319u: goto L_08A015D4;
    case 320u: goto L_08A015DC;
    case 321u: goto L_08A015E0;
    case 322u: goto L_08A015E8;
    case 323u: goto L_08A0163C;
    case 324u: goto L_08A01644;
    case 325u: goto L_08A0166C;
    case 326u: goto L_08A01670;
    case 327u: goto L_08A01678;
    case 328u: goto L_08A01698;
    case 329u: goto L_08A016A0;
    case 330u: goto L_08A016B8;
    case 331u: goto L_08A016D8;
    case 332u: goto L_08A016F0;
    case 333u: goto L_08A016F4;
    case 334u: goto L_08A01700;
    case 335u: goto L_08A0170C;
    case 336u: goto L_08A01738;
    case 337u: goto L_08A01740;
    case 338u: goto L_08A01744;
    case 339u: goto L_08A01758;
    case 340u: goto L_08A01770;
    case 341u: goto L_08A017B4;
    case 342u: goto L_08A017C0;
    case 343u: goto L_08A017C8;
    case 344u: goto L_08A017D8;
    case 345u: goto L_08A017E8;
    case 346u: goto L_08A0181C;
    case 347u: goto L_08A01824;
    case 348u: goto L_08A01834;
    case 349u: goto L_08A01848;
    case 350u: goto L_08A01864;
    case 351u: goto L_08A01884;
    case 352u: goto L_08A018A0;
    case 353u: goto L_08A018B8;
    case 354u: goto L_08A018C4;
    case 355u: goto L_08A018C8;
    case 356u: goto L_08A01924;
    case 357u: goto L_08A0192C;
    case 358u: goto L_08A01948;
    case 359u: goto L_08A01954;
    case 360u: goto L_08A01968;
    case 361u: goto L_08A019A8;
    case 362u: goto L_08A019B4;
    case 363u: goto L_08A019BC;
    case 364u: goto L_08A019CC;
    case 365u: goto L_08A01A10;
    case 366u: goto L_08A01A18;
    case 367u: goto L_08A01A28;
    case 368u: goto L_08A01A54;
    case 369u: goto L_08A01A70;
    case 370u: goto L_08A01A78;
    case 371u: goto L_08A01A80;
    case 372u: goto L_08A01A88;
    case 373u: goto L_08A01A90;
    case 374u: goto L_08A01A98;
    case 375u: goto L_08A01AC0;
    case 376u: goto L_08A01AD0;
    case 377u: goto L_08A01AD8;
    case 378u: goto L_08A01AF4;
    case 379u: goto L_08A01B00;
    case 380u: goto L_08A01B08;
    case 381u: goto L_08A01B24;
    case 382u: goto L_08A01B30;
    case 383u: goto L_08A01B38;
    case 384u: goto L_08A01B40;
    case 385u: goto L_08A01B68;
    case 386u: goto L_08A01B78;
    case 387u: goto L_08A01B80;
    case 388u: goto L_08A01B9C;
    case 389u: goto L_08A01BB8;
    case 390u: goto L_08A01BC0;
    case 391u: goto L_08A01BC4;
    case 392u: goto L_08A01BE0;
    case 393u: goto L_08A01BF4;
    case 394u: goto L_08A01C14;
    case 395u: goto L_08A01C24;
    case 396u: goto L_08A01C3C;
    case 397u: goto L_08A01C44;
    case 398u: goto L_08A01C58;
    case 399u: goto L_08A01C60;
    case 400u: goto L_08A01C6C;
    case 401u: goto L_08A01C74;
    case 402u: goto L_08A01C78;
    case 403u: goto L_08A01C80;
    case 404u: goto L_08A01C90;
    case 405u: goto L_08A01C98;
    case 406u: goto L_08A01CB4;
    case 407u: goto L_08A01CBC;
    case 408u: goto L_08A01CD0;
    case 409u: goto L_08A01CDC;
    case 410u: goto L_08A01CE0;
    case 411u: goto L_08A01CE8;
    case 412u: goto L_08A01CF4;
    case 413u: goto L_08A01CFC;
    case 414u: goto L_08A01D04;
    case 415u: goto L_08A01D1C;
    case 416u: goto L_08A01D28;
    case 417u: goto L_08A01D2C;
    case 418u: goto L_08A01D40;
    case 419u: goto L_08A01D50;
    case 420u: goto L_08A01D60;
    case 421u: goto L_08A01D6C;
    case 422u: goto L_08A01D74;
    case 423u: goto L_08A01D7C;
    case 424u: goto L_08A01D80;
    case 425u: goto L_08A01D88;
    case 426u: goto L_08A01D90;
    case 427u: goto L_08A01DA8;
    case 428u: goto L_08A01DB8;
    case 429u: goto L_08A01DC4;
    case 430u: goto L_08A01DCC;
    case 431u: goto L_08A01DD4;
    case 432u: goto L_08A01DDC;
    case 433u: goto L_08A01DF4;
    case 434u: goto L_08A01E00;
    case 435u: goto L_08A01E04;
    case 436u: goto L_08A01E0C;
    case 437u: goto L_08A01E18;
    case 438u: goto L_08A01E30;
    case 439u: goto L_08A01E38;
    case 440u: goto L_08A01E54;
    case 441u: goto L_08A01E5C;
    case 442u: goto L_08A01E6C;
    case 443u: goto L_08A01E94;
    case 444u: goto L_08A01E9C;
    case 445u: goto L_08A01EC0;
    case 446u: goto L_08A01EC8;
    case 447u: goto L_08A01ED0;
    case 448u: goto L_08A01EDC;
    case 449u: goto L_08A01EE4;
    case 450u: goto L_08A01EF4;
    case 451u: goto L_08A01F04;
    case 452u: goto L_08A01F34;
    case 453u: goto L_08A01F60;
    case 454u: goto L_08A01F80;
    case 455u: goto L_08A01F88;
    case 456u: goto L_08A01F98;
    case 457u: goto L_08A01FA8;
    case 458u: goto L_08A01FAC;
    case 459u: goto L_08A01FB4;
    case 460u: goto L_08A01FBC;
    case 461u: goto L_08A01FD4;
    case 462u: goto L_08A01FD8;
    case 463u: goto L_08A01FDC;
    case 464u: goto L_08A0200C;
    case 465u: goto L_08A02014;
    case 466u: goto L_08A02018;
    case 467u: goto L_08A02020;
    case 468u: goto L_08A02034;
    case 469u: goto L_08A02044;
    case 470u: goto L_08A02058;
    case 471u: goto L_08A02068;
    case 472u: goto L_08A02074;
    case 473u: goto L_08A02090;
    case 474u: goto L_08A02098;
    case 475u: goto L_08A020AC;
    case 476u: goto L_08A020B4;
    case 477u: goto L_08A020C8;
    case 478u: goto L_08A020E4;
    case 479u: goto L_08A020F4;
    case 480u: goto L_08A02104;
    case 481u: goto L_08A02110;
    case 482u: goto L_08A02118;
    case 483u: goto L_08A02124;
    case 484u: goto L_08A02130;
    case 485u: goto L_08A02140;
    case 486u: goto L_08A0214C;
    case 487u: goto L_08A02158;
    case 488u: goto L_08A02168;
    case 489u: goto L_08A02174;
    case 490u: goto L_08A0217C;
    case 491u: goto L_08A02190;
    case 492u: goto L_08A021B0;
    case 493u: goto L_08A021BC;
    case 494u: goto L_08A021CC;
    case 495u: goto L_08A021DC;
    case 496u: goto L_08A021EC;
    case 497u: goto L_08A02204;
    case 498u: goto L_08A02230;
    case 499u: goto L_08A02244;
    case 500u: goto L_08A0226C;
    case 501u: goto L_08A02278;
    case 502u: goto L_08A02280;
    case 503u: goto L_08A0229C;
    case 504u: goto L_08A022C8;
    case 505u: goto L_08A022D4;
    case 506u: goto L_08A022FC;
    case 507u: goto L_08A02308;
    case 508u: goto L_08A02310;
    case 509u: goto L_08A0232C;
    case 510u: goto L_08A02358;
    case 511u: goto L_08A02364;
    case 512u: goto L_08A02398;
    case 513u: goto L_08A023A4;
    case 514u: goto L_08A023AC;
    case 515u: goto L_08A023C8;
    case 516u: goto L_08A023F4;
    case 517u: goto L_08A02400;
    case 518u: goto L_08A02428;
    case 519u: goto L_08A02434;
    case 520u: goto L_08A0243C;
    case 521u: goto L_08A02458;
    case 522u: goto L_08A024A4;
    case 523u: goto L_08A024C4;
    case 524u: goto L_08A024F8;
    case 525u: goto L_08A02504;
    case 526u: goto L_08A02510;
    case 527u: goto L_08A02518;
    case 528u: goto L_08A02528;
    case 529u: goto L_08A02534;
    case 530u: goto L_08A02540;
    case 531u: goto L_08A02550;
    case 532u: goto L_08A02560;
    case 533u: goto L_08A02594;
    case 534u: goto L_08A025A0;
    case 535u: goto L_08A025A8;
    case 536u: goto L_08A025B0;
    case 537u: goto L_08A025BC;
    case 538u: goto L_08A025C0;
    case 539u: goto L_08A025F0;
    case 540u: goto L_08A02634;
    case 541u: goto L_08A02640;
    case 542u: goto L_08A0265C;
    case 543u: goto L_08A0267C;
    case 544u: goto L_08A02680;
    case 545u: goto L_08A026A0;
    case 546u: goto L_08A026B8;
    case 547u: goto L_08A026C0;
    case 548u: goto L_08A026D4;
    case 549u: goto L_08A02708;
    case 550u: goto L_08A02714;
    case 551u: goto L_08A02724;
    case 552u: goto L_08A0272C;
    case 553u: goto L_08A0273C;
    case 554u: goto L_08A02748;
    case 555u: goto L_08A02750;
    case 556u: goto L_08A02758;
    case 557u: goto L_08A02760;
    case 558u: goto L_08A0276C;
    case 559u: goto L_08A0277C;
    case 560u: goto L_08A0278C;
    case 561u: goto L_08A027BC;
    case 562u: goto L_08A027D8;
    case 563u: goto L_08A027E0;
    case 564u: goto L_08A027FC;
    case 565u: goto L_08A0280C;
    case 566u: goto L_08A02814;
    case 567u: goto L_08A0281C;
    case 568u: goto L_08A02820;
    case 569u: goto L_08A02850;
    case 570u: goto L_08A02860;
    case 571u: goto L_08A0286C;
    case 572u: goto L_08A02880;
    case 573u: goto L_08A0288C;
    case 574u: goto L_08A02894;
    case 575u: goto L_08A0289C;
    case 576u: goto L_08A028AC;
    case 577u: goto L_08A028BC;
    case 578u: goto L_08A028CC;
    case 579u: goto L_08A028D4;
    case 580u: goto L_08A028E4;
    case 581u: goto L_08A028E8;
    case 582u: goto L_08A028F8;
    case 583u: goto L_08A0290C;
    case 584u: goto L_08A02918;
    case 585u: goto L_08A02920;
    case 586u: goto L_08A02928;
    case 587u: goto L_08A02938;
    case 588u: goto L_08A02948;
    case 589u: goto L_08A02958;
    case 590u: goto L_08A02960;
    case 591u: goto L_08A02970;
    case 592u: goto L_08A02974;
    case 593u: goto L_08A02984;
    case 594u: goto L_08A02998;
    case 595u: goto L_08A029A4;
    case 596u: goto L_08A029B8;
    case 597u: goto L_08A029C4;
    case 598u: goto L_08A029D4;
    case 599u: goto L_08A029E0;
    case 600u: goto L_08A02A00;
    case 601u: goto L_08A02A08;
    case 602u: goto L_08A02A10;
    case 603u: goto L_08A02A20;
    case 604u: goto L_08A02A28;
    case 605u: goto L_08A02A30;
    case 606u: goto L_08A02A38;
    case 607u: goto L_08A02A58;
    case 608u: goto L_08A02A6C;
    case 609u: goto L_08A02A8C;
    case 610u: goto L_08A02A90;
    case 611u: goto L_08A02AA4;
    case 612u: goto L_08A02AC4;
    case 613u: goto L_08A02ACC;
    case 614u: goto L_08A02AD4;
    case 615u: goto L_08A02AE4;
    case 616u: goto L_08A02AEC;
    case 617u: goto L_08A02AF4;
    case 618u: goto L_08A02AFC;
    case 619u: goto L_08A02B14;
    case 620u: goto L_08A02B24;
    case 621u: goto L_08A02B44;
    case 622u: goto L_08A02B48;
    case 623u: goto L_08A02B5C;
    case 624u: goto L_08A02B94;
    case 625u: goto L_08A02B9C;
    case 626u: goto L_08A02BA8;
    case 627u: goto L_08A02BAC;
    case 628u: goto L_08A02BBC;
    case 629u: goto L_08A02BC8;
    case 630u: goto L_08A02BD0;
    case 631u: goto L_08A02BDC;
    case 632u: goto L_08A02BE4;
    case 633u: goto L_08A02BE8;
    case 634u: goto L_08A02C04;
    case 635u: goto L_08A02C34;
    case 636u: goto L_08A02C3C;
    case 637u: goto L_08A02C4C;
    case 638u: goto L_08A02C5C;
    case 639u: goto L_08A02C64;
    case 640u: goto L_08A02C74;
    case 641u: goto L_08A02C80;
    case 642u: goto L_08A02C88;
    case 643u: goto L_08A02C90;
    case 644u: goto L_08A02C98;
    case 645u: goto L_08A02CA8;
    case 646u: goto L_08A02CB4;
    case 647u: goto L_08A02CC0;
    case 648u: goto L_08A02CDC;
    case 649u: goto L_08A02CE0;
    case 650u: goto L_08A02CFC;
    case 651u: goto L_08A02D28;
    case 652u: goto L_08A02D30;
    case 653u: goto L_08A02D3C;
    case 654u: goto L_08A02D4C;
    case 655u: goto L_08A02D58;
    case 656u: goto L_08A02D60;
    case 657u: goto L_08A02D68;
    case 658u: goto L_08A02D74;
    case 659u: goto L_08A02D7C;
    case 660u: goto L_08A02D8C;
    case 661u: goto L_08A02D98;
    case 662u: goto L_08A02DA8;
    case 663u: goto L_08A02DB4;
    case 664u: goto L_08A02DB8;
    case 665u: goto L_08A02DD4;
    case 666u: goto L_08A02E0C;
    case 667u: goto L_08A02E14;
    case 668u: goto L_08A02E20;
    case 669u: goto L_08A02E24;
    case 670u: goto L_08A02E34;
    case 671u: goto L_08A02E40;
    case 672u: goto L_08A02E48;
    case 673u: goto L_08A02E54;
    case 674u: goto L_08A02E5C;
    case 675u: goto L_08A02E60;
    case 676u: goto L_08A02E7C;
    case 677u: goto L_08A02EB8;
    case 678u: goto L_08A02EC0;
    case 679u: goto L_08A02ECC;
    case 680u: goto L_08A02ED0;
    case 681u: goto L_08A02EE0;
    case 682u: goto L_08A02EEC;
    case 683u: goto L_08A02EF8;
    case 684u: goto L_08A02F08;
    case 685u: goto L_08A02F18;
    case 686u: goto L_08A02F24;
    case 687u: goto L_08A02F2C;
    case 688u: goto L_08A02F38;
    case 689u: goto L_08A02F3C;
    case 690u: goto L_08A02F44;
    case 691u: goto L_08A02F50;
    case 692u: goto L_08A02F60;
    case 693u: goto L_08A02F74;
    case 694u: goto L_08A02F7C;
    case 695u: goto L_08A02F84;
    case 696u: goto L_08A02F90;
    case 697u: goto L_08A02F94;
    case 698u: goto L_08A02FA0;
    case 699u: goto L_08A02FA8;
    case 700u: goto L_08A02FAC;
    case 701u: goto L_08A02FCC;
    case 702u: goto L_08A02FEC;
    case 703u: goto L_08A02FF4;
    case 704u: goto L_08A03000;
    case 705u: goto L_08A03008;
    case 706u: goto L_08A03014;
    case 707u: goto L_08A03024;
    case 708u: goto L_08A0302C;
    case 709u: goto L_08A03034;
    case 710u: goto L_08A0304C;
    case 711u: goto L_08A03050;
    case 712u: goto L_08A03064;
    case 713u: goto L_08A03090;
    case 714u: goto L_08A0309C;
    case 715u: goto L_08A030CC;
    case 716u: goto L_08A030D8;
    case 717u: goto L_08A030E4;
    case 718u: goto L_08A030EC;
    case 719u: goto L_08A030F8;
    case 720u: goto L_08A0310C;
    case 721u: goto L_08A03118;
    case 722u: goto L_08A03138;
    case 723u: goto L_08A03164;
    case 724u: goto L_08A03170;
    case 725u: goto L_08A031A0;
    case 726u: goto L_08A031AC;
    case 727u: goto L_08A031B8;
    case 728u: goto L_08A031C4;
    case 729u: goto L_08A031CC;
    case 730u: goto L_08A031D8;
    case 731u: goto L_08A031EC;
    case 732u: goto L_08A031F8;
    case 733u: goto L_08A03218;
    case 734u: goto L_08A03248;
    case 735u: goto L_08A03250;
    case 736u: goto L_08A03258;
    case 737u: goto L_08A03264;
    case 738u: goto L_08A03274;
    case 739u: goto L_08A03288;
    case 740u: goto L_08A032B8;
    case 741u: goto L_08A032C4;
    case 742u: goto L_08A032D0;
    case 743u: goto L_08A032D8;
    case 744u: goto L_08A032E0;
    case 745u: goto L_08A032E8;
    case 746u: goto L_08A032F4;
    case 747u: goto L_08A03308;
    case 748u: goto L_08A03314;
    case 749u: goto L_08A03318;
    case 750u: goto L_08A0333C;
    case 751u: goto L_08A03364;
    case 752u: goto L_08A03370;
    case 753u: goto L_08A03384;
    case 754u: goto L_08A0338C;
    case 755u: goto L_08A03394;
    case 756u: goto L_08A033A0;
    case 757u: goto L_08A033AC;
    case 758u: goto L_08A033B4;
    case 759u: goto L_08A033C0;
    case 760u: goto L_08A033C4;
    case 761u: goto L_08A033D0;
    case 762u: goto L_08A033D8;
    case 763u: goto L_08A033E4;
    case 764u: goto L_08A033F0;
    case 765u: goto L_08A033F8;
    case 766u: goto L_08A03404;
    case 767u: goto L_08A03414;
    case 768u: goto L_08A03418;
    case 769u: goto L_08A03434;
    case 770u: goto L_08A03468;
    case 771u: goto L_08A03470;
    case 772u: goto L_08A0347C;
    case 773u: goto L_08A03480;
    case 774u: goto L_08A03490;
    case 775u: goto L_08A034AC;
    case 776u: goto L_08A034E4;
    case 777u: goto L_08A034EC;
    case 778u: goto L_08A034F8;
    case 779u: goto L_08A034FC;
    case 780u: goto L_08A03508;
    case 781u: goto L_08A03514;
    case 782u: goto L_08A03534;
    case 783u: goto L_08A0356C;
    case 784u: goto L_08A03574;
    case 785u: goto L_08A03580;
    case 786u: goto L_08A03584;
    case 787u: goto L_08A03590;
    case 788u: goto L_08A035A0;
    case 789u: goto L_08A035C0;
    case 790u: goto L_08A035E0;
    case 791u: goto L_08A0361C;
    case 792u: goto L_08A0362C;
    case 793u: goto L_08A0363C;
    case 794u: goto L_08A03648;
    case 795u: goto L_08A03654;
    case 796u: goto L_08A03664;
    case 797u: goto L_08A0367C;
    case 798u: goto L_08A0369C;
    case 799u: goto L_08A036AC;
    case 800u: goto L_08A036B8;
    case 801u: goto L_08A036D0;
    case 802u: goto L_08A036FC;
    case 803u: goto L_08A0370C;
    case 804u: goto L_08A03720;
    case 805u: goto L_08A0372C;
    case 806u: goto L_08A03738;
    case 807u: goto L_08A0373C;
    case 808u: goto L_08A03750;
    case 809u: goto L_08A0375C;
    case 810u: goto L_08A03780;
    case 811u: goto L_08A03798;
    case 812u: goto L_08A037A8;
    case 813u: goto L_08A037B4;
    case 814u: goto L_08A037C0;
    case 815u: goto L_08A037C8;
    case 816u: goto L_08A037D4;
    case 817u: goto L_08A037EC;
    case 818u: goto L_08A03820;
    case 819u: goto L_08A03830;
    case 820u: goto L_08A03838;
    case 821u: goto L_08A03848;
    case 822u: goto L_08A03850;
    case 823u: goto L_08A03858;
    case 824u: goto L_08A03864;
    case 825u: goto L_08A03870;
    case 826u: goto L_08A03880;
    case 827u: goto L_08A03888;
    case 828u: goto L_08A03890;
    case 829u: goto L_08A038A8;
    case 830u: goto L_08A038B4;
    case 831u: goto L_08A038C8;
    case 832u: goto L_08A038D0;
    case 833u: goto L_08A038DC;
    case 834u: goto L_08A038E8;
    case 835u: goto L_08A038F4;
    case 836u: goto L_08A038FC;
    case 837u: goto L_08A03918;
    case 838u: goto L_08A03928;
    case 839u: goto L_08A03930;
    case 840u: goto L_08A03944;
    case 841u: goto L_08A03968;
    case 842u: goto L_08A0398C;
    case 843u: goto L_08A03998;
    case 844u: goto L_08A039A0;
    case 845u: goto L_08A039B0;
    case 846u: goto L_08A039C0;
    case 847u: goto L_08A039D0;
    case 848u: goto L_08A039EC;
    case 849u: goto L_08A039F4;
    case 850u: goto L_08A039FC;
    case 851u: goto L_08A03A04;
    case 852u: goto L_08A03A0C;
    case 853u: goto L_08A03A18;
    case 854u: goto L_08A03A20;
    case 855u: goto L_08A03A28;
    case 856u: goto L_08A03A3C;
    case 857u: goto L_08A03A44;
    case 858u: goto L_08A03A50;
    case 859u: goto L_08A03A5C;
    case 860u: goto L_08A03A84;
    case 861u: goto L_08A03A94;
    case 862u: goto L_08A03AF4;
    case 863u: goto L_08A03AFC;
    case 864u: goto L_08A03B14;
    case 865u: goto L_08A03B24;
    case 866u: goto L_08A03B40;
    case 867u: goto L_08A03B68;
    case 868u: goto L_08A03B78;
    case 869u: goto L_08A03BD8;
    case 870u: goto L_08A03BE0;
    case 871u: goto L_08A03BF8;
    case 872u: goto L_08A03C08;
    case 873u: goto L_08A03C24;
    case 874u: goto L_08A03C34;
    case 875u: goto L_08A03C40;
    case 876u: goto L_08A03C48;
    case 877u: goto L_08A03C5C;
    case 878u: goto L_08A03C64;
    case 879u: goto L_08A03C70;
    case 880u: goto L_08A03C80;
    case 881u: goto L_08A03C90;
    case 882u: goto L_08A03CD4;
    case 883u: goto L_08A03D0C;
    case 884u: goto L_08A03D58;
    case 885u: goto L_08A03D74;
    case 886u: goto L_08A03D80;
    case 887u: goto L_08A03DA0;
    case 888u: goto L_08A03DC8;
    case 889u: goto L_08A03DE8;
    case 890u: goto L_08A03E00;
    case 891u: goto L_08A03E30;
    case 892u: goto L_08A03E3C;
    case 893u: goto L_08A03E48;
    case 894u: goto L_08A03E50;
    case 895u: goto L_08A03E78;
    case 896u: goto L_08A03E88;
    case 897u: goto L_08A03EA8;
    case 898u: goto L_08A03EC4;
    case 899u: goto L_08A03ED0;
    case 900u: goto L_08A03F94;
    case 901u: goto L_08A03FA4;
    case 902u: goto L_08A03FBC;
    case 903u: goto L_08A03FCC;
    case 904u: goto L_08A03FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A00000:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00008:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A00024u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 720u, 0x089FFE88u>(ctx, &aot_mem) && ctx.pc == 0x08A00024u) goto L_08A00024;
    return;
L_08A00024:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A00044;
      }
      goto L_08A00030;
    }
L_08A00030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A00044u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3040));
    goto L_08A01968;
L_08A00044:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00058:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0006Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 720u, 0x089FFE88u>(ctx, &aot_mem) && ctx.pc == 0x08A0006Cu) goto L_08A0006C;
    return;
L_08A0006C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0007C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A00090u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 720u, 0x089FFE88u>(ctx, &aot_mem) && ctx.pc == 0x08A00090u) goto L_08A00090;
    return;
L_08A00090:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A000A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A000BCu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A00058;
L_08A000BC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A000D0;
      }
      goto L_08A000C8;
    }
L_08A000C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0010C;
      }
      goto L_08A000D0;
    }
L_08A000D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A000E0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 75u, 0x08875B50u>(ctx, &aot_mem) && ctx.pc == 0x08A000E0u) goto L_08A000E0;
    return;
L_08A000E0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A000F4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 716u, 0x089FFE50u>(ctx, &aot_mem) && ctx.pc == 0x08A000F4u) goto L_08A000F4;
    return;
L_08A000F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A00104u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 560u, 0x089171D8u>(ctx, &aot_mem) && ctx.pc == 0x08A00104u) goto L_08A00104;
    return;
L_08A00104:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0010C;
      }
      goto L_08A0010C;
    }
L_08A0010C:
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
L_08A00124:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A00144u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    goto L_08A00008;
L_08A00144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[2] << 2u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A0015Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0015Cu) goto L_08A0015C;
    return;
L_08A0015C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A00178u);
    ctx.gpr[7] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FFF20u>(ctx, &aot_mem) && ctx.pc == 0x08A00178u) goto L_08A00178;
    return;
L_08A00178:
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
L_08A00190:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A001B8u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_08A00008;
L_08A001B8:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A001D8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A001D8u) goto L_08A001D8;
    return;
L_08A001D8:
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08A0023C;
      }
      goto L_08A001EC;
    }
L_08A001EC:
    ctx.gpr[18] = (0u | 0u);
    goto L_08A001F0;
L_08A001F0:
    ctx.gpr[31] = (0x08A001F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A000A0;
L_08A001F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08A0020Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08A00008;
L_08A0020C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[31] = (0x08A00220u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A00008;
L_08A00220:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A001F0;
      }
      goto L_08A0023C;
    }
L_08A0023C:
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
L_08A0025C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0027Cu);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    goto L_08A00008;
L_08A0027C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[2] << 2u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A00294u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00294u) goto L_08A00294;
    return;
L_08A00294:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A002B0u);
    ctx.gpr[7] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FFF20u>(ctx, &aot_mem) && ctx.pc == 0x08A002B0u) goto L_08A002B0;
    return;
L_08A002B0:
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
L_08A002C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A002F0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_08A00008;
L_08A002F0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A00328;
      }
      goto L_08A002FC;
    }
L_08A002FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A00328;
      }
      goto L_08A00308;
    }
L_08A00308:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A00324u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3020));
    goto L_08A01968;
L_08A00324:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08A00328;
L_08A00328:
    ctx.gpr[7] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A0033Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0033Cu) goto L_08A0033C;
    return;
L_08A0033C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A00378;
      }
      goto L_08A00350;
    }
L_08A00350:
    ctx.gpr[20] = (0u | 0u);
    goto L_08A00354;
L_08A00354:
    ctx.gpr[31] = (0x08A0035Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A000A0;
L_08A0035C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A00354;
      }
      goto L_08A00378;
    }
L_08A00378:
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
L_08A00398:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A003D0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    goto L_08A00008;
L_08A003D0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[18] << 3u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A003E8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A003E8u) goto L_08A003E8;
    return;
L_08A003E8:
    ctx.gpr[30] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A004A4;
      }
      goto L_08A003FC;
    }
L_08A003FC:
    ctx.gpr[23] = (2226u << 16u);
    ctx.gpr[21] = (0u | 3u);
    ctx.gpr[22] = (0u | 4u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-2976));
    goto L_08A00410;
L_08A00410:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A00420u);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 709u, 0x089FFDD0u>(ctx, &aot_mem) && ctx.pc == 0x08A00420u) goto L_08A00420;
    return;
L_08A00420:
    ctx.gpr[4] = (ctx.gpr[2] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A00440;
      }
      goto L_08A00430;
    }
L_08A00430:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A00480;
      }
      goto L_08A00438;
    }
L_08A00438:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A00494;
      }
      goto L_08A00440;
    }
L_08A00440:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A00458;
      }
      goto L_08A00448;
    }
L_08A00448:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0046C;
      }
      goto L_08A00450;
    }
L_08A00450:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00480;
      }
      goto L_08A00458;
    }
L_08A00458:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.gpr[31] = (0x08A00464u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A0007C;
L_08A00464:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A00494;
      }
      goto L_08A0046C;
    }
L_08A0046C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.gpr[31] = (0x08A00478u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A000A0;
L_08A00478:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A00494;
      }
      goto L_08A00480;
    }
L_08A00480:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A00494u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    goto L_08A01968;
L_08A00494:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A00410;
      }
      goto L_08A004A4;
    }
L_08A004A4:
    ctx.gpr[31] = (0x08A004ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A00008;
L_08A004AC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A004C4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A004C4u) goto L_08A004C4;
    return;
L_08A004C4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A00504;
      }
      goto L_08A004D8;
    }
L_08A004D8:
    ctx.gpr[20] = (0u | 0u);
    goto L_08A004DC;
L_08A004DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08A004E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A00534;
L_08A004E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A004DC;
      }
      goto L_08A00504;
    }
L_08A00504:
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
L_08A00534:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A00558u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 148u, 0x08878C44u>(ctx, &aot_mem) && ctx.pc == 0x08A00558u) goto L_08A00558;
    return;
L_08A00558:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A00564u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A000A0;
L_08A00564:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A00570;
      }
      goto L_08A0056C;
    }
L_08A0056C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    goto L_08A00570;
L_08A00570:
    ctx.gpr[31] = (0x08A00578u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A00008;
L_08A00578:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.gpr[31] = (0x08A00584u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 709u, 0x089FFDD0u>(ctx, &aot_mem) && ctx.pc == 0x08A00584u) goto L_08A00584;
    return;
L_08A00584:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x08A00590u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 709u, 0x089FFDD0u>(ctx, &aot_mem) && ctx.pc == 0x08A00590u) goto L_08A00590;
    return;
L_08A00590:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x08A0059Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 709u, 0x089FFDD0u>(ctx, &aot_mem) && ctx.pc == 0x08A0059Cu) goto L_08A0059C;
    return;
L_08A0059C:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x08A005A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 709u, 0x089FFDD0u>(ctx, &aot_mem) && ctx.pc == 0x08A005A8u) goto L_08A005A8;
    return;
L_08A005A8:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A005B8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A0025C;
L_08A005B8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A005C4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A00190;
L_08A005C4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A005D0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A002C8;
L_08A005D0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A005DCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A00398;
L_08A005DC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A005E8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A00124;
L_08A005E8:
    ctx.gpr[31] = (0x08A005F0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A012F4;
L_08A005F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0060C;
      }
      goto L_08A005F8;
    }
L_08A005F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A0060Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2944));
    goto L_08A01968;
L_08A0060C:
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
L_08A00628:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2928));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    goto L_08A00648;
L_08A00648:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00670;
      }
      goto L_08A00650;
    }
L_08A00650:
    ctx.gpr[31] = (0x08A00658u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 709u, 0x089FFDD0u>(ctx, &aot_mem) && ctx.pc == 0x08A00658u) goto L_08A00658;
    return;
L_08A00658:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A00670;
      }
      goto L_08A00664;
    }
L_08A00664:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A00648;
      }
      goto L_08A00670;
    }
L_08A00670:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0068C;
      }
      goto L_08A00678;
    }
L_08A00678:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A0068Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2920));
    goto L_08A01968;
L_08A0068C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A006A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A006C4u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 709u, 0x089FFDD0u>(ctx, &aot_mem) && ctx.pc == 0x08A006C4u) goto L_08A006C4;
    return;
L_08A006C4:
    ctx.gpr[4] = (ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A006F0;
      }
      goto L_08A006D0;
    }
L_08A006D0:
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A006F0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2900));
    goto L_08A01968;
L_08A006F0:
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
L_08A00708:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A00720u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A00628;
L_08A00720:
    ctx.gpr[31] = (0x08A00728u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 709u, 0x089FFDD0u>(ctx, &aot_mem) && ctx.pc == 0x08A00728u) goto L_08A00728;
    return;
L_08A00728:
    ctx.gpr[4] = (ctx.gpr[2] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 81 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A00798;
      }
      goto L_08A00738;
    }
L_08A00738:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 4u));
    ctx.gpr[5] = (ctx.gpr[5] >> 28u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 4u));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2836));
      if (branch_taken) {
          goto L_08A00770;
      }
      goto L_08A00760;
    }
L_08A00760:
    ctx.gpr[6] = (0u - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u - ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A00774;
      }
      goto L_08A00770;
    }
L_08A00770:
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    goto L_08A00774;
L_08A00774:
    ctx.gpr[10] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
    ctx.gpr[9] = (0u | 5u);
    ctx.gpr[31] = (0x08A00794u);
    ctx.gpr[10] = (0u | 0u);
    goto L_08A01968;
L_08A00794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A00798;
L_08A00798:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 80 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A007FC;
      }
      goto L_08A007A4;
    }
L_08A007A4:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 4u));
    ctx.gpr[6] = (ctx.gpr[5] >> 28u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[7] = (2226u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2780));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 4u));
      if (branch_taken) {
          goto L_08A007DC;
      }
      goto L_08A007CC;
    }
L_08A007CC:
    ctx.gpr[8] = (0u - ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] & 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (0u - ctx.gpr[8]);
      if (branch_taken) {
          goto L_08A007E0;
      }
      goto L_08A007DC;
    }
L_08A007DC:
    ctx.gpr[8] = (ctx.gpr[8] & 15u);
    goto L_08A007E0;
L_08A007E0:
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (0u | 5u);
    ctx.gpr[31] = (0x08A007FCu);
    ctx.gpr[10] = (0u | 0u);
    goto L_08A01968;
L_08A007FC:
    ctx.gpr[31] = (0x08A00804u);
    // nop
    goto L_08A009C4;
L_08A00804:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A00810u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 709u, 0x089FFDD0u>(ctx, &aot_mem) && ctx.pc == 0x08A00810u) goto L_08A00810;
    return;
L_08A00810:
    ctx.gpr[4] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] ^ ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x08A00834u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2724));
    goto L_08A006A0;
L_08A00834:
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x08A00848u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2720));
    goto L_08A006A0;
L_08A00848:
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x08A0085Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2712));
    goto L_08A006A0;
L_08A0085C:
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[31] = (0x08A00870u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2700));
    goto L_08A006A0;
L_08A00870:
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x08A00884u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2696));
    goto L_08A006A0;
L_08A00884:
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x08A00898u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2692));
    goto L_08A006A0;
L_08A00898:
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x08A008ACu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2688));
    goto L_08A006A0;
L_08A008AC:
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x08A008C0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2684));
    goto L_08A006A0;
L_08A008C0:
    ctx.gpr[31] = (0x08A008C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A0007C;
L_08A008C8:
    ctx.gpr[4] = (19439u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] | 44859u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A00900;
      }
      goto L_08A008EC;
    }
L_08A008EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A00900u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2676));
    goto L_08A01968;
L_08A00900:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00914:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A00928u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A00708;
L_08A00928:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A00934u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A00534;
L_08A00934:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00944:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[10] = (0u | 64u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[10];
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08A00974;
      }
      goto L_08A00968;
    }
L_08A00968:
    ctx.gpr[9] = (0u | 61u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A00980;
      }
      goto L_08A00974;
    }
L_08A00974:
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08A009A4;
      }
      goto L_08A00980;
    }
L_08A00980:
    ctx.gpr[9] = (2226u << 16u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(-2928))))));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A009A0;
      }
      goto L_08A00990;
    }
L_08A00990:
    ctx.gpr[7] = (2226u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2648));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08A009A4;
      }
      goto L_08A009A0;
    }
L_08A009A0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    goto L_08A009A4;
L_08A009A4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A009B8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08A00914;
L_08A009B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A009C4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A009CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A009F0;
      }
      goto L_08A009DC;
    }
L_08A009DC:
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A009F8;
      }
      goto L_08A009E8;
    }
L_08A009E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A00A08;
      }
      goto L_08A009F0;
    }
L_08A009F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A00A30;
      }
      goto L_08A009F8;
    }
L_08A009F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A00A08;
L_08A00A08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    goto L_08A00A30;
L_08A00A30:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00A38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A00A4Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A009CC;
L_08A00A4C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A00A78;
      }
      goto L_08A00A58;
    }
L_08A00A58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A00A80;
      }
      goto L_08A00A70;
    }
L_08A00A70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00A8C;
      }
      goto L_08A00A78;
    }
L_08A00A78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A00A8C;
      }
      goto L_08A00A80;
    }
L_08A00A80:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A00A8C;
L_08A00A8C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00A9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A00AD4;
      }
      goto L_08A00ABC;
    }
L_08A00ABC:
    ctx.gpr[31] = (0x08A00AC4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A009CC;
L_08A00AC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-24));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A00ABC;
      }
      goto L_08A00AD4;
    }
L_08A00AD4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00AF0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00B00;
      }
      goto L_08A00AF8;
    }
L_08A00AF8:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A00B08;
      }
      goto L_08A00B00;
    }
L_08A00B00:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A00B08;
L_08A00B08:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00B24:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00B2C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00B34:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00B3C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    goto L_08A00B44;
L_08A00B44:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[8] = (ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A00B74;
      }
      goto L_08A00B4C;
    }
L_08A00B4C:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00B74;
      }
      goto L_08A00B54;
    }
L_08A00B54:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (ctx.gpr[8] & 1u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A00B6C;
      }
      goto L_08A00B64;
    }
L_08A00B64:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[8]);
    goto L_08A00B6C;
L_08A00B6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-24));
      if (branch_taken) {
          goto L_08A00B44;
      }
      goto L_08A00B74;
    }
L_08A00B74:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A00B84;
      }
      goto L_08A00B7C;
    }
L_08A00B7C:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A00B8C;
      }
      goto L_08A00B84;
    }
L_08A00B84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A00BB4;
      }
      goto L_08A00B8C;
    }
L_08A00B8C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A00BA0;
      }
      goto L_08A00B94;
    }
L_08A00B94:
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(92), 0u);
      if (branch_taken) {
          goto L_08A00BB4;
      }
      goto L_08A00BA0;
    }
L_08A00BA0:
    ctx.gpr[5] = (0u | 24u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    goto L_08A00BB4;
L_08A00BB4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00BBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A00BD8;
      }
      goto L_08A00BCC;
    }
L_08A00BCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08A00BD8;
L_08A00BD8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00BE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A00C28u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A00BBC;
L_08A00C28:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00C70;
      }
      goto L_08A00C34;
    }
L_08A00C34:
    ctx.gpr[31] = (0x08A00C3Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A009CC;
L_08A00C3C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A00C4Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 164u, 0x08878DF0u>(ctx, &aot_mem) && ctx.pc == 0x08A00C4Cu) goto L_08A00C4C;
    return;
L_08A00C4C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00C70;
      }
      goto L_08A00C58;
    }
L_08A00C58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    ctx.gpr[31] = (0x08A00C70u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 532u, 0x0890B294u>(ctx, &aot_mem) && ctx.pc == 0x08A00C70u) goto L_08A00C70;
    return;
L_08A00C70:
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
L_08A00C94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A00CDCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A00BBC;
L_08A00CDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A00D58;
      }
      goto L_08A00CF0;
    }
L_08A00CF0:
    ctx.gpr[31] = (0x08A00CF8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A009CC;
L_08A00CF8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A00D08u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 164u, 0x08878DF0u>(ctx, &aot_mem) && ctx.pc == 0x08A00D08u) goto L_08A00D08;
    return;
L_08A00D08:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00D24;
      }
      goto L_08A00D14;
    }
L_08A00D14:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 40u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08A00D2C;
    }
    goto L_08A00D24;
L_08A00D24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08A00D58;
      }
      goto L_08A00D2C;
    }
L_08A00D2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08A00D58;
L_08A00D58:
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
L_08A00D7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
        goto L_08A00DB8;
    }
    goto L_08A00D94;
L_08A00D94:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2632));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2624));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A00DF0;
      }
      goto L_08A00DB8;
    }
L_08A00DB8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A00DE4;
      }
      goto L_08A00DD8;
    }
L_08A00DD8:
    ctx.gpr[6] = (2226u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2620));
      if (branch_taken) {
          goto L_08A00DEC;
      }
      goto L_08A00DE4;
    }
L_08A00DE4:
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2612));
    goto L_08A00DEC;
L_08A00DEC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    goto L_08A00DF0;
L_08A00DF0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A00DFCu);
    ctx.gpr[6] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 223u, 0x08A5949Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00DFCu) goto L_08A00DFC;
    return;
L_08A00DFC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00E08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(7)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] << (ctx.gpr[6] & 31u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A00EA4;
      }
      goto L_08A00E4C;
    }
L_08A00E4C:
    ctx.gpr[19] = (ctx.gpr[20] << 4u);
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[17] = (0u | 4u);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    goto L_08A00E5C;
L_08A00E5C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[19]);
    ctx.gpr[31] = (0x08A00E70u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 189u, 0x08A59258u>(ctx, &aot_mem) && ctx.pc == 0x08A00E70u) goto L_08A00E70;
    return;
L_08A00E70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00E90;
      }
      goto L_08A00E78;
    }
L_08A00E78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A00E90;
      }
      goto L_08A00E84;
    }
L_08A00E84:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A00EA8;
      }
      goto L_08A00E90;
    }
L_08A00E90:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[20] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-20));
      if (branch_taken) {
          goto L_08A00E5C;
      }
      goto L_08A00EA4;
    }
L_08A00EA4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A00EA8;
L_08A00EA8:
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
L_08A00ED0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2608));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2604));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2596));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A00F28u);
    ctx.gpr[6] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 223u, 0x08A5949Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00F28u) goto L_08A00F28;
    return;
L_08A00F28:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00F48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A01090;
      }
      goto L_08A00F94;
    }
L_08A00F94:
    ctx.gpr[23] = (2226u << 16u);
    ctx.gpr[30] = (2226u << 16u);
    ctx.gpr[22] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-2580));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-2608));
    goto L_08A00FA8;
L_08A00FA8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-83));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(35) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0107C;
      }
      goto L_08A00FB8;
    }
L_08A00FB8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-2320)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00FD0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A00FDCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A00D7C;
L_08A00FDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01080;
      }
      goto L_08A00FE4;
    }
L_08A00FE4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A00FF8;
      }
      goto L_08A00FEC;
    }
L_08A00FEC:
    ctx.gpr[31] = (0x08A00FF4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08A00A38;
L_08A00FF4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08A00FF8;
L_08A00FF8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A01080;
      }
      goto L_08A01000;
    }
L_08A01000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(7)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A01080;
      }
      goto L_08A01010;
    }
L_08A01010:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A01028;
      }
      goto L_08A01018;
    }
L_08A01018:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A01024u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_08A014E0;
L_08A01024:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08A01028;
L_08A01028:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A01050;
      }
      goto L_08A01030;
    }
L_08A01030:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0103Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A00E08;
L_08A0103C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A0104C;
      }
      goto L_08A01044;
    }
L_08A01044:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[23]);
      if (branch_taken) {
          goto L_08A01050;
      }
      goto L_08A0104C;
    }
L_08A0104C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[30]);
    goto L_08A01050;
L_08A01050:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01080;
      }
      goto L_08A01058;
    }
L_08A01058:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A01080;
      }
      goto L_08A0107C;
    }
L_08A0107C:
    ctx.gpr[21] = (0u | 0u);
    goto L_08A01080;
L_08A01080:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A00FA8;
      }
      goto L_08A01090;
    }
L_08A01090:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
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
L_08A010C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[8] = (0u | 62u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A01150;
      }
      goto L_08A010F4;
    }
L_08A010F4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-8));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A01124;
      }
      goto L_08A0110C;
    }
L_08A0110C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A01120u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2572));
    goto L_08A01968;
L_08A01120:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A01124;
L_08A01124:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A0113Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A00F48;
L_08A0113C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A01198;
      }
      goto L_08A01150;
    }
L_08A01150:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A0118C;
      }
      goto L_08A0115C;
    }
L_08A0115C:
    ctx.gpr[4] = (ctx.gpr[5] << 3u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A01184u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-8));
    goto L_08A00F48;
L_08A01184:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A01198;
      }
      goto L_08A0118C;
    }
L_08A0118C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A01198u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A00ED0;
L_08A01198:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A011A4u);
    ctx.gpr[5] = (0u | 102u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 412u, 0x08AED718u>(ctx, &aot_mem) && ctx.pc == 0x08A011A4u) goto L_08A011A4;
    return;
L_08A011A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A011D8;
      }
      goto L_08A011AC;
    }
L_08A011AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A011CC;
      }
      goto L_08A011C4;
    }
L_08A011C4:
    ctx.gpr[31] = (0x08A011CCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 271u, 0x088B97B0u>(ctx, &aot_mem) && ctx.pc == 0x08A011CCu) goto L_08A011CC;
    return;
L_08A011CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08A011D8;
L_08A011D8:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A011F4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(71)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 251 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01244;
      }
      goto L_08A01204;
    }
L_08A01204:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0121C;
      }
      goto L_08A01214;
    }
L_08A01214:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A01244;
      }
      goto L_08A0121C;
    }
L_08A0121C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[5] = (0u | 27u);
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A01244;
      }
      goto L_08A0123C;
    }
L_08A0123C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A01248;
      }
      goto L_08A01244;
    }
L_08A01244:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A01248;
L_08A01248:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01250:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] & 63u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 28 ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (0u | 32u);
        goto L_08A012A4;
    }
    goto L_08A01270;
L_08A01270:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 25 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0129C;
      }
      goto L_08A0127C;
    }
L_08A0127C:
    ctx.gpr[4] = (ctx.gpr[5] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A01294;
      }
      goto L_08A0128C;
    }
L_08A0128C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A012B0;
      }
      goto L_08A01294;
    }
L_08A01294:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A012B0;
      }
      goto L_08A0129C;
    }
L_08A0129C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A012B0;
      }
      goto L_08A012A4;
    }
L_08A012A4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0129C;
      }
      goto L_08A012AC;
    }
L_08A012AC:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A012B0;
L_08A012B0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A012B8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(71)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A012E8;
      }
      goto L_08A012C8;
    }
L_08A012C8:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A012EC;
      }
      goto L_08A012D4;
    }
L_08A012D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-250));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A012EC;
      }
      goto L_08A012E8;
    }
L_08A012E8:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A012EC;
L_08A012EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A012F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A01308u);
    ctx.gpr[6] = (0u | 255u);
    goto L_08A019CC;
L_08A01308:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01314:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-250));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A01348;
      }
      goto L_08A01320;
    }
L_08A01320:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A01348;
      }
      goto L_08A0133C;
    }
L_08A0133C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A01350;
      }
      goto L_08A01348;
    }
L_08A01348:
    ctx.gpr[2] = (2226u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-2528));
    goto L_08A01350;
L_08A01350:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01358:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[7] & 1u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A014BC;
      }
      goto L_08A0138C;
    }
L_08A0138C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A013A0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    goto L_08A009CC;
L_08A013A0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A013B4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 164u, 0x08878DF0u>(ctx, &aot_mem) && ctx.pc == 0x08A013B4u) goto L_08A013B4;
    return;
L_08A013B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A013E4;
      }
      goto L_08A013BC;
    }
L_08A013BC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A013CCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08A019CC;
L_08A013CC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] & 63u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A014BC;
      }
      goto L_08A013DC;
    }
L_08A013DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 12 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A013F0;
      }
      goto L_08A013E4;
    }
L_08A013E4:
    ctx.gpr[2] = (2226u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-2524));
      if (branch_taken) {
          goto L_08A014C0;
      }
      goto L_08A013F0;
    }
L_08A013F0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A014BC;
      }
      goto L_08A013F8;
    }
L_08A013F8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-2176)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01410:
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-2580));
      if (branch_taken) {
          goto L_08A014C0;
      }
      goto L_08A01444;
    }
L_08A01444:
    ctx.gpr[4] = (ctx.gpr[18] >> 24u);
    ctx.gpr[18] = (ctx.gpr[18] >> 15u);
    ctx.gpr[18] = (ctx.gpr[18] & 511u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A01464;
      }
      goto L_08A0145C;
    }
L_08A0145C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A014BC;
      }
      goto L_08A01464;
    }
L_08A01464:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A01474u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08A01358;
L_08A01474:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A014C0;
      }
      goto L_08A0147C;
    }
L_08A0147C:
    ctx.gpr[5] = (ctx.gpr[18] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[31] = (0x08A0148Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08A01314;
L_08A0148C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (2226u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-2516));
      if (branch_taken) {
          goto L_08A014C0;
      }
      goto L_08A0149C;
    }
L_08A0149C:
    ctx.gpr[5] = (ctx.gpr[18] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[31] = (0x08A014ACu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08A01314;
L_08A014AC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (2226u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-2508));
      if (branch_taken) {
          goto L_08A014C0;
      }
      goto L_08A014BC;
    }
L_08A014BC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A014C0;
L_08A014C0:
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
L_08A014E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] & 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A01514;
      }
      goto L_08A01508;
    }
L_08A01508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A01560;
      }
      goto L_08A01514;
    }
L_08A01514:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-16)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-24));
      if (branch_taken) {
          goto L_08A01560;
      }
      goto L_08A01524;
    }
L_08A01524:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08A0153Cu);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    goto L_08A009CC;
L_08A0153C:
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 25u);
    ctx.gpr[6] = (ctx.gpr[4] & 63u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A01574;
      }
      goto L_08A01558;
    }
L_08A01558:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 63u);
      if (branch_taken) {
          goto L_08A01568;
      }
      goto L_08A01560;
    }
L_08A01560:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A01590;
      }
      goto L_08A01568;
    }
L_08A01568:
    ctx.gpr[6] = (0u | 26u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A0158C;
      }
      goto L_08A01574;
    }
L_08A01574:
    ctx.gpr[5] = (ctx.gpr[4] >> 24u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A01584u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08A01358;
L_08A01584:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01590;
      }
      goto L_08A0158C;
    }
L_08A0158C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A01590;
L_08A01590:
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
L_08A015A8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A015D4;
      }
      goto L_08A015BC;
    }
L_08A015BC:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A015DC;
      }
      goto L_08A015C4;
    }
L_08A015C4:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A015BC;
      }
      goto L_08A015D4;
    }
L_08A015D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A015E0;
      }
      goto L_08A015DC;
    }
L_08A015DC:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A015E0;
L_08A015E0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A015E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26008));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0163Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08A015A8;
L_08A0163C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01670;
      }
      goto L_08A01644;
    }
L_08A01644:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[5] = (ctx.gpr[5] >> 29u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 3u));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A0166Cu);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    goto L_08A01358;
L_08A0166C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_08A01670;
L_08A01670:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A016A0;
      }
      goto L_08A01678;
    }
L_08A01678:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A01698u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2500));
    goto L_08A01968;
L_08A01698:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A016B8;
      }
      goto L_08A016A0;
    }
L_08A016A0:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A016B8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2464));
    goto L_08A01968;
L_08A016B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A016D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A016F4;
      }
      goto L_08A016F0;
    }
L_08A016F0:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A016F4;
L_08A016F4:
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[31] = (0x08A01700u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2436));
    goto L_08A015E8;
L_08A01700:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0170C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A01738u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 109u, 0x088D1A60u>(ctx, &aot_mem) && ctx.pc == 0x08A01738u) goto L_08A01738;
    return;
L_08A01738:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A01744;
      }
      goto L_08A01740;
    }
L_08A01740:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08A01744;
L_08A01744:
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A01758u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2424));
    goto L_08A015E8;
L_08A01758:
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
L_08A01770:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(26008));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A017C8;
      }
      goto L_08A017B4;
    }
L_08A017B4:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[31] = (0x08A017C0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2400));
    goto L_08A01968;
L_08A017C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A017D8;
      }
      goto L_08A017C8;
    }
L_08A017C8:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[31] = (0x08A017D8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2364));
    goto L_08A01968;
L_08A017D8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A017E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A01864;
      }
      goto L_08A0181C;
    }
L_08A0181C:
    ctx.gpr[31] = (0x08A01824u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A00A38;
L_08A01824:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A01834u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A00BBC;
L_08A01834:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A01848u);
    ctx.gpr[6] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 223u, 0x08A5949Cu>(ctx, &aot_mem) && ctx.pc == 0x08A01848u) goto L_08A01848;
    return;
L_08A01848:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A01864u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2332));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 221u, 0x08A5945Cu>(ctx, &aot_mem) && ctx.pc == 0x08A01864u) goto L_08A01864;
    return;
L_08A01864:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01884:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A01948;
      }
      goto L_08A018A0;
    }
L_08A018A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_08A018C8;
    }
    goto L_08A018B8;
L_08A018B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A018C4u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 244u, 0x088B9474u>(ctx, &aot_mem) && ctx.pc == 0x08A018C4u) goto L_08A018C4;
    return;
L_08A018C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08A018C8;
L_08A018C8:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A0192C;
      }
      goto L_08A01924;
    }
L_08A01924:
    ctx.gpr[31] = (0x08A0192Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 271u, 0x088B97B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0192Cu) goto L_08A0192C;
    return;
L_08A0192C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    ctx.gpr[31] = (0x08A01948u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 358u, 0x088B9F94u>(ctx, &aot_mem) && ctx.pc == 0x08A01948u) goto L_08A01948;
    return;
L_08A01948:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A01954u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 244u, 0x088B9474u>(ctx, &aot_mem) && ctx.pc == 0x08A01954u) goto L_08A01954;
    return;
L_08A01954:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01968:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    ctx.gpr[4] = (0u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[11]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A019A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 244u, 0x08A595FCu>(ctx, &aot_mem) && ctx.pc == 0x08A019A8u) goto L_08A019A8;
    return;
L_08A019A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A019B4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08A017E8;
L_08A019B4:
    ctx.gpr[31] = (0x08A019BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A01884;
L_08A019BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A019CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A01A10u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    goto L_08A011F4;
L_08A01A10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01EC8;
      }
      goto L_08A01A18;
    }
L_08A01A18:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01EF4;
      }
      goto L_08A01A28;
    }
L_08A01A28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(71)));
    ctx.gpr[22] = (ctx.gpr[4] >> 24u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[4] & 63u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[30] = (0u | 0u);
      if (branch_taken) {
          goto L_08A01EC8;
      }
      goto L_08A01A54;
    }
L_08A01A54:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24352));
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 3u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A01A80;
      }
      goto L_08A01A70;
    }
L_08A01A70:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A01B9C;
      }
      goto L_08A01A78;
    }
L_08A01A78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01A98;
      }
      goto L_08A01A80;
    }
L_08A01A80:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A01B40;
      }
      goto L_08A01A88;
    }
L_08A01A88:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A01B80;
      }
      goto L_08A01A90;
    }
L_08A01A90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01B9C;
      }
      goto L_08A01A98;
    }
L_08A01A98:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[23] = (ctx.gpr[4] >> 15u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24352));
    ctx.gpr[30] = (ctx.gpr[4] >> 6u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[23] = (ctx.gpr[23] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (ctx.gpr[30] & 511u);
      if (branch_taken) {
          goto L_08A01AD8;
      }
      goto L_08A01AC0;
    }
L_08A01AC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(71)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01EC8;
      }
      goto L_08A01AD0;
    }
L_08A01AD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01B08;
      }
      goto L_08A01AD8;
    }
L_08A01AD8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24352));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01B08;
      }
      goto L_08A01AF4;
    }
L_08A01AF4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A01B00u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    goto L_08A012B8;
L_08A01B00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01EC8;
      }
      goto L_08A01B08;
    }
L_08A01B08:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24352));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01B38;
      }
      goto L_08A01B24;
    }
L_08A01B24:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A01B30u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    goto L_08A012B8;
L_08A01B30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01EC8;
      }
      goto L_08A01B38;
    }
L_08A01B38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01B9C;
      }
      goto L_08A01B40;
    }
L_08A01B40:
    ctx.gpr[23] = (ctx.gpr[4] >> 6u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24352));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] & ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A01B78;
      }
      goto L_08A01B68;
    }
L_08A01B68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01EC8;
      }
      goto L_08A01B78;
    }
L_08A01B78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01B9C;
      }
      goto L_08A01B80;
    }
L_08A01B80:
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (ctx.gpr[23] - ctx.gpr[4]);
    goto L_08A01B9C;
L_08A01B9C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24352));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01BC4;
      }
      goto L_08A01BB8;
    }
L_08A01BB8:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A01BC4;
      }
      goto L_08A01BC0;
    }
L_08A01BC0:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08A01BC4;
L_08A01BC4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24352));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01C14;
      }
      goto L_08A01BE0;
    }
L_08A01BE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01EC8;
      }
      goto L_08A01BF4;
    }
L_08A01BF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 20u);
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A01EC8;
      }
      goto L_08A01C14;
    }
L_08A01C14:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(33) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08A01EE4;
      }
      goto L_08A01C24;
    }
L_08A01C24:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-2128)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01C3C:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01C58;
      }
      goto L_08A01C44;
    }
L_08A01C44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01EC8;
      }
      goto L_08A01C58;
    }
L_08A01C58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01EE4;
      }
      goto L_08A01C60;
    }
L_08A01C60:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A01C78;
      }
      goto L_08A01C6C;
    }
L_08A01C6C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A01C78;
      }
      goto L_08A01C74;
    }
L_08A01C74:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08A01C78;
L_08A01C78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01EE4;
      }
      goto L_08A01C80;
    }
L_08A01C80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01EC8;
      }
      goto L_08A01C90;
    }
L_08A01C90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01EE4;
      }
      goto L_08A01C98;
    }
L_08A01C98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[23] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A01EC8;
      }
      goto L_08A01CB4;
    }
L_08A01CB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01EE4;
      }
      goto L_08A01CBC;
    }
L_08A01CBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(71)));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01EC8;
      }
      goto L_08A01CD0;
    }
L_08A01CD0:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A01CE0;
      }
      goto L_08A01CDC;
    }
L_08A01CDC:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08A01CE0;
L_08A01CE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01EE4;
      }
      goto L_08A01CE8;
    }
L_08A01CE8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A01EC8;
      }
      goto L_08A01CF4;
    }
L_08A01CF4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01EC8;
      }
      goto L_08A01CFC;
    }
L_08A01CFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01EE4;
      }
      goto L_08A01D04;
    }
L_08A01D04:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[30]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(71)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01EC8;
      }
      goto L_08A01D1C;
    }
L_08A01D1C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A01D2C;
      }
      goto L_08A01D28;
    }
L_08A01D28:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08A01D2C;
L_08A01D2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(71)));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01EC8;
      }
      goto L_08A01D40;
    }
L_08A01D40:
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A01EC8;
      }
      goto L_08A01D50;
    }
L_08A01D50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01EC8;
      }
      goto L_08A01D60;
    }
L_08A01D60:
    ctx.gpr[5] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A01D80;
      }
      goto L_08A01D6C;
    }
L_08A01D6C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A01D80;
      }
      goto L_08A01D74;
    }
L_08A01D74:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A01D80;
      }
      goto L_08A01D7C;
    }
L_08A01D7C:
    ctx.gpr[20] = (ctx.gpr[23] + ctx.gpr[20]);
    goto L_08A01D80;
L_08A01D80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01EE4;
      }
      goto L_08A01D88;
    }
L_08A01D88:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01DA8;
      }
      goto L_08A01D90;
    }
L_08A01D90:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[23]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(71)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01EC8;
      }
      goto L_08A01DA8;
    }
L_08A01DA8:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A01DD4;
      }
      goto L_08A01DB8;
    }
L_08A01DB8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A01DC4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08A01250;
L_08A01DC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01EC8;
      }
      goto L_08A01DCC;
    }
L_08A01DCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01DF4;
      }
      goto L_08A01DD4;
    }
L_08A01DD4:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01DF4;
      }
      goto L_08A01DDC;
    }
L_08A01DDC:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[30]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(71)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01EC8;
      }
      goto L_08A01DF4;
    }
L_08A01DF4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E04;
      }
      goto L_08A01E00;
    }
L_08A01E00:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08A01E04;
L_08A01E04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01EE4;
      }
      goto L_08A01E0C;
    }
L_08A01E0C:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A01E30;
      }
      goto L_08A01E18;
    }
L_08A01E18:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[23]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(71)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01EC8;
      }
      goto L_08A01E30;
    }
L_08A01E30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01EE4;
      }
      goto L_08A01E38;
    }
L_08A01E38:
    ctx.gpr[4] = (ctx.gpr[23] & 31u);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(71)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01EC8;
      }
      goto L_08A01E54;
    }
L_08A01E54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01EE4;
      }
      goto L_08A01E5C;
    }
L_08A01E5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01EC8;
      }
      goto L_08A01E6C;
    }
L_08A01E6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[20]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01EC8;
      }
      goto L_08A01E94;
    }
L_08A01E94:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A01EDC;
      }
      goto L_08A01E9C;
    }
L_08A01E9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A01ED0;
      }
      goto L_08A01EC0;
    }
L_08A01EC0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01ED0;
      }
      goto L_08A01EC8;
    }
L_08A01EC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A01F04;
      }
      goto L_08A01ED0;
    }
L_08A01ED0:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A01E9C;
      }
      goto L_08A01EDC;
    }
L_08A01EDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01EE4;
      }
      goto L_08A01EE4;
    }
L_08A01EE4:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A01A28;
      }
      goto L_08A01EF4;
    }
L_08A01EF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A01F04;
L_08A01F04:
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
L_08A01F34:
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
L_08A01F60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01FB4;
      }
      goto L_08A01F80;
    }
L_08A01F80:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_08A01F88;
L_08A01F88:
    ctx.gpr[8] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_08A01FA8;
    }
    goto L_08A01F98;
L_08A01F98:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A01FAC;
      }
      goto L_08A01FA8;
    }
L_08A01FA8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08A01FAC;
L_08A01FAC:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_08A01F88;
    }
    goto L_08A01FB4;
L_08A01FB4:
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08A01FD8;
    }
    goto L_08A01FBC;
L_08A01FBC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
        goto L_08A01FDC;
    }
    goto L_08A01FD4;
L_08A01FD4:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08A01FD8;
L_08A01FD8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_08A01FDC;
L_08A01FDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02014;
      }
      goto L_08A0200C;
    }
L_08A0200C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A02018;
      }
      goto L_08A02014;
    }
L_08A02014:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    goto L_08A02018;
L_08A02018:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02020:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A02034u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1516));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 412u, 0x08A4B4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A02034u) goto L_08A02034;
    return;
L_08A02034:
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02044:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A02058u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1516));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 412u, 0x08A4B4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A02058u) goto L_08A02058;
    return;
L_08A02058:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08A02068;
    }
    goto L_08A02068;
L_08A02068:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02074:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A02090u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08A02044;
L_08A02090:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A020B4;
      }
      goto L_08A02098;
    }
L_08A02098:
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A020ACu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-596));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 361u, 0x08A4B144u>(ctx, &aot_mem) && ctx.pc == 0x08A020ACu) goto L_08A020AC;
    return;
L_08A020AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A020B4;
      }
      goto L_08A020B4;
    }
L_08A020B4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A020C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A020E4u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B478u>(ctx, &aot_mem) && ctx.pc == 0x08A020E4u) goto L_08A020E4;
    return;
L_08A020E4:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A020F4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1516));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 409u, 0x08A4B4B8u>(ctx, &aot_mem) && ctx.pc == 0x08A020F4u) goto L_08A020F4;
    return;
L_08A020F4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A02104u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BFF0u>(ctx, &aot_mem) && ctx.pc == 0x08A02104u) goto L_08A02104;
    return;
L_08A02104:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A02110u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B6CCu>(ctx, &aot_mem) && ctx.pc == 0x08A02110u) goto L_08A02110;
    return;
L_08A02110:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A02168;
      }
      goto L_08A02118;
    }
L_08A02118:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A02124u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B498u>(ctx, &aot_mem) && ctx.pc == 0x08A02124u) goto L_08A02124;
    return;
L_08A02124:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A02130u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 97u, 0x0890C828u>(ctx, &aot_mem) && ctx.pc == 0x08A02130u) goto L_08A02130;
    return;
L_08A02130:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A02140u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B670u>(ctx, &aot_mem) && ctx.pc == 0x08A02140u) goto L_08A02140;
    return;
L_08A02140:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A0214Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 34u, 0x0890C354u>(ctx, &aot_mem) && ctx.pc == 0x08A0214Cu) goto L_08A0214C;
    return;
L_08A0214C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A02158u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B670u>(ctx, &aot_mem) && ctx.pc == 0x08A02158u) goto L_08A02158;
    return;
L_08A02158:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[31] = (0x08A02168u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 31u, 0x0890C2D0u>(ctx, &aot_mem) && ctx.pc == 0x08A02168u) goto L_08A02168;
    return;
L_08A02168:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A02174u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 560u, 0x0890B504u>(ctx, &aot_mem) && ctx.pc == 0x08A02174u) goto L_08A02174;
    return;
L_08A02174:
    ctx.gpr[31] = (0x08A0217Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B478u>(ctx, &aot_mem) && ctx.pc == 0x08A0217Cu) goto L_08A0217C;
    return;
L_08A0217C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02190:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A021B0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-572));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BCB0u>(ctx, &aot_mem) && ctx.pc == 0x08A021B0u) goto L_08A021B0;
    return;
L_08A021B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A021BCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 703u, 0x0890BF20u>(ctx, &aot_mem) && ctx.pc == 0x08A021BCu) goto L_08A021BC;
    return;
L_08A021BC:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A021CCu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A02044;
L_08A021CC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A021DCu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08A021DCu) goto L_08A021DC;
    return;
L_08A021DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A021ECu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 50u, 0x0890C488u>(ctx, &aot_mem) && ctx.pc == 0x08A021ECu) goto L_08A021EC;
    return;
L_08A021EC:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02204:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A02230u);
    ctx.gpr[18] = (ctx.gpr[6] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08A02230u) goto L_08A02230;
    return;
L_08A02230:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A02244u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 104u, 0x088A8558u>(ctx, &aot_mem) && ctx.pc == 0x08A02244u) goto L_08A02244;
    return;
L_08A02244:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A02278;
      }
      goto L_08A0226C;
    }
L_08A0226C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A02278;
L_08A02278:
    ctx.gpr[31] = (0x08A02280u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08A02280u) goto L_08A02280;
    return;
L_08A02280:
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
L_08A0229C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A022C8u);
    ctx.gpr[18] = (ctx.gpr[6] + static_cast<std::uint32_t>(5736));
    goto L_08A02074;
L_08A022C8:
    ctx.gpr[5] = (ctx.gpr[2] & 255u);
    ctx.gpr[31] = (0x08A022D4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 116u, 0x088A8618u>(ctx, &aot_mem) && ctx.pc == 0x08A022D4u) goto L_08A022D4;
    return;
L_08A022D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A02308;
      }
      goto L_08A022FC;
    }
L_08A022FC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A02308;
L_08A02308:
    ctx.gpr[31] = (0x08A02310u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08A02310u) goto L_08A02310;
    return;
L_08A02310:
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
L_08A0232C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A02358u);
    ctx.gpr[18] = (ctx.gpr[6] + static_cast<std::uint32_t>(5736));
    goto L_08A02074;
L_08A02358:
    ctx.gpr[5] = (ctx.gpr[2] & 255u);
    ctx.gpr[31] = (0x08A02364u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 116u, 0x088A8618u>(ctx, &aot_mem) && ctx.pc == 0x08A02364u) goto L_08A02364;
    return;
L_08A02364:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] << 8u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A023A4;
      }
      goto L_08A02398;
    }
L_08A02398:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A023A4;
L_08A023A4:
    ctx.gpr[31] = (0x08A023ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08A023ACu) goto L_08A023AC;
    return;
L_08A023AC:
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
L_08A023C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A023F4u);
    ctx.gpr[18] = (ctx.gpr[6] + static_cast<std::uint32_t>(5736));
    goto L_08A02074;
L_08A023F4:
    ctx.gpr[5] = (ctx.gpr[2] & 255u);
    ctx.gpr[31] = (0x08A02400u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 105u, 0x088A8570u>(ctx, &aot_mem) && ctx.pc == 0x08A02400u) goto L_08A02400;
    return;
L_08A02400:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A02434;
      }
      goto L_08A02428;
    }
L_08A02428:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A02434;
L_08A02434:
    ctx.gpr[31] = (0x08A0243Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08A0243Cu) goto L_08A0243C;
    return;
L_08A0243C:
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
L_08A02458:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A024A4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 717u, 0x089BF724u>(ctx, &aot_mem) && ctx.pc == 0x08A024A4u) goto L_08A024A4;
    return;
L_08A024A4:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (2232u << 16u);
    ctx.gpr[19] = (0u | 0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(5736));
    goto L_08A024C4;
L_08A024C4:
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
        goto L_08A024F8;
    }
    goto L_08A024F8;
L_08A024F8:
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A025B0;
      }
      goto L_08A02504;
    }
L_08A02504:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A02510u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 648u, 0x088A7DE0u>(ctx, &aot_mem) && ctx.pc == 0x08A02510u) goto L_08A02510;
    return;
L_08A02510:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A025A8;
      }
      goto L_08A02518;
    }
L_08A02518:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A02528u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x08A02528u) goto L_08A02528;
    return;
L_08A02528:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A025A8;
      }
      goto L_08A02534;
    }
L_08A02534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
        goto L_08A02560;
    }
    goto L_08A02540;
L_08A02540:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A02550u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08A02550u) goto L_08A02550;
    return;
L_08A02550:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    goto L_08A02560;
L_08A02560:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A025A8;
      }
      goto L_08A02594;
    }
L_08A02594:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A025A0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08A025A0u) goto L_08A025A0;
    return;
L_08A025A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A025C0;
      }
      goto L_08A025A8;
    }
L_08A025A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A024C4;
      }
      goto L_08A025B0;
    }
L_08A025B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A025BCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08A025BCu) goto L_08A025BC;
    return;
L_08A025BC:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08A025C0;
L_08A025C0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A025F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[23]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[23] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A02634u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 575u, 0x08ACE8B8u>(ctx, &aot_mem) && ctx.pc == 0x08A02634u) goto L_08A02634;
    return;
L_08A02634:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A02640u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B478u>(ctx, &aot_mem) && ctx.pc == 0x08A02640u) goto L_08A02640;
    return;
L_08A02640:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A0265Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 717u, 0x089BF724u>(ctx, &aot_mem) && ctx.pc == 0x08A0265Cu) goto L_08A0265C;
    return;
L_08A0265C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A02680;
      }
      goto L_08A0267C;
    }
L_08A0267C:
    ctx.gpr[23] = (0u | 0u);
    goto L_08A02680;
L_08A02680:
    ctx.gpr[4] = (16416u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A026C0;
      }
      goto L_08A026A0;
    }
L_08A026A0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A026B8u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 809u, 0x089BFC48u>(ctx, &aot_mem) && ctx.pc == 0x08A026B8u) goto L_08A026B8;
    return;
L_08A026B8:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    goto L_08A026C0;
L_08A026C0:
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(5736));
    goto L_08A026D4;
L_08A026D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
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
        goto L_08A02708;
    }
    goto L_08A02708;
L_08A02708:
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0281C;
      }
      goto L_08A02714;
    }
L_08A02714:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A02724u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 646u, 0x088A7DC4u>(ctx, &aot_mem) && ctx.pc == 0x08A02724u) goto L_08A02724;
    return;
L_08A02724:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02814;
      }
      goto L_08A0272C;
    }
L_08A0272C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A0273Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x08A0273Cu) goto L_08A0273C;
    return;
L_08A0273C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02814;
      }
      goto L_08A02748;
    }
L_08A02748:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02760;
      }
      goto L_08A02750;
    }
L_08A02750:
    jump_target = ctx.gpr[19];
    ctx.gpr[31] = (0x08A02758u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A02758u) goto L_08A02758;
    return;
L_08A02758:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02814;
      }
      goto L_08A02760;
    }
L_08A02760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_08A0278C;
    }
    goto L_08A0276C;
L_08A0276C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0277Cu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08A0277Cu) goto L_08A0277C;
    return;
L_08A0277C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08A0278C;
L_08A0278C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A02814;
      }
      goto L_08A027BC;
    }
L_08A027BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A02814;
      }
      goto L_08A027D8;
    }
L_08A027D8:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A027FC;
      }
      goto L_08A027E0;
    }
L_08A027E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A02814;
      }
      goto L_08A027FC;
    }
L_08A027FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[31] = (0x08A0280Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A020C8;
L_08A0280C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A02820;
      }
      goto L_08A02814;
    }
L_08A02814:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A026D4;
      }
      goto L_08A0281C;
    }
L_08A0281C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A02820;
L_08A02820:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02850:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A02860u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A025F0;
L_08A02860:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0286C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A02894;
      }
      goto L_08A02880;
    }
L_08A02880:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0289C;
      }
      goto L_08A0288C;
    }
L_08A0288C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08A028BC;
      }
      goto L_08A02894;
    }
L_08A02894:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A028E8;
      }
      goto L_08A0289C;
    }
L_08A0289C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A028ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08A028ACu) goto L_08A028AC;
    return;
L_08A028AC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08A028BC;
L_08A028BC:
    ctx.gpr[4] = (0u | 65535u);
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A028D4;
      }
      goto L_08A028CC;
    }
L_08A028CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A028E8;
      }
      goto L_08A028D4;
    }
L_08A028D4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A028E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x08A028E4u) goto L_08A028E4;
    return;
L_08A028E4:
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_08A028E8;
L_08A028E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A028F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A02920;
      }
      goto L_08A0290C;
    }
L_08A0290C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02928;
      }
      goto L_08A02918;
    }
L_08A02918:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08A02948;
      }
      goto L_08A02920;
    }
L_08A02920:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A02974;
      }
      goto L_08A02928;
    }
L_08A02928:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A02938u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08A02938u) goto L_08A02938;
    return;
L_08A02938:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08A02948;
L_08A02948:
    ctx.gpr[4] = (0u | 65535u);
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A02960;
      }
      goto L_08A02958;
    }
L_08A02958:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A02974;
      }
      goto L_08A02960;
    }
L_08A02960:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A02970u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x08A02970u) goto L_08A02970;
    return;
L_08A02970:
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08A02974;
L_08A02974:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02984:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2208u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A02998u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10348));
    goto L_08A025F0;
L_08A02998:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A029A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2208u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A029B8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10488));
    goto L_08A025F0;
L_08A029B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A029C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A029D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 150u, 0x08A4C9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A029D4u) goto L_08A029D4;
    return;
L_08A029D4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A029E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A02A00u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 111u, 0x08A4C78Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02A00u) goto L_08A02A00;
    return;
L_08A02A00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02A28;
      }
      goto L_08A02A08;
    }
L_08A02A08:
    ctx.gpr[31] = (0x08A02A10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02A10u) goto L_08A02A10;
    return;
L_08A02A10:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1336)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
        goto L_08A02A30;
    }
    goto L_08A02A20;
L_08A02A20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A02A58;
      }
      goto L_08A02A28;
    }
L_08A02A28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A02A90;
      }
      goto L_08A02A30;
    }
L_08A02A30:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
        goto L_08A02A58;
    }
    goto L_08A02A38;
L_08A02A38:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
      if (branch_taken) {
          goto L_08A02A6C;
      }
      goto L_08A02A58;
    }
L_08A02A58:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    goto L_08A02A6C;
L_08A02A6C:
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[12];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A02A8Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 715u, 0x089BF700u>(ctx, &aot_mem) && ctx.pc == 0x08A02A8Cu) goto L_08A02A8C;
    return;
L_08A02A8C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08A02A90;
L_08A02A90:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02AA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A02AC4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 111u, 0x08A4C78Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02AC4u) goto L_08A02AC4;
    return;
L_08A02AC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02AEC;
      }
      goto L_08A02ACC;
    }
L_08A02ACC:
    ctx.gpr[31] = (0x08A02AD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02AD4u) goto L_08A02AD4;
    return;
L_08A02AD4:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1336)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
        goto L_08A02AF4;
    }
    goto L_08A02AE4;
L_08A02AE4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A02B14;
      }
      goto L_08A02AEC;
    }
L_08A02AEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A02B48;
      }
      goto L_08A02AF4;
    }
L_08A02AF4:
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_08A02B14;
    }
    goto L_08A02AFC;
L_08A02AFC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
      if (branch_taken) {
          goto L_08A02B24;
      }
      goto L_08A02B14;
    }
L_08A02B14:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    goto L_08A02B24;
L_08A02B24:
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[12];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A02B44u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 715u, 0x089BF700u>(ctx, &aot_mem) && ctx.pc == 0x08A02B44u) goto L_08A02B44;
    return;
L_08A02B44:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08A02B48;
L_08A02B48:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02B5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A02B94u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A02020;
L_08A02B94:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02BAC;
      }
      goto L_08A02B9C;
    }
L_08A02B9C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A02BA8u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A02044;
L_08A02BA8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_08A02BAC;
L_08A02BAC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A02BBCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x08A02BBCu) goto L_08A02BBC;
    return;
L_08A02BBC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02BE4;
      }
      goto L_08A02BC8;
    }
L_08A02BC8:
    ctx.gpr[31] = (0x08A02BD0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 134u, 0x08A34CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A02BD0u) goto L_08A02BD0;
    return;
L_08A02BD0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A02BDCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08A02BDCu) goto L_08A02BDC;
    return;
L_08A02BDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A02BE8;
      }
      goto L_08A02BE4;
    }
L_08A02BE4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A02BE8;
L_08A02BE8:
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
L_08A02C04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A02C34u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(5736));
    goto L_08A02020;
L_08A02C34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02C90;
      }
      goto L_08A02C3C;
    }
L_08A02C3C:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A02C4Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A02044;
L_08A02C4C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A02C5Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B6CCu>(ctx, &aot_mem) && ctx.pc == 0x08A02C5Cu) goto L_08A02C5C;
    return;
L_08A02C5C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A02C88;
      }
      goto L_08A02C64;
    }
L_08A02C64:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A02C74u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x08A02C74u) goto L_08A02C74;
    return;
L_08A02C74:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A02C98;
      }
      goto L_08A02C80;
    }
L_08A02C80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02CDC;
      }
      goto L_08A02C88;
    }
L_08A02C88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A02CE0;
      }
      goto L_08A02C90;
    }
L_08A02C90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A02CE0;
      }
      goto L_08A02C98;
    }
L_08A02C98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A02CDC;
      }
      goto L_08A02CA8;
    }
L_08A02CA8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A02CB4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B928u>(ctx, &aot_mem) && ctx.pc == 0x08A02CB4u) goto L_08A02CB4;
    return;
L_08A02CB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x08A02CC0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 698u, 0x08967198u>(ctx, &aot_mem) && ctx.pc == 0x08A02CC0u) goto L_08A02CC0;
    return;
L_08A02CC0:
    ctx.gpr[4] = (ctx.gpr[2] << 6u);
    ctx.gpr[5] = (ctx.gpr[2] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_08A02CDC;
L_08A02CDC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A02CE0;
L_08A02CE0:
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
L_08A02CFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A02D28u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(5736));
    goto L_08A02020;
L_08A02D28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02D60;
      }
      goto L_08A02D30;
    }
L_08A02D30:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A02D3Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A02044;
L_08A02D3C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A02D4Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B478u>(ctx, &aot_mem) && ctx.pc == 0x08A02D4Cu) goto L_08A02D4C;
    return;
L_08A02D4C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02D68;
      }
      goto L_08A02D58;
    }
L_08A02D58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02D7C;
      }
      goto L_08A02D60;
    }
L_08A02D60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A02DB8;
      }
      goto L_08A02D68;
    }
L_08A02D68:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A02D74u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08A02D74u) goto L_08A02D74;
    return;
L_08A02D74:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A02D7C;
L_08A02D7C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A02D8Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x08A02D8Cu) goto L_08A02D8C;
    return;
L_08A02D8C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02DB4;
      }
      goto L_08A02D98;
    }
L_08A02D98:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A02DB4;
      }
      goto L_08A02DA8;
    }
L_08A02DA8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A02DB4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 81u, 0x089685DCu>(ctx, &aot_mem) && ctx.pc == 0x08A02DB4u) goto L_08A02DB4;
    return;
L_08A02DB4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A02DB8;
L_08A02DB8:
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
L_08A02DD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A02E0Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A02020;
L_08A02E0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02E24;
      }
      goto L_08A02E14;
    }
L_08A02E14:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A02E20u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A02044;
L_08A02E20:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_08A02E24;
L_08A02E24:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A02E34u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x08A02E34u) goto L_08A02E34;
    return;
L_08A02E34:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02E5C;
      }
      goto L_08A02E40;
    }
L_08A02E40:
    ctx.gpr[31] = (0x08A02E48u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 138u, 0x08A34D04u>(ctx, &aot_mem) && ctx.pc == 0x08A02E48u) goto L_08A02E48;
    return;
L_08A02E48:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A02E54u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08A02E54u) goto L_08A02E54;
    return;
L_08A02E54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A02E60;
      }
      goto L_08A02E5C;
    }
L_08A02E5C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A02E60;
L_08A02E60:
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
L_08A02E7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A02EB8u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A02020;
L_08A02EB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02ED0;
      }
      goto L_08A02EC0;
    }
L_08A02EC0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A02ECCu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A02044;
L_08A02ECC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_08A02ED0;
L_08A02ED0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A02EE0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x08A02EE0u) goto L_08A02EE0;
    return;
L_08A02EE0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02FA8;
      }
      goto L_08A02EEC;
    }
L_08A02EEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (0u | 65535u);
      if (branch_taken) {
          goto L_08A02F18;
      }
      goto L_08A02EF8;
    }
L_08A02EF8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A02F08u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08A02F08u) goto L_08A02F08;
    return;
L_08A02F08:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A02F18;
L_08A02F18:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A02F2C;
      }
      goto L_08A02F24;
    }
L_08A02F24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A02F3C;
      }
      goto L_08A02F2C;
    }
L_08A02F2C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x08A02F38u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x08A02F38u) goto L_08A02F38;
    return;
L_08A02F38:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08A02F3C;
L_08A02F3C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02FA8;
      }
      goto L_08A02F44;
    }
L_08A02F44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
        goto L_08A02F74;
    }
    goto L_08A02F50;
L_08A02F50:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(17));
    ctx.gpr[31] = (0x08A02F60u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08A02F60u) goto L_08A02F60;
    return;
L_08A02F60:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    goto L_08A02F74;
L_08A02F74:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A02F84;
      }
      goto L_08A02F7C;
    }
L_08A02F7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A02F94;
      }
      goto L_08A02F84;
    }
L_08A02F84:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x08A02F90u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x08A02F90u) goto L_08A02F90;
    return;
L_08A02F90:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08A02F94;
L_08A02F94:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A02FA0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 136u, 0x08A4C8F0u>(ctx, &aot_mem) && ctx.pc == 0x08A02FA0u) goto L_08A02FA0;
    return;
L_08A02FA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A02FAC;
      }
      goto L_08A02FA8;
    }
L_08A02FA8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A02FAC;
L_08A02FAC:
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
L_08A02FCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A02FECu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A02020;
L_08A02FEC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0302C;
      }
      goto L_08A02FF4;
    }
L_08A02FF4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A03000u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B774u>(ctx, &aot_mem) && ctx.pc == 0x08A03000u) goto L_08A03000;
    return;
L_08A03000:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03034;
      }
      goto L_08A03008;
    }
L_08A03008:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A03014u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08A03014u) goto L_08A03014;
    return;
L_08A03014:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A03024u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A020C8;
L_08A03024:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0304C;
      }
      goto L_08A0302C;
    }
L_08A0302C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A03050;
      }
      goto L_08A03034;
    }
L_08A03034:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0304Cu);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    goto L_08A020C8;
L_08A0304C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08A03050;
L_08A03050:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03064:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A03090u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 4u, 0x0890C064u>(ctx, &aot_mem) && ctx.pc == 0x08A03090u) goto L_08A03090;
    return;
L_08A03090:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    goto L_08A0309C;
L_08A0309C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08A030CC;
    }
    goto L_08A030CC;
L_08A030CC:
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03118;
      }
      goto L_08A030D8;
    }
L_08A030D8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A030E4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 648u, 0x088A7DE0u>(ctx, &aot_mem) && ctx.pc == 0x08A030E4u) goto L_08A030E4;
    return;
L_08A030E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0310C;
      }
      goto L_08A030EC;
    }
L_08A030EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A030F8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A020C8;
L_08A030F8:
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0310Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 31u, 0x0890C2D0u>(ctx, &aot_mem) && ctx.pc == 0x08A0310Cu) goto L_08A0310C;
    return;
L_08A0310C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_08A0309C;
      }
      goto L_08A03118;
    }
L_08A03118:
    ctx.gpr[2] = (0u | 1u);
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
L_08A03138:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A03164u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 4u, 0x0890C064u>(ctx, &aot_mem) && ctx.pc == 0x08A03164u) goto L_08A03164;
    return;
L_08A03164:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    goto L_08A03170;
L_08A03170:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[8] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08A031A0;
    }
    goto L_08A031A0;
L_08A031A0:
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A031F8;
      }
      goto L_08A031AC;
    }
L_08A031AC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A031EC;
      }
      goto L_08A031B8;
    }
L_08A031B8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A031C4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 648u, 0x088A7DE0u>(ctx, &aot_mem) && ctx.pc == 0x08A031C4u) goto L_08A031C4;
    return;
L_08A031C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A031EC;
      }
      goto L_08A031CC;
    }
L_08A031CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A031D8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A020C8;
L_08A031D8:
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A031ECu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 31u, 0x0890C2D0u>(ctx, &aot_mem) && ctx.pc == 0x08A031ECu) goto L_08A031EC;
    return;
L_08A031EC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_08A03170;
      }
      goto L_08A031F8;
    }
L_08A031F8:
    ctx.gpr[2] = (0u | 1u);
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
L_08A03218:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A03248u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B774u>(ctx, &aot_mem) && ctx.pc == 0x08A03248u) goto L_08A03248;
    return;
L_08A03248:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A03258;
      }
      goto L_08A03250;
    }
L_08A03250:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A03318;
      }
      goto L_08A03258;
    }
L_08A03258:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A03264u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08A03264u) goto L_08A03264;
    return;
L_08A03264:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A03274u);
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 4u, 0x0890C064u>(ctx, &aot_mem) && ctx.pc == 0x08A03274u) goto L_08A03274;
    return;
L_08A03274:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5736));
    ctx.gpr[19] = (ctx.gpr[21] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    goto L_08A03288;
L_08A03288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08A032B8;
    }
    goto L_08A032B8;
L_08A032B8:
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03314;
      }
      goto L_08A032C4;
    }
L_08A032C4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A032D0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 648u, 0x088A7DE0u>(ctx, &aot_mem) && ctx.pc == 0x08A032D0u) goto L_08A032D0;
    return;
L_08A032D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A03308;
      }
      goto L_08A032D8;
    }
L_08A032D8:
    ctx.gpr[31] = (0x08A032E0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 49u, 0x088A82B0u>(ctx, &aot_mem) && ctx.pc == 0x08A032E0u) goto L_08A032E0;
    return;
L_08A032E0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08A03308;
      }
      goto L_08A032E8;
    }
L_08A032E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A032F4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A020C8;
L_08A032F4:
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A03308u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 31u, 0x0890C2D0u>(ctx, &aot_mem) && ctx.pc == 0x08A03308u) goto L_08A03308;
    return;
L_08A03308:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_08A03288;
      }
      goto L_08A03314;
    }
L_08A03314:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    goto L_08A03318;
L_08A03318:
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
L_08A0333C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A03364u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 594u, 0x0890B7CCu>(ctx, &aot_mem) && ctx.pc == 0x08A03364u) goto L_08A03364;
    return;
L_08A03364:
    ctx.gpr[18] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(5736));
      if (branch_taken) {
          goto L_08A03394;
      }
      goto L_08A03370;
    }
L_08A03370:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08A03384u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A02020;
L_08A03384:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A033B4;
      }
      goto L_08A0338C;
    }
L_08A0338C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A033C4;
      }
      goto L_08A03394;
    }
L_08A03394:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A033A0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 625u, 0x0890B974u>(ctx, &aot_mem) && ctx.pc == 0x08A033A0u) goto L_08A033A0;
    return;
L_08A033A0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A033ACu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 660u, 0x088A7E88u>(ctx, &aot_mem) && ctx.pc == 0x08A033ACu) goto L_08A033AC;
    return;
L_08A033AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A03418;
      }
      goto L_08A033B4;
    }
L_08A033B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A033C0u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A02044;
L_08A033C0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08A033C4;
L_08A033C4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A033D0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 656u, 0x088A7E40u>(ctx, &aot_mem) && ctx.pc == 0x08A033D0u) goto L_08A033D0;
    return;
L_08A033D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A033F8;
      }
      goto L_08A033D8;
    }
L_08A033D8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A033E4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 665u, 0x088A7EF0u>(ctx, &aot_mem) && ctx.pc == 0x08A033E4u) goto L_08A033E4;
    return;
L_08A033E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A033F0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BCB0u>(ctx, &aot_mem) && ctx.pc == 0x08A033F0u) goto L_08A033F0;
    return;
L_08A033F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03414;
      }
      goto L_08A033F8;
    }
L_08A033F8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A03404u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-560));
    goto L_08A01F34;
L_08A03404:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A03414u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-496));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BCB0u>(ctx, &aot_mem) && ctx.pc == 0x08A03414u) goto L_08A03414;
    return;
L_08A03414:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_08A03418;
L_08A03418:
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
L_08A03434:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A03468u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A02020;
L_08A03468:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03480;
      }
      goto L_08A03470;
    }
L_08A03470:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0347Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A02044;
L_08A0347C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_08A03480;
L_08A03480:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A03490u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08A03490u) goto L_08A03490;
    return;
L_08A03490:
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
L_08A034AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A034E4u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A02020;
L_08A034E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A034FC;
      }
      goto L_08A034EC;
    }
L_08A034EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A034F8u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A02044;
L_08A034F8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_08A034FC;
L_08A034FC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A03508u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 39u, 0x088A8218u>(ctx, &aot_mem) && ctx.pc == 0x08A03508u) goto L_08A03508;
    return;
L_08A03508:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A03514u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BCB0u>(ctx, &aot_mem) && ctx.pc == 0x08A03514u) goto L_08A03514;
    return;
L_08A03514:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08A03534:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0356Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A02020;
L_08A0356C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03584;
      }
      goto L_08A03574;
    }
L_08A03574:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A03580u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A02044;
L_08A03580:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_08A03584;
L_08A03584:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A03590u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 49u, 0x088A82B0u>(ctx, &aot_mem) && ctx.pc == 0x08A03590u) goto L_08A03590;
    return;
L_08A03590:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A035A0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08A035A0u) goto L_08A035A0;
    return;
L_08A035A0:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08A035C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A035E0u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A02074;
L_08A035E0:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (17530u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[7] & 255u);
    ctx.gpr[7] = (16128u << 16u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_08A0362C;
      }
      goto L_08A0361C;
    }
L_08A0361C:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08A03654;
      }
      goto L_08A0362C;
    }
L_08A0362C:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
      if (branch_taken) {
          goto L_08A03648;
      }
      goto L_08A0363C;
    }
L_08A0363C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[16];
    goto L_08A03648;
L_08A03648:
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    goto L_08A03654;
L_08A03654:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[12]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08A03664u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08A03664u) goto L_08A03664;
    return;
L_08A03664:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0367C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0369Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A02074;
L_08A0369C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A036ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 656u, 0x088A7E40u>(ctx, &aot_mem) && ctx.pc == 0x08A036ACu) goto L_08A036AC;
    return;
L_08A036AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A036B8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08A036B8u) goto L_08A036B8;
    return;
L_08A036B8:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A036D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A036FCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x08A036FCu) goto L_08A036FC;
    return;
L_08A036FC:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0370Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x08A0370Cu) goto L_08A0370C;
    return;
L_08A0370C:
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A03720u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B478u>(ctx, &aot_mem) && ctx.pc == 0x08A03720u) goto L_08A03720;
    return;
L_08A03720:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0373C;
      }
      goto L_08A0372C;
    }
L_08A0372C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A03738u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x08A03738u) goto L_08A03738;
    return;
L_08A03738:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A0373C;
L_08A0373C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A03750u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 517u, 0x08AB73DCu>(ctx, &aot_mem) && ctx.pc == 0x08A03750u) goto L_08A03750;
    return;
L_08A03750:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0375Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 136u, 0x08A4C8F0u>(ctx, &aot_mem) && ctx.pc == 0x08A0375Cu) goto L_08A0375C;
    return;
L_08A0375C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03780:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A03798u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A03798u) goto L_08A03798;
    return;
L_08A03798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A037B4;
      }
      goto L_08A037A8;
    }
L_08A037A8:
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A037C8;
      }
      goto L_08A037B4;
    }
L_08A037B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A037C0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08A037C0u) goto L_08A037C0;
    return;
L_08A037C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A037D4;
      }
      goto L_08A037C8;
    }
L_08A037C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A037D4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08A037D4u) goto L_08A037D4;
    return;
L_08A037D4:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A037EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A03820u);
    ctx.gpr[17] = (ctx.gpr[6] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x08A03820u) goto L_08A03820;
    return;
L_08A03820:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A03830u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 652u, 0x088A7E10u>(ctx, &aot_mem) && ctx.pc == 0x08A03830u) goto L_08A03830;
    return;
L_08A03830:
    ctx.gpr[31] = (0x08A03838u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A03838u) goto L_08A03838;
    return;
L_08A03838:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A03848u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 111u, 0x08A4C78Cu>(ctx, &aot_mem) && ctx.pc == 0x08A03848u) goto L_08A03848;
    return;
L_08A03848:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A038D0;
      }
      goto L_08A03850;
    }
L_08A03850:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A038D0;
      }
      goto L_08A03858;
    }
L_08A03858:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A038D0;
      }
      goto L_08A03864;
    }
L_08A03864:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A038D0;
      }
      goto L_08A03870;
    }
L_08A03870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 58u);
      if (branch_taken) {
          goto L_08A038D0;
      }
      goto L_08A03880;
    }
L_08A03880:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A038D0;
      }
      goto L_08A03888;
    }
L_08A03888:
    ctx.gpr[31] = (0x08A03890u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 207u, 0x08944E30u>(ctx, &aot_mem) && ctx.pc == 0x08A03890u) goto L_08A03890;
    return;
L_08A03890:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (0u | 18u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1412), ctx.gpr[6]);
    ctx.gpr[31] = (0x08A038A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x08A038A8u) goto L_08A038A8;
    return;
L_08A038A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A038B4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 241u, 0x089BD1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A038B4u) goto L_08A038B4;
    return;
L_08A038B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1412), 0u);
    ctx.gpr[31] = (0x08A038C8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08A038C8u) goto L_08A038C8;
    return;
L_08A038C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A038E8;
      }
      goto L_08A038D0;
    }
L_08A038D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A038DCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08A038DCu) goto L_08A038DC;
    return;
L_08A038DC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A038E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-492));
    goto L_08A01F34;
L_08A038E8:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A038F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08A038F4u) goto L_08A038F4;
    return;
L_08A038F4:
    ctx.gpr[31] = (0x08A038FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 611u, 0x089C6978u>(ctx, &aot_mem) && ctx.pc == 0x08A038FCu) goto L_08A038FC;
    return;
L_08A038FC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A03918u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 390u, 0x088EE848u>(ctx, &aot_mem) && ctx.pc == 0x08A03918u) goto L_08A03918;
    return;
L_08A03918:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A03928u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 401u, 0x088EE920u>(ctx, &aot_mem) && ctx.pc == 0x08A03928u) goto L_08A03928;
    return;
L_08A03928:
    ctx.gpr[31] = (0x08A03930u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 438u, 0x088EED08u>(ctx, &aot_mem) && ctx.pc == 0x08A03930u) goto L_08A03930;
    return;
L_08A03930:
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A03944u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 401u, 0x088EE920u>(ctx, &aot_mem) && ctx.pc == 0x08A03944u) goto L_08A03944;
    return;
L_08A03944:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
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
L_08A03968:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A03998;
      }
      goto L_08A0398C;
    }
L_08A0398C:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A03998;
L_08A03998:
    ctx.gpr[31] = (0x08A039A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08A039A0u) goto L_08A039A0;
    return;
L_08A039A0:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A039B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A039C0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 649u, 0x08942FACu>(ctx, &aot_mem) && ctx.pc == 0x08A039C0u) goto L_08A039C0;
    return;
L_08A039C0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A039D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
      if (branch_taken) {
          goto L_08A03A18;
      }
      goto L_08A039EC;
    }
L_08A039EC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03A04;
      }
      goto L_08A039F4;
    }
L_08A039F4:
    ctx.gpr[31] = (0x08A039FCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A039FCu) goto L_08A039FC;
    return;
L_08A039FC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A03A50;
      }
      goto L_08A03A04;
    }
L_08A03A04:
    ctx.gpr[31] = (0x08A03A0Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A03A0Cu) goto L_08A03A0C;
    return;
L_08A03A0C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A03A50;
      }
      goto L_08A03A18;
    }
L_08A03A18:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03A3C;
      }
      goto L_08A03A20;
    }
L_08A03A20:
    ctx.gpr[31] = (0x08A03A28u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A03A28u) goto L_08A03A28;
    return;
L_08A03A28:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A03A50;
      }
      goto L_08A03A3C;
    }
L_08A03A3C:
    ctx.gpr[31] = (0x08A03A44u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A03A44u) goto L_08A03A44;
    return;
L_08A03A44:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A03A50;
L_08A03A50:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03A5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[6] = (11u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A03A84u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(181));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 575u, 0x08ACE8B8u>(ctx, &aot_mem) && ctx.pc == 0x08A03A84u) goto L_08A03A84;
    return;
L_08A03A84:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A03A94u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B928u>(ctx, &aot_mem) && ctx.pc == 0x08A03A94u) goto L_08A03A94;
    return;
L_08A03A94:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-6239)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[16] = (2232u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(5736));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A03AF4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 644u, 0x088A7DA8u>(ctx, &aot_mem) && ctx.pc == 0x08A03AF4u) goto L_08A03AF4;
    return;
L_08A03AF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03B14;
      }
      goto L_08A03AFC;
    }
L_08A03AFC:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A03B14u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08A039D0;
L_08A03B14:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A03B24u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87C4u>(ctx, &aot_mem) && ctx.pc == 0x08A03B24u) goto L_08A03B24;
    return;
L_08A03B24:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03B40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[6] = (11u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A03B68u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(181));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 575u, 0x08ACE8B8u>(ctx, &aot_mem) && ctx.pc == 0x08A03B68u) goto L_08A03B68;
    return;
L_08A03B68:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A03B78u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B928u>(ctx, &aot_mem) && ctx.pc == 0x08A03B78u) goto L_08A03B78;
    return;
L_08A03B78:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-6239)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[16] = (2232u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(5736));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A03BD8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 644u, 0x088A7DA8u>(ctx, &aot_mem) && ctx.pc == 0x08A03BD8u) goto L_08A03BD8;
    return;
L_08A03BD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03BF8;
      }
      goto L_08A03BE0;
    }
L_08A03BE0:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A03BF8u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08A039D0;
L_08A03BF8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A03C08u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87C4u>(ctx, &aot_mem) && ctx.pc == 0x08A03C08u) goto L_08A03C08;
    return;
L_08A03C08:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03C24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A03C34u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B928u>(ctx, &aot_mem) && ctx.pc == 0x08A03C34u) goto L_08A03C34;
    return;
L_08A03C34:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C5C;
      }
      goto L_08A03C40;
    }
L_08A03C40:
    ctx.gpr[31] = (0x08A03C48u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A03C48u) goto L_08A03C48;
    return;
L_08A03C48:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A03C70;
      }
      goto L_08A03C5C;
    }
L_08A03C5C:
    ctx.gpr[31] = (0x08A03C64u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A03C64u) goto L_08A03C64;
    return;
L_08A03C64:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A03C70;
L_08A03C70:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03C80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A03C90u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08A03C90u) goto L_08A03C90;
    return;
L_08A03C90:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(352), ctx.gpr[7]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03CD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A03D0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A03D0Cu) goto L_08A03D0C;
    return;
L_08A03D0C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.gpr[19] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[19]));
    ctx.gpr[19] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[19]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(7));
    ctx.gpr[18] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[18]));
    ctx.gpr[18] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(11));
    ctx.gpr[16] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[16]));
    ctx.gpr[16] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A03D58u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2F78u>(ctx, &aot_mem) && ctx.pc == 0x08A03D58u) goto L_08A03D58;
    return;
L_08A03D58:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03DA0;
      }
      goto L_08A03D74;
    }
L_08A03D74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03DA0;
      }
      goto L_08A03D80;
    }
L_08A03D80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08A03DC8;
      }
      goto L_08A03DA0;
    }
L_08A03DA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A03DC8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A03DC8u) goto L_08A03DC8;
    return;
L_08A03DC8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03DE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A03E00u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A03E00u) goto L_08A03E00;
    return;
L_08A03E00:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[1] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(3), ctx.gpr[1]));
    ctx.gpr[1] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(6), ctx.gpr[1]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[1]);
    ctx.gpr[6] = (16457u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    ctx.gpr[6] = (17204u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A03E50;
      }
      goto L_08A03E30;
    }
L_08A03E30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03E50;
      }
      goto L_08A03E3C;
    }
L_08A03E3C:
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[31] = (0x08A03E48u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A288A8u>(ctx, &aot_mem) && ctx.pc == 0x08A03E48u) goto L_08A03E48;
    return;
L_08A03E48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03E78;
      }
      goto L_08A03E50;
    }
L_08A03E50:
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[1] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(3), ctx.gpr[1]));
    ctx.gpr[1] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(6), ctx.gpr[1]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[1]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[31] = (0x08A03E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A288A8u>(ctx, &aot_mem) && ctx.pc == 0x08A03E78u) goto L_08A03E78;
    return;
L_08A03E78:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03E88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A03EA8u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A02044;
L_08A03EA8:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A03EC4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 717u, 0x089BF724u>(ctx, &aot_mem) && ctx.pc == 0x08A03EC4u) goto L_08A03EC4;
    return;
L_08A03EC4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A03ED0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 228u, 0x08B00EDCu>(ctx, &aot_mem) && ctx.pc == 0x08A03ED0u) goto L_08A03ED0;
    return;
L_08A03ED0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(34))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(82), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(38))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(42))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(90), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 15u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6238)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(82))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(83))))));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(67));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(84))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(85))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(87))))));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88))))));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(89))))));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(90))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(91))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(93))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(5736));
      if (branch_taken) {
          goto L_08A03FA4;
      }
      goto L_08A03F94;
    }
L_08A03F94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A03FBC;
      }
      goto L_08A03FA4;
    }
L_08A03FA4:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A03FBCu);
    ctx.gpr[7] = (0u | 0u);
    goto L_08A03CD4;
L_08A03FBC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A03FCCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87C4u>(ctx, &aot_mem) && ctx.pc == 0x08A03FCCu) goto L_08A03FCC;
    return;
L_08A03FCC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03FE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.pc = 0x08A04000u; return;
}

void recomp_unit_0127(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0127_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_127(Runtime &runtime) {
    runtime.register_generated_unit(127u, 0x08A00000u, 16384u, &recomp_unit_0127, &recomp_unit_0127_entry);
    runtime.register_function(0x08A00000u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00008u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00024u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00030u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00044u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00058u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0006Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0007Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00090u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A000A0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A000BCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A000C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A000D0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A000E0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A000F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00104u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0010Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00124u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00144u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0015Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00178u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00190u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A001B8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A001D8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A001ECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A001F0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A001F8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0020Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00220u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0023Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0025Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0027Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00294u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A002B0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A002C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A002F0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A002FCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00308u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00324u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00328u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0033Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00350u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00354u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0035Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00378u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00398u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A003D0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A003E8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A003FCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00410u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00420u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00430u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00438u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00440u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00448u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00450u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00458u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00464u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0046Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00478u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00480u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00494u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A004A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A004ACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A004C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A004D8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A004DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A004E8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00504u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00534u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00558u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00564u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0056Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00570u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00578u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00584u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00590u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0059Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A005A8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A005B8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A005C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A005D0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A005DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A005E8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A005F0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A005F8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0060Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00628u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00648u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00650u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00658u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00664u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00670u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00678u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0068Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A006A0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A006C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A006D0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A006F0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00708u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00720u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00728u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00738u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00760u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00770u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00774u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00794u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00798u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A007A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A007CCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A007DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A007E0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A007FCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00804u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00810u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00834u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00848u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0085Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00870u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00884u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00898u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A008ACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A008C0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A008C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A008ECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00900u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00914u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00928u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00934u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00944u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00968u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00974u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00980u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00990u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A009A0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A009A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A009B8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A009C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A009CCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A009DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A009E8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A009F0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A009F8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A08u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A30u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A38u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A4Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A58u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A70u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A78u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A80u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A8Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A9Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00ABCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00AC4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00AD4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00AF0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00AF8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B00u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B08u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B24u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B2Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B34u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B3Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B44u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B4Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B54u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B64u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B6Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B74u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B7Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B84u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B8Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B94u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00BA0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00BB4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00BBCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00BCCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00BD8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00BE0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00C28u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00C34u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00C3Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00C4Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00C58u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00C70u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00C94u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00CDCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00CF0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00CF8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00D08u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00D14u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00D24u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00D2Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00D58u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00D7Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00D94u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00DB8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00DD8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00DE4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00DECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00DF0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00DFCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00E08u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00E4Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00E5Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00E70u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00E78u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00E84u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00E90u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00EA4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00EA8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00ED0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F28u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F48u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F94u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00FA8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00FB8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00FD0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00FDCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00FE4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00FECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00FF4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00FF8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01000u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01010u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01018u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01024u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01028u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01030u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0103Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01044u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0104Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01050u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01058u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0107Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01080u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01090u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A010C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A010F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0110Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01120u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01124u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0113Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01150u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0115Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01184u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0118Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01198u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A011A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A011ACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A011C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A011CCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A011D8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A011F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01204u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01214u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0121Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0123Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01244u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01248u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01250u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01270u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0127Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0128Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01294u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0129Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A012A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A012ACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A012B0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A012B8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A012C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A012D4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A012E8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A012ECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A012F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01308u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01314u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01320u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0133Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01348u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01350u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01358u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0138Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A013A0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A013B4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A013BCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A013CCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A013DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A013E4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A013F0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A013F8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01410u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01444u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0145Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01464u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01474u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0147Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0148Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0149Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A014ACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A014BCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A014C0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A014E0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01508u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01514u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01524u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0153Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01558u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01560u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01568u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01574u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01584u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0158Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01590u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A015A8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A015BCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A015C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A015D4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A015DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A015E0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A015E8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0163Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01644u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0166Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01670u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01678u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01698u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A016A0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A016B8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A016D8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A016F0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A016F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01700u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0170Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01738u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01740u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01744u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01758u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01770u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A017B4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A017C0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A017C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A017D8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A017E8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0181Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01824u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01834u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01848u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01864u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01884u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A018A0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A018B8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A018C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A018C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01924u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0192Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01948u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01954u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01968u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A019A8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A019B4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A019BCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A019CCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01A10u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01A18u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01A28u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01A54u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01A70u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01A78u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01A80u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01A88u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01A90u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01A98u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01AC0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01AD0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01AD8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01AF4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B00u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B08u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B24u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B30u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B38u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B40u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B68u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B78u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B80u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B9Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01BB8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01BC0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01BC4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01BE0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01BF4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C14u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C24u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C3Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C44u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C58u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C60u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C6Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C74u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C78u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C80u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C90u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C98u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01CB4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01CBCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01CD0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01CDCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01CE0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01CE8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01CF4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01CFCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D04u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D1Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D28u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D2Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D40u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D50u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D60u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D6Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D74u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D7Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D80u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D88u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D90u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01DA8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01DB8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01DC4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01DCCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01DD4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01DDCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01DF4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E00u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E04u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E0Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E18u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E30u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E38u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E54u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E5Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E6Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E94u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E9Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01EC0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01EC8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01ED0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01EDCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01EE4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01EF4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01F04u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01F34u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01F60u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01F80u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01F88u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01F98u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01FA8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01FACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01FB4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01FBCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01FD4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01FD8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01FDCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0200Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02014u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02018u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02020u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02034u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02044u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02058u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02068u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02074u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02090u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02098u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A020ACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A020B4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A020C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A020E4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A020F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02104u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02110u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02118u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02124u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02130u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02140u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0214Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02158u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02168u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02174u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0217Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02190u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A021B0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A021BCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A021CCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A021DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A021ECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02204u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02230u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02244u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0226Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02278u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02280u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0229Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A022C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A022D4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A022FCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02308u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02310u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0232Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02358u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02364u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02398u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A023A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A023ACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A023C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A023F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02400u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02428u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02434u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0243Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02458u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A024A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A024C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A024F8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02504u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02510u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02518u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02528u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02534u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02540u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02550u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02560u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02594u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A025A0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A025A8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A025B0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A025BCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A025C0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A025F0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02634u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02640u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0265Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0267Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02680u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A026A0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A026B8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A026C0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A026D4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02708u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02714u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02724u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0272Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0273Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02748u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02750u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02758u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02760u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0276Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0277Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0278Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A027BCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A027D8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A027E0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A027FCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0280Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02814u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0281Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02820u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02850u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02860u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0286Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02880u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0288Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02894u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0289Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A028ACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A028BCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A028CCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A028D4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A028E4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A028E8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A028F8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0290Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02918u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02920u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02928u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02938u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02948u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02958u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02960u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02970u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02974u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02984u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02998u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A029A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A029B8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A029C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A029D4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A029E0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02A00u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02A08u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02A10u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02A20u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02A28u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02A30u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02A38u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02A58u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02A6Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02A8Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02A90u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02AA4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02AC4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02ACCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02AD4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02AE4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02AECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02AF4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02AFCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02B14u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02B24u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02B44u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02B48u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02B5Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02B94u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02B9Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02BA8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02BACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02BBCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02BC8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02BD0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02BDCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02BE4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02BE8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02C04u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02C34u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02C3Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02C4Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02C5Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02C64u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02C74u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02C80u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02C88u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02C90u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02C98u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02CA8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02CB4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02CC0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02CDCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02CE0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02CFCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02D28u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02D30u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02D3Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02D4Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02D58u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02D60u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02D68u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02D74u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02D7Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02D8Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02D98u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02DA8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02DB4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02DB8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02DD4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E0Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E14u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E20u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E24u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E34u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E40u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E48u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E54u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E5Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E60u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E7Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02EB8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02EC0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02ECCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02ED0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02EE0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02EECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02EF8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F08u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F18u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F24u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F2Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F38u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F3Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F44u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F50u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F60u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F74u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F7Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F84u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F90u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F94u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02FA0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02FA8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02FACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02FCCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02FECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02FF4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03000u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03008u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03014u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03024u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0302Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03034u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0304Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03050u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03064u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03090u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0309Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A030CCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A030D8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A030E4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A030ECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A030F8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0310Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03118u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03138u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03164u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03170u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A031A0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A031ACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A031B8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A031C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A031CCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A031D8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A031ECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A031F8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03218u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03248u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03250u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03258u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03264u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03274u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03288u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A032B8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A032C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A032D0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A032D8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A032E0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A032E8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A032F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03308u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03314u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03318u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0333Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03364u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03370u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03384u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0338Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03394u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A033A0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A033ACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A033B4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A033C0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A033C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A033D0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A033D8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A033E4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A033F0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A033F8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03404u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03414u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03418u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03434u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03468u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03470u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0347Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03480u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03490u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A034ACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A034E4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A034ECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A034F8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A034FCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03508u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03514u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03534u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0356Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03574u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03580u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03584u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03590u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A035A0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A035C0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A035E0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0361Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0362Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0363Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03648u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03654u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03664u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0367Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0369Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A036ACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A036B8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A036D0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A036FCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0370Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03720u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0372Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03738u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0373Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03750u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0375Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03780u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03798u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A037A8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A037B4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A037C0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A037C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A037D4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A037ECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03820u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03830u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03838u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03848u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03850u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03858u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03864u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03870u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03880u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03888u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03890u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A038A8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A038B4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A038C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A038D0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A038DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A038E8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A038F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A038FCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03918u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03928u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03930u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03944u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03968u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0398Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03998u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A039A0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A039B0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A039C0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A039D0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A039ECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A039F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A039FCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A04u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A0Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A18u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A20u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A28u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A3Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A44u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A50u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A5Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A84u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A94u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03AF4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03AFCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03B14u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03B24u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03B40u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03B68u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03B78u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03BD8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03BE0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03BF8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03C08u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03C24u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03C34u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03C40u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03C48u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03C5Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03C64u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03C70u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03C80u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03C90u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03CD4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03D0Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03D58u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03D74u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03D80u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03DA0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03DC8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03DE8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03E00u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03E30u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03E3Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03E48u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03E50u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03E78u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03E88u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03EA8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03EC4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03ED0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03F94u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03FA4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03FBCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03FCCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03FE8u, &recomp_unit_0127, "recomp_unit_0127");
}
} // namespace psprecomp
