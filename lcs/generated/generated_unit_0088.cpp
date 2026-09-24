#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0088[4095] = {
    1, 0, 0, 2, 3, 0, 0, 4, 0, 5, 0, 0, 0, 6, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0,
    10, 0, 11, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 21, 0, 22, 23, 0, 0,
    0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0,
    0, 0, 31, 0, 32, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 0, 0, 38, 0, 0, 39,
    0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 47, 0, 0,
    0, 48, 49, 0, 0, 0, 50, 0, 51, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 56, 0,
    0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 62, 0, 0, 0, 63, 0, 64, 65, 0, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0,
    0, 73, 0, 74, 0, 0, 0, 75, 0, 76, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 81,
    0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0,
    0, 87, 0, 88, 0, 89, 0, 0, 0, 90, 0, 91, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0,
    0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0,
    0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0,
    0, 106, 0, 0, 0, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 115, 0, 0, 116, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0,
    119, 0, 0, 0, 120, 0, 121, 0, 122, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 128, 0, 0, 129, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0,
    0, 0, 132, 0, 0, 0, 133, 0, 134, 0, 135, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 141, 0, 0, 142, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0,
    0, 145, 0, 0, 0, 146, 0, 147, 0, 148, 0, 149, 0, 150, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0,
    0, 0, 155, 0, 0, 0, 156, 0, 157, 0, 0, 158, 0, 159, 160, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 167, 0, 0, 0, 168,
    0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 171, 0, 172, 0, 0, 173, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0,
    0, 0, 0, 177, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 182, 0, 183, 0, 0, 184, 0, 185, 0, 0,
    186, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 192, 0, 0, 0, 193, 0, 194, 0,
    0, 0, 195, 0, 0, 0, 196, 0, 0, 197, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0,
    202, 0, 203, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0,
    210, 0, 0, 211, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0,
    0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0,
    0, 228, 0, 0, 0, 229, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0,
    0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 238, 239, 0, 0, 0, 240, 0, 0, 241, 0,
    242, 0, 243, 0, 0, 244, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 249, 0, 0, 250, 0, 0, 251, 0, 252, 0, 253,
    0, 0, 254, 0, 0, 255, 0, 256, 0, 257, 0, 258, 0, 0, 259, 0, 260, 0, 261, 0, 262, 0, 0, 263, 0, 264, 0, 265, 0, 0, 266, 0,
    0, 267, 0, 268, 0, 269, 0, 0, 270, 0, 0, 271, 0, 272, 0, 273, 0, 274, 0, 0, 275, 0, 276, 0, 277, 0, 278, 0, 0, 279, 0, 280,
    0, 281, 0, 0, 282, 0, 0, 283, 0, 284, 0, 285, 0, 0, 286, 0, 0, 287, 0, 288, 0, 289, 0, 290, 0, 0, 291, 0, 292, 0, 293, 0,
    294, 0, 0, 295, 0, 296, 0, 297, 0, 0, 298, 0, 0, 299, 0, 300, 0, 301, 0, 0, 302, 0, 0, 303, 0, 304, 0, 305, 0, 306, 0, 0,
    307, 0, 308, 0, 309, 0, 310, 0, 0, 311, 0, 312, 0, 313, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326,
    0, 0, 0, 0, 0, 327, 0, 328, 329, 0, 330, 0, 0, 0, 331, 0, 0, 332, 0, 0, 333, 0, 334, 0, 335, 0, 0, 336, 0, 337, 338, 0,
    0, 0, 0, 339, 0, 340, 0, 0, 0, 0, 341, 0, 0, 342, 0, 0, 0, 0, 343, 0, 344, 0, 345, 0, 346, 0, 347, 348, 0, 349, 0, 0,
    0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 355, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 363, 0, 0, 0, 364, 0, 365, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 0,
    0, 371, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 0, 377,
    0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 383, 0, 0, 0, 0, 384,
    0, 0, 0, 0, 0, 385, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 389, 390, 0, 0, 0, 0, 0, 391, 0, 392, 393, 0,
    0, 394, 0, 395, 396, 0, 0, 0, 397, 0, 0, 398, 0, 399, 400, 0, 401, 0, 402, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 405, 0, 406, 407, 0, 0, 0, 408, 0, 0, 409, 0, 410, 411, 0, 412, 0, 413, 414, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 416, 0, 417, 418, 0, 0, 0, 419, 0, 0,
    420, 0, 421, 422, 0, 423, 0, 424, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0,
    0, 427, 0, 428, 429, 0, 0, 0, 430, 0, 0, 431, 0, 432, 433, 0, 434, 0, 435, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 438, 0, 439, 440, 0, 0, 0, 441, 0, 0, 442, 0, 443, 444, 0, 445, 0, 446, 447, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 449, 0, 450, 451, 0, 0, 0, 452, 0,
    0, 453, 0, 454, 455, 0, 456, 0, 457, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459,
    0, 0, 460, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 463, 0, 0, 464, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0,
    0, 0, 470, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 473, 0, 0, 474, 0, 475, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 479, 0, 480, 0, 0, 0, 0, 481, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482,
    0, 0, 483, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0,
    0, 490, 0, 491, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0, 0, 0, 494, 495, 0, 496, 497, 0, 0, 0, 498, 0, 0, 0, 499, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 501, 0, 0, 0, 0, 502, 0, 503, 504, 0, 0, 505, 0, 506, 0, 507, 0,
    508, 509, 0, 0, 510, 0, 511, 512, 0, 513, 0, 514, 0, 0, 0, 515, 0, 516, 0, 0, 0, 517, 518, 0, 519, 0, 0, 0, 520, 0, 521, 0,
    522, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 524, 0, 0, 525, 526, 0, 0, 0, 527, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529,
    0, 530, 0, 531, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 534, 0, 0, 0, 0, 0, 0,
    0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    538, 0, 0, 0, 0, 0, 539, 0, 540, 0, 0, 0, 0, 541, 0, 0, 542, 0, 543, 0, 0, 544, 545, 0, 0, 0, 546, 547, 0, 548, 0, 549,
    0, 550, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 554, 555, 0, 0,
    0, 556, 0, 557, 0, 0, 558, 559, 0, 0, 0, 560, 0, 561, 0, 562, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 564, 0, 0, 0, 0, 0, 565, 0, 566, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 569, 0, 570, 0, 571, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 573, 0, 574, 0, 575, 0, 576, 0, 577, 0, 0, 0, 0, 0, 0, 578, 0, 0, 579, 0, 0, 0,
    0, 580, 0, 581, 0, 582, 0, 583, 0, 0, 0, 0, 584, 0, 0, 585, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0,
    0, 0, 0, 588, 0, 0, 0, 0, 0, 589, 0, 590, 0, 591, 0, 0, 0, 592, 0, 593, 594, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0,
    0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 604, 0, 0, 0, 605, 0, 0, 0, 0,
    0, 0, 0, 606, 607, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 610, 0, 0, 0, 611, 0, 0,
    0, 0, 0, 0, 0, 612, 613, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 616, 0, 0, 0, 617,
    0, 0, 0, 0, 618, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 621, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 624, 0, 0, 0, 625, 0, 626,
    0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 629, 0, 0, 630, 0, 631, 0, 0, 0, 0, 632, 0, 0,
    0, 0, 633, 0, 0, 0, 0, 634, 0, 0, 0, 0, 635, 0, 0, 0, 0, 636, 0, 0, 0, 0, 637, 0, 0, 0, 0, 638, 0, 0, 0, 0,
    639, 0, 0, 0, 0, 640, 0, 0, 0, 0, 641, 0, 0, 0, 0, 642, 0, 0, 0, 0, 643, 0, 0, 0, 0, 644, 0, 0, 0, 0, 645, 0,
    0, 0, 0, 646, 0, 0, 0, 0, 647, 0, 0, 0, 0, 648, 0, 0, 0, 0, 649, 0, 0, 0, 0, 650, 0, 0, 0, 0, 651, 0, 0, 0,
    0, 652, 0, 0, 0, 0, 653, 0, 0, 0, 0, 654, 0, 0, 0, 0, 655, 0, 0, 0, 0, 656, 0, 0, 0, 0, 657, 0, 0, 0, 0, 658,
    0, 0, 0, 0, 659, 0, 0, 0, 0, 660, 0, 0, 0, 0, 661, 0, 0, 0, 0, 662, 0, 0, 0, 0, 663, 0, 0, 0, 0, 664, 0, 0,
    0, 0, 665, 0, 0, 0, 0, 666, 0, 0, 0, 0, 667, 0, 0, 0, 0, 668, 0, 0, 0, 0, 669, 0, 0, 0, 0, 670, 0, 0, 0, 0,
    671, 0, 0, 0, 0, 672, 0, 0, 0, 0, 673, 0, 0, 0, 0, 674, 0, 0, 0, 0, 675, 0, 0, 0, 0, 676, 0, 0, 0, 0, 677, 0,
    0, 0, 0, 678, 0, 0, 0, 0, 679, 0, 0, 0, 0, 680, 0, 0, 0, 0, 681, 0, 0, 0, 0, 682, 0, 0, 0, 0, 683, 0, 0, 0,
    0, 684, 0, 0, 0, 0, 685, 0, 0, 0, 0, 686, 0, 0, 0, 0, 687, 0, 0, 0, 0, 688, 0, 0, 0, 0, 689, 0, 0, 0, 0, 690,
    0, 0, 0, 0, 691, 0, 0, 0, 0, 692, 0, 693, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 696,
    0, 0, 0, 0, 697, 0, 698, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 701, 0, 702, 0, 703, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 0, 705, 0, 706, 0, 0, 0, 0, 0, 707, 0, 708, 0, 709, 0, 710, 0, 711, 0,
    712, 0, 713, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 717, 0, 0, 718, 0, 719, 0, 0, 720, 0, 721, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 722, 0, 723, 0, 724, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 0,
    0, 727, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 731, 0, 0, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 735, 0, 0, 0,
    0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 738, 0, 739, 0, 740, 0, 0, 0, 0,
    741, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 743, 0, 744, 0, 745, 0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 747, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 749, 0, 0, 0, 750, 0, 0, 751, 0, 752, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 754, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 757, 0, 0, 0, 758, 0, 759, 0, 760, 0, 761, 0, 0, 0, 0, 0, 762, 0, 0, 0, 763,
    0, 764, 0, 765, 766, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0, 0, 0, 0, 768, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 769, 0, 0, 0, 0, 0, 0, 0, 0, 0, 770, 0, 0, 771, 0, 0, 0, 0, 0, 0, 0,
    0, 772, 0, 0, 773, 0, 0, 0, 774, 0, 0, 775, 0, 0, 776, 777, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 779, 0, 780, 0, 0, 0, 0, 781, 0, 0, 0, 0, 0, 782, 0,
    783, 0, 0, 784, 0, 0, 0, 0, 785, 0, 0, 0, 0, 0, 0, 0, 786, 0, 0, 0, 0, 0, 787, 0, 0, 0, 0, 0, 0, 0, 0, 788,
    0, 0, 789, 0, 0, 0, 0, 0, 0, 0, 790, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 791, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 792, 0, 0, 793, 0, 0, 0, 794, 0, 0, 0, 795, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 796, 0, 0, 0,
    0, 0, 0, 0, 797, 0, 0, 798, 0, 0, 0, 799, 0, 0, 0, 800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 801, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 802, 0, 0, 0, 0, 803, 0, 0, 0, 0, 0, 804, 0, 805, 0, 0, 806, 0, 0, 807,
    0, 808, 0, 0, 809, 0, 0, 810, 0, 811, 0, 0, 812, 0, 813, 0, 814, 0, 0, 815, 0, 0, 816, 0, 817, 0, 0, 818, 0, 0, 819, 0,
    820, 0, 0, 821, 0, 0, 822, 0, 823, 0, 0, 824, 0, 0, 825, 0, 0, 826, 827, 0, 828, 0, 0, 829, 0, 0, 0, 0, 0, 0, 0, 0,
    830, 0, 831, 0, 832, 0, 0, 833, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 834, 0, 835, 836, 0, 0, 837, 0, 0, 838, 0, 0, 0, 0, 0, 0, 0, 0, 839,
};
void recomp_unit_0088_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08964000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0088[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08964000;
    case 2u: goto L_0896400C;
    case 3u: goto L_08964010;
    case 4u: goto L_0896401C;
    case 5u: goto L_08964024;
    case 6u: goto L_08964034;
    case 7u: goto L_08964038;
    case 8u: goto L_08964050;
    case 9u: goto L_08964070;
    case 10u: goto L_08964080;
    case 11u: goto L_08964088;
    case 12u: goto L_08964094;
    case 13u: goto L_089640A4;
    case 14u: goto L_089640B4;
    case 15u: goto L_089640CC;
    case 16u: goto L_0896411C;
    case 17u: goto L_08964124;
    case 18u: goto L_0896412C;
    case 19u: goto L_08964148;
    case 20u: goto L_08964150;
    case 21u: goto L_08964168;
    case 22u: goto L_08964170;
    case 23u: goto L_08964174;
    case 24u: goto L_0896418C;
    case 25u: goto L_089641A8;
    case 26u: goto L_089641C0;
    case 27u: goto L_089641C8;
    case 28u: goto L_0896424C;
    case 29u: goto L_08964268;
    case 30u: goto L_08964270;
    case 31u: goto L_08964288;
    case 32u: goto L_08964290;
    case 33u: goto L_08964294;
    case 34u: goto L_089642A8;
    case 35u: goto L_089642C8;
    case 36u: goto L_089642D4;
    case 37u: goto L_089642E0;
    case 38u: goto L_089642F0;
    case 39u: goto L_089642FC;
    case 40u: goto L_08964310;
    case 41u: goto L_0896431C;
    case 42u: goto L_0896432C;
    case 43u: goto L_0896433C;
    case 44u: goto L_08964348;
    case 45u: goto L_08964358;
    case 46u: goto L_08964368;
    case 47u: goto L_08964374;
    case 48u: goto L_08964384;
    case 49u: goto L_08964388;
    case 50u: goto L_08964398;
    case 51u: goto L_089643A0;
    case 52u: goto L_089643A4;
    case 53u: goto L_089643BC;
    case 54u: goto L_089643E0;
    case 55u: goto L_089643EC;
    case 56u: goto L_089643F8;
    case 57u: goto L_08964408;
    case 58u: goto L_08964418;
    case 59u: goto L_08964428;
    case 60u: goto L_08964438;
    case 61u: goto L_08964444;
    case 62u: goto L_0896444C;
    case 63u: goto L_0896445C;
    case 64u: goto L_08964464;
    case 65u: goto L_08964468;
    case 66u: goto L_08964480;
    case 67u: goto L_089644A4;
    case 68u: goto L_089644B0;
    case 69u: goto L_089644BC;
    case 70u: goto L_089644CC;
    case 71u: goto L_089644DC;
    case 72u: goto L_089644F0;
    case 73u: goto L_08964504;
    case 74u: goto L_0896450C;
    case 75u: goto L_0896451C;
    case 76u: goto L_08964524;
    case 77u: goto L_08964528;
    case 78u: goto L_08964540;
    case 79u: goto L_08964564;
    case 80u: goto L_08964570;
    case 81u: goto L_0896457C;
    case 82u: goto L_0896458C;
    case 83u: goto L_0896459C;
    case 84u: goto L_089645B0;
    case 85u: goto L_089645C4;
    case 86u: goto L_089645F8;
    case 87u: goto L_08964604;
    case 88u: goto L_0896460C;
    case 89u: goto L_08964614;
    case 90u: goto L_08964624;
    case 91u: goto L_0896462C;
    case 92u: goto L_08964630;
    case 93u: goto L_08964648;
    case 94u: goto L_08964658;
    case 95u: goto L_08964664;
    case 96u: goto L_08964688;
    case 97u: goto L_08964698;
    case 98u: goto L_089646B0;
    case 99u: goto L_089646B4;
    case 100u: goto L_089646C8;
    case 101u: goto L_089646E8;
    case 102u: goto L_08964708;
    case 103u: goto L_08964710;
    case 104u: goto L_08964750;
    case 105u: goto L_08964760;
    case 106u: goto L_08964784;
    case 107u: goto L_08964794;
    case 108u: goto L_0896479C;
    case 109u: goto L_089647A4;
    case 110u: goto L_089647AC;
    case 111u: goto L_089647B4;
    case 112u: goto L_089647EC;
    case 113u: goto L_08964820;
    case 114u: goto L_08964834;
    case 115u: goto L_0896483C;
    case 116u: goto L_08964848;
    case 117u: goto L_0896484C;
    case 118u: goto L_08964864;
    case 119u: goto L_08964880;
    case 120u: goto L_08964890;
    case 121u: goto L_08964898;
    case 122u: goto L_089648A0;
    case 123u: goto L_089648A8;
    case 124u: goto L_089648B0;
    case 125u: goto L_089648E8;
    case 126u: goto L_08964924;
    case 127u: goto L_08964938;
    case 128u: goto L_08964940;
    case 129u: goto L_0896494C;
    case 130u: goto L_08964950;
    case 131u: goto L_08964964;
    case 132u: goto L_08964988;
    case 133u: goto L_08964998;
    case 134u: goto L_089649A0;
    case 135u: goto L_089649A8;
    case 136u: goto L_089649B0;
    case 137u: goto L_089649B8;
    case 138u: goto L_089649F0;
    case 139u: goto L_08964A24;
    case 140u: goto L_08964A38;
    case 141u: goto L_08964A40;
    case 142u: goto L_08964A4C;
    case 143u: goto L_08964A50;
    case 144u: goto L_08964A68;
    case 145u: goto L_08964A84;
    case 146u: goto L_08964A94;
    case 147u: goto L_08964A9C;
    case 148u: goto L_08964AA4;
    case 149u: goto L_08964AAC;
    case 150u: goto L_08964AB4;
    case 151u: goto L_08964ABC;
    case 152u: goto L_08964AC4;
    case 153u: goto L_08964AE8;
    case 154u: goto L_08964AF4;
    case 155u: goto L_08964B08;
    case 156u: goto L_08964B18;
    case 157u: goto L_08964B20;
    case 158u: goto L_08964B2C;
    case 159u: goto L_08964B34;
    case 160u: goto L_08964B38;
    case 161u: goto L_08964B4C;
    case 162u: goto L_08964B5C;
    case 163u: goto L_08964B68;
    case 164u: goto L_08964BC0;
    case 165u: goto L_08964BD4;
    case 166u: goto L_08964BDC;
    case 167u: goto L_08964BEC;
    case 168u: goto L_08964BFC;
    case 169u: goto L_08964C20;
    case 170u: goto L_08964C2C;
    case 171u: goto L_08964C38;
    case 172u: goto L_08964C40;
    case 173u: goto L_08964C4C;
    case 174u: goto L_08964C54;
    case 175u: goto L_08964C64;
    case 176u: goto L_08964C78;
    case 177u: goto L_08964C8C;
    case 178u: goto L_08964C94;
    case 179u: goto L_08964CA4;
    case 180u: goto L_08964CB8;
    case 181u: goto L_08964CCC;
    case 182u: goto L_08964CD8;
    case 183u: goto L_08964CE0;
    case 184u: goto L_08964CEC;
    case 185u: goto L_08964CF4;
    case 186u: goto L_08964D00;
    case 187u: goto L_08964D04;
    case 188u: goto L_08964D1C;
    case 189u: goto L_08964D40;
    case 190u: goto L_08964D4C;
    case 191u: goto L_08964D58;
    case 192u: goto L_08964D60;
    case 193u: goto L_08964D70;
    case 194u: goto L_08964D78;
    case 195u: goto L_08964D88;
    case 196u: goto L_08964D98;
    case 197u: goto L_08964DA4;
    case 198u: goto L_08964DA8;
    case 199u: goto L_08964DC0;
    case 200u: goto L_08964DE4;
    case 201u: goto L_08964DF0;
    case 202u: goto L_08964E00;
    case 203u: goto L_08964E08;
    case 204u: goto L_08964E14;
    case 205u: goto L_08964E24;
    case 206u: goto L_08964E34;
    case 207u: goto L_08964E48;
    case 208u: goto L_08964E64;
    case 209u: goto L_08964E74;
    case 210u: goto L_08964E80;
    case 211u: goto L_08964E8C;
    case 212u: goto L_08964E94;
    case 213u: goto L_08964EA4;
    case 214u: goto L_08964EC0;
    case 215u: goto L_08964ED0;
    case 216u: goto L_08964ED8;
    case 217u: goto L_08964EE4;
    case 218u: goto L_08964F08;
    case 219u: goto L_08964F20;
    case 220u: goto L_08964F3C;
    case 221u: goto L_08964F4C;
    case 222u: goto L_08964F54;
    case 223u: goto L_08964F60;
    case 224u: goto L_08964F90;
    case 225u: goto L_08964FBC;
    case 226u: goto L_08964FD4;
    case 227u: goto L_08964FF4;
    case 228u: goto L_08965004;
    case 229u: goto L_08965014;
    case 230u: goto L_0896501C;
    case 231u: goto L_08965028;
    case 232u: goto L_0896504C;
    case 233u: goto L_0896506C;
    case 234u: goto L_08965088;
    case 235u: goto L_089650A0;
    case 236u: goto L_089650AC;
    case 237u: goto L_089650D0;
    case 238u: goto L_089650D8;
    case 239u: goto L_089650DC;
    case 240u: goto L_089650EC;
    case 241u: goto L_089650F8;
    case 242u: goto L_08965100;
    case 243u: goto L_08965108;
    case 244u: goto L_08965114;
    case 245u: goto L_08965118;
    case 246u: goto L_08965128;
    case 247u: goto L_08965144;
    case 248u: goto L_0896514C;
    case 249u: goto L_08965154;
    case 250u: goto L_08965160;
    case 251u: goto L_0896516C;
    case 252u: goto L_08965174;
    case 253u: goto L_0896517C;
    case 254u: goto L_08965188;
    case 255u: goto L_08965194;
    case 256u: goto L_0896519C;
    case 257u: goto L_089651A4;
    case 258u: goto L_089651AC;
    case 259u: goto L_089651B8;
    case 260u: goto L_089651C0;
    case 261u: goto L_089651C8;
    case 262u: goto L_089651D0;
    case 263u: goto L_089651DC;
    case 264u: goto L_089651E4;
    case 265u: goto L_089651EC;
    case 266u: goto L_089651F8;
    case 267u: goto L_08965204;
    case 268u: goto L_0896520C;
    case 269u: goto L_08965214;
    case 270u: goto L_08965220;
    case 271u: goto L_0896522C;
    case 272u: goto L_08965234;
    case 273u: goto L_0896523C;
    case 274u: goto L_08965244;
    case 275u: goto L_08965250;
    case 276u: goto L_08965258;
    case 277u: goto L_08965260;
    case 278u: goto L_08965268;
    case 279u: goto L_08965274;
    case 280u: goto L_0896527C;
    case 281u: goto L_08965284;
    case 282u: goto L_08965290;
    case 283u: goto L_0896529C;
    case 284u: goto L_089652A4;
    case 285u: goto L_089652AC;
    case 286u: goto L_089652B8;
    case 287u: goto L_089652C4;
    case 288u: goto L_089652CC;
    case 289u: goto L_089652D4;
    case 290u: goto L_089652DC;
    case 291u: goto L_089652E8;
    case 292u: goto L_089652F0;
    case 293u: goto L_089652F8;
    case 294u: goto L_08965300;
    case 295u: goto L_0896530C;
    case 296u: goto L_08965314;
    case 297u: goto L_0896531C;
    case 298u: goto L_08965328;
    case 299u: goto L_08965334;
    case 300u: goto L_0896533C;
    case 301u: goto L_08965344;
    case 302u: goto L_08965350;
    case 303u: goto L_0896535C;
    case 304u: goto L_08965364;
    case 305u: goto L_0896536C;
    case 306u: goto L_08965374;
    case 307u: goto L_08965380;
    case 308u: goto L_08965388;
    case 309u: goto L_08965390;
    case 310u: goto L_08965398;
    case 311u: goto L_089653A4;
    case 312u: goto L_089653AC;
    case 313u: goto L_089653B4;
    case 314u: goto L_089653C0;
    case 315u: goto L_089653D0;
    case 316u: goto L_08965464;
    case 317u: goto L_08965474;
    case 318u: goto L_0896549C;
    case 319u: goto L_089654A8;
    case 320u: goto L_089654C8;
    case 321u: goto L_089654DC;
    case 322u: goto L_08965518;
    case 323u: goto L_08965524;
    case 324u: goto L_08965538;
    case 325u: goto L_08965568;
    case 326u: goto L_0896557C;
    case 327u: goto L_08965594;
    case 328u: goto L_0896559C;
    case 329u: goto L_089655A0;
    case 330u: goto L_089655A8;
    case 331u: goto L_089655B8;
    case 332u: goto L_089655C4;
    case 333u: goto L_089655D0;
    case 334u: goto L_089655D8;
    case 335u: goto L_089655E0;
    case 336u: goto L_089655EC;
    case 337u: goto L_089655F4;
    case 338u: goto L_089655F8;
    case 339u: goto L_0896560C;
    case 340u: goto L_08965614;
    case 341u: goto L_08965628;
    case 342u: goto L_08965634;
    case 343u: goto L_08965648;
    case 344u: goto L_08965650;
    case 345u: goto L_08965658;
    case 346u: goto L_08965660;
    case 347u: goto L_08965668;
    case 348u: goto L_0896566C;
    case 349u: goto L_08965674;
    case 350u: goto L_0896568C;
    case 351u: goto L_08965698;
    case 352u: goto L_089656B0;
    case 353u: goto L_089656E0;
    case 354u: goto L_089656E8;
    case 355u: goto L_08965718;
    case 356u: goto L_08965720;
    case 357u: goto L_08965750;
    case 358u: goto L_08965758;
    case 359u: goto L_08965788;
    case 360u: goto L_08965794;
    case 361u: goto L_089657D0;
    case 362u: goto L_089657E0;
    case 363u: goto L_08965808;
    case 364u: goto L_08965818;
    case 365u: goto L_08965820;
    case 366u: goto L_08965828;
    case 367u: goto L_08965838;
    case 368u: goto L_0896584C;
    case 369u: goto L_08965858;
    case 370u: goto L_08965860;
    case 371u: goto L_08965884;
    case 372u: goto L_08965898;
    case 373u: goto L_089658A4;
    case 374u: goto L_089658C8;
    case 375u: goto L_089658DC;
    case 376u: goto L_089658E8;
    case 377u: goto L_089658FC;
    case 378u: goto L_08965908;
    case 379u: goto L_08965920;
    case 380u: goto L_08965938;
    case 381u: goto L_08965944;
    case 382u: goto L_08965960;
    case 383u: goto L_08965968;
    case 384u: goto L_0896597C;
    case 385u: goto L_08965994;
    case 386u: goto L_0896599C;
    case 387u: goto L_089659AC;
    case 388u: goto L_089659C8;
    case 389u: goto L_089659D0;
    case 390u: goto L_089659D4;
    case 391u: goto L_089659EC;
    case 392u: goto L_089659F4;
    case 393u: goto L_089659F8;
    case 394u: goto L_08965A04;
    case 395u: goto L_08965A0C;
    case 396u: goto L_08965A10;
    case 397u: goto L_08965A20;
    case 398u: goto L_08965A2C;
    case 399u: goto L_08965A34;
    case 400u: goto L_08965A38;
    case 401u: goto L_08965A40;
    case 402u: goto L_08965A48;
    case 403u: goto L_08965A4C;
    case 404u: goto L_08965AA0;
    case 405u: goto L_08965AAC;
    case 406u: goto L_08965AB4;
    case 407u: goto L_08965AB8;
    case 408u: goto L_08965AC8;
    case 409u: goto L_08965AD4;
    case 410u: goto L_08965ADC;
    case 411u: goto L_08965AE0;
    case 412u: goto L_08965AE8;
    case 413u: goto L_08965AF0;
    case 414u: goto L_08965AF4;
    case 415u: goto L_08965B4C;
    case 416u: goto L_08965B58;
    case 417u: goto L_08965B60;
    case 418u: goto L_08965B64;
    case 419u: goto L_08965B74;
    case 420u: goto L_08965B80;
    case 421u: goto L_08965B88;
    case 422u: goto L_08965B8C;
    case 423u: goto L_08965B94;
    case 424u: goto L_08965B9C;
    case 425u: goto L_08965BA0;
    case 426u: goto L_08965BF8;
    case 427u: goto L_08965C04;
    case 428u: goto L_08965C0C;
    case 429u: goto L_08965C10;
    case 430u: goto L_08965C20;
    case 431u: goto L_08965C2C;
    case 432u: goto L_08965C34;
    case 433u: goto L_08965C38;
    case 434u: goto L_08965C40;
    case 435u: goto L_08965C48;
    case 436u: goto L_08965C4C;
    case 437u: goto L_08965CA4;
    case 438u: goto L_08965CB0;
    case 439u: goto L_08965CB8;
    case 440u: goto L_08965CBC;
    case 441u: goto L_08965CCC;
    case 442u: goto L_08965CD8;
    case 443u: goto L_08965CE0;
    case 444u: goto L_08965CE4;
    case 445u: goto L_08965CEC;
    case 446u: goto L_08965CF4;
    case 447u: goto L_08965CF8;
    case 448u: goto L_08965D50;
    case 449u: goto L_08965D5C;
    case 450u: goto L_08965D64;
    case 451u: goto L_08965D68;
    case 452u: goto L_08965D78;
    case 453u: goto L_08965D84;
    case 454u: goto L_08965D8C;
    case 455u: goto L_08965D90;
    case 456u: goto L_08965D98;
    case 457u: goto L_08965DA0;
    case 458u: goto L_08965DA4;
    case 459u: goto L_08965DFC;
    case 460u: goto L_08965E08;
    case 461u: goto L_08965E14;
    case 462u: goto L_08965E40;
    case 463u: goto L_08965E48;
    case 464u: goto L_08965E54;
    case 465u: goto L_08965E64;
    case 466u: goto L_08965E90;
    case 467u: goto L_08965EC0;
    case 468u: goto L_08965F54;
    case 469u: goto L_08965F68;
    case 470u: goto L_08965F88;
    case 471u: goto L_08965FA4;
    case 472u: goto L_08965FC8;
    case 473u: goto L_08965FD4;
    case 474u: goto L_08965FE0;
    case 475u: goto L_08965FE8;
    case 476u: goto L_08966010;
    case 477u: goto L_0896602C;
    case 478u: goto L_08966044;
    case 479u: goto L_08966050;
    case 480u: goto L_08966058;
    case 481u: goto L_0896606C;
    case 482u: goto L_089660FC;
    case 483u: goto L_08966108;
    case 484u: goto L_08966124;
    case 485u: goto L_08966134;
    case 486u: goto L_089661AC;
    case 487u: goto L_089661D0;
    case 488u: goto L_089661DC;
    case 489u: goto L_089661F0;
    case 490u: goto L_08966204;
    case 491u: goto L_0896620C;
    case 492u: goto L_08966224;
    case 493u: goto L_08966238;
    case 494u: goto L_08966248;
    case 495u: goto L_0896624C;
    case 496u: goto L_08966254;
    case 497u: goto L_08966258;
    case 498u: goto L_08966268;
    case 499u: goto L_08966278;
    case 500u: goto L_089662B4;
    case 501u: goto L_089662BC;
    case 502u: goto L_089662D0;
    case 503u: goto L_089662D8;
    case 504u: goto L_089662DC;
    case 505u: goto L_089662E8;
    case 506u: goto L_089662F0;
    case 507u: goto L_089662F8;
    case 508u: goto L_08966300;
    case 509u: goto L_08966304;
    case 510u: goto L_08966310;
    case 511u: goto L_08966318;
    case 512u: goto L_0896631C;
    case 513u: goto L_08966324;
    case 514u: goto L_0896632C;
    case 515u: goto L_0896633C;
    case 516u: goto L_08966344;
    case 517u: goto L_08966354;
    case 518u: goto L_08966358;
    case 519u: goto L_08966360;
    case 520u: goto L_08966370;
    case 521u: goto L_08966378;
    case 522u: goto L_08966380;
    case 523u: goto L_089663A0;
    case 524u: goto L_089663AC;
    case 525u: goto L_089663B8;
    case 526u: goto L_089663BC;
    case 527u: goto L_089663CC;
    case 528u: goto L_089663D4;
    case 529u: goto L_089663FC;
    case 530u: goto L_08966404;
    case 531u: goto L_0896640C;
    case 532u: goto L_0896642C;
    case 533u: goto L_08966460;
    case 534u: goto L_08966464;
    case 535u: goto L_08966488;
    case 536u: goto L_089664C0;
    case 537u: goto L_089664D8;
    case 538u: goto L_08966500;
    case 539u: goto L_08966518;
    case 540u: goto L_08966520;
    case 541u: goto L_08966534;
    case 542u: goto L_08966540;
    case 543u: goto L_08966548;
    case 544u: goto L_08966554;
    case 545u: goto L_08966558;
    case 546u: goto L_08966568;
    case 547u: goto L_0896656C;
    case 548u: goto L_08966574;
    case 549u: goto L_0896657C;
    case 550u: goto L_08966584;
    case 551u: goto L_0896658C;
    case 552u: goto L_089665B8;
    case 553u: goto L_089665E4;
    case 554u: goto L_089665F0;
    case 555u: goto L_089665F4;
    case 556u: goto L_08966604;
    case 557u: goto L_0896660C;
    case 558u: goto L_08966618;
    case 559u: goto L_0896661C;
    case 560u: goto L_0896662C;
    case 561u: goto L_08966634;
    case 562u: goto L_0896663C;
    case 563u: goto L_0896665C;
    case 564u: goto L_08966684;
    case 565u: goto L_0896669C;
    case 566u: goto L_089666A4;
    case 567u: goto L_089666B4;
    case 568u: goto L_089666D4;
    case 569u: goto L_089666E0;
    case 570u: goto L_089666E8;
    case 571u: goto L_089666F0;
    case 572u: goto L_08966720;
    case 573u: goto L_08966728;
    case 574u: goto L_08966730;
    case 575u: goto L_08966738;
    case 576u: goto L_08966740;
    case 577u: goto L_08966748;
    case 578u: goto L_08966764;
    case 579u: goto L_08966770;
    case 580u: goto L_08966784;
    case 581u: goto L_0896678C;
    case 582u: goto L_08966794;
    case 583u: goto L_0896679C;
    case 584u: goto L_089667B0;
    case 585u: goto L_089667BC;
    case 586u: goto L_089667D4;
    case 587u: goto L_089667F0;
    case 588u: goto L_0896680C;
    case 589u: goto L_08966824;
    case 590u: goto L_0896682C;
    case 591u: goto L_08966834;
    case 592u: goto L_08966844;
    case 593u: goto L_0896684C;
    case 594u: goto L_08966850;
    case 595u: goto L_08966858;
    case 596u: goto L_089668D8;
    case 597u: goto L_08966920;
    case 598u: goto L_08966944;
    case 599u: goto L_08966954;
    case 600u: goto L_08966964;
    case 601u: goto L_08966984;
    case 602u: goto L_089669A8;
    case 603u: goto L_089669CC;
    case 604u: goto L_089669DC;
    case 605u: goto L_089669EC;
    case 606u: goto L_08966A0C;
    case 607u: goto L_08966A10;
    case 608u: goto L_08966A28;
    case 609u: goto L_08966A54;
    case 610u: goto L_08966A64;
    case 611u: goto L_08966A74;
    case 612u: goto L_08966A94;
    case 613u: goto L_08966A98;
    case 614u: goto L_08966AB0;
    case 615u: goto L_08966ADC;
    case 616u: goto L_08966AEC;
    case 617u: goto L_08966AFC;
    case 618u: goto L_08966B10;
    case 619u: goto L_08966B18;
    case 620u: goto L_08966B64;
    case 621u: goto L_08966B74;
    case 622u: goto L_08966BA0;
    case 623u: goto L_08966BDC;
    case 624u: goto L_08966BE4;
    case 625u: goto L_08966BF4;
    case 626u: goto L_08966BFC;
    case 627u: goto L_08966C10;
    case 628u: goto L_08966C3C;
    case 629u: goto L_08966C4C;
    case 630u: goto L_08966C58;
    case 631u: goto L_08966C60;
    case 632u: goto L_08966C74;
    case 633u: goto L_08966C88;
    case 634u: goto L_08966C9C;
    case 635u: goto L_08966CB0;
    case 636u: goto L_08966CC4;
    case 637u: goto L_08966CD8;
    case 638u: goto L_08966CEC;
    case 639u: goto L_08966D00;
    case 640u: goto L_08966D14;
    case 641u: goto L_08966D28;
    case 642u: goto L_08966D3C;
    case 643u: goto L_08966D50;
    case 644u: goto L_08966D64;
    case 645u: goto L_08966D78;
    case 646u: goto L_08966D8C;
    case 647u: goto L_08966DA0;
    case 648u: goto L_08966DB4;
    case 649u: goto L_08966DC8;
    case 650u: goto L_08966DDC;
    case 651u: goto L_08966DF0;
    case 652u: goto L_08966E04;
    case 653u: goto L_08966E18;
    case 654u: goto L_08966E2C;
    case 655u: goto L_08966E40;
    case 656u: goto L_08966E54;
    case 657u: goto L_08966E68;
    case 658u: goto L_08966E7C;
    case 659u: goto L_08966E90;
    case 660u: goto L_08966EA4;
    case 661u: goto L_08966EB8;
    case 662u: goto L_08966ECC;
    case 663u: goto L_08966EE0;
    case 664u: goto L_08966EF4;
    case 665u: goto L_08966F08;
    case 666u: goto L_08966F1C;
    case 667u: goto L_08966F30;
    case 668u: goto L_08966F44;
    case 669u: goto L_08966F58;
    case 670u: goto L_08966F6C;
    case 671u: goto L_08966F80;
    case 672u: goto L_08966F94;
    case 673u: goto L_08966FA8;
    case 674u: goto L_08966FBC;
    case 675u: goto L_08966FD0;
    case 676u: goto L_08966FE4;
    case 677u: goto L_08966FF8;
    case 678u: goto L_0896700C;
    case 679u: goto L_08967020;
    case 680u: goto L_08967034;
    case 681u: goto L_08967048;
    case 682u: goto L_0896705C;
    case 683u: goto L_08967070;
    case 684u: goto L_08967084;
    case 685u: goto L_08967098;
    case 686u: goto L_089670AC;
    case 687u: goto L_089670C0;
    case 688u: goto L_089670D4;
    case 689u: goto L_089670E8;
    case 690u: goto L_089670FC;
    case 691u: goto L_08967110;
    case 692u: goto L_08967124;
    case 693u: goto L_0896712C;
    case 694u: goto L_08967138;
    case 695u: goto L_08967164;
    case 696u: goto L_0896717C;
    case 697u: goto L_08967190;
    case 698u: goto L_08967198;
    case 699u: goto L_089671A4;
    case 700u: goto L_089671D4;
    case 701u: goto L_089671DC;
    case 702u: goto L_089671E4;
    case 703u: goto L_089671EC;
    case 704u: goto L_0896722C;
    case 705u: goto L_08967238;
    case 706u: goto L_08967240;
    case 707u: goto L_08967258;
    case 708u: goto L_08967260;
    case 709u: goto L_08967268;
    case 710u: goto L_08967270;
    case 711u: goto L_08967278;
    case 712u: goto L_08967280;
    case 713u: goto L_08967288;
    case 714u: goto L_089672B8;
    case 715u: goto L_089672C8;
    case 716u: goto L_089672E4;
    case 717u: goto L_08967318;
    case 718u: goto L_08967324;
    case 719u: goto L_0896732C;
    case 720u: goto L_08967338;
    case 721u: goto L_08967340;
    case 722u: goto L_0896739C;
    case 723u: goto L_089673A4;
    case 724u: goto L_089673AC;
    case 725u: goto L_089673C8;
    case 726u: goto L_089673F0;
    case 727u: goto L_08967404;
    case 728u: goto L_08967410;
    case 729u: goto L_0896744C;
    case 730u: goto L_08967474;
    case 731u: goto L_089674A8;
    case 732u: goto L_089674D0;
    case 733u: goto L_08967510;
    case 734u: goto L_0896755C;
    case 735u: goto L_08967570;
    case 736u: goto L_08967590;
    case 737u: goto L_089675BC;
    case 738u: goto L_089675DC;
    case 739u: goto L_089675E4;
    case 740u: goto L_089675EC;
    case 741u: goto L_08967600;
    case 742u: goto L_08967618;
    case 743u: goto L_08967630;
    case 744u: goto L_08967638;
    case 745u: goto L_08967640;
    case 746u: goto L_08967648;
    case 747u: goto L_089676C8;
    case 748u: goto L_089676D0;
    case 749u: goto L_08967708;
    case 750u: goto L_08967718;
    case 751u: goto L_08967724;
    case 752u: goto L_0896772C;
    case 753u: goto L_08967740;
    case 754u: goto L_08967770;
    case 755u: goto L_089677C8;
    case 756u: goto L_08967814;
    case 757u: goto L_0896782C;
    case 758u: goto L_0896783C;
    case 759u: goto L_08967844;
    case 760u: goto L_0896784C;
    case 761u: goto L_08967854;
    case 762u: goto L_0896786C;
    case 763u: goto L_0896787C;
    case 764u: goto L_08967884;
    case 765u: goto L_0896788C;
    case 766u: goto L_08967890;
    case 767u: goto L_089678D0;
    case 768u: goto L_089678F0;
    case 769u: goto L_0896792C;
    case 770u: goto L_08967954;
    case 771u: goto L_08967960;
    case 772u: goto L_08967984;
    case 773u: goto L_08967990;
    case 774u: goto L_089679A0;
    case 775u: goto L_089679AC;
    case 776u: goto L_089679B8;
    case 777u: goto L_089679BC;
    case 778u: goto L_08967A3C;
    case 779u: goto L_08967A44;
    case 780u: goto L_08967A4C;
    case 781u: goto L_08967A60;
    case 782u: goto L_08967A78;
    case 783u: goto L_08967A80;
    case 784u: goto L_08967A8C;
    case 785u: goto L_08967AA0;
    case 786u: goto L_08967AC0;
    case 787u: goto L_08967AD8;
    case 788u: goto L_08967AFC;
    case 789u: goto L_08967B08;
    case 790u: goto L_08967B28;
    case 791u: goto L_08967BB0;
    case 792u: goto L_08967C18;
    case 793u: goto L_08967C24;
    case 794u: goto L_08967C34;
    case 795u: goto L_08967C44;
    case 796u: goto L_08967C70;
    case 797u: goto L_08967C90;
    case 798u: goto L_08967C9C;
    case 799u: goto L_08967CAC;
    case 800u: goto L_08967CBC;
    case 801u: goto L_08967D38;
    case 802u: goto L_08967DB0;
    case 803u: goto L_08967DC4;
    case 804u: goto L_08967DDC;
    case 805u: goto L_08967DE4;
    case 806u: goto L_08967DF0;
    case 807u: goto L_08967DFC;
    case 808u: goto L_08967E04;
    case 809u: goto L_08967E10;
    case 810u: goto L_08967E1C;
    case 811u: goto L_08967E24;
    case 812u: goto L_08967E30;
    case 813u: goto L_08967E38;
    case 814u: goto L_08967E40;
    case 815u: goto L_08967E4C;
    case 816u: goto L_08967E58;
    case 817u: goto L_08967E60;
    case 818u: goto L_08967E6C;
    case 819u: goto L_08967E78;
    case 820u: goto L_08967E80;
    case 821u: goto L_08967E8C;
    case 822u: goto L_08967E98;
    case 823u: goto L_08967EA0;
    case 824u: goto L_08967EAC;
    case 825u: goto L_08967EB8;
    case 826u: goto L_08967EC4;
    case 827u: goto L_08967EC8;
    case 828u: goto L_08967ED0;
    case 829u: goto L_08967EDC;
    case 830u: goto L_08967F00;
    case 831u: goto L_08967F08;
    case 832u: goto L_08967F10;
    case 833u: goto L_08967F1C;
    case 834u: goto L_08967FB0;
    case 835u: goto L_08967FB8;
    case 836u: goto L_08967FBC;
    case 837u: goto L_08967FC8;
    case 838u: goto L_08967FD4;
    case 839u: goto L_08967FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08964000:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(194)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08964010;
      }
      goto L_0896400C;
    }
L_0896400C:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    goto L_08964010;
L_08964010:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896401Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x0896401Cu) goto L_0896401C;
    return;
L_0896401C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08964038;
      }
      goto L_08964024;
    }
L_08964024:
    ctx.gpr[5] = (49024u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08964034u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08964034u) goto L_08964034;
    return;
L_08964034:
    ctx.gpr[2] = (0u | 1u);
    goto L_08964038;
L_08964038:
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
L_08964050:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08964070u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 111u, 0x08A4C78Cu>(ctx, &aot_mem) && ctx.pc == 0x08964070u) goto L_08964070;
    return;
L_08964070:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08964080u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08964080u) goto L_08964080;
    return;
L_08964080:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08964170;
      }
      goto L_08964088;
    }
L_08964088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_089640B4;
    }
    goto L_08964094;
L_08964094:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(50));
    ctx.gpr[31] = (0x089640A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x089640A4u) goto L_089640A4;
    return;
L_089640A4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(50)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_089640B4;
L_089640B4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(456)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08964124;
      }
      goto L_089640CC;
    }
L_089640CC:
    ctx.gpr[4] = (0u | 15u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7210)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (2232u << 16u);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[1] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(43), ctx.gpr[1]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(46), ctx.gpr[1]);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(39), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(42), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896412C;
      }
      goto L_0896411C;
    }
L_0896411C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08964150;
      }
      goto L_08964124;
    }
L_08964124:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08964174;
      }
      goto L_0896412C;
    }
L_0896412C:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[31] = (0x08964148u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 560u, 0x08ABFABCu>(ctx, &aot_mem) && ctx.pc == 0x08964148u) goto L_08964148;
    return;
L_08964148:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08964168;
      }
      goto L_08964150;
    }
L_08964150:
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[6]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08964168u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87C4u>(ctx, &aot_mem) && ctx.pc == 0x08964168u) goto L_08964168;
    return;
L_08964168:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08964174;
      }
      goto L_08964170;
    }
L_08964170:
    ctx.gpr[2] = (0u | 0u);
    goto L_08964174;
L_08964174:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896418C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    ctx.gpr[31] = (0x089641A8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 111u, 0x08A4C78Cu>(ctx, &aot_mem) && ctx.pc == 0x089641A8u) goto L_089641A8;
    return;
L_089641A8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089641C0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 717u, 0x089BF724u>(ctx, &aot_mem) && ctx.pc == 0x089641C0u) goto L_089641C0;
    return;
L_089641C0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964290;
      }
      goto L_089641C8;
    }
L_089641C8:
    ctx.gpr[4] = (0u | 23u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7209)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(59));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(51), ctx.gpr[7]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(54), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(55), ctx.gpr[7]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(58), ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[7]);
    rt.memory().aot_store_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    rt.memory().aot_store_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08964270;
      }
      goto L_0896424C;
    }
L_0896424C:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(51), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(54), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(72))))));
    ctx.gpr[31] = (0x08964268u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 588u, 0x08ABFC38u>(ctx, &aot_mem) && ctx.pc == 0x08964268u) goto L_08964268;
    return;
L_08964268:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08964288;
      }
      goto L_08964270;
    }
L_08964270:
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(51), ctx.gpr[6]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(54), ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08964288u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87C4u>(ctx, &aot_mem) && ctx.pc == 0x08964288u) goto L_08964288;
    return;
L_08964288:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08964294;
      }
      goto L_08964290;
    }
L_08964290:
    ctx.gpr[2] = (0u | 0u);
    goto L_08964294;
L_08964294:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089642A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089642C8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 111u, 0x08A4C78Cu>(ctx, &aot_mem) && ctx.pc == 0x089642C8u) goto L_089642C8;
    return;
L_089642C8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089643A0;
      }
      goto L_089642D4;
    }
L_089642D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089642FC;
      }
      goto L_089642E0;
    }
L_089642E0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089642F0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x089642F0u) goto L_089642F0;
    return;
L_089642F0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089642FC;
L_089642FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(205))))));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08964388;
      }
      goto L_08964310;
    }
L_08964310:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
        goto L_0896433C;
    }
    goto L_0896431C;
L_0896431C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(17));
    ctx.gpr[31] = (0x0896432Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x0896432Cu) goto L_0896432C;
    return;
L_0896432C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    goto L_0896433C;
L_0896433C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(206))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08964388;
      }
      goto L_08964348;
    }
L_08964348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5736));
      if (branch_taken) {
          goto L_08964374;
      }
      goto L_08964358;
    }
L_08964358:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(18));
    ctx.gpr[31] = (0x08964368u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08964368u) goto L_08964368;
    return;
L_08964368:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08964374;
L_08964374:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08964384u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(206))))));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 49u, 0x088A82B0u>(ctx, &aot_mem) && ctx.pc == 0x08964384u) goto L_08964384;
    return;
L_08964384:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08964388;
L_08964388:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08964398u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08964398u) goto L_08964398;
    return;
L_08964398:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089643A4;
      }
      goto L_089643A0;
    }
L_089643A0:
    ctx.gpr[2] = (0u | 0u);
    goto L_089643A4;
L_089643A4:
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
L_089643BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089643E0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 111u, 0x08A4C78Cu>(ctx, &aot_mem) && ctx.pc == 0x089643E0u) goto L_089643E0;
    return;
L_089643E0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964464;
      }
      goto L_089643EC;
    }
L_089643EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_08964418;
    }
    goto L_089643F8;
L_089643F8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08964408u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08964408u) goto L_08964408;
    return;
L_08964408:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_08964418;
L_08964418:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(205))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896444C;
      }
      goto L_08964428;
    }
L_08964428:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x08964438u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 665u, 0x088A7EF0u>(ctx, &aot_mem) && ctx.pc == 0x08964438u) goto L_08964438;
    return;
L_08964438:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08964444u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BCB0u>(ctx, &aot_mem) && ctx.pc == 0x08964444u) goto L_08964444;
    return;
L_08964444:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896445C;
      }
      goto L_0896444C;
    }
L_0896444C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896445Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-29484));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BCB0u>(ctx, &aot_mem) && ctx.pc == 0x0896445Cu) goto L_0896445C;
    return;
L_0896445C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08964468;
      }
      goto L_08964464;
    }
L_08964464:
    ctx.gpr[2] = (0u | 0u);
    goto L_08964468;
L_08964468:
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
L_08964480:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089644A4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 111u, 0x08A4C78Cu>(ctx, &aot_mem) && ctx.pc == 0x089644A4u) goto L_089644A4;
    return;
L_089644A4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964524;
      }
      goto L_089644B0;
    }
L_089644B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_089644DC;
    }
    goto L_089644BC;
L_089644BC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089644CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x089644CCu) goto L_089644CC;
    return;
L_089644CC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_089644DC;
L_089644DC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896450C;
      }
      goto L_089644F0;
    }
L_089644F0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08964504u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08964504u) goto L_08964504;
    return;
L_08964504:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896451C;
      }
      goto L_0896450C;
    }
L_0896450C:
    ctx.gpr[5] = (49024u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896451Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x0896451Cu) goto L_0896451C;
    return;
L_0896451C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08964528;
      }
      goto L_08964524;
    }
L_08964524:
    ctx.gpr[2] = (0u | 0u);
    goto L_08964528;
L_08964528:
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
L_08964540:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08964564u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 111u, 0x08A4C78Cu>(ctx, &aot_mem) && ctx.pc == 0x08964564u) goto L_08964564;
    return;
L_08964564:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896462C;
      }
      goto L_08964570;
    }
L_08964570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_0896459C;
    }
    goto L_0896457C;
L_0896457C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0896458Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x0896458Cu) goto L_0896458C;
    return;
L_0896458C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_0896459C;
L_0896459C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964614;
      }
      goto L_089645B0;
    }
L_089645B0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[31] = (0x089645C4u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 116u, 0x088A8618u>(ctx, &aot_mem) && ctx.pc == 0x089645C4u) goto L_089645C4;
    return;
L_089645C4:
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
          goto L_08964604;
      }
      goto L_089645F8;
    }
L_089645F8:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08964604;
L_08964604:
    ctx.gpr[31] = (0x0896460Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x0896460Cu) goto L_0896460C;
    return;
L_0896460C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08964624;
      }
      goto L_08964614;
    }
L_08964614:
    ctx.gpr[5] = (49024u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08964624u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08964624u) goto L_08964624;
    return;
L_08964624:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08964630;
      }
      goto L_0896462C;
    }
L_0896462C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08964630;
L_08964630:
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
L_08964648:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08964658u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 111u, 0x08A4C78Cu>(ctx, &aot_mem) && ctx.pc == 0x08964658u) goto L_08964658;
    return;
L_08964658:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2232u << 16u);
      if (branch_taken) {
          goto L_08964750;
      }
      goto L_08964664;
    }
L_08964664:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (2230u << 16u);
      if (branch_taken) {
          goto L_08964710;
      }
      goto L_08964688;
    }
L_08964688:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089646B4;
      }
      goto L_08964698;
    }
L_08964698:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x089646B0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 227u, 0x088892C8u>(ctx, &aot_mem) && ctx.pc == 0x089646B0u) goto L_089646B0;
    return;
L_089646B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_089646B4;
L_089646B4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(540)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08964708;
      }
      goto L_089646C8;
    }
L_089646C8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(508)));
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x089646E8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 227u, 0x088892C8u>(ctx, &aot_mem) && ctx.pc == 0x089646E8u) goto L_089646E8;
    return;
L_089646E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(540)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089646C8;
      }
      goto L_08964708;
    }
L_08964708:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08964750;
      }
      goto L_08964710;
    }
L_08964710:
    ctx.gpr[6] = (0u | 11u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-7243)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(19), ctx.gpr[6]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(22), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(19), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(22), ctx.gpr[6]));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(23), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(26), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08964750u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87C4u>(ctx, &aot_mem) && ctx.pc == 0x08964750u) goto L_08964750;
    return;
L_08964750:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964760:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08964784u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 111u, 0x08A4C78Cu>(ctx, &aot_mem) && ctx.pc == 0x08964784u) goto L_08964784;
    return;
L_08964784:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08964794u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B6CCu>(ctx, &aot_mem) && ctx.pc == 0x08964794u) goto L_08964794;
    return;
L_08964794:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089647AC;
      }
      goto L_0896479C;
    }
L_0896479C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_089647B4;
      }
      goto L_089647A4;
    }
L_089647A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08964848;
      }
      goto L_089647AC;
    }
L_089647AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0896484C;
      }
      goto L_089647B4;
    }
L_089647B4:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7242)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[5]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(39), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x089647ECu);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(42), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B928u>(ctx, &aot_mem) && ctx.pc == 0x089647ECu) goto L_089647EC;
    return;
L_089647EC:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[5]));
      if (branch_taken) {
          goto L_0896483C;
      }
      goto L_08964820;
    }
L_08964820:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08964834u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 792u, 0x088AB81Cu>(ctx, &aot_mem) && ctx.pc == 0x08964834u) goto L_08964834;
    return;
L_08964834:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08964848;
      }
      goto L_0896483C;
    }
L_0896483C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08964848u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87C4u>(ctx, &aot_mem) && ctx.pc == 0x08964848u) goto L_08964848;
    return;
L_08964848:
    ctx.gpr[2] = (0u | 0u);
    goto L_0896484C;
L_0896484C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964864:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08964880u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 111u, 0x08A4C78Cu>(ctx, &aot_mem) && ctx.pc == 0x08964880u) goto L_08964880;
    return;
L_08964880:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08964890u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B774u>(ctx, &aot_mem) && ctx.pc == 0x08964890u) goto L_08964890;
    return;
L_08964890:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089648A8;
      }
      goto L_08964898;
    }
L_08964898:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_089648B0;
      }
      goto L_089648A0;
    }
L_089648A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896494C;
      }
      goto L_089648A8;
    }
L_089648A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08964950;
      }
      goto L_089648B0;
    }
L_089648B0:
    ctx.gpr[4] = (0u | 15u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7241)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[5]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(39), ctx.gpr[6]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x089648E8u);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(42), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x089648E8u) goto L_089648E8;
    return;
L_089648E8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(43), ctx.gpr[6]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(46), ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[5]));
      if (branch_taken) {
          goto L_08964940;
      }
      goto L_08964924;
    }
L_08964924:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08964938u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 803u, 0x088AB8BCu>(ctx, &aot_mem) && ctx.pc == 0x08964938u) goto L_08964938;
    return;
L_08964938:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896494C;
      }
      goto L_08964940;
    }
L_08964940:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x0896494Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87C4u>(ctx, &aot_mem) && ctx.pc == 0x0896494Cu) goto L_0896494C;
    return;
L_0896494C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08964950;
L_08964950:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964964:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08964988u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 111u, 0x08A4C78Cu>(ctx, &aot_mem) && ctx.pc == 0x08964988u) goto L_08964988;
    return;
L_08964988:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08964998u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B6CCu>(ctx, &aot_mem) && ctx.pc == 0x08964998u) goto L_08964998;
    return;
L_08964998:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089649B0;
      }
      goto L_089649A0;
    }
L_089649A0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_089649B8;
      }
      goto L_089649A8;
    }
L_089649A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08964A4C;
      }
      goto L_089649B0;
    }
L_089649B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08964A50;
      }
      goto L_089649B8;
    }
L_089649B8:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7239)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[5]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(39), ctx.gpr[6]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x089649F0u);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(42), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B928u>(ctx, &aot_mem) && ctx.pc == 0x089649F0u) goto L_089649F0;
    return;
L_089649F0:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[5]));
      if (branch_taken) {
          goto L_08964A40;
      }
      goto L_08964A24;
    }
L_08964A24:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08964A38u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 841u, 0x088ABAF8u>(ctx, &aot_mem) && ctx.pc == 0x08964A38u) goto L_08964A38;
    return;
L_08964A38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08964A4C;
      }
      goto L_08964A40;
    }
L_08964A40:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08964A4Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87C4u>(ctx, &aot_mem) && ctx.pc == 0x08964A4Cu) goto L_08964A4C;
    return;
L_08964A4C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08964A50;
L_08964A50:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964A68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08964A84u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 111u, 0x08A4C78Cu>(ctx, &aot_mem) && ctx.pc == 0x08964A84u) goto L_08964A84;
    return;
L_08964A84:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08964A94u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B774u>(ctx, &aot_mem) && ctx.pc == 0x08964A94u) goto L_08964A94;
    return;
L_08964A94:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08964ABC;
      }
      goto L_08964A9C;
    }
L_08964A9C:
    ctx.gpr[31] = (0x08964AA4u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B774u>(ctx, &aot_mem) && ctx.pc == 0x08964AA4u) goto L_08964AA4;
    return;
L_08964AA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964ABC;
      }
      goto L_08964AAC;
    }
L_08964AAC:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (2232u << 16u);
      if (branch_taken) {
          goto L_08964AC4;
      }
      goto L_08964AB4;
    }
L_08964AB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08964B34;
      }
      goto L_08964ABC;
    }
L_08964ABC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08964B38;
      }
      goto L_08964AC4;
    }
L_08964AC4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964B34;
      }
      goto L_08964AE8;
    }
L_08964AE8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08964AF4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08964AF4u) goto L_08964AF4;
    return;
L_08964AF4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x08964B08u);
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08964B08u) goto L_08964B08;
    return;
L_08964B08:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08964B20;
      }
      goto L_08964B18;
    }
L_08964B18:
    ctx.gpr[5] = (ctx.gpr[16] & 255u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08964B20;
L_08964B20:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964B34;
      }
      goto L_08964B2C;
    }
L_08964B2C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(129), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08964B34;
L_08964B34:
    ctx.gpr[2] = (0u | 0u);
    goto L_08964B38;
L_08964B38:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964B4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08964B5Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 111u, 0x08A4C78Cu>(ctx, &aot_mem) && ctx.pc == 0x08964B5Cu) goto L_08964B5C;
    return;
L_08964B5C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          goto L_08964BEC;
      }
      goto L_08964B68;
    }
L_08964B68:
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-7240)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[5]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(39), ctx.gpr[5]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(42), ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[5]));
    ctx.gpr[7] = (ctx.gpr[7] ^ ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[5]));
      if (branch_taken) {
          goto L_08964BDC;
      }
      goto L_08964BC0;
    }
L_08964BC0:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[31] = (0x08964BD4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 812u, 0x088AB948u>(ctx, &aot_mem) && ctx.pc == 0x08964BD4u) goto L_08964BD4;
    return;
L_08964BD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08964BEC;
      }
      goto L_08964BDC;
    }
L_08964BDC:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08964BECu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87C4u>(ctx, &aot_mem) && ctx.pc == 0x08964BECu) goto L_08964BEC;
    return;
L_08964BEC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964BFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08964C20u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 111u, 0x08A4C78Cu>(ctx, &aot_mem) && ctx.pc == 0x08964C20u) goto L_08964C20;
    return;
L_08964C20:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964C40;
      }
      goto L_08964C2C;
    }
L_08964C2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964C54;
      }
      goto L_08964C38;
    }
L_08964C38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(194)));
      if (branch_taken) {
          goto L_08964C78;
      }
      goto L_08964C40;
    }
L_08964C40:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08964C4Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08964C4Cu) goto L_08964C4C;
    return;
L_08964C4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08964D04;
      }
      goto L_08964C54;
    }
L_08964C54:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08964C64u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08964C64u) goto L_08964C64;
    return;
L_08964C64:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(194)));
    goto L_08964C78;
L_08964C78:
    ctx.gpr[5] = (ctx.gpr[5] ^ 5u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08964CF4;
      }
      goto L_08964C8C;
    }
L_08964C8C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(204))))));
        goto L_08964CB8;
    }
    goto L_08964C94;
L_08964C94:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(17));
    ctx.gpr[31] = (0x08964CA4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08964CA4u) goto L_08964CA4;
    return;
L_08964CA4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(204))))));
    goto L_08964CB8;
L_08964CB8:
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964CE0;
      }
      goto L_08964CCC;
    }
L_08964CCC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08964CD8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08964CD8u) goto L_08964CD8;
    return;
L_08964CD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08964CEC;
      }
      goto L_08964CE0;
    }
L_08964CE0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08964CECu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08964CECu) goto L_08964CEC;
    return;
L_08964CEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08964D04;
      }
      goto L_08964CF4;
    }
L_08964CF4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08964D00u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08964D00u) goto L_08964D00;
    return;
L_08964D00:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08964D04;
L_08964D04:
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
L_08964D1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08964D40u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 111u, 0x08A4C78Cu>(ctx, &aot_mem) && ctx.pc == 0x08964D40u) goto L_08964D40;
    return;
L_08964D40:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964D60;
      }
      goto L_08964D4C;
    }
L_08964D4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964D78;
      }
      goto L_08964D58;
    }
L_08964D58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08964D98;
      }
      goto L_08964D60;
    }
L_08964D60:
    ctx.gpr[5] = (49024u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08964D70u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08964D70u) goto L_08964D70;
    return;
L_08964D70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08964DA8;
      }
      goto L_08964D78;
    }
L_08964D78:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08964D88u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08964D88u) goto L_08964D88;
    return;
L_08964D88:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_08964D98;
L_08964D98:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08964DA4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(460)));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08964DA4u) goto L_08964DA4;
    return;
L_08964DA4:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08964DA8;
L_08964DA8:
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
L_08964DC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08964DE4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 111u, 0x08A4C78Cu>(ctx, &aot_mem) && ctx.pc == 0x08964DE4u) goto L_08964DE4;
    return;
L_08964DE4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08964E08;
      }
      goto L_08964DF0;
    }
L_08964DF0:
    ctx.gpr[5] = (49024u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08964E00u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08964E00u) goto L_08964E00;
    return;
L_08964E00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08964E48;
      }
      goto L_08964E08;
    }
L_08964E08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_08964E34;
    }
    goto L_08964E14;
L_08964E14:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08964E24u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08964E24u) goto L_08964E24;
    return;
L_08964E24:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_08964E34;
L_08964E34:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(464))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08964E48u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08964E48u) goto L_08964E48;
    return;
L_08964E48:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08964E64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08964E74u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 111u, 0x08A4C78Cu>(ctx, &aot_mem) && ctx.pc == 0x08964E74u) goto L_08964E74;
    return;
L_08964E74:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964E94;
      }
      goto L_08964E80;
    }
L_08964E80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964E94;
      }
      goto L_08964E8C;
    }
L_08964E8C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(670), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08964E94;
L_08964E94:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964EA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08964EC0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 111u, 0x08A4C78Cu>(ctx, &aot_mem) && ctx.pc == 0x08964EC0u) goto L_08964EC0;
    return;
L_08964EC0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08964ED0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08964ED0u) goto L_08964ED0;
    return;
L_08964ED0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08964F08;
      }
      goto L_08964ED8;
    }
L_08964ED8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964F08;
      }
      goto L_08964EE4;
    }
L_08964EE4:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08964F08;
L_08964F08:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964F20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08964F3Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 111u, 0x08A4C78Cu>(ctx, &aot_mem) && ctx.pc == 0x08964F3Cu) goto L_08964F3C;
    return;
L_08964F3C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08964F4Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08964F4Cu) goto L_08964F4C;
    return;
L_08964F4C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964FBC;
      }
      goto L_08964F54;
    }
L_08964F54:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964FBC;
      }
      goto L_08964F60;
    }
L_08964F60:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16051u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08964FBC;
      }
      goto L_08964F90;
    }
L_08964F90:
    ctx.gpr[4] = (16236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08964FBC;
L_08964FBC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964FD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08964FF4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 111u, 0x08A4C78Cu>(ctx, &aot_mem) && ctx.pc == 0x08964FF4u) goto L_08964FF4;
    return;
L_08964FF4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08965004u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08965004u) goto L_08965004;
    return;
L_08965004:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08965014u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08965014u) goto L_08965014;
    return;
L_08965014:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0896506C;
      }
      goto L_0896501C;
    }
L_0896501C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896506C;
      }
      goto L_08965028;
    }
L_08965028:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896506C;
      }
      goto L_0896504C;
    }
L_0896504C:
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0896506C;
L_0896506C:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965088:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089650A0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 111u, 0x08A4C78Cu>(ctx, &aot_mem) && ctx.pc == 0x089650A0u) goto L_089650A0;
    return;
L_089650A0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2232u << 16u);
      if (branch_taken) {
          goto L_08965108;
      }
      goto L_089650AC;
    }
L_089650AC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5736));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089650D8;
      }
      goto L_089650D0;
    }
L_089650D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_089650DC;
      }
      goto L_089650D8;
    }
L_089650D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    goto L_089650DC;
L_089650DC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_089650F8;
      }
      goto L_089650EC;
    }
L_089650EC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_089650F8;
L_089650F8:
    ctx.gpr[31] = (0x08965100u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08965100u) goto L_08965100;
    return;
L_08965100:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08965118;
      }
      goto L_08965108;
    }
L_08965108:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08965114u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08965114u) goto L_08965114;
    return;
L_08965114:
    ctx.gpr[2] = (0u | 1u);
    goto L_08965118;
L_08965118:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965128:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (16256u << 16u);
      if (branch_taken) {
          goto L_08965154;
      }
      goto L_08965144;
    }
L_08965144:
    ctx.gpr[31] = (0x0896514Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x0896514Cu) goto L_0896514C;
    return;
L_0896514C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[5] = (16256u << 16u);
    goto L_08965154;
L_08965154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08965160u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08965160u) goto L_08965160;
    return;
L_08965160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2226u << 16u);
      if (branch_taken) {
          goto L_0896517C;
      }
      goto L_0896516C;
    }
L_0896516C:
    ctx.gpr[31] = (0x08965174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x08965174u) goto L_08965174;
    return;
L_08965174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[5] = (2226u << 16u);
    goto L_0896517C;
L_0896517C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08965188u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-29472));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BCB0u>(ctx, &aot_mem) && ctx.pc == 0x08965188u) goto L_08965188;
    return;
L_08965188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_089651A4;
    }
    goto L_08965194;
L_08965194:
    ctx.gpr[31] = (0x0896519Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x0896519Cu) goto L_0896519C;
    return;
L_0896519C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_089651A4;
L_089651A4:
    ctx.gpr[31] = (0x089651ACu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B580u>(ctx, &aot_mem) && ctx.pc == 0x089651ACu) goto L_089651AC;
    return;
L_089651AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_089651C8;
    }
    goto L_089651B8;
L_089651B8:
    ctx.gpr[31] = (0x089651C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x089651C0u) goto L_089651C0;
    return;
L_089651C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_089651C8;
L_089651C8:
    ctx.gpr[31] = (0x089651D0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 25u, 0x0890C210u>(ctx, &aot_mem) && ctx.pc == 0x089651D0u) goto L_089651D0;
    return;
L_089651D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (16384u << 16u);
      if (branch_taken) {
          goto L_089651EC;
      }
      goto L_089651DC;
    }
L_089651DC:
    ctx.gpr[31] = (0x089651E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x089651E4u) goto L_089651E4;
    return;
L_089651E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[5] = (16384u << 16u);
    goto L_089651EC;
L_089651EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089651F8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x089651F8u) goto L_089651F8;
    return;
L_089651F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2226u << 16u);
      if (branch_taken) {
          goto L_08965214;
      }
      goto L_08965204;
    }
L_08965204:
    ctx.gpr[31] = (0x0896520Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x0896520Cu) goto L_0896520C;
    return;
L_0896520C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[5] = (2226u << 16u);
    goto L_08965214;
L_08965214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08965220u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-29452));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BCB0u>(ctx, &aot_mem) && ctx.pc == 0x08965220u) goto L_08965220;
    return;
L_08965220:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_0896523C;
    }
    goto L_0896522C;
L_0896522C:
    ctx.gpr[31] = (0x08965234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x08965234u) goto L_08965234;
    return;
L_08965234:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_0896523C;
L_0896523C:
    ctx.gpr[31] = (0x08965244u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B580u>(ctx, &aot_mem) && ctx.pc == 0x08965244u) goto L_08965244;
    return;
L_08965244:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08965260;
    }
    goto L_08965250;
L_08965250:
    ctx.gpr[31] = (0x08965258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x08965258u) goto L_08965258;
    return;
L_08965258:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08965260;
L_08965260:
    ctx.gpr[31] = (0x08965268u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 25u, 0x0890C210u>(ctx, &aot_mem) && ctx.pc == 0x08965268u) goto L_08965268;
    return;
L_08965268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (16608u << 16u);
      if (branch_taken) {
          goto L_08965284;
      }
      goto L_08965274;
    }
L_08965274:
    ctx.gpr[31] = (0x0896527Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x0896527Cu) goto L_0896527C;
    return;
L_0896527C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[5] = (16608u << 16u);
    goto L_08965284;
L_08965284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08965290u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08965290u) goto L_08965290;
    return;
L_08965290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2226u << 16u);
      if (branch_taken) {
          goto L_089652AC;
      }
      goto L_0896529C;
    }
L_0896529C:
    ctx.gpr[31] = (0x089652A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x089652A4u) goto L_089652A4;
    return;
L_089652A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[5] = (2226u << 16u);
    goto L_089652AC;
L_089652AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089652B8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-29436));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BCB0u>(ctx, &aot_mem) && ctx.pc == 0x089652B8u) goto L_089652B8;
    return;
L_089652B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_089652D4;
    }
    goto L_089652C4;
L_089652C4:
    ctx.gpr[31] = (0x089652CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x089652CCu) goto L_089652CC;
    return;
L_089652CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_089652D4;
L_089652D4:
    ctx.gpr[31] = (0x089652DCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B580u>(ctx, &aot_mem) && ctx.pc == 0x089652DCu) goto L_089652DC;
    return;
L_089652DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_089652F8;
    }
    goto L_089652E8;
L_089652E8:
    ctx.gpr[31] = (0x089652F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x089652F0u) goto L_089652F0;
    return;
L_089652F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_089652F8;
L_089652F8:
    ctx.gpr[31] = (0x08965300u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 25u, 0x0890C210u>(ctx, &aot_mem) && ctx.pc == 0x08965300u) goto L_08965300;
    return;
L_08965300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (16640u << 16u);
      if (branch_taken) {
          goto L_0896531C;
      }
      goto L_0896530C;
    }
L_0896530C:
    ctx.gpr[31] = (0x08965314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x08965314u) goto L_08965314;
    return;
L_08965314:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[5] = (16640u << 16u);
    goto L_0896531C;
L_0896531C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08965328u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08965328u) goto L_08965328;
    return;
L_08965328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2226u << 16u);
      if (branch_taken) {
          goto L_08965344;
      }
      goto L_08965334;
    }
L_08965334:
    ctx.gpr[31] = (0x0896533Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x0896533Cu) goto L_0896533C;
    return;
L_0896533C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[5] = (2226u << 16u);
    goto L_08965344;
L_08965344:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08965350u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-29412));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BCB0u>(ctx, &aot_mem) && ctx.pc == 0x08965350u) goto L_08965350;
    return;
L_08965350:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_0896536C;
    }
    goto L_0896535C;
L_0896535C:
    ctx.gpr[31] = (0x08965364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x08965364u) goto L_08965364;
    return;
L_08965364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_0896536C;
L_0896536C:
    ctx.gpr[31] = (0x08965374u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B580u>(ctx, &aot_mem) && ctx.pc == 0x08965374u) goto L_08965374;
    return;
L_08965374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08965390;
    }
    goto L_08965380;
L_08965380:
    ctx.gpr[31] = (0x08965388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x08965388u) goto L_08965388;
    return;
L_08965388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08965390;
L_08965390:
    ctx.gpr[31] = (0x08965398u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 25u, 0x0890C210u>(ctx, &aot_mem) && ctx.pc == 0x08965398u) goto L_08965398;
    return;
L_08965398:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2228u << 16u);
      if (branch_taken) {
          goto L_089653B4;
      }
      goto L_089653A4;
    }
L_089653A4:
    ctx.gpr[31] = (0x089653ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x089653ACu) goto L_089653AC;
    return;
L_089653AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[5] = (2228u << 16u);
    goto L_089653B4;
L_089653B4:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089653C0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-29332));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 787u, 0x0883BFF4u>(ctx, &aot_mem) && ctx.pc == 0x089653C0u) goto L_089653C0;
    return;
L_089653C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089653D0:
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29364)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2228u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29368)));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2228u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29340)));
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
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-29360), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2228u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29352), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29356), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29348), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-29336), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965464:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08965474u);
    // nop
    goto L_08965538;
L_08965474:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6780), 0u);
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6772), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6768)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08965518;
      }
      goto L_0896549C;
    }
L_0896549C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6760)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965518;
      }
      goto L_089654A8;
    }
L_089654A8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6756), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6764)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
        goto L_089654DC;
    }
    goto L_089654C8;
L_089654C8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6752), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    goto L_089654DC;
L_089654DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6748), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (50085u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (50022u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[6] = (50223u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (50195u << 16u);
    ctx.gpr[31] = (0x08965518u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 702u, 0x08977754u>(ctx, &aot_mem) && ctx.pc == 0x08965518u) goto L_08965518;
    return;
L_08965518:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965524:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6780)));
    ctx.gpr[2] = (ctx.gpr[4] ^ 3u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965538:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15308)));
    ctx.gpr[11] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-6768), 0u);
    ctx.gpr[10] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-6764), 0u);
    ctx.gpr[9] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-6760), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_0896560C;
      }
      goto L_08965568;
    }
L_08965568:
    ctx.gpr[6] = (ctx.gpr[7] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31116)));
    goto L_0896557C;
L_0896557C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
        goto L_0896559C;
    }
    goto L_08965594;
L_08965594:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089655A0;
      }
      goto L_0896559C;
    }
L_0896559C:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    goto L_089655A0;
L_089655A0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089655F8;
      }
      goto L_089655A8;
    }
L_089655A8:
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(262)));
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089655D0;
      }
      goto L_089655B8;
    }
L_089655B8:
    ctx.gpr[13] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[13];
    // nop
      if (branch_taken) {
          goto L_089655D0;
      }
      goto L_089655C4;
    }
L_089655C4:
    ctx.gpr[13] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(266)));
    { const bool branch_taken = ctx.gpr[12] != ctx.gpr[13];
    // nop
      if (branch_taken) {
          goto L_089655F8;
      }
      goto L_089655D0;
    }
L_089655D0:
    { const bool branch_taken = ctx.gpr[12] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089655E0;
      }
      goto L_089655D8;
    }
L_089655D8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-6768), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089655F8;
      }
      goto L_089655E0;
    }
L_089655E0:
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(266)));
    { const bool branch_taken = ctx.gpr[12] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089655F4;
      }
      goto L_089655EC;
    }
L_089655EC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-6764), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089655F8;
      }
      goto L_089655F4;
    }
L_089655F4:
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-6760), ctx.gpr[5]);
    goto L_089655F8;
L_089655F8:
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-96));
      if (branch_taken) {
          goto L_0896557C;
      }
      goto L_0896560C;
    }
L_0896560C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965614:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(266)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08965634;
      }
      goto L_08965628;
    }
L_08965628:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(262)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08965650;
      }
      goto L_08965634;
    }
L_08965634:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6780)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08965660;
      }
      goto L_08965648;
    }
L_08965648:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_08965658;
      }
      goto L_08965650;
    }
L_08965650:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0896566C;
      }
      goto L_08965658;
    }
L_08965658:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08965668;
      }
      goto L_08965660;
    }
L_08965660:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0896566C;
      }
      goto L_08965668;
    }
L_08965668:
    ctx.gpr[2] = (0u | 0u);
    goto L_0896566C;
L_0896566C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965674:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6780), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08965788;
      }
      goto L_0896568C;
    }
L_0896568C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965788;
      }
      goto L_08965698;
    }
L_08965698:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-29376)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089656B0:
    ctx.gpr[6] = (50085u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (50022u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[6] = (50223u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (50195u << 16u);
    ctx.gpr[31] = (0x089656E0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 702u, 0x08977754u>(ctx, &aot_mem) && ctx.pc == 0x089656E0u) goto L_089656E0;
    return;
L_089656E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965788;
      }
      goto L_089656E8;
    }
L_089656E8:
    ctx.gpr[6] = (50085u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (50022u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[6] = (50223u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (50195u << 16u);
    ctx.gpr[31] = (0x08965718u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 702u, 0x08977754u>(ctx, &aot_mem) && ctx.pc == 0x08965718u) goto L_08965718;
    return;
L_08965718:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965788;
      }
      goto L_08965720;
    }
L_08965720:
    ctx.gpr[6] = (50085u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (50022u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[6] = (50223u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (50195u << 16u);
    ctx.gpr[31] = (0x08965750u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 702u, 0x08977754u>(ctx, &aot_mem) && ctx.pc == 0x08965750u) goto L_08965750;
    return;
L_08965750:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965788;
      }
      goto L_08965758;
    }
L_08965758:
    ctx.gpr[6] = (50085u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (50022u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[6] = (50223u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (50195u << 16u);
    ctx.gpr[31] = (0x08965788u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 702u, 0x08977754u>(ctx, &aot_mem) && ctx.pc == 0x08965788u) goto L_08965788;
    return;
L_08965788:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965794:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-384));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6768)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965820;
      }
      goto L_089657D0;
    }
L_089657D0:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6760)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965818;
      }
      goto L_089657E0;
    }
L_089657E0:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6780)));
    ctx.gpr[19] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-6776), ctx.gpr[5]);
    ctx.gpr[20] = (0u | 3u);
    ctx.gpr[21] = (0u | 4u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[22] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[23] = (2230u << 16u);
      if (branch_taken) {
          goto L_08965828;
      }
      goto L_08965808;
    }
L_08965808:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6784), 0u);
    ctx.gpr[4] = (16840u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08965968;
      }
      goto L_08965818;
    }
L_08965818:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965E90;
      }
      goto L_08965820;
    }
L_08965820:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965E90;
      }
      goto L_08965828;
    }
L_08965828:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6780)));
    ctx.gpr[7] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_0896584C;
      }
      goto L_08965838;
    }
L_08965838:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20001));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6784), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08965968;
      }
      goto L_0896584C;
    }
L_0896584C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6784)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08965860;
      }
      goto L_08965858;
    }
L_08965858:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6784), ctx.gpr[6]);
    goto L_08965860;
L_08965860:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6784)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(20000) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089658C8;
      }
      goto L_08965884;
    }
L_08965884:
    ctx.gpr[5] = (0u | 2u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-6780), ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_089658A4;
      }
      goto L_08965898;
    }
L_08965898:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_089658A4;
L_089658A4:
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18076u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[13] / ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[20];
      if (branch_taken) {
          goto L_08965968;
      }
      goto L_089658C8;
    }
L_089658C8:
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(14464));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089658E8;
      }
      goto L_089658DC;
    }
L_089658DC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-6780), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08965968;
      }
      goto L_089658E8;
    }
L_089658E8:
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24464));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965908;
      }
      goto L_089658FC;
    }
L_089658FC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-6780), ctx.gpr[21]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08965968;
      }
      goto L_08965908;
    }
L_08965908:
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-21072));
    ctx.gpr[7] = (16840u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_08965960;
      }
      goto L_08965920;
    }
L_08965920:
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (0u | 5u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-6780), ctx.gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08965944;
      }
      goto L_08965938;
    }
L_08965938:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08965944;
L_08965944:
    ctx.gpr[4] = (18076u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965968;
      }
      goto L_08965960;
    }
L_08965960:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-6780), ctx.gpr[4]);
    goto L_08965968;
L_08965968:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-6772)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[12])) && ctx.fpr[20] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089659F8;
      }
      goto L_0896597C;
    }
L_0896597C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6768)));
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08965994u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6768)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x08965994u) goto L_08965994;
    return;
L_08965994:
    ctx.gpr[31] = (0x0896599Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6768)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F898u>(ctx, &aot_mem) && ctx.pc == 0x0896599Cu) goto L_0896599C;
    return;
L_0896599C:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6764)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089659D4;
      }
      goto L_089659AC;
    }
L_089659AC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6752)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6764)));
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089659C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6764)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x089659C8u) goto L_089659C8;
    return;
L_089659C8:
    ctx.gpr[31] = (0x089659D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6764)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F898u>(ctx, &aot_mem) && ctx.pc == 0x089659D0u) goto L_089659D0;
    return;
L_089659D0:
    ctx.gpr[4] = (2230u << 16u);
    goto L_089659D4;
L_089659D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6748)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6760)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089659ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6760)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x089659ECu) goto L_089659EC;
    return;
L_089659EC:
    ctx.gpr[31] = (0x089659F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6760)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F898u>(ctx, &aot_mem) && ctx.pc == 0x089659F4u) goto L_089659F4;
    return;
L_089659F4:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-6772), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089659F8;
L_089659F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
        goto L_08965A10;
    }
    goto L_08965A04;
L_08965A04:
    ctx.gpr[31] = (0x08965A0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x08965A0Cu) goto L_08965A0C;
    return;
L_08965A0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    goto L_08965A10;
L_08965A10:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965AA0;
      }
      goto L_08965A20;
    }
L_08965A20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
        goto L_08965A38;
    }
    goto L_08965A2C;
L_08965A2C:
    ctx.gpr[31] = (0x08965A34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x08965A34u) goto L_08965A34;
    return;
L_08965A34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    goto L_08965A38;
L_08965A38:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
        goto L_08965A4C;
    }
    goto L_08965A40;
L_08965A40:
    ctx.gpr[31] = (0x08965A48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x08965A48u) goto L_08965A48;
    return;
L_08965A48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    goto L_08965A4C;
L_08965A4C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1025), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(944));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08965AA0u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 520u, 0x08A066A0u>(ctx, &aot_mem) && ctx.pc == 0x08965AA0u) goto L_08965AA0;
    return;
L_08965AA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
        goto L_08965AB8;
    }
    goto L_08965AAC;
L_08965AAC:
    ctx.gpr[31] = (0x08965AB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x08965AB4u) goto L_08965AB4;
    return;
L_08965AB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    goto L_08965AB8;
L_08965AB8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(400)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965B4C;
      }
      goto L_08965AC8;
    }
L_08965AC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
        goto L_08965AE0;
    }
    goto L_08965AD4;
L_08965AD4:
    ctx.gpr[31] = (0x08965ADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x08965ADCu) goto L_08965ADC;
    return;
L_08965ADC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    goto L_08965AE0;
L_08965AE0:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
        goto L_08965AF4;
    }
    goto L_08965AE8;
L_08965AE8:
    ctx.gpr[31] = (0x08965AF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x08965AF0u) goto L_08965AF0;
    return;
L_08965AF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    goto L_08965AF4;
L_08965AF4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(208));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1233), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1152));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x08965B4Cu);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 520u, 0x08A066A0u>(ctx, &aot_mem) && ctx.pc == 0x08965B4Cu) goto L_08965B4C;
    return;
L_08965B4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
        goto L_08965B64;
    }
    goto L_08965B58;
L_08965B58:
    ctx.gpr[31] = (0x08965B60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x08965B60u) goto L_08965B60;
    return;
L_08965B60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    goto L_08965B64;
L_08965B64:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(608)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965BF8;
      }
      goto L_08965B74;
    }
L_08965B74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
        goto L_08965B8C;
    }
    goto L_08965B80;
L_08965B80:
    ctx.gpr[31] = (0x08965B88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x08965B88u) goto L_08965B88;
    return;
L_08965B88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    goto L_08965B8C;
L_08965B8C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
        goto L_08965BA0;
    }
    goto L_08965B94;
L_08965B94:
    ctx.gpr[31] = (0x08965B9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x08965B9Cu) goto L_08965B9C;
    return;
L_08965B9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    goto L_08965BA0;
L_08965BA0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(416));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1441), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1360));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x08965BF8u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 520u, 0x08A066A0u>(ctx, &aot_mem) && ctx.pc == 0x08965BF8u) goto L_08965BF8;
    return;
L_08965BF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
        goto L_08965C10;
    }
    goto L_08965C04;
L_08965C04:
    ctx.gpr[31] = (0x08965C0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x08965C0Cu) goto L_08965C0C;
    return;
L_08965C0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    goto L_08965C10;
L_08965C10:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(816)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965CA4;
      }
      goto L_08965C20;
    }
L_08965C20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
        goto L_08965C38;
    }
    goto L_08965C2C;
L_08965C2C:
    ctx.gpr[31] = (0x08965C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x08965C34u) goto L_08965C34;
    return;
L_08965C34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    goto L_08965C38;
L_08965C38:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
        goto L_08965C4C;
    }
    goto L_08965C40;
L_08965C40:
    ctx.gpr[31] = (0x08965C48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x08965C48u) goto L_08965C48;
    return;
L_08965C48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    goto L_08965C4C;
L_08965C4C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(624));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1649), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1568));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (0x08965CA4u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 520u, 0x08A066A0u>(ctx, &aot_mem) && ctx.pc == 0x08965CA4u) goto L_08965CA4;
    return;
L_08965CA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
        goto L_08965CBC;
    }
    goto L_08965CB0;
L_08965CB0:
    ctx.gpr[31] = (0x08965CB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x08965CB8u) goto L_08965CB8;
    return;
L_08965CB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    goto L_08965CBC;
L_08965CBC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1024)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965D50;
      }
      goto L_08965CCC;
    }
L_08965CCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
        goto L_08965CE4;
    }
    goto L_08965CD8;
L_08965CD8:
    ctx.gpr[31] = (0x08965CE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x08965CE0u) goto L_08965CE0;
    return;
L_08965CE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    goto L_08965CE4;
L_08965CE4:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
        goto L_08965CF8;
    }
    goto L_08965CEC;
L_08965CEC:
    ctx.gpr[31] = (0x08965CF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x08965CF4u) goto L_08965CF4;
    return;
L_08965CF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    goto L_08965CF8;
L_08965CF8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1857), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1776));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (0x08965D50u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 520u, 0x08A066A0u>(ctx, &aot_mem) && ctx.pc == 0x08965D50u) goto L_08965D50;
    return;
L_08965D50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
        goto L_08965D68;
    }
    goto L_08965D5C;
L_08965D5C:
    ctx.gpr[31] = (0x08965D64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x08965D64u) goto L_08965D64;
    return;
L_08965D64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    goto L_08965D68;
L_08965D68:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1232)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965DFC;
      }
      goto L_08965D78;
    }
L_08965D78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
        goto L_08965D90;
    }
    goto L_08965D84;
L_08965D84:
    ctx.gpr[31] = (0x08965D8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x08965D8Cu) goto L_08965D8C;
    return;
L_08965D8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    goto L_08965D90;
L_08965D90:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
        goto L_08965DA4;
    }
    goto L_08965D98;
L_08965D98:
    ctx.gpr[31] = (0x08965DA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x08965DA0u) goto L_08965DA0;
    return;
L_08965DA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    goto L_08965DA4;
L_08965DA4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1040));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2065), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20436)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1984));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[31] = (0x08965DFCu);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 520u, 0x08A066A0u>(ctx, &aot_mem) && ctx.pc == 0x08965DFCu) goto L_08965DFC;
    return;
L_08965DFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6780)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08965E48;
      }
      goto L_08965E08;
    }
L_08965E08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-6776)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    ctx.gpr[6] = (50085u << 16u);
      if (branch_taken) {
          goto L_08965E48;
      }
      goto L_08965E14;
    }
L_08965E14:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (50022u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[6] = (50223u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (50195u << 16u);
    ctx.gpr[31] = (0x08965E40u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 702u, 0x08977754u>(ctx, &aot_mem) && ctx.pc == 0x08965E40u) goto L_08965E40;
    return;
L_08965E40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965E90;
      }
      goto L_08965E48;
    }
L_08965E48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6780)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08965E90;
      }
      goto L_08965E54;
    }
L_08965E54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-6776)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[6] = (50085u << 16u);
      if (branch_taken) {
          goto L_08965E90;
      }
      goto L_08965E64;
    }
L_08965E64:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (50022u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[6] = (50223u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (50195u << 16u);
    ctx.gpr[31] = (0x08965E90u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 702u, 0x08977754u>(ctx, &aot_mem) && ctx.pc == 0x08965E90u) goto L_08965E90;
    return;
L_08965E90:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965EC0:
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29092)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2228u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29096)));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2228u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29068)));
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
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-29088), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2228u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29080), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29084), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29076), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29072), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-29064), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965F54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08965F68u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 112u, 0x08878880u>(ctx, &aot_mem) && ctx.pc == 0x08965F68u) goto L_08965F68;
    return;
L_08965F68:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18028));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965F88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08965FA4u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 112u, 0x08878880u>(ctx, &aot_mem) && ctx.pc == 0x08965FA4u) goto L_08965FA4;
    return;
L_08965FA4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18028));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08965FC8u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08965FC8u) goto L_08965FC8;
    return;
L_08965FC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965FE0;
      }
      goto L_08965FD4;
    }
L_08965FD4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08965FE0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 665u, 0x08A2F080u>(ctx, &aot_mem) && ctx.pc == 0x08965FE0u) goto L_08965FE0;
    return;
L_08965FE0:
    ctx.gpr[31] = (0x08965FE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 687u, 0x08A2F1A4u>(ctx, &aot_mem) && ctx.pc == 0x08965FE8u) goto L_08965FE8;
    return;
L_08965FE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(90)));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(91)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08966010:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08966058;
      }
      goto L_0896602C;
    }
L_0896602C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18028));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08966044u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 114u, 0x088788C8u>(ctx, &aot_mem) && ctx.pc == 0x08966044u) goto L_08966044;
    return;
L_08966044:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966058;
      }
      goto L_08966050;
    }
L_08966050:
    ctx.gpr[31] = (0x08966058u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 121u, 0x08878944u>(ctx, &aot_mem) && ctx.pc == 0x08966058u) goto L_08966058;
    return;
L_08966058:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896606C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29052)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] | 14571u);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29056)));
    ctx.gpr[7] = (2228u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-29048), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[10] = (2228u << 16u);
    ctx.gpr[9] = (2228u << 16u);
    ctx.gpr[8] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29040), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-29044), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16240));
    ctx.gpr[6] = (2228u << 16u);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[11] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-29036), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089660FCu);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29032), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08965F54;
L_089660FC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08966108u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29028));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x08966108u) goto L_08966108;
    return;
L_08966108:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 96u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16144));
    ctx.gpr[31] = (0x08966124u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-29344));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 553u, 0x0886AF04u>(ctx, &aot_mem) && ctx.pc == 0x08966124u) goto L_08966124;
    return;
L_08966124:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08966134:
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29012)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29016)));
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2228u << 16u);
    ctx.gpr[8] = (2228u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[10] = (2228u << 16u);
    ctx.gpr[11] = (2228u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-29008), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-29000), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-29004), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-28996), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-28992), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089661AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28980));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089661D0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(11352));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 351u, 0x08AF5B00u>(ctx, &aot_mem) && ctx.pc == 0x089661D0u) goto L_089661D0;
    return;
L_089661D0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089661DC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28848)));
    ctx.gpr[4] = (2228u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28844), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089661F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08966204u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 905u, 0x08AEF368u>(ctx, &aot_mem) && ctx.pc == 0x08966204u) goto L_08966204;
    return;
L_08966204:
    ctx.gpr[31] = (0x0896620Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x0896620Cu) goto L_0896620C;
    return;
L_0896620C:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08966238;
      }
      goto L_08966224;
    }
L_08966224:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08966224;
      }
      goto L_08966238;
    }
L_08966238:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[6] = (0u | 92u);
      if (branch_taken) {
          goto L_08966268;
      }
      goto L_08966248;
    }
L_08966248:
    ctx.gpr[5] = (0u | 47u);
    goto L_0896624C;
L_0896624C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08966258;
      }
      goto L_08966254;
    }
L_08966254:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08966258;
L_08966258:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896624C;
      }
      goto L_08966268;
    }
L_08966268:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08966278:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[31]);
    ctx.gpr[31] = (0x089662B4u);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x089662B4u) goto L_089662B4;
    return;
L_089662B4:
    ctx.gpr[31] = (0x089662BCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089661F0;
L_089662BC:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089662D0u);
    ctx.gpr[5] = (0u | 115u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 412u, 0x08AED718u>(ctx, &aot_mem) && ctx.pc == 0x089662D0u) goto L_089662D0;
    return;
L_089662D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089662DC;
      }
      goto L_089662D8;
    }
L_089662D8:
    ctx.gpr[19] = (0u | 1u);
    goto L_089662DC;
L_089662DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089662E8u);
    ctx.gpr[5] = (0u | 114u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 412u, 0x08AED718u>(ctx, &aot_mem) && ctx.pc == 0x089662E8u) goto L_089662E8;
    return;
L_089662E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08966300;
      }
      goto L_089662F0;
    }
L_089662F0:
    ctx.gpr[31] = (0x089662F8u);
    ctx.gpr[5] = (0u | 43u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 412u, 0x08AED718u>(ctx, &aot_mem) && ctx.pc == 0x089662F8u) goto L_089662F8;
    return;
L_089662F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966304;
      }
      goto L_08966300;
    }
L_08966300:
    ctx.gpr[20] = (0u | 1u);
    goto L_08966304;
L_08966304:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08966310u);
    ctx.gpr[5] = (0u | 119u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 412u, 0x08AED718u>(ctx, &aot_mem) && ctx.pc == 0x08966310u) goto L_08966310;
    return;
L_08966310:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896631C;
      }
      goto L_08966318;
    }
L_08966318:
    ctx.gpr[20] = (ctx.gpr[20] | 1538u);
    goto L_0896631C;
L_0896631C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966344;
      }
      goto L_08966324;
    }
L_08966324:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966344;
      }
      goto L_0896632C;
    }
L_0896632C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0896633Cu);
    ctx.gpr[6] = (0u | 511u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 142u, 0x08A58C80u>(ctx, &aot_mem) && ctx.pc == 0x0896633Cu) goto L_0896633C;
    return;
L_0896633C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08966358;
      }
      goto L_08966344;
    }
L_08966344:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08966354u);
    ctx.gpr[6] = (0u | 511u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 136u, 0x08A58C00u>(ctx, &aot_mem) && ctx.pc == 0x08966354u) goto L_08966354;
    return;
L_08966354:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_08966358;
L_08966358:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08966378;
      }
      goto L_08966360;
    }
L_08966360:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8044)));
    ctx.gpr[16] = (2231u << 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-8040));
      if (branch_taken) {
          goto L_08966380;
      }
      goto L_08966370;
    }
L_08966370:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089663A0;
      }
      goto L_08966378;
    }
L_08966378:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08966464;
      }
      goto L_08966380;
    }
L_08966380:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8044), ctx.gpr[5]);
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x089663A0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(11368));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 351u, 0x08AF5B00u>(ctx, &aot_mem) && ctx.pc == 0x089663A0u) goto L_089663A0;
    return;
L_089663A0:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_089663AC;
L_089663AC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089663BC;
      }
      goto L_089663B8;
    }
L_089663B8:
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_089663BC;
L_089663BC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089663AC;
      }
      goto L_089663CC;
    }
L_089663CC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966404;
      }
      goto L_089663D4;
    }
L_089663D4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (32768u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[19] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] << 31u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0896640C;
      }
      goto L_089663FC;
    }
L_089663FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966460;
      }
      goto L_08966404;
    }
L_08966404:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08966464;
      }
      goto L_0896640C;
    }
L_0896640C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28820)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28824)));
    ctx.gpr[8] = (0u | 2u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0896642Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 515u, 0x089363C0u>(ctx, &aot_mem) && ctx.pc == 0x0896642Cu) goto L_0896642C;
    return;
L_0896642C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08966460u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 515u, 0x089363C0u>(ctx, &aot_mem) && ctx.pc == 0x08966460u) goto L_08966460;
    return;
L_08966460:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08966464;
L_08966464:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08966488:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08966518;
      }
      goto L_089664C0;
    }
L_089664C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28820)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28824)));
    ctx.gpr[31] = (0x089664D8u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 515u, 0x089363C0u>(ctx, &aot_mem) && ctx.pc == 0x089664D8u) goto L_089664D8;
    return;
L_089664D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966518;
      }
      goto L_08966500;
    }
L_08966500:
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[22] = (0u | 10u);
    ctx.gpr[23] = (0u | 13u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (32768u << 16u);
      if (branch_taken) {
          goto L_08966520;
      }
      goto L_08966518;
    }
L_08966518:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0896658C;
      }
      goto L_08966520;
    }
L_08966520:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08966548;
      }
      goto L_08966534;
    }
L_08966534:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08966540u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 415u, 0x08935E40u>(ctx, &aot_mem) && ctx.pc == 0x08966540u) goto L_08966540;
    return;
L_08966540:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
      if (branch_taken) {
          goto L_08966558;
      }
      goto L_08966548;
    }
L_08966548:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08966554u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 469u, 0x08936160u>(ctx, &aot_mem) && ctx.pc == 0x08966554u) goto L_08966554;
    return;
L_08966554:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    goto L_08966558;
L_08966558:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
      if (branch_taken) {
          goto L_0896656C;
      }
      goto L_08966568;
    }
L_08966568:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0896656C;
L_0896656C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966584;
      }
      goto L_08966574;
    }
L_08966574:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08966584;
      }
      goto L_0896657C;
    }
L_0896657C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08966520;
      }
      goto L_08966584;
    }
L_08966584:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_0896658C;
L_0896658C:
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
L_089665B8:
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
L_089665E4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089665F4;
      }
      goto L_089665F0;
    }
L_089665F0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_089665F4;
L_089665F4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896660C;
      }
      goto L_08966604;
    }
L_08966604:
    ctx.gpr[6] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_0896660C;
L_0896660C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0896661C;
      }
      goto L_08966618;
    }
L_08966618:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_0896661C;
L_0896661C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966634;
      }
      goto L_0896662C;
    }
L_0896662C:
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08966634;
L_08966634:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896663C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896665Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_089665E4;
L_0896665C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2276u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27944));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089666A4;
      }
      goto L_08966684;
    }
L_08966684:
    ctx.gpr[5] = (2276u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28200));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0896669Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 637u, 0x0892FD58u>(ctx, &aot_mem) && ctx.pc == 0x0896669Cu) goto L_0896669C;
    return;
L_0896669C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089666A4;
L_089666A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089666B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08966730;
      }
      goto L_089666D4;
    }
L_089666D4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966730;
      }
      goto L_089666E0;
    }
L_089666E0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
      if (branch_taken) {
          goto L_08966728;
      }
      goto L_089666E8;
    }
L_089666E8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966728;
      }
      goto L_089666F0;
    }
L_089666F0:
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (2276u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27944));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28200));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08966738;
      }
      goto L_08966720;
    }
L_08966720:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08966748;
      }
      goto L_08966728;
    }
L_08966728:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089667BC;
      }
      goto L_08966730;
    }
L_08966730:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089667BC;
      }
      goto L_08966738;
    }
L_08966738:
    ctx.gpr[31] = (0x08966740u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 648u, 0x0892FE28u>(ctx, &aot_mem) && ctx.pc == 0x08966740u) goto L_08966740;
    return;
L_08966740:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    goto L_08966748;
L_08966748:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27840)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_08966770;
    }
    goto L_08966764;
L_08966764:
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08966784;
      }
      goto L_08966770;
    }
L_08966770:
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08966784;
L_08966784:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089667BC;
      }
      goto L_0896678C;
    }
L_0896678C:
    ctx.gpr[31] = (0x08966794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 665u, 0x0892FF6Cu>(ctx, &aot_mem) && ctx.pc == 0x08966794u) goto L_08966794;
    return;
L_08966794:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_089667BC;
      }
      goto L_0896679C;
    }
L_0896679C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089667B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28816));
    goto L_089665B8;
L_089667B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089667BCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 616u, 0x0892FBD0u>(ctx, &aot_mem) && ctx.pc == 0x089667BCu) goto L_089667BC;
    return;
L_089667BC:
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
L_089667D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (49024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896682C;
      }
      goto L_089667F0;
    }
L_089667F0:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896682C;
      }
      goto L_0896680C;
    }
L_0896680C:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08966844;
      }
      goto L_08966824;
    }
L_08966824:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966834;
      }
      goto L_0896682C;
    }
L_0896682C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08966850;
      }
      goto L_08966834;
    }
L_08966834:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896684C;
      }
      goto L_08966844;
    }
L_08966844:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08966850;
      }
      goto L_0896684C;
    }
L_0896684C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08966850;
L_08966850:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08966858:
    ctx.gpr[7] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[4] << 9u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[8] - ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[5] << 9u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[8] - ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(500));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(500));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089668D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[19] = ctx.fpr[13] - ctx.fpr[19];
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[18] = std::bit_cast<float>(0u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08966984;
      }
      goto L_08966920;
    }
L_08966920:
    ctx.fpr[12] = ctx.fpr[19] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    ctx.fpr[0] = ctx.fpr[17] - ctx.fpr[16];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[19] + ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[19] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08966984;
      }
      goto L_08966944;
    }
L_08966944:
    ctx.set_fpu_condition((ctx.fpr[19] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08966984;
      }
      goto L_08966954;
    }
L_08966954:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08966984;
      }
      goto L_08966964;
    }
L_08966964:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u | 3u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_08966984;
L_08966984:
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[19] = ctx.fpr[19] - ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[18]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[19] = ctx.fpr[13] - ctx.fpr[16];
        goto L_08966A10;
    }
    goto L_089669A8;
L_089669A8:
    ctx.fpr[12] = ctx.fpr[19] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    ctx.fpr[0] = ctx.fpr[17] - ctx.fpr[16];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[19] + ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[19] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08966A0C;
      }
      goto L_089669CC;
    }
L_089669CC:
    ctx.set_fpu_condition((ctx.fpr[19] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08966A0C;
      }
      goto L_089669DC;
    }
L_089669DC:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08966A0C;
      }
      goto L_089669EC;
    }
L_089669EC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_08966A0C;
L_08966A0C:
    ctx.fpr[19] = ctx.fpr[13] - ctx.fpr[16];
    goto L_08966A10;
L_08966A10:
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[17];
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[18]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[15];
        goto L_08966A98;
    }
    goto L_08966A28;
L_08966A28:
    ctx.fpr[12] = ctx.fpr[19] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[19];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[0] + ctx.fpr[19];
    ctx.set_fpu_condition((ctx.fpr[19] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08966A94;
      }
      goto L_08966A54;
    }
L_08966A54:
    ctx.set_fpu_condition((ctx.fpr[19] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08966A94;
      }
      goto L_08966A64;
    }
L_08966A64:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08966A94;
      }
      goto L_08966A74;
    }
L_08966A74:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_08966A94;
L_08966A94:
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[15];
    goto L_08966A98;
L_08966A98:
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[15];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08966B10;
      }
      goto L_08966AB0;
    }
L_08966AB0:
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[17];
    ctx.fpr[12] = ctx.fpr[16] / ctx.fpr[12];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[18] = ctx.fpr[18] - ctx.fpr[16];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[18] + ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08966B10;
      }
      goto L_08966ADC;
    }
L_08966ADC:
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08966B10;
      }
      goto L_08966AEC;
    }
L_08966AEC:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08966B10;
      }
      goto L_08966AFC;
    }
L_08966AFC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[2] = (0u | 2u);
    goto L_08966B10;
L_08966B10:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08966B18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2277u << 16u);
    ctx.gpr[16] = (2228u << 16u);
    ctx.gpr[18] = (2276u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[21] = (0u | 255u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28492));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28200));
    ctx.gpr[20] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    goto L_08966B64;
L_08966B64:
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08966B74u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 63u, 0x089684A8u>(ctx, &aot_mem) && ctx.pc == 0x08966B74u) goto L_08966B74;
    return;
L_08966B74:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08966B64;
      }
      goto L_08966BA0;
    }
L_08966BA0:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6484), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6843), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-8008), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (17292u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[21] = (2276u << 16u);
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6488), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-27944));
    goto L_08966BDC;
L_08966BDC:
    ctx.gpr[31] = (0x08966BE4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 586u, 0x0892FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966BE4u) goto L_08966BE4;
    return;
L_08966BE4:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-28234)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966BFC;
      }
      goto L_08966BF4;
    }
L_08966BF4:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08966BFC;
L_08966BFC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08966BDC;
      }
      goto L_08966C10;
    }
L_08966C10:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(-28234), static_cast<std::uint8_t>(ctx.gpr[17]));
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
L_08966C3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08966C4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 629u, 0x0892FCC0u>(ctx, &aot_mem) && ctx.pc == 0x08966C4Cu) goto L_08966C4C;
    return;
L_08966C4C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08966C58u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28776));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 586u, 0x0892FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966C58u) goto L_08966C58;
    return;
L_08966C58:
    ctx.gpr[31] = (0x08966C60u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 624u, 0x0892FC6Cu>(ctx, &aot_mem) && ctx.pc == 0x08966C60u) goto L_08966C60;
    return;
L_08966C60:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6744));
    ctx.gpr[31] = (0x08966C74u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28772));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966C74u) goto L_08966C74;
    return;
L_08966C74:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6740));
    ctx.gpr[31] = (0x08966C88u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28756));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966C88u) goto L_08966C88;
    return;
L_08966C88:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6736));
    ctx.gpr[31] = (0x08966C9Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28748));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966C9Cu) goto L_08966C9C;
    return;
L_08966C9C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6732));
    ctx.gpr[31] = (0x08966CB0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966CB0u) goto L_08966CB0;
    return;
L_08966CB0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6728));
    ctx.gpr[31] = (0x08966CC4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28724));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966CC4u) goto L_08966CC4;
    return;
L_08966CC4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6724));
    ctx.gpr[31] = (0x08966CD8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28712));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966CD8u) goto L_08966CD8;
    return;
L_08966CD8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6720));
    ctx.gpr[31] = (0x08966CECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28696));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966CECu) goto L_08966CEC;
    return;
L_08966CEC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6716));
    ctx.gpr[31] = (0x08966D00u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28684));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966D00u) goto L_08966D00;
    return;
L_08966D00:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6712));
    ctx.gpr[31] = (0x08966D14u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28672));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966D14u) goto L_08966D14;
    return;
L_08966D14:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6708));
    ctx.gpr[31] = (0x08966D28u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28656));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966D28u) goto L_08966D28;
    return;
L_08966D28:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6704));
    ctx.gpr[31] = (0x08966D3Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28644));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966D3Cu) goto L_08966D3C;
    return;
L_08966D3C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6700));
    ctx.gpr[31] = (0x08966D50u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28636));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966D50u) goto L_08966D50;
    return;
L_08966D50:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6696));
    ctx.gpr[31] = (0x08966D64u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28624));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966D64u) goto L_08966D64;
    return;
L_08966D64:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6692));
    ctx.gpr[31] = (0x08966D78u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28616));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966D78u) goto L_08966D78;
    return;
L_08966D78:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6688));
    ctx.gpr[31] = (0x08966D8Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28608));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966D8Cu) goto L_08966D8C;
    return;
L_08966D8C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6684));
    ctx.gpr[31] = (0x08966DA0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28596));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966DA0u) goto L_08966DA0;
    return;
L_08966DA0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6680));
    ctx.gpr[31] = (0x08966DB4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28592));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966DB4u) goto L_08966DB4;
    return;
L_08966DB4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6676));
    ctx.gpr[31] = (0x08966DC8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28580));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966DC8u) goto L_08966DC8;
    return;
L_08966DC8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6672));
    ctx.gpr[31] = (0x08966DDCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28568));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966DDCu) goto L_08966DDC;
    return;
L_08966DDC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6668));
    ctx.gpr[31] = (0x08966DF0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28556));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966DF0u) goto L_08966DF0;
    return;
L_08966DF0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6664));
    ctx.gpr[31] = (0x08966E04u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28544));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966E04u) goto L_08966E04;
    return;
L_08966E04:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6660));
    ctx.gpr[31] = (0x08966E18u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28532));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966E18u) goto L_08966E18;
    return;
L_08966E18:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6656));
    ctx.gpr[31] = (0x08966E2Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28524));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966E2Cu) goto L_08966E2C;
    return;
L_08966E2C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6652));
    ctx.gpr[31] = (0x08966E40u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28512));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966E40u) goto L_08966E40;
    return;
L_08966E40:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6648));
    ctx.gpr[31] = (0x08966E54u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28500));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966E54u) goto L_08966E54;
    return;
L_08966E54:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6644));
    ctx.gpr[31] = (0x08966E68u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28488));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966E68u) goto L_08966E68;
    return;
L_08966E68:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6640));
    ctx.gpr[31] = (0x08966E7Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28480));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966E7Cu) goto L_08966E7C;
    return;
L_08966E7C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6636));
    ctx.gpr[31] = (0x08966E90u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28472));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966E90u) goto L_08966E90;
    return;
L_08966E90:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6632));
    ctx.gpr[31] = (0x08966EA4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28464));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966EA4u) goto L_08966EA4;
    return;
L_08966EA4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6628));
    ctx.gpr[31] = (0x08966EB8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28456));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966EB8u) goto L_08966EB8;
    return;
L_08966EB8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6624));
    ctx.gpr[31] = (0x08966ECCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28448));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966ECCu) goto L_08966ECC;
    return;
L_08966ECC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6620));
    ctx.gpr[31] = (0x08966EE0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28436));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966EE0u) goto L_08966EE0;
    return;
L_08966EE0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6616));
    ctx.gpr[31] = (0x08966EF4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28420));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966EF4u) goto L_08966EF4;
    return;
L_08966EF4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6612));
    ctx.gpr[31] = (0x08966F08u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28404));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966F08u) goto L_08966F08;
    return;
L_08966F08:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6608));
    ctx.gpr[31] = (0x08966F1Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28388));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966F1Cu) goto L_08966F1C;
    return;
L_08966F1C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6604));
    ctx.gpr[31] = (0x08966F30u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28372));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966F30u) goto L_08966F30;
    return;
L_08966F30:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6600));
    ctx.gpr[31] = (0x08966F44u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28360));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966F44u) goto L_08966F44;
    return;
L_08966F44:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6596));
    ctx.gpr[31] = (0x08966F58u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28348));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966F58u) goto L_08966F58;
    return;
L_08966F58:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6592));
    ctx.gpr[31] = (0x08966F6Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28336));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966F6Cu) goto L_08966F6C;
    return;
L_08966F6C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6588));
    ctx.gpr[31] = (0x08966F80u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966F80u) goto L_08966F80;
    return;
L_08966F80:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6584));
    ctx.gpr[31] = (0x08966F94u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28304));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966F94u) goto L_08966F94;
    return;
L_08966F94:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6580));
    ctx.gpr[31] = (0x08966FA8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28292));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966FA8u) goto L_08966FA8;
    return;
L_08966FA8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6576));
    ctx.gpr[31] = (0x08966FBCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28280));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966FBCu) goto L_08966FBC;
    return;
L_08966FBC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6572));
    ctx.gpr[31] = (0x08966FD0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28264));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966FD0u) goto L_08966FD0;
    return;
L_08966FD0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6568));
    ctx.gpr[31] = (0x08966FE4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28252));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966FE4u) goto L_08966FE4;
    return;
L_08966FE4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6564));
    ctx.gpr[31] = (0x08966FF8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28236));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966FF8u) goto L_08966FF8;
    return;
L_08966FF8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6560));
    ctx.gpr[31] = (0x0896700Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28228));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896700Cu) goto L_0896700C;
    return;
L_0896700C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6556));
    ctx.gpr[31] = (0x08967020u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28212));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08967020u) goto L_08967020;
    return;
L_08967020:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6552));
    ctx.gpr[31] = (0x08967034u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28200));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08967034u) goto L_08967034;
    return;
L_08967034:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6548));
    ctx.gpr[31] = (0x08967048u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28184));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08967048u) goto L_08967048;
    return;
L_08967048:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6544));
    ctx.gpr[31] = (0x0896705Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28176));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896705Cu) goto L_0896705C;
    return;
L_0896705C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6540));
    ctx.gpr[31] = (0x08967070u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28168));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08967070u) goto L_08967070;
    return;
L_08967070:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6536));
    ctx.gpr[31] = (0x08967084u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28152));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08967084u) goto L_08967084;
    return;
L_08967084:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6532));
    ctx.gpr[31] = (0x08967098u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28136));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08967098u) goto L_08967098;
    return;
L_08967098:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6528));
    ctx.gpr[31] = (0x089670ACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28124));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x089670ACu) goto L_089670AC;
    return;
L_089670AC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6524));
    ctx.gpr[31] = (0x089670C0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28112));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x089670C0u) goto L_089670C0;
    return;
L_089670C0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6520));
    ctx.gpr[31] = (0x089670D4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28100));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x089670D4u) goto L_089670D4;
    return;
L_089670D4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6516));
    ctx.gpr[31] = (0x089670E8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28088));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x089670E8u) goto L_089670E8;
    return;
L_089670E8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6512));
    ctx.gpr[31] = (0x089670FCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28076));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x089670FCu) goto L_089670FC;
    return;
L_089670FC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6508));
    ctx.gpr[31] = (0x08967110u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28064));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08967110u) goto L_08967110;
    return;
L_08967110:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6504));
    ctx.gpr[31] = (0x08967124u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28052));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08967124u) goto L_08967124;
    return;
L_08967124:
    ctx.gpr[31] = (0x0896712Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 631u, 0x0892FCE4u>(ctx, &aot_mem) && ctx.pc == 0x0896712Cu) goto L_0896712C;
    return;
L_0896712C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967138:
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (0u | 65534u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896717C;
      }
      goto L_08967164;
    }
L_08967164:
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[2] = (ctx.gpr[5] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | ctx.gpr[2]);
      if (branch_taken) {
          goto L_08967190;
      }
      goto L_0896717C;
    }
L_0896717C:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[2] = (ctx.gpr[5] << 16u);
    ctx.gpr[2] = (ctx.gpr[4] | ctx.gpr[2]);
    goto L_08967190;
L_08967190:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967198:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.gpr[5] = (ctx.gpr[4] & 65535u);
      if (branch_taken) {
          goto L_089671DC;
      }
      goto L_089671A4;
    }
L_089671A4:
    ctx.gpr[6] = (65535u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[5] << 6u);
    ctx.gpr[8] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] >> 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089671E4;
      }
      goto L_089671D4;
    }
L_089671D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089671E4;
      }
      goto L_089671DC;
    }
L_089671DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089671E4;
      }
      goto L_089671E4;
    }
L_089671E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089671EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-24908)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6484), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(117)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08967260;
      }
      goto L_0896722C;
    }
L_0896722C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7940)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967260;
      }
      goto L_08967238;
    }
L_08967238:
    ctx.gpr[31] = (0x08967240u);
    // nop
    goto L_089676D0;
L_08967240:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    ctx.gpr[18] = (0u | 96u);
    ctx.gpr[17] = (0u | 280u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_08967268;
      }
      goto L_08967258;
    }
L_08967258:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967270;
      }
      goto L_08967260;
    }
L_08967260:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089673AC;
      }
      goto L_08967268;
    }
L_08967268:
    ctx.gpr[18] = (0u | 150u);
    ctx.gpr[17] = (0u | 280u);
    goto L_08967270;
L_08967270:
    ctx.gpr[31] = (0x08967278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08967278u) goto L_08967278;
    return;
L_08967278:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896732C;
      }
      goto L_08967280;
    }
L_08967280:
    ctx.gpr[31] = (0x08967288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 175u, 0x089D5818u>(ctx, &aot_mem) && ctx.pc == 0x08967288u) goto L_08967288;
    return;
L_08967288:
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089672C8;
      }
      goto L_089672B8;
    }
L_089672B8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6488), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08967324;
      }
      goto L_089672C8;
    }
L_089672C8:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[18]);
      if (branch_taken) {
          goto L_08967318;
      }
      goto L_089672E4;
    }
L_089672E4:
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39321u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6488), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08967324;
      }
      goto L_08967318;
    }
L_08967318:
    ctx.gpr[4] = (17292u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6488), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08967324;
L_08967324:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967338;
      }
      goto L_0896732C;
    }
L_0896732C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6488), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08967338;
L_08967338:
    ctx.gpr[31] = (0x08967340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 209u, 0x089D5A30u>(ctx, &aot_mem) && ctx.pc == 0x08967340u) goto L_08967340;
    return;
L_08967340:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (2231u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7912), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7912));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x0896739Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 608u, 0x08ADA7D8u>(ctx, &aot_mem) && ctx.pc == 0x0896739Cu) goto L_0896739C;
    return;
L_0896739C:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089673AC;
      }
      goto L_089673A4;
    }
L_089673A4:
    ctx.gpr[31] = (0x089673ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 197u, 0x089692E4u>(ctx, &aot_mem) && ctx.pc == 0x089673ACu) goto L_089673AC;
    return;
L_089673AC:
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
L_089673C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x089673F0u);
    // nop
    goto L_089676D0;
L_089673F0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (2230u << 16u);
      if (branch_taken) {
          goto L_08967410;
      }
      goto L_08967404;
    }
L_08967404:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-24908)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(-6484), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08967410;
L_08967410:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7912), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7912));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[18] = (2277u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-6484)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-16128));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6488), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    goto L_0896744C;
L_0896744C:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08967474u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08967474u) goto L_08967474;
    return;
L_08967474:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 75 ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-6484)));
      if (branch_taken) {
          goto L_0896744C;
      }
      goto L_089674A8;
    }
L_089674A8:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-28236), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089674D0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x089674D0u) goto L_089674D0;
    return;
L_089674D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6496), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6496));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-6484)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08967510u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08967510u) goto L_08967510;
    return;
L_08967510:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6492), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6492));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896755C:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4832));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(320)));
    if (ctx.gpr[5] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08967590;
    }
    goto L_08967570;
L_08967570:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089675E4;
      }
      goto L_08967590;
    }
L_08967590:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (16256u << 16u);
      if (branch_taken) {
          goto L_089675DC;
      }
      goto L_089675BC;
    }
L_089675BC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[0];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089675DC;
L_089675DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089675E4;
      }
      goto L_089675E4;
    }
L_089675E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089675EC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08967640;
      }
      goto L_08967600;
    }
L_08967600:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08967638;
      }
      goto L_08967618;
    }
L_08967618:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_08967648;
      }
      goto L_08967630;
    }
L_08967630:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 128u);
      if (branch_taken) {
          goto L_089676C8;
      }
      goto L_08967638;
    }
L_08967638:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 255u);
      if (branch_taken) {
          goto L_089676C8;
      }
      goto L_08967640;
    }
L_08967640:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 255u);
      if (branch_taken) {
          goto L_089676C8;
      }
      goto L_08967648;
    }
L_08967648:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16656u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6484)));
    ctx.gpr[5] = (17279u << 16u);
    ctx.gpr[6] = (17152u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_089676C8;
      }
      goto L_089676C8;
    }
L_089676C8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089676D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (2231u << 16u);
      if (branch_taken) {
          goto L_0896772C;
      }
      goto L_08967708;
    }
L_08967708:
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12960));
    ctx.gpr[31] = (0x08967718u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 143u, 0x088ED1B0u>(ctx, &aot_mem) && ctx.pc == 0x08967718u) goto L_08967718;
    return;
L_08967718:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[19] = (2231u << 16u);
      if (branch_taken) {
          goto L_08967740;
      }
      goto L_08967724;
    }
L_08967724:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967854;
      }
      goto L_0896772C;
    }
L_0896772C:
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-7904), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-7900), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089678D0;
      }
      goto L_08967740;
    }
L_08967740:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[6] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089677C8;
      }
      goto L_08967770;
    }
L_08967770:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(996)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967814;
      }
      goto L_089677C8;
    }
L_089677C8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(996)));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(848));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08967814;
L_08967814:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0896783C;
      }
      goto L_0896782C;
    }
L_0896782C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896784C;
      }
      goto L_0896783C;
    }
L_0896783C:
    ctx.gpr[31] = (0x08967844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x08967844u) goto L_08967844;
    return;
L_08967844:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0896784C;
      }
      goto L_0896784C;
    }
L_0896784C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-7896), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08967890;
      }
      goto L_08967854;
    }
L_08967854:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0896787C;
      }
      goto L_0896786C;
    }
L_0896786C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896788C;
      }
      goto L_0896787C;
    }
L_0896787C:
    ctx.gpr[31] = (0x08967884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x08967884u) goto L_08967884;
    return;
L_08967884:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0896788C;
      }
      goto L_0896788C;
    }
L_0896788C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-7896), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08967890;
L_08967890:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-7904), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-7900), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089678D0;
L_089678D0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089678F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (2231u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7892)));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (2231u << 16u);
      if (branch_taken) {
          goto L_08967954;
      }
      goto L_0896792C;
    }
L_0896792C:
    ctx.gpr[7] = (16924u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 52429u);
    ctx.gpr[8] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-28232)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7892), ctx.gpr[7]);
    ctx.gpr[6] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7884), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08967954;
L_08967954:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7888)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (50180u << 16u);
      if (branch_taken) {
          goto L_08967984;
      }
      goto L_08967960;
    }
L_08967960:
    ctx.gpr[6] = (ctx.gpr[6] | 60948u);
    ctx.gpr[7] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-28232)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7888), ctx.gpr[6]);
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7880), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08967984;
L_08967984:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (17264u << 16u);
      if (branch_taken) {
          goto L_089679BC;
      }
      goto L_08967990;
    }
L_08967990:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[6] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08967A3C;
      }
      goto L_089679A0;
    }
L_089679A0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1424)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967A3C;
      }
      goto L_089679AC;
    }
L_089679AC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(305)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967A3C;
      }
      goto L_089679B8;
    }
L_089679B8:
    ctx.gpr[5] = (17264u << 16u);
    goto L_089679BC;
L_089679BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1140)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1136)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28228)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2231u << 16u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7884)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[6] = (2231u << 16u);
    ctx.gpr[7] = (17124u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1144)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1136)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28224)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7880)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[17] - ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08967AA0;
      }
      goto L_08967A3C;
    }
L_08967A3C:
    ctx.gpr[31] = (0x08967A44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 505u, 0x08987098u>(ctx, &aot_mem) && ctx.pc == 0x08967A44u) goto L_08967A44;
    return;
L_08967A44:
    ctx.gpr[31] = (0x08967A4Cu);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 497u, 0x08987038u>(ctx, &aot_mem) && ctx.pc == 0x08967A4Cu) goto L_08967A4C;
    return;
L_08967A4C:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08967A60u);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 497u, 0x08987038u>(ctx, &aot_mem) && ctx.pc == 0x08967A60u) goto L_08967A60;
    return;
L_08967A60:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[20] + ctx.fpr[13];
    ctx.gpr[31] = (0x08967A78u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 508u, 0x089870BCu>(ctx, &aot_mem) && ctx.pc == 0x08967A78u) goto L_08967A78;
    return;
L_08967A78:
    ctx.gpr[31] = (0x08967A80u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 501u, 0x08987068u>(ctx, &aot_mem) && ctx.pc == 0x08967A80u) goto L_08967A80;
    return;
L_08967A80:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08967A8Cu);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 501u, 0x08987068u>(ctx, &aot_mem) && ctx.pc == 0x08967A8Cu) goto L_08967A8C;
    return;
L_08967A8C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[24] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08967AA0;
L_08967AA0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967AC0:
    ctx.gpr[9] = (2231u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-7876)));
    ctx.gpr[8] = (2231u << 16u);
    ctx.gpr[7] = (2231u << 16u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[6] = (2231u << 16u);
      if (branch_taken) {
          goto L_08967AFC;
      }
      goto L_08967AD8;
    }
L_08967AD8:
    ctx.gpr[10] = (16924u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[10] = (2228u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-28220)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[10] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-7876), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-7868), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08967AFC;
L_08967AFC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7872)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[9] = (50180u << 16u);
      if (branch_taken) {
          goto L_08967B28;
      }
      goto L_08967B08;
    }
L_08967B08:
    ctx.gpr[9] = (ctx.gpr[9] | 60948u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[9] = (2228u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-28220)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[9] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-7872), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7864), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08967B28;
L_08967B28:
    ctx.gpr[7] = (2233u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-4832));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1140)));
    ctx.gpr[9] = (17264u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1136)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.gpr[9] = (2228u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-28216)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-7868)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[8] = (17124u << 16u);
    ctx.gpr[9] = (2228u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1144)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1136)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-28212)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967BB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6488)));
    ctx.fpr[15] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (2231u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7912)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7912));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2231u << 16u);
    ctx.fpr[16] = ctx.fpr[14] - ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[6] = (2231u << 16u);
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7904)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7900)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[12])) && ctx.fpr[14] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08967C24;
      }
      goto L_08967C18;
    }
L_08967C18:
    ctx.gpr[5] = (14979u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08967C24;
L_08967C24:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_08967C44;
    }
    goto L_08967C34;
L_08967C34:
    ctx.gpr[5] = (14979u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08967C44;
L_08967C44:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967C70:
    ctx.gpr[6] = (2231u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7904)));
    ctx.gpr[6] = (2231u << 16u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[12])) && ctx.fpr[14] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7900)));
      if (branch_taken) {
          goto L_08967C9C;
      }
      goto L_08967C90;
    }
L_08967C90:
    ctx.gpr[6] = (14979u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    goto L_08967C9C;
L_08967C9C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_08967CBC;
    }
    goto L_08967CAC;
L_08967CAC:
    ctx.gpr[6] = (14979u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08967CBC;
L_08967CBC:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[6] = (2230u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2231u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7912));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6488)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6488)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7912)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967D38:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (17402u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17658u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 8u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[5] = (15107u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967DB0:
    ctx.gpr[6] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967EC4;
      }
      goto L_08967DC4;
    }
L_08967DC4:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-27592)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967DDC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967DF0;
      }
      goto L_08967DE4;
    }
L_08967DE4:
    ctx.gpr[2] = (65352u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(19967));
      if (branch_taken) {
          goto L_08967EC8;
      }
      goto L_08967DF0;
    }
L_08967DF0:
    ctx.gpr[2] = (32512u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(255));
      if (branch_taken) {
          goto L_08967EC8;
      }
      goto L_08967DFC;
    }
L_08967DFC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967E10;
      }
      goto L_08967E04;
    }
L_08967E04:
    ctx.gpr[2] = (24480u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(27391));
      if (branch_taken) {
          goto L_08967EC8;
      }
      goto L_08967E10;
    }
L_08967E10:
    ctx.gpr[2] = (127u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(255));
      if (branch_taken) {
          goto L_08967EC8;
      }
      goto L_08967E1C;
    }
L_08967E1C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967E30;
      }
      goto L_08967E24;
    }
L_08967E24:
    ctx.gpr[2] = (18510u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08967EC8;
      }
      goto L_08967E30;
    }
L_08967E30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 32767u);
      if (branch_taken) {
          goto L_08967EC8;
      }
      goto L_08967E38;
    }
L_08967E38:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967E4C;
      }
      goto L_08967E40;
    }
L_08967E40:
    ctx.gpr[2] = (57826u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-7681));
      if (branch_taken) {
          goto L_08967EC8;
      }
      goto L_08967E4C;
    }
L_08967E4C:
    ctx.gpr[2] = (32639u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(32767));
      if (branch_taken) {
          goto L_08967EC8;
      }
      goto L_08967E58;
    }
L_08967E58:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967E6C;
      }
      goto L_08967E60;
    }
L_08967E60:
    ctx.gpr[2] = (65535u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(255));
      if (branch_taken) {
          goto L_08967EC8;
      }
      goto L_08967E6C;
    }
L_08967E6C:
    ctx.gpr[2] = (32639u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(255));
      if (branch_taken) {
          goto L_08967EC8;
      }
      goto L_08967E78;
    }
L_08967E78:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967E8C;
      }
      goto L_08967E80;
    }
L_08967E80:
    ctx.gpr[2] = (65281u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08967EC8;
      }
      goto L_08967E8C;
    }
L_08967E8C:
    ctx.gpr[2] = (32512u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(32767));
      if (branch_taken) {
          goto L_08967EC8;
      }
      goto L_08967E98;
    }
L_08967E98:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967EAC;
      }
      goto L_08967EA0;
    }
L_08967EA0:
    ctx.gpr[2] = (256u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08967EC8;
      }
      goto L_08967EAC;
    }
L_08967EAC:
    ctx.gpr[2] = (127u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(32767));
      if (branch_taken) {
          goto L_08967EC8;
      }
      goto L_08967EB8;
    }
L_08967EB8:
    ctx.gpr[2] = (32512u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(32767));
      if (branch_taken) {
          goto L_08967EC8;
      }
      goto L_08967EC4;
    }
L_08967EC4:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    goto L_08967EC8;
L_08967EC8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967ED0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_08967EDC;
L_08967EDC:
    ctx.gpr[8] = (ctx.gpr[2] << 6u);
    ctx.gpr[9] = (ctx.gpr[2] << 4u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (2277u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(51)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[2] < static_cast<std::uint32_t>(75) ? 1u : 0u);
      if (branch_taken) {
          goto L_08967F10;
      }
      goto L_08967F00;
    }
L_08967F00:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967F10;
      }
      goto L_08967F08;
    }
L_08967F08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08967EDC;
      }
      goto L_08967F10;
    }
L_08967F10:
    ctx.gpr[8] = (ctx.gpr[2] < static_cast<std::uint32_t>(75) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967FB8;
      }
      goto L_08967F1C;
    }
L_08967F1C:
    ctx.gpr[8] = (ctx.gpr[2] << 6u);
    ctx.gpr[9] = (ctx.gpr[2] << 4u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (2277u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[10] = (ctx.gpr[8] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[9] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[9] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(0u));
    ctx.gpr[31] = (0x08967FB0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08967138;
L_08967FB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967FBC;
      }
      goto L_08967FB8;
    }
L_08967FB8:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08967FBC;
L_08967FBC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967FC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_08967FD4;
L_08967FD4:
    ctx.gpr[5] = (ctx.gpr[2] << 6u);
    ctx.gpr[6] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(51)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[2] < static_cast<std::uint32_t>(75) ? 1u : 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 2u, 0x08968008u>(ctx, &aot_mem); return;
      }
      goto L_08967FF8;
    }
L_08967FF8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 2u, 0x08968008u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 1u, 0x08968000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0088(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0088_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_88(Runtime &runtime) {
    runtime.register_generated_unit(88u, 0x08964000u, 16384u, &recomp_unit_0088, &recomp_unit_0088_entry);
    runtime.register_function(0x08964000u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896400Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964010u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896401Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964024u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964034u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964038u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964050u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964070u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964080u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964088u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964094u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089640A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089640B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089640CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896411Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964124u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896412Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964148u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964150u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964168u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964170u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964174u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896418Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089641A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089641C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089641C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896424Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964268u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964270u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964288u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964290u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964294u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089642A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089642C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089642D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089642E0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089642F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089642FCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964310u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896431Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896432Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896433Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964348u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964358u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964368u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964374u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964384u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964388u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964398u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089643A0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089643A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089643BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089643E0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089643ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089643F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964408u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964418u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964428u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964438u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964444u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896444Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896445Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964464u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964468u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964480u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089644A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089644B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089644BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089644CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089644DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089644F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964504u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896450Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896451Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964524u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964528u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964540u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964564u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964570u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896457Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896458Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896459Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089645B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089645C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089645F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964604u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896460Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964614u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964624u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896462Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964630u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964648u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964658u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964664u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964688u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964698u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089646B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089646B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089646C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089646E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964708u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964710u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964750u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964760u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964784u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964794u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896479Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089647A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089647ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089647B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089647ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964820u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964834u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896483Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964848u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896484Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964864u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964880u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964890u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964898u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089648A0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089648A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089648B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089648E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964924u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964938u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964940u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896494Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964950u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964964u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964988u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964998u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089649A0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089649A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089649B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089649B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089649F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964A24u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964A38u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964A40u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964A4Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964A50u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964A68u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964A84u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964A94u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964A9Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964AA4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964AACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964AB4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964ABCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964AC4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964AE8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964AF4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964B08u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964B18u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964B20u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964B2Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964B34u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964B38u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964B4Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964B5Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964B68u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964BC0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964BD4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964BDCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964BECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964BFCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964C20u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964C2Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964C38u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964C40u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964C4Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964C54u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964C64u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964C78u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964C8Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964C94u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964CA4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964CB8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964CCCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964CD8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964CE0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964CECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964CF4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D00u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D04u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D1Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D40u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D4Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D58u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D60u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D70u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D78u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D88u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D98u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964DA4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964DA8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964DC0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964DE4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964DF0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E00u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E08u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E14u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E24u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E34u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E48u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E64u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E74u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E80u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E8Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E94u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964EA4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964EC0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964ED0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964ED8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964EE4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964F08u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964F20u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964F3Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964F4Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964F54u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964F60u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964F90u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964FBCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964FD4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964FF4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965004u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965014u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896501Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965028u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896504Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896506Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965088u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089650A0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089650ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089650D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089650D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089650DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089650ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089650F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965100u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965108u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965114u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965118u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965128u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965144u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896514Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965154u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965160u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896516Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965174u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896517Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965188u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965194u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896519Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089651A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089651ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089651B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089651C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089651C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089651D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089651DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089651E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089651ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089651F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965204u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896520Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965214u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965220u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896522Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965234u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896523Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965244u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965250u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965258u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965260u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965268u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965274u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896527Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965284u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965290u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896529Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965300u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896530Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965314u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896531Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965328u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965334u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896533Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965344u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965350u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896535Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965364u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896536Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965374u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965380u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965388u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965390u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965398u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089653A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089653ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089653B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089653C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089653D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965464u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965474u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896549Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089654A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089654C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089654DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965518u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965524u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965538u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965568u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896557Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965594u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896559Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089655A0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089655A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089655B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089655C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089655D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089655D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089655E0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089655ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089655F4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089655F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896560Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965614u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965628u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965634u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965648u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965650u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965658u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965660u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965668u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896566Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965674u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896568Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965698u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089656B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089656E0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089656E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965718u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965720u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965750u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965758u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965788u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965794u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089657D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089657E0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965808u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965818u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965820u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965828u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965838u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896584Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965858u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965860u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965884u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965898u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089658A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089658C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089658DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089658E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089658FCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965908u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965920u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965938u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965944u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965960u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965968u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896597Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965994u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896599Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089659ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089659C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089659D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089659D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089659ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089659F4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089659F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A04u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A0Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A10u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A20u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A2Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A34u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A38u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A40u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A48u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A4Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965AA0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965AACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965AB4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965AB8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965AC8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965AD4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965ADCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965AE0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965AE8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965AF0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965AF4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B4Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B58u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B60u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B64u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B74u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B80u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B88u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B8Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B94u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B9Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965BA0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965BF8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C04u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C0Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C10u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C20u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C2Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C34u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C38u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C40u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C48u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C4Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CA4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CB0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CB8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CBCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CCCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CD8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CE0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CE4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CF4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CF8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D50u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D5Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D64u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D68u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D78u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D84u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D8Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D90u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D98u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965DA0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965DA4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965DFCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965E08u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965E14u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965E40u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965E48u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965E54u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965E64u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965E90u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965EC0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965F54u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965F68u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965F88u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965FA4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965FC8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965FD4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965FE0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965FE8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966010u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896602Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966044u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966050u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966058u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896606Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089660FCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966108u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966124u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966134u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089661ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089661D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089661DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089661F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966204u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896620Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966224u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966238u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966248u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896624Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966254u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966258u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966268u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966278u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089662B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089662BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089662D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089662D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089662DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089662E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089662F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089662F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966300u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966304u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966310u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966318u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896631Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966324u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896632Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896633Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966344u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966354u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966358u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966360u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966370u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966378u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966380u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089663A0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089663ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089663B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089663BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089663CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089663D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089663FCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966404u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896640Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896642Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966460u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966464u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966488u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089664C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089664D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966500u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966518u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966520u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966534u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966540u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966548u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966554u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966558u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966568u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896656Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966574u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896657Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966584u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896658Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089665B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089665E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089665F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089665F4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966604u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896660Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966618u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896661Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896662Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966634u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896663Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896665Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966684u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896669Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089666A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089666B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089666D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089666E0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089666E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089666F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966720u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966728u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966730u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966738u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966740u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966748u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966764u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966770u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966784u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896678Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966794u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896679Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089667B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089667BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089667D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089667F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896680Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966824u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896682Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966834u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966844u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896684Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966850u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966858u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089668D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966920u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966944u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966954u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966964u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966984u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089669A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089669CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089669DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089669ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A0Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A10u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A28u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A54u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A64u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A74u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A94u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A98u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966AB0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966ADCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966AECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966AFCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B10u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B18u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B64u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B74u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966BA0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966BDCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966BE4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966BF4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966BFCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966C10u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966C3Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966C4Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966C58u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966C60u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966C74u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966C88u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966C9Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966CB0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966CC4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966CD8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966CECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966D00u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966D14u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966D28u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966D3Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966D50u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966D64u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966D78u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966D8Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966DA0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966DB4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966DC8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966DDCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966DF0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E04u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E18u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E2Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E40u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E54u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E68u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E7Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E90u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966EA4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966EB8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966ECCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966EE0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966EF4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F08u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F1Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F30u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F44u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F58u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F6Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F80u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F94u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966FA8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966FBCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966FD0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966FE4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966FF8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896700Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967020u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967034u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967048u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896705Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967070u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967084u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967098u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089670ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089670C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089670D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089670E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089670FCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967110u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967124u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896712Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967138u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967164u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896717Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967190u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967198u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089671A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089671D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089671DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089671E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089671ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896722Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967238u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967240u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967258u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967260u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967268u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967270u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967278u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967280u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967288u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089672B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089672C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089672E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967318u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967324u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896732Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967338u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967340u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896739Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089673A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089673ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089673C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089673F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967404u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967410u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896744Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967474u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089674A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089674D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967510u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896755Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967570u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967590u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089675BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089675DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089675E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089675ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967600u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967618u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967630u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967638u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967640u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967648u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089676C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089676D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967708u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967718u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967724u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896772Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967740u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967770u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089677C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967814u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896782Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896783Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967844u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896784Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967854u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896786Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896787Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967884u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896788Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967890u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089678D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089678F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896792Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967954u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967960u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967984u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967990u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089679A0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089679ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089679B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089679BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A3Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A44u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A4Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A60u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A78u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A80u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A8Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967AA0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967AC0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967AD8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967AFCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967B08u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967B28u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967BB0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C18u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C24u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C34u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C44u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C70u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C90u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C9Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967CACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967CBCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967D38u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967DB0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967DC4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967DDCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967DE4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967DF0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967DFCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E04u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E10u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E1Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E24u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E30u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E38u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E40u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E4Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E58u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E60u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E6Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E78u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E80u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E8Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E98u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967EA0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967EACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967EB8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967EC4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967EC8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967ED0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967EDCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967F00u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967F08u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967F10u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967F1Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967FB0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967FB8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967FBCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967FC8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967FD4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967FF8u, &recomp_unit_0088, "recomp_unit_0088");
}
} // namespace psprecomp
