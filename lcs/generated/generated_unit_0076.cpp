#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0076[4059] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0,
    0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 10, 0, 0, 11, 0, 0, 0, 12,
    0, 0, 13, 14, 15, 0, 16, 0, 17, 0, 0, 0, 18, 0, 0, 19, 20, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0,
    0, 25, 0, 26, 0, 27, 0, 28, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0,
    0, 0, 0, 0, 0, 38, 0, 39, 0, 40, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0,
    0, 45, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 52, 53, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 56, 0, 57, 0, 58, 0, 59, 0, 0, 60, 0, 0, 0,
    0, 61, 0, 62, 0, 63, 0, 64, 0, 0, 65, 66, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0,
    71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 78, 0, 79, 80, 0,
    0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 84, 0, 85, 86, 0, 0, 87, 0, 88, 0, 0, 89, 0, 0,
    0, 90, 0, 91, 0, 92, 0, 0, 0, 93, 0, 0, 94, 0, 95, 0, 0, 96, 0, 0, 0, 97, 0, 98, 0, 99, 100, 0, 0, 101, 0, 102,
    0, 0, 103, 0, 0, 0, 104, 0, 105, 0, 0, 0, 106, 0, 0, 107, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0,
    112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 116, 0, 117, 0, 0, 118, 0, 0, 119, 0, 120, 0, 0,
    121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0,
    0, 126, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0,
    0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 139, 0, 0, 0, 140, 0, 141, 0, 0, 0, 142, 0, 143, 0, 0, 0, 144,
    0, 145, 0, 0, 0, 146, 0, 147, 0, 148, 0, 0, 149, 0, 150, 151, 0, 0, 152, 0, 0, 153, 0, 0, 0, 154, 0, 155, 0, 156, 0, 157,
    0, 158, 0, 159, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 163, 0, 0, 164, 0, 165, 0, 166, 0, 0, 167, 0, 168, 169, 0, 0,
    170, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 174, 0, 175, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 180, 0, 181, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 0,
    0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0,
    0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 209, 0, 0, 0, 210, 0, 0, 0, 0, 211, 212, 0, 0, 0, 213, 0, 0,
    0, 0, 214, 215, 0, 0, 0, 216, 0, 0, 0, 0, 217, 218, 0, 0, 0, 219, 0, 0, 0, 0, 220, 221, 0, 0, 0, 222, 0, 0, 0, 0,
    223, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 229, 0, 0, 0, 230, 0, 0, 231,
    0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 234, 0, 235, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 243, 0, 244, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0,
    0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0,
    0, 0, 0, 254, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0,
    258, 0, 0, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 0, 261, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 266, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 279, 0, 0, 280, 0, 0, 281, 0, 0, 282, 0, 0, 283, 0, 0, 284, 0, 0,
    285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 0, 0, 289, 0, 290, 0, 0, 291, 0, 0, 292, 0, 0, 293, 0,
    0, 294, 0, 0, 295, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0,
    0, 0, 304, 0, 305, 0, 306, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0,
    0, 313, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 317, 0, 318, 0, 319, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0,
    322, 0, 323, 324, 0, 325, 0, 326, 0, 0, 0, 327, 0, 0, 328, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 332,
    0, 333, 0, 0, 334, 0, 0, 335, 0, 0, 0, 336, 0, 337, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0, 340, 0, 341, 342, 0, 0, 0, 343,
    0, 0, 344, 0, 0, 345, 0, 0, 0, 346, 0, 0, 347, 0, 0, 348, 0, 349, 0, 0, 350, 0, 0, 351, 0, 352, 0, 353, 0, 354, 0, 0,
    0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 359, 0, 360, 0, 361, 0, 362, 0,
    0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 365, 0, 366, 0, 0, 367, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 375, 0, 0, 0, 0,
    0, 376, 0, 0, 377, 0, 0, 378, 0, 0, 379, 0, 0, 380, 0, 0, 381, 0, 382, 0, 0, 383, 0, 384, 0, 385, 0, 386, 0, 387, 0, 0,
    388, 0, 389, 0, 390, 0, 0, 391, 0, 0, 392, 0, 393, 0, 394, 0, 0, 395, 0, 0, 396, 0, 0, 397, 0, 398, 0, 0, 399, 0, 0, 400,
    0, 0, 401, 0, 402, 0, 0, 403, 0, 0, 404, 0, 405, 0, 0, 406, 0, 407, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 410, 0, 411, 0, 412, 0, 0, 0, 0, 0, 413, 414, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 417, 0, 0, 418, 0, 0, 0, 419, 0, 420, 0, 421, 0, 422, 0, 0,
    423, 0, 424, 0, 425, 0, 426, 0, 0, 427, 0, 428, 0, 0, 0, 429, 0, 0, 430, 0, 431, 0, 0, 0, 432, 0, 0, 433, 0, 0, 434, 0,
    0, 435, 0, 0, 436, 0, 0, 437, 0, 438, 0, 439, 0, 0, 440, 0, 0, 0, 441, 0, 442, 0, 443, 0, 444, 0, 0, 445, 0, 0, 0, 446,
    0, 447, 0, 448, 0, 449, 0, 0, 450, 0, 451, 0, 452, 0, 453, 0, 454, 0, 455, 0, 0, 456, 0, 457, 0, 458, 0, 459, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 462, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 464, 0, 465, 0, 0, 466, 0, 0, 467, 0, 468, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 471, 0, 0, 472, 0, 0, 0, 473,
    0, 474, 0, 475, 0, 476, 0, 0, 477, 0, 478, 0, 479, 0, 480, 0, 0, 481, 0, 482, 0, 0, 0, 483, 0, 484, 0, 485, 0, 486, 0, 0,
    0, 487, 0, 0, 488, 0, 0, 489, 0, 0, 490, 0, 0, 491, 0, 0, 492, 0, 493, 0, 494, 0, 0, 495, 0, 0, 0, 496, 0, 497, 0, 498,
    0, 499, 0, 0, 500, 0, 0, 0, 501, 0, 502, 0, 503, 0, 504, 0, 0, 505, 0, 506, 0, 507, 0, 508, 0, 509, 0, 510, 0, 0, 511, 0,
    512, 0, 513, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 517, 0,
    0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 520, 0, 0, 521, 0, 0, 522, 0, 523, 0, 0, 524, 0, 0,
    525, 0, 526, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 532, 0, 0, 0, 533, 0, 0, 0, 0,
    0, 534, 0, 0, 0, 535, 0, 0, 0, 0, 0, 536, 0, 0, 0, 537, 0, 0, 0, 0, 0, 538, 539, 0, 0, 0, 0, 0, 0, 540, 0, 541,
    0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 543, 0, 0, 544, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 546, 0, 0, 547, 0, 0, 0, 0,
    0, 0, 0, 0, 548, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 551, 552, 0, 553, 0, 0, 0, 0, 0, 554, 0, 0,
    0, 555, 0, 0, 556, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0,
    0, 560, 561, 562, 0, 563, 0, 0, 0, 564, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0, 567, 568, 569, 0, 570, 0, 0, 0, 571, 0, 0,
    0, 572, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 574, 575, 576, 0, 577, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 579, 580, 581,
    0, 582, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 584, 585, 586, 0, 587, 0, 0, 0, 588, 0, 0, 0, 589, 0, 590, 591, 592, 0, 593,
    0, 0, 0, 0, 0, 594, 0, 0, 0, 595, 596, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0,
    0, 0, 0, 0, 0, 0, 599, 0, 0, 600, 0, 0, 601, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 604, 0,
    0, 605, 0, 606, 0, 0, 0, 0, 607, 0, 0, 0, 608, 0, 0, 609, 0, 610, 0, 0, 611, 0, 612, 0, 0, 0, 0, 613, 0, 614, 0, 0,
    0, 0, 615, 0, 0, 0, 616, 617, 0, 0, 618, 0, 619, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 624, 0, 0, 0, 625, 0, 0, 0,
    0, 0, 0, 0, 626, 0, 627, 628, 0, 0, 0, 629, 0, 0, 0, 0, 630, 0, 0, 631, 0, 0, 0, 632, 0, 0, 633, 0, 0, 634, 0, 635,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 637, 0, 0, 638, 0, 639, 0, 0, 0, 0, 640, 0, 0, 0, 641, 0, 0,
    642, 0, 643, 0, 0, 644, 0, 645, 0, 0, 0, 0, 646, 0, 647, 0, 0, 0, 0, 648, 0, 0, 0, 649, 650, 0, 0, 651, 0, 652, 0, 0,
    0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    656, 0, 0, 657, 0, 658, 0, 0, 0, 659, 660, 0, 0, 661, 0, 0, 0, 662, 0, 663, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 665,
    0, 666, 0, 0, 0, 0, 667, 0, 0, 0, 0, 668, 0, 0, 669, 0, 0, 670, 0, 671, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0,
    0, 673, 0, 0, 0, 674, 0, 0, 675, 0, 0, 0, 0, 676, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 678, 0, 0, 0, 679, 0, 0, 680,
    0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 683, 0, 0, 684, 0, 0, 0, 0, 0,
    0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 687,
    0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 689, 0, 0, 0, 690, 0, 0, 691, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 693, 0, 0, 0, 694, 0, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0, 697, 0, 0,
    0, 698, 0, 0, 699, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 0, 702, 0, 0, 703, 0, 0, 0, 0, 0, 0,
    704, 0, 0, 0, 0, 0, 705, 0, 0, 0, 706, 0, 0, 707, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 0, 710,
    0, 0, 711, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 713, 0, 0, 0, 714, 0, 0, 715, 0, 0, 0, 0, 0, 716, 0, 0, 0,
    0, 0, 0, 0, 717, 0, 0, 0, 718, 0, 0, 719, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 721, 0, 0, 0, 722, 0, 0, 723,
    0, 0, 0, 0, 0, 724, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 726, 0, 0, 727, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 728, 0, 0, 0, 0, 0, 729, 0, 0, 0, 730, 0, 0, 731, 0, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 0, 733, 0,
    0, 0, 734, 0, 0, 735, 0, 0, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 737, 0, 0, 0, 738, 0, 0, 739, 0, 0, 0, 0, 0, 740,
    0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 742, 0, 0, 743, 0, 0, 0, 0, 0, 0, 744, 0, 0, 0, 0, 0, 745, 0, 0, 0, 746,
    0, 0, 747, 0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 749, 0, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 752, 0, 0, 0, 0, 753, 0, 754, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 756, 0, 0, 0,
    0, 757, 0, 0, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0,
    0, 760, 0, 0, 761, 0, 0, 762, 0, 0, 763, 0, 0, 764, 0, 0, 765, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 0, 767, 0, 0, 768, 0, 0, 769, 0, 0, 770, 0, 0, 771, 0, 0, 772, 0, 0, 773, 0,
    0, 0, 0, 774, 0, 0, 775, 0, 0, 0, 0, 776, 0, 0, 777, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 0, 779, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 780, 0, 0, 0, 0, 0, 0, 781, 0, 0, 0, 0, 0, 0, 0, 0, 0, 782, 0, 783, 0, 0, 0, 784, 0, 785, 0, 786,
    0, 787, 0, 0, 0, 0, 788, 0, 0, 789, 0, 790, 0, 791, 0, 0, 0, 792, 0, 0, 793, 0, 794, 0, 0, 0, 795, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 796, 0, 0, 0, 797, 0, 798, 799, 800, 0, 0, 0, 801, 802, 0, 0, 0, 0, 0, 803, 0,
    0, 0, 0, 0, 804, 805, 806, 0, 0, 0, 807, 808, 0, 0, 0, 809, 0, 0, 0, 810, 0, 0, 0, 811, 0, 0, 0, 812, 813, 814, 0, 0,
    0, 815, 816, 0, 0, 0, 817, 818, 0, 0, 0, 0, 0, 819, 0, 0, 0, 0, 0, 820, 821, 822, 0, 0, 0, 823, 824, 0, 0, 0, 0, 0,
    825, 0, 0, 0, 0, 0, 826, 827, 828, 0, 0, 0, 829, 830, 0, 0, 0, 0, 0, 831, 0, 0, 0, 0, 0, 832, 833, 834, 0, 0, 0, 835,
    836, 0, 0, 0, 837, 838, 0, 0, 0, 839, 840, 0, 0, 0, 0, 0, 841, 842, 0, 0, 0, 843, 844, 0, 845, 0, 0, 0, 0, 846, 0, 847,
    848, 0, 0, 0, 0, 0, 0, 0, 0, 849, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 850, 0, 0, 851, 0, 0, 852, 0, 0, 853, 0, 0, 854, 0, 0, 855, 0, 0, 856, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 857, 0, 0, 858, 0, 0, 859, 0, 0, 860, 0, 0, 861, 0, 0, 862, 0, 0, 863, 0, 0,
    864, 0, 0, 0, 0, 0, 0, 0, 0, 0, 865, 0, 0, 866, 0, 0, 0, 0, 0, 0, 0, 0, 0, 867, 0, 0, 868,
};
void recomp_unit_0076_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08934000u;
        entry_id = (entry_delta < 16236u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0076[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08934000;
    case 2u: goto L_08934030;
    case 3u: goto L_089340E0;
    case 4u: goto L_089340F8;
    case 5u: goto L_08934108;
    case 6u: goto L_08934118;
    case 7u: goto L_0893412C;
    case 8u: goto L_0893413C;
    case 9u: goto L_0893415C;
    case 10u: goto L_08934160;
    case 11u: goto L_0893416C;
    case 12u: goto L_0893417C;
    case 13u: goto L_08934188;
    case 14u: goto L_0893418C;
    case 15u: goto L_08934190;
    case 16u: goto L_08934198;
    case 17u: goto L_089341A0;
    case 18u: goto L_089341B0;
    case 19u: goto L_089341BC;
    case 20u: goto L_089341C0;
    case 21u: goto L_089341C4;
    case 22u: goto L_089341CC;
    case 23u: goto L_089341EC;
    case 24u: goto L_089341F8;
    case 25u: goto L_08934204;
    case 26u: goto L_0893420C;
    case 27u: goto L_08934214;
    case 28u: goto L_0893421C;
    case 29u: goto L_08934224;
    case 30u: goto L_0893423C;
    case 31u: goto L_08934248;
    case 32u: goto L_08934250;
    case 33u: goto L_08934268;
    case 34u: goto L_08934290;
    case 35u: goto L_089342C8;
    case 36u: goto L_089342E0;
    case 37u: goto L_089342F4;
    case 38u: goto L_08934314;
    case 39u: goto L_0893431C;
    case 40u: goto L_08934324;
    case 41u: goto L_0893432C;
    case 42u: goto L_08934340;
    case 43u: goto L_08934370;
    case 44u: goto L_08934378;
    case 45u: goto L_08934384;
    case 46u: goto L_08934390;
    case 47u: goto L_089343A4;
    case 48u: goto L_089343C8;
    case 49u: goto L_089343D4;
    case 50u: goto L_089343E4;
    case 51u: goto L_089343EC;
    case 52u: goto L_0893441C;
    case 53u: goto L_08934420;
    case 54u: goto L_08934438;
    case 55u: goto L_08934444;
    case 56u: goto L_0893444C;
    case 57u: goto L_08934454;
    case 58u: goto L_0893445C;
    case 59u: goto L_08934464;
    case 60u: goto L_08934470;
    case 61u: goto L_08934484;
    case 62u: goto L_0893448C;
    case 63u: goto L_08934494;
    case 64u: goto L_0893449C;
    case 65u: goto L_089344A8;
    case 66u: goto L_089344AC;
    case 67u: goto L_089344B4;
    case 68u: goto L_089344BC;
    case 69u: goto L_089344E0;
    case 70u: goto L_089344EC;
    case 71u: goto L_08934500;
    case 72u: goto L_0893450C;
    case 73u: goto L_0893452C;
    case 74u: goto L_08934534;
    case 75u: goto L_08934540;
    case 76u: goto L_0893454C;
    case 77u: goto L_0893455C;
    case 78u: goto L_0893456C;
    case 79u: goto L_08934574;
    case 80u: goto L_08934578;
    case 81u: goto L_08934584;
    case 82u: goto L_089345AC;
    case 83u: goto L_089345B8;
    case 84u: goto L_089345C8;
    case 85u: goto L_089345D0;
    case 86u: goto L_089345D4;
    case 87u: goto L_089345E0;
    case 88u: goto L_089345E8;
    case 89u: goto L_089345F4;
    case 90u: goto L_08934604;
    case 91u: goto L_0893460C;
    case 92u: goto L_08934614;
    case 93u: goto L_08934624;
    case 94u: goto L_08934630;
    case 95u: goto L_08934638;
    case 96u: goto L_08934644;
    case 97u: goto L_08934654;
    case 98u: goto L_0893465C;
    case 99u: goto L_08934664;
    case 100u: goto L_08934668;
    case 101u: goto L_08934674;
    case 102u: goto L_0893467C;
    case 103u: goto L_08934688;
    case 104u: goto L_08934698;
    case 105u: goto L_089346A0;
    case 106u: goto L_089346B0;
    case 107u: goto L_089346BC;
    case 108u: goto L_089346C4;
    case 109u: goto L_089346CC;
    case 110u: goto L_089346E8;
    case 111u: goto L_089346F8;
    case 112u: goto L_08934700;
    case 113u: goto L_0893471C;
    case 114u: goto L_08934738;
    case 115u: goto L_08934744;
    case 116u: goto L_0893474C;
    case 117u: goto L_08934754;
    case 118u: goto L_08934760;
    case 119u: goto L_0893476C;
    case 120u: goto L_08934774;
    case 121u: goto L_08934780;
    case 122u: goto L_08934790;
    case 123u: goto L_089347C4;
    case 124u: goto L_089347E0;
    case 125u: goto L_089347F0;
    case 126u: goto L_08934804;
    case 127u: goto L_0893480C;
    case 128u: goto L_08934848;
    case 129u: goto L_08934854;
    case 130u: goto L_089348B8;
    case 131u: goto L_089348CC;
    case 132u: goto L_089348D4;
    case 133u: goto L_089348E0;
    case 134u: goto L_089348F8;
    case 135u: goto L_08934904;
    case 136u: goto L_08934910;
    case 137u: goto L_0893491C;
    case 138u: goto L_08934938;
    case 139u: goto L_0893493C;
    case 140u: goto L_0893494C;
    case 141u: goto L_08934954;
    case 142u: goto L_08934964;
    case 143u: goto L_0893496C;
    case 144u: goto L_0893497C;
    case 145u: goto L_08934984;
    case 146u: goto L_08934994;
    case 147u: goto L_0893499C;
    case 148u: goto L_089349A4;
    case 149u: goto L_089349B0;
    case 150u: goto L_089349B8;
    case 151u: goto L_089349BC;
    case 152u: goto L_089349C8;
    case 153u: goto L_089349D4;
    case 154u: goto L_089349E4;
    case 155u: goto L_089349EC;
    case 156u: goto L_089349F4;
    case 157u: goto L_089349FC;
    case 158u: goto L_08934A04;
    case 159u: goto L_08934A0C;
    case 160u: goto L_08934A14;
    case 161u: goto L_08934A1C;
    case 162u: goto L_08934A3C;
    case 163u: goto L_08934A40;
    case 164u: goto L_08934A4C;
    case 165u: goto L_08934A54;
    case 166u: goto L_08934A5C;
    case 167u: goto L_08934A68;
    case 168u: goto L_08934A70;
    case 169u: goto L_08934A74;
    case 170u: goto L_08934A80;
    case 171u: goto L_08934A8C;
    case 172u: goto L_08934A94;
    case 173u: goto L_08934AD0;
    case 174u: goto L_08934B14;
    case 175u: goto L_08934B1C;
    case 176u: goto L_08934B24;
    case 177u: goto L_08934B2C;
    case 178u: goto L_08934B48;
    case 179u: goto L_08934B60;
    case 180u: goto L_08934B68;
    case 181u: goto L_08934B70;
    case 182u: goto L_08934BA0;
    case 183u: goto L_08934BB0;
    case 184u: goto L_08934C20;
    case 185u: goto L_08934C34;
    case 186u: goto L_08934C40;
    case 187u: goto L_08934C5C;
    case 188u: goto L_08934C78;
    case 189u: goto L_08934CA0;
    case 190u: goto L_08934CAC;
    case 191u: goto L_08934CBC;
    case 192u: goto L_08934CC8;
    case 193u: goto L_08934CD4;
    case 194u: goto L_08934CE0;
    case 195u: goto L_08934CEC;
    case 196u: goto L_08934CF8;
    case 197u: goto L_08934D58;
    case 198u: goto L_08934D64;
    case 199u: goto L_08934D88;
    case 200u: goto L_08934DC4;
    case 201u: goto L_08934DD4;
    case 202u: goto L_08934DF0;
    case 203u: goto L_08934E40;
    case 204u: goto L_08934E54;
    case 205u: goto L_08934E70;
    case 206u: goto L_08934E84;
    case 207u: goto L_08934EA4;
    case 208u: goto L_08934EB8;
    case 209u: goto L_08934EBC;
    case 210u: goto L_08934ECC;
    case 211u: goto L_08934EE0;
    case 212u: goto L_08934EE4;
    case 213u: goto L_08934EF4;
    case 214u: goto L_08934F08;
    case 215u: goto L_08934F0C;
    case 216u: goto L_08934F1C;
    case 217u: goto L_08934F30;
    case 218u: goto L_08934F34;
    case 219u: goto L_08934F44;
    case 220u: goto L_08934F58;
    case 221u: goto L_08934F5C;
    case 222u: goto L_08934F6C;
    case 223u: goto L_08934F80;
    case 224u: goto L_08934F84;
    case 225u: goto L_08934F9C;
    case 226u: goto L_08934FB0;
    case 227u: goto L_08934FC8;
    case 228u: goto L_08934FD4;
    case 229u: goto L_08934FE0;
    case 230u: goto L_08934FF0;
    case 231u: goto L_08934FFC;
    case 232u: goto L_08935004;
    case 233u: goto L_08935044;
    case 234u: goto L_08935090;
    case 235u: goto L_08935098;
    case 236u: goto L_089350A0;
    case 237u: goto L_089350A8;
    case 238u: goto L_089350C4;
    case 239u: goto L_089350E8;
    case 240u: goto L_0893512C;
    case 241u: goto L_0893514C;
    case 242u: goto L_089351C0;
    case 243u: goto L_089351C8;
    case 244u: goto L_089351D0;
    case 245u: goto L_089351D8;
    case 246u: goto L_089351E8;
    case 247u: goto L_08935204;
    case 248u: goto L_08935210;
    case 249u: goto L_0893522C;
    case 250u: goto L_08935234;
    case 251u: goto L_08935244;
    case 252u: goto L_08935258;
    case 253u: goto L_08935274;
    case 254u: goto L_0893528C;
    case 255u: goto L_08935290;
    case 256u: goto L_08935354;
    case 257u: goto L_0893536C;
    case 258u: goto L_08935380;
    case 259u: goto L_08935398;
    case 260u: goto L_089353A0;
    case 261u: goto L_089353B8;
    case 262u: goto L_089353BC;
    case 263u: goto L_089353E4;
    case 264u: goto L_08935414;
    case 265u: goto L_08935434;
    case 266u: goto L_0893543C;
    case 267u: goto L_08935444;
    case 268u: goto L_08935454;
    case 269u: goto L_089354D8;
    case 270u: goto L_089354E8;
    case 271u: goto L_0893551C;
    case 272u: goto L_08935540;
    case 273u: goto L_08935594;
    case 274u: goto L_089355A0;
    case 275u: goto L_089355D8;
    case 276u: goto L_0893560C;
    case 277u: goto L_0893561C;
    case 278u: goto L_0893562C;
    case 279u: goto L_08935638;
    case 280u: goto L_08935644;
    case 281u: goto L_08935650;
    case 282u: goto L_0893565C;
    case 283u: goto L_08935668;
    case 284u: goto L_08935674;
    case 285u: goto L_08935680;
    case 286u: goto L_08935694;
    case 287u: goto L_089356AC;
    case 288u: goto L_089356B4;
    case 289u: goto L_089356CC;
    case 290u: goto L_089356D4;
    case 291u: goto L_089356E0;
    case 292u: goto L_089356EC;
    case 293u: goto L_089356F8;
    case 294u: goto L_08935704;
    case 295u: goto L_08935710;
    case 296u: goto L_0893571C;
    case 297u: goto L_08935728;
    case 298u: goto L_08935770;
    case 299u: goto L_08935804;
    case 300u: goto L_08935830;
    case 301u: goto L_0893584C;
    case 302u: goto L_08935868;
    case 303u: goto L_08935870;
    case 304u: goto L_08935888;
    case 305u: goto L_08935890;
    case 306u: goto L_08935898;
    case 307u: goto L_0893589C;
    case 308u: goto L_089358AC;
    case 309u: goto L_089358C8;
    case 310u: goto L_089358D4;
    case 311u: goto L_089358EC;
    case 312u: goto L_089358F8;
    case 313u: goto L_08935904;
    case 314u: goto L_08935910;
    case 315u: goto L_0893592C;
    case 316u: goto L_08935934;
    case 317u: goto L_08935944;
    case 318u: goto L_0893594C;
    case 319u: goto L_08935954;
    case 320u: goto L_0893595C;
    case 321u: goto L_08935968;
    case 322u: goto L_08935980;
    case 323u: goto L_08935988;
    case 324u: goto L_0893598C;
    case 325u: goto L_08935994;
    case 326u: goto L_0893599C;
    case 327u: goto L_089359AC;
    case 328u: goto L_089359B8;
    case 329u: goto L_089359C0;
    case 330u: goto L_089359D4;
    case 331u: goto L_089359F0;
    case 332u: goto L_089359FC;
    case 333u: goto L_08935A04;
    case 334u: goto L_08935A10;
    case 335u: goto L_08935A1C;
    case 336u: goto L_08935A2C;
    case 337u: goto L_08935A34;
    case 338u: goto L_08935A44;
    case 339u: goto L_08935A50;
    case 340u: goto L_08935A60;
    case 341u: goto L_08935A68;
    case 342u: goto L_08935A6C;
    case 343u: goto L_08935A7C;
    case 344u: goto L_08935A88;
    case 345u: goto L_08935A94;
    case 346u: goto L_08935AA4;
    case 347u: goto L_08935AB0;
    case 348u: goto L_08935ABC;
    case 349u: goto L_08935AC4;
    case 350u: goto L_08935AD0;
    case 351u: goto L_08935ADC;
    case 352u: goto L_08935AE4;
    case 353u: goto L_08935AEC;
    case 354u: goto L_08935AF4;
    case 355u: goto L_08935B0C;
    case 356u: goto L_08935B24;
    case 357u: goto L_08935B44;
    case 358u: goto L_08935B54;
    case 359u: goto L_08935B60;
    case 360u: goto L_08935B68;
    case 361u: goto L_08935B70;
    case 362u: goto L_08935B78;
    case 363u: goto L_08935B90;
    case 364u: goto L_08935BA8;
    case 365u: goto L_08935BB0;
    case 366u: goto L_08935BB8;
    case 367u: goto L_08935BC4;
    case 368u: goto L_08935BD0;
    case 369u: goto L_08935BE0;
    case 370u: goto L_08935C08;
    case 371u: goto L_08935C14;
    case 372u: goto L_08935C34;
    case 373u: goto L_08935C40;
    case 374u: goto L_08935C60;
    case 375u: goto L_08935C6C;
    case 376u: goto L_08935C84;
    case 377u: goto L_08935C90;
    case 378u: goto L_08935C9C;
    case 379u: goto L_08935CA8;
    case 380u: goto L_08935CB4;
    case 381u: goto L_08935CC0;
    case 382u: goto L_08935CC8;
    case 383u: goto L_08935CD4;
    case 384u: goto L_08935CDC;
    case 385u: goto L_08935CE4;
    case 386u: goto L_08935CEC;
    case 387u: goto L_08935CF4;
    case 388u: goto L_08935D00;
    case 389u: goto L_08935D08;
    case 390u: goto L_08935D10;
    case 391u: goto L_08935D1C;
    case 392u: goto L_08935D28;
    case 393u: goto L_08935D30;
    case 394u: goto L_08935D38;
    case 395u: goto L_08935D44;
    case 396u: goto L_08935D50;
    case 397u: goto L_08935D5C;
    case 398u: goto L_08935D64;
    case 399u: goto L_08935D70;
    case 400u: goto L_08935D7C;
    case 401u: goto L_08935D88;
    case 402u: goto L_08935D90;
    case 403u: goto L_08935D9C;
    case 404u: goto L_08935DA8;
    case 405u: goto L_08935DB0;
    case 406u: goto L_08935DBC;
    case 407u: goto L_08935DC4;
    case 408u: goto L_08935DC8;
    case 409u: goto L_08935DDC;
    case 410u: goto L_08935E08;
    case 411u: goto L_08935E10;
    case 412u: goto L_08935E18;
    case 413u: goto L_08935E30;
    case 414u: goto L_08935E34;
    case 415u: goto L_08935E40;
    case 416u: goto L_08935EB8;
    case 417u: goto L_08935EC0;
    case 418u: goto L_08935ECC;
    case 419u: goto L_08935EDC;
    case 420u: goto L_08935EE4;
    case 421u: goto L_08935EEC;
    case 422u: goto L_08935EF4;
    case 423u: goto L_08935F00;
    case 424u: goto L_08935F08;
    case 425u: goto L_08935F10;
    case 426u: goto L_08935F18;
    case 427u: goto L_08935F24;
    case 428u: goto L_08935F2C;
    case 429u: goto L_08935F3C;
    case 430u: goto L_08935F48;
    case 431u: goto L_08935F50;
    case 432u: goto L_08935F60;
    case 433u: goto L_08935F6C;
    case 434u: goto L_08935F78;
    case 435u: goto L_08935F84;
    case 436u: goto L_08935F90;
    case 437u: goto L_08935F9C;
    case 438u: goto L_08935FA4;
    case 439u: goto L_08935FAC;
    case 440u: goto L_08935FB8;
    case 441u: goto L_08935FC8;
    case 442u: goto L_08935FD0;
    case 443u: goto L_08935FD8;
    case 444u: goto L_08935FE0;
    case 445u: goto L_08935FEC;
    case 446u: goto L_08935FFC;
    case 447u: goto L_08936004;
    case 448u: goto L_0893600C;
    case 449u: goto L_08936014;
    case 450u: goto L_08936020;
    case 451u: goto L_08936028;
    case 452u: goto L_08936030;
    case 453u: goto L_08936038;
    case 454u: goto L_08936040;
    case 455u: goto L_08936048;
    case 456u: goto L_08936054;
    case 457u: goto L_0893605C;
    case 458u: goto L_08936064;
    case 459u: goto L_0893606C;
    case 460u: goto L_0893609C;
    case 461u: goto L_089360C8;
    case 462u: goto L_089360D4;
    case 463u: goto L_089360E8;
    case 464u: goto L_0893611C;
    case 465u: goto L_08936124;
    case 466u: goto L_08936130;
    case 467u: goto L_0893613C;
    case 468u: goto L_08936144;
    case 469u: goto L_08936160;
    case 470u: goto L_089361D8;
    case 471u: goto L_089361E0;
    case 472u: goto L_089361EC;
    case 473u: goto L_089361FC;
    case 474u: goto L_08936204;
    case 475u: goto L_0893620C;
    case 476u: goto L_08936214;
    case 477u: goto L_08936220;
    case 478u: goto L_08936228;
    case 479u: goto L_08936230;
    case 480u: goto L_08936238;
    case 481u: goto L_08936244;
    case 482u: goto L_0893624C;
    case 483u: goto L_0893625C;
    case 484u: goto L_08936264;
    case 485u: goto L_0893626C;
    case 486u: goto L_08936274;
    case 487u: goto L_08936284;
    case 488u: goto L_08936290;
    case 489u: goto L_0893629C;
    case 490u: goto L_089362A8;
    case 491u: goto L_089362B4;
    case 492u: goto L_089362C0;
    case 493u: goto L_089362C8;
    case 494u: goto L_089362D0;
    case 495u: goto L_089362DC;
    case 496u: goto L_089362EC;
    case 497u: goto L_089362F4;
    case 498u: goto L_089362FC;
    case 499u: goto L_08936304;
    case 500u: goto L_08936310;
    case 501u: goto L_08936320;
    case 502u: goto L_08936328;
    case 503u: goto L_08936330;
    case 504u: goto L_08936338;
    case 505u: goto L_08936344;
    case 506u: goto L_0893634C;
    case 507u: goto L_08936354;
    case 508u: goto L_0893635C;
    case 509u: goto L_08936364;
    case 510u: goto L_0893636C;
    case 511u: goto L_08936378;
    case 512u: goto L_08936380;
    case 513u: goto L_08936388;
    case 514u: goto L_08936390;
    case 515u: goto L_089363C0;
    case 516u: goto L_089363EC;
    case 517u: goto L_089363F8;
    case 518u: goto L_0893640C;
    case 519u: goto L_08936440;
    case 520u: goto L_08936448;
    case 521u: goto L_08936454;
    case 522u: goto L_08936460;
    case 523u: goto L_08936468;
    case 524u: goto L_08936474;
    case 525u: goto L_08936480;
    case 526u: goto L_08936488;
    case 527u: goto L_089364A4;
    case 528u: goto L_089364C0;
    case 529u: goto L_08936538;
    case 530u: goto L_08936590;
    case 531u: goto L_089365C4;
    case 532u: goto L_089365DC;
    case 533u: goto L_089365EC;
    case 534u: goto L_08936604;
    case 535u: goto L_08936614;
    case 536u: goto L_0893662C;
    case 537u: goto L_0893663C;
    case 538u: goto L_08936654;
    case 539u: goto L_08936658;
    case 540u: goto L_08936674;
    case 541u: goto L_0893667C;
    case 542u: goto L_0893669C;
    case 543u: goto L_089366A8;
    case 544u: goto L_089366B4;
    case 545u: goto L_089366C4;
    case 546u: goto L_089366E0;
    case 547u: goto L_089366EC;
    case 548u: goto L_08936710;
    case 549u: goto L_0893671C;
    case 550u: goto L_08936748;
    case 551u: goto L_08936750;
    case 552u: goto L_08936754;
    case 553u: goto L_0893675C;
    case 554u: goto L_08936774;
    case 555u: goto L_08936784;
    case 556u: goto L_08936790;
    case 557u: goto L_089367A4;
    case 558u: goto L_089367D4;
    case 559u: goto L_089367EC;
    case 560u: goto L_08936804;
    case 561u: goto L_08936808;
    case 562u: goto L_0893680C;
    case 563u: goto L_08936814;
    case 564u: goto L_08936824;
    case 565u: goto L_08936834;
    case 566u: goto L_08936844;
    case 567u: goto L_08936854;
    case 568u: goto L_08936858;
    case 569u: goto L_0893685C;
    case 570u: goto L_08936864;
    case 571u: goto L_08936874;
    case 572u: goto L_08936884;
    case 573u: goto L_0893689C;
    case 574u: goto L_089368B4;
    case 575u: goto L_089368B8;
    case 576u: goto L_089368BC;
    case 577u: goto L_089368C4;
    case 578u: goto L_089368DC;
    case 579u: goto L_089368F4;
    case 580u: goto L_089368F8;
    case 581u: goto L_089368FC;
    case 582u: goto L_08936904;
    case 583u: goto L_0893691C;
    case 584u: goto L_08936934;
    case 585u: goto L_08936938;
    case 586u: goto L_0893693C;
    case 587u: goto L_08936944;
    case 588u: goto L_08936954;
    case 589u: goto L_08936964;
    case 590u: goto L_0893696C;
    case 591u: goto L_08936970;
    case 592u: goto L_08936974;
    case 593u: goto L_0893697C;
    case 594u: goto L_08936994;
    case 595u: goto L_089369A4;
    case 596u: goto L_089369A8;
    case 597u: goto L_089369C8;
    case 598u: goto L_089369F4;
    case 599u: goto L_08936A18;
    case 600u: goto L_08936A24;
    case 601u: goto L_08936A30;
    case 602u: goto L_08936A38;
    case 603u: goto L_08936A68;
    case 604u: goto L_08936A78;
    case 605u: goto L_08936A84;
    case 606u: goto L_08936A8C;
    case 607u: goto L_08936AA0;
    case 608u: goto L_08936AB0;
    case 609u: goto L_08936ABC;
    case 610u: goto L_08936AC4;
    case 611u: goto L_08936AD0;
    case 612u: goto L_08936AD8;
    case 613u: goto L_08936AEC;
    case 614u: goto L_08936AF4;
    case 615u: goto L_08936B08;
    case 616u: goto L_08936B18;
    case 617u: goto L_08936B1C;
    case 618u: goto L_08936B28;
    case 619u: goto L_08936B30;
    case 620u: goto L_08936B44;
    case 621u: goto L_08936B70;
    case 622u: goto L_08936BAC;
    case 623u: goto L_08936BCC;
    case 624u: goto L_08936BE0;
    case 625u: goto L_08936BF0;
    case 626u: goto L_08936C10;
    case 627u: goto L_08936C18;
    case 628u: goto L_08936C1C;
    case 629u: goto L_08936C2C;
    case 630u: goto L_08936C40;
    case 631u: goto L_08936C4C;
    case 632u: goto L_08936C5C;
    case 633u: goto L_08936C68;
    case 634u: goto L_08936C74;
    case 635u: goto L_08936C7C;
    case 636u: goto L_08936CAC;
    case 637u: goto L_08936CBC;
    case 638u: goto L_08936CC8;
    case 639u: goto L_08936CD0;
    case 640u: goto L_08936CE4;
    case 641u: goto L_08936CF4;
    case 642u: goto L_08936D00;
    case 643u: goto L_08936D08;
    case 644u: goto L_08936D14;
    case 645u: goto L_08936D1C;
    case 646u: goto L_08936D30;
    case 647u: goto L_08936D38;
    case 648u: goto L_08936D4C;
    case 649u: goto L_08936D5C;
    case 650u: goto L_08936D60;
    case 651u: goto L_08936D6C;
    case 652u: goto L_08936D74;
    case 653u: goto L_08936D88;
    case 654u: goto L_08936DB4;
    case 655u: goto L_08936DD4;
    case 656u: goto L_08936E00;
    case 657u: goto L_08936E0C;
    case 658u: goto L_08936E14;
    case 659u: goto L_08936E24;
    case 660u: goto L_08936E28;
    case 661u: goto L_08936E34;
    case 662u: goto L_08936E44;
    case 663u: goto L_08936E4C;
    case 664u: goto L_08936E64;
    case 665u: goto L_08936E7C;
    case 666u: goto L_08936E84;
    case 667u: goto L_08936E98;
    case 668u: goto L_08936EAC;
    case 669u: goto L_08936EB8;
    case 670u: goto L_08936EC4;
    case 671u: goto L_08936ECC;
    case 672u: goto L_08936EE4;
    case 673u: goto L_08936F04;
    case 674u: goto L_08936F14;
    case 675u: goto L_08936F20;
    case 676u: goto L_08936F34;
    case 677u: goto L_08936F48;
    case 678u: goto L_08936F60;
    case 679u: goto L_08936F70;
    case 680u: goto L_08936F7C;
    case 681u: goto L_08936F94;
    case 682u: goto L_08936FCC;
    case 683u: goto L_08936FDC;
    case 684u: goto L_08936FE8;
    case 685u: goto L_08937004;
    case 686u: goto L_089370DC;
    case 687u: goto L_089370FC;
    case 688u: goto L_0893711C;
    case 689u: goto L_08937134;
    case 690u: goto L_08937144;
    case 691u: goto L_08937150;
    case 692u: goto L_08937168;
    case 693u: goto L_08937190;
    case 694u: goto L_089371A0;
    case 695u: goto L_089371AC;
    case 696u: goto L_089371DC;
    case 697u: goto L_089371F4;
    case 698u: goto L_08937204;
    case 699u: goto L_08937210;
    case 700u: goto L_08937228;
    case 701u: goto L_08937248;
    case 702u: goto L_08937258;
    case 703u: goto L_08937264;
    case 704u: goto L_08937280;
    case 705u: goto L_08937298;
    case 706u: goto L_089372A8;
    case 707u: goto L_089372B4;
    case 708u: goto L_089372CC;
    case 709u: goto L_089372EC;
    case 710u: goto L_089372FC;
    case 711u: goto L_08937308;
    case 712u: goto L_08937324;
    case 713u: goto L_0893733C;
    case 714u: goto L_0893734C;
    case 715u: goto L_08937358;
    case 716u: goto L_08937370;
    case 717u: goto L_08937390;
    case 718u: goto L_089373A0;
    case 719u: goto L_089373AC;
    case 720u: goto L_089373C8;
    case 721u: goto L_089373E0;
    case 722u: goto L_089373F0;
    case 723u: goto L_089373FC;
    case 724u: goto L_08937414;
    case 725u: goto L_08937434;
    case 726u: goto L_08937444;
    case 727u: goto L_08937450;
    case 728u: goto L_0893748C;
    case 729u: goto L_089374A4;
    case 730u: goto L_089374B4;
    case 731u: goto L_089374C0;
    case 732u: goto L_089374D8;
    case 733u: goto L_089374F8;
    case 734u: goto L_08937508;
    case 735u: goto L_08937514;
    case 736u: goto L_08937530;
    case 737u: goto L_08937548;
    case 738u: goto L_08937558;
    case 739u: goto L_08937564;
    case 740u: goto L_0893757C;
    case 741u: goto L_0893759C;
    case 742u: goto L_089375AC;
    case 743u: goto L_089375B8;
    case 744u: goto L_089375D4;
    case 745u: goto L_089375EC;
    case 746u: goto L_089375FC;
    case 747u: goto L_08937608;
    case 748u: goto L_08937620;
    case 749u: goto L_08937634;
    case 750u: goto L_08937640;
    case 751u: goto L_08937694;
    case 752u: goto L_089376A8;
    case 753u: goto L_089376BC;
    case 754u: goto L_089376C4;
    case 755u: goto L_089376D8;
    case 756u: goto L_089376F0;
    case 757u: goto L_08937704;
    case 758u: goto L_0893771C;
    case 759u: goto L_08937778;
    case 760u: goto L_08937784;
    case 761u: goto L_08937790;
    case 762u: goto L_0893779C;
    case 763u: goto L_089377A8;
    case 764u: goto L_089377B4;
    case 765u: goto L_089377C0;
    case 766u: goto L_08937824;
    case 767u: goto L_08937830;
    case 768u: goto L_0893783C;
    case 769u: goto L_08937848;
    case 770u: goto L_08937854;
    case 771u: goto L_08937860;
    case 772u: goto L_0893786C;
    case 773u: goto L_08937878;
    case 774u: goto L_0893788C;
    case 775u: goto L_08937898;
    case 776u: goto L_089378AC;
    case 777u: goto L_089378B8;
    case 778u: goto L_08937920;
    case 779u: goto L_0893792C;
    case 780u: goto L_08937990;
    case 781u: goto L_089379AC;
    case 782u: goto L_089379D4;
    case 783u: goto L_089379DC;
    case 784u: goto L_089379EC;
    case 785u: goto L_089379F4;
    case 786u: goto L_089379FC;
    case 787u: goto L_08937A04;
    case 788u: goto L_08937A18;
    case 789u: goto L_08937A24;
    case 790u: goto L_08937A2C;
    case 791u: goto L_08937A34;
    case 792u: goto L_08937A44;
    case 793u: goto L_08937A50;
    case 794u: goto L_08937A58;
    case 795u: goto L_08937A68;
    case 796u: goto L_08937AAC;
    case 797u: goto L_08937ABC;
    case 798u: goto L_08937AC4;
    case 799u: goto L_08937AC8;
    case 800u: goto L_08937ACC;
    case 801u: goto L_08937ADC;
    case 802u: goto L_08937AE0;
    case 803u: goto L_08937AF8;
    case 804u: goto L_08937B10;
    case 805u: goto L_08937B14;
    case 806u: goto L_08937B18;
    case 807u: goto L_08937B28;
    case 808u: goto L_08937B2C;
    case 809u: goto L_08937B3C;
    case 810u: goto L_08937B4C;
    case 811u: goto L_08937B5C;
    case 812u: goto L_08937B6C;
    case 813u: goto L_08937B70;
    case 814u: goto L_08937B74;
    case 815u: goto L_08937B84;
    case 816u: goto L_08937B88;
    case 817u: goto L_08937B98;
    case 818u: goto L_08937B9C;
    case 819u: goto L_08937BB4;
    case 820u: goto L_08937BCC;
    case 821u: goto L_08937BD0;
    case 822u: goto L_08937BD4;
    case 823u: goto L_08937BE4;
    case 824u: goto L_08937BE8;
    case 825u: goto L_08937C00;
    case 826u: goto L_08937C18;
    case 827u: goto L_08937C1C;
    case 828u: goto L_08937C20;
    case 829u: goto L_08937C30;
    case 830u: goto L_08937C34;
    case 831u: goto L_08937C4C;
    case 832u: goto L_08937C64;
    case 833u: goto L_08937C68;
    case 834u: goto L_08937C6C;
    case 835u: goto L_08937C7C;
    case 836u: goto L_08937C80;
    case 837u: goto L_08937C90;
    case 838u: goto L_08937C94;
    case 839u: goto L_08937CA4;
    case 840u: goto L_08937CA8;
    case 841u: goto L_08937CC0;
    case 842u: goto L_08937CC4;
    case 843u: goto L_08937CD4;
    case 844u: goto L_08937CD8;
    case 845u: goto L_08937CE0;
    case 846u: goto L_08937CF4;
    case 847u: goto L_08937CFC;
    case 848u: goto L_08937D00;
    case 849u: goto L_08937D24;
    case 850u: goto L_08937DA8;
    case 851u: goto L_08937DB4;
    case 852u: goto L_08937DC0;
    case 853u: goto L_08937DCC;
    case 854u: goto L_08937DD8;
    case 855u: goto L_08937DE4;
    case 856u: goto L_08937DF0;
    case 857u: goto L_08937EAC;
    case 858u: goto L_08937EB8;
    case 859u: goto L_08937EC4;
    case 860u: goto L_08937ED0;
    case 861u: goto L_08937EDC;
    case 862u: goto L_08937EE8;
    case 863u: goto L_08937EF4;
    case 864u: goto L_08937F00;
    case 865u: goto L_08937F28;
    case 866u: goto L_08937F34;
    case 867u: goto L_08937F5C;
    case 868u: goto L_08937F68;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08934000:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-8016)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-8016), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-8012), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934030:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-8046)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8047)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    ctx.gpr[18] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7180)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[30]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[30] = (2230u << 16u);
    ctx.gpr[23] = (0u | 4u);
    ctx.gpr[19] = (0u | 2u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[22] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08934160;
      }
      goto L_089340E0;
    }
L_089340E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(-7314))))));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(-7316), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934108;
      }
      goto L_089340F8;
    }
L_089340F8:
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(-7314), static_cast<std::uint16_t>(ctx.gpr[23]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(-7314))))));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(-7316), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08934160;
      }
      goto L_08934108;
    }
L_08934108:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-7184))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0893415C;
      }
      goto L_08934118;
    }
L_08934118:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7220)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    if (static_cast<std::int32_t>(ctx.gpr[5]) >= 0) {
    ctx.gpr[5] = (ctx.gpr[5] & 63u);
        goto L_0893413C;
    }
    goto L_0893412C;
L_0893412C:
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 63u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u - ctx.gpr[5]);
      if (branch_taken) {
          goto L_0893413C;
      }
      goto L_0893413C;
    }
L_0893413C:
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-31004));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7220), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(-7314), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08934160;
      }
      goto L_0893415C;
    }
L_0893415C:
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(-7314), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08934160;
L_08934160:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-7180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0893416Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x0893416Cu) goto L_0893416C;
    return;
L_0893416C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0893418C;
      }
      goto L_0893417C;
    }
L_0893417C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(98))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08934190;
      }
      goto L_08934188;
    }
L_08934188:
    ctx.gpr[5] = (0u | 1u);
    goto L_0893418C;
L_0893418C:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08934190;
L_08934190:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089341EC;
      }
      goto L_08934198;
    }
L_08934198:
    ctx.gpr[31] = (0x089341A0u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x089341A0u) goto L_089341A0;
    return;
L_089341A0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089341C0;
      }
      goto L_089341B0;
    }
L_089341B0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_089341C4;
      }
      goto L_089341BC;
    }
L_089341BC:
    ctx.gpr[5] = (0u | 1u);
    goto L_089341C0;
L_089341C0:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_089341C4;
L_089341C4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089341EC;
      }
      goto L_089341CC;
    }
L_089341CC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(-7314))))));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(-7314), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(-7314))))));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(-7316), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089341EC;
L_089341EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(-7314))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08934378;
      }
      goto L_089341F8;
    }
L_089341F8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(-7316))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08934378;
      }
      goto L_08934204;
    }
L_08934204:
    ctx.gpr[31] = (0x0893420Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 436u, 0x08ACA9D8u>(ctx, &aot_mem) && ctx.pc == 0x0893420Cu) goto L_0893420C;
    return;
L_0893420C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934378;
      }
      goto L_08934214;
    }
L_08934214:
    ctx.gpr[31] = (0x0893421Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 440u, 0x08ACAA00u>(ctx, &aot_mem) && ctx.pc == 0x0893421Cu) goto L_0893421C;
    return;
L_0893421C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08934378;
      }
      goto L_08934224;
    }
L_08934224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22640)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11240)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934378;
      }
      goto L_0893423C;
    }
L_0893423C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-6944)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934324;
      }
      goto L_08934248;
    }
L_08934248:
    ctx.gpr[31] = (0x08934250u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08934250u) goto L_08934250;
    return;
L_08934250:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
      if (branch_taken) {
          goto L_089342C8;
      }
      goto L_08934268;
    }
L_08934268:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-6944), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6940)));
    ctx.gpr[4] = (0u | 20u);
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[16] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[16] = (0u | 20u);
        goto L_08934290;
    }
    goto L_08934290;
L_08934290:
    ctx.gpr[4] = (0u | 20u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6936), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-6932), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7136), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08934384;
      }
      goto L_089342C8;
    }
L_089342C8:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6928)));
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(51) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934384;
      }
      goto L_089342E0;
    }
L_089342E0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[30]);
    ctx.gpr[30] = (2230u << 16u);
    ctx.gpr[30] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(-7136)));
    ctx.gpr[31] = (0x089342F4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089342F4u) goto L_089342F4;
    return;
L_089342F4:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7136), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7136)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_0893431C;
      }
      goto L_08934314;
    }
L_08934314:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6928), ctx.gpr[4]);
    goto L_0893431C;
L_0893431C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08934384;
      }
      goto L_08934324;
    }
L_08934324:
    ctx.gpr[31] = (0x0893432Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x0893432Cu) goto L_0893432C;
    return;
L_0893432C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08934370;
      }
      goto L_08934340;
    }
L_08934340:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-6944), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7136), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6940), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6928), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08934384;
      }
      goto L_08934370;
    }
L_08934370:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7136), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08934384;
      }
      goto L_08934378;
    }
L_08934378:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7136), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-6944), static_cast<std::uint8_t>(0u));
    goto L_08934384;
L_08934384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-6932)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_08934420;
      }
      goto L_08934390;
    }
L_08934390:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934420;
      }
      goto L_089343A4;
    }
L_089343A4:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6936)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8107));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-30872)));
      if (branch_taken) {
          goto L_089343D4;
      }
      goto L_089343C8;
    }
L_089343C8:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_089343D4;
L_089343D4:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x089343E4u);
    ctx.gpr[6] = (0u | 183u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x089343E4u) goto L_089343E4;
    return;
L_089343E4:
    ctx.gpr[31] = (0x089343ECu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x089343ECu) goto L_089343EC;
    return;
L_089343EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6936)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[31] = (0x0893441Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 656u, 0x08A96CF8u>(ctx, &aot_mem) && ctx.pc == 0x0893441Cu) goto L_0893441C;
    return;
L_0893441C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-6932), 0u);
    goto L_08934420;
L_08934420:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-7316))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(-7314))))));
    ctx.gpr[16] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[20] = (2230u << 16u);
      if (branch_taken) {
          goto L_0893444C;
      }
      goto L_08934438;
    }
L_08934438:
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893444C;
      }
      goto L_08934444;
    }
L_08934444:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08934484;
      }
      goto L_0893444C;
    }
L_0893444C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[19];
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_08934464;
      }
      goto L_08934454;
    }
L_08934454:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08934464;
      }
      goto L_0893445C;
    }
L_0893445C:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08934470;
      }
      goto L_08934464;
    }
L_08934464:
    ctx.gpr[8] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-8096), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_089344AC;
      }
      goto L_08934470;
    }
L_08934470:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7180)));
    ctx.gpr[8] = (2230u << 16u);
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-8096), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089344AC;
      }
      goto L_08934484;
    }
L_08934484:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[19];
    ctx.gpr[8] = (2230u << 16u);
      if (branch_taken) {
          goto L_0893449C;
      }
      goto L_0893448C;
    }
L_0893448C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893449C;
      }
      goto L_08934494;
    }
L_08934494:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089344A8;
      }
      goto L_0893449C;
    }
L_0893449C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7180)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-8096), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089344AC;
      }
      goto L_089344A8;
    }
L_089344A8:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-8096), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_089344AC;
L_089344AC:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[19];
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_089344BC;
      }
      goto L_089344B4;
    }
L_089344B4:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08934574;
      }
      goto L_089344BC;
    }
L_089344BC:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[7] = (16128u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] >> 14u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_089344EC;
      }
      goto L_089344E0;
    }
L_089344E0:
    ctx.gpr[7] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_089344EC;
L_089344EC:
    ctx.gpr[7] = (16040u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 62915u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_0893455C;
      }
      goto L_08934500;
    }
L_08934500:
    ctx.gpr[7] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0893455C;
      }
      goto L_0893450C;
    }
L_0893450C:
    ctx.gpr[7] = (16076u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7180)));
    ctx.gpr[7] = (ctx.gpr[7] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934534;
      }
      goto L_0893452C;
    }
L_0893452C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0893455C;
      }
      goto L_08934534;
    }
L_08934534:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0893454C;
      }
      goto L_08934540;
    }
L_08934540:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_0893454C;
L_0893454C:
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_0893455C;
L_0893455C:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934578;
      }
      goto L_0893456C;
    }
L_0893456C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08934578;
      }
      goto L_08934574;
    }
L_08934574:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08934578;
L_08934578:
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[22];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-8088), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089345D0;
      }
      goto L_08934584;
    }
L_08934584:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7180)));
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089345B8;
      }
      goto L_089345AC;
    }
L_089345AC:
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[13];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_089345B8;
L_089345B8:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089345D4;
      }
      goto L_089345C8;
    }
L_089345C8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_089345D4;
      }
      goto L_089345D0;
    }
L_089345D0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_089345D4;
L_089345D4:
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089345E8;
      }
      goto L_089345E0;
    }
L_089345E0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_089345F4;
      }
      goto L_089345E8;
    }
L_089345E8:
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7952), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08934604;
      }
      goto L_089345F4;
    }
L_089345F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7180)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7952), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08934604;
L_08934604:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934624;
      }
      goto L_0893460C;
    }
L_0893460C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08934624;
      }
      goto L_08934614;
    }
L_08934614:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7952)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7180)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7952), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08934624;
L_08934624:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08934644;
      }
      goto L_08934630;
    }
L_08934630:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08934644;
      }
      goto L_08934638;
    }
L_08934638:
    ctx.gpr[7] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-8084), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08934654;
      }
      goto L_08934644;
    }
L_08934644:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7180)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-8084), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08934654;
L_08934654:
    if (ctx.gpr[6] == ctx.gpr[5]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-8084)));
        goto L_08934668;
    }
    goto L_0893465C;
L_0893465C:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08934674;
      }
      goto L_08934664;
    }
L_08934664:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-8084)));
    goto L_08934668;
L_08934668:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7180)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-8084), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08934674;
L_08934674:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08934688;
      }
      goto L_0893467C;
    }
L_0893467C:
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7948), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08934698;
      }
      goto L_08934688;
    }
L_08934688:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7180)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7948), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08934698;
L_08934698:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_089346B0;
      }
      goto L_089346A0;
    }
L_089346A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7948)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7180)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7948), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089346B0;
L_089346B0:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08934744;
      }
      goto L_089346BC;
    }
L_089346BC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089346CC;
      }
      goto L_089346C4;
    }
L_089346C4:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08934744;
      }
      goto L_089346CC;
    }
L_089346CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7180)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934738;
      }
      goto L_089346E8;
    }
L_089346E8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-8048)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
      if (branch_taken) {
          goto L_08934738;
      }
      goto L_089346F8;
    }
L_089346F8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934738;
      }
      goto L_08934700;
    }
L_08934700:
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_0893471C;
    }
    goto L_0893471C;
L_0893471C:
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6952), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0893474C;
      }
      goto L_08934738;
    }
L_08934738:
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6952), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_0893474C;
      }
      goto L_08934744;
    }
L_08934744:
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6952), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_0893474C;
L_0893474C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08934760;
      }
      goto L_08934754;
    }
L_08934754:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-6948), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_0893476C;
      }
      goto L_08934760;
    }
L_08934760:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7180)));
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-6948), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0893476C;
L_0893476C:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08934780;
      }
      goto L_08934774;
    }
L_08934774:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7180)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-6948), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08934780;
L_08934780:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (2228u << 16u);
      if (branch_taken) {
          goto L_08934854;
      }
      goto L_08934790;
    }
L_08934790:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22640)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(11224)));
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (16608u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_089347C4;
    }
    goto L_089347C4;
L_089347C4:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-6948), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089347E0;
    }
    goto L_089347E0;
L_089347E0:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_089347F0;
    }
    goto L_089347F0;
L_089347F0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-6948), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1420)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934848;
      }
      goto L_08934804;
    }
L_08934804:
    ctx.gpr[31] = (0x0893480Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x0893480Cu) goto L_0893480C;
    return;
L_0893480C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 31u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15333u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 24642u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6948)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(-7314))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-7316))))));
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-6948), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08934848;
L_08934848:
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[5] = (2228u << 16u);
    goto L_08934854;
L_08934854:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31032));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7180)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.fpr[15] = ctx.fpr[24] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (2230u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[6] = (2230u << 16u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[16] = ctx.fpr[15] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-8096)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8088)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7256)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-8084)));
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[16]));
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-8048)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7968), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    if (!ctx.fpu_condition()) {
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
        goto L_089348B8;
    }
    goto L_089348B8;
L_089348B8:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7080), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089348D4;
      }
      goto L_089348CC;
    }
L_089348CC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-7368), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_0893493C;
      }
      goto L_089348D4;
    }
L_089348D4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089348F8;
      }
      goto L_089348E0;
    }
L_089348E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-8047)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[24] = ctx.fpr[24] / ctx.fpr[20];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-7368), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_0893493C;
      }
      goto L_089348F8;
    }
L_089348F8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934910;
      }
      goto L_08934904;
    }
L_08934904:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-7368), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_0893493C;
      }
      goto L_08934910;
    }
L_08934910:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934938;
      }
      goto L_0893491C;
    }
L_0893491C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-8047)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[20];
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[16];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-7368), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_0893493C;
      }
      goto L_08934938;
    }
L_08934938:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-7368), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_0893493C;
L_0893493C:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934954;
      }
      goto L_0893494C;
    }
L_0893494C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08934954;
      }
      goto L_08934954;
    }
L_08934954:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-7368), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0893496C;
      }
      goto L_08934964;
    }
L_08934964:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0893496C;
      }
      goto L_0893496C;
    }
L_0893496C:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-7368), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08934984;
      }
      goto L_0893497C;
    }
L_0893497C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08934984;
      }
      goto L_08934984;
    }
L_08934984:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-7368), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0893499C;
      }
      goto L_08934994;
    }
L_08934994:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0893499C;
      }
      goto L_0893499C;
    }
L_0893499C:
    ctx.gpr[31] = (0x089349A4u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-7368), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 610u, 0x08933404u>(ctx, &aot_mem) && ctx.pc == 0x089349A4u) goto L_089349A4;
    return;
L_089349A4:
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(-7314))))));
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089349BC;
      }
      goto L_089349B0;
    }
L_089349B0:
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08934A5C;
      }
      goto L_089349B8;
    }
L_089349B8:
    ctx.gpr[4] = (2230u << 16u);
    goto L_089349BC;
L_089349BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29520)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08934A5C;
      }
      goto L_089349C8;
    }
L_089349C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(679)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08934A5C;
      }
      goto L_089349D4;
    }
L_089349D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934A5C;
      }
      goto L_089349E4;
    }
L_089349E4:
    ctx.gpr[31] = (0x089349ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089349ECu) goto L_089349EC;
    return;
L_089349EC:
    ctx.gpr[31] = (0x089349F4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 173u, 0x089A0BDCu>(ctx, &aot_mem) && ctx.pc == 0x089349F4u) goto L_089349F4;
    return;
L_089349F4:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-8048)));
        goto L_08934A40;
    }
    goto L_089349FC;
L_089349FC:
    ctx.gpr[31] = (0x08934A04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08934A04u) goto L_08934A04;
    return;
L_08934A04:
    ctx.gpr[31] = (0x08934A0Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 173u, 0x089A0BDCu>(ctx, &aot_mem) && ctx.pc == 0x08934A0Cu) goto L_08934A0C;
    return;
L_08934A0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934A5C;
      }
      goto L_08934A14;
    }
L_08934A14:
    ctx.gpr[31] = (0x08934A1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08934A1Cu) goto L_08934A1C;
    return;
L_08934A1C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16624u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934A5C;
      }
      goto L_08934A3C;
    }
L_08934A3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-8048)));
    goto L_08934A40;
L_08934A40:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 18 ? 1u : 0u);
      if (branch_taken) {
          goto L_08934A5C;
      }
      goto L_08934A4C;
    }
L_08934A4C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934A5C;
      }
      goto L_08934A54;
    }
L_08934A54:
    ctx.gpr[31] = (0x08934A5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 658u, 0x089338FCu>(ctx, &aot_mem) && ctx.pc == 0x08934A5Cu) goto L_08934A5C;
    return;
L_08934A5C:
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(-7314))))));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08934A74;
      }
      goto L_08934A68;
    }
L_08934A68:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08934A94;
      }
      goto L_08934A70;
    }
L_08934A70:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08934A74;
L_08934A74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29520)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08934A94;
      }
      goto L_08934A80;
    }
L_08934A80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(679)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934A94;
      }
      goto L_08934A8C;
    }
L_08934A8C:
    ctx.gpr[31] = (0x08934A94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 659u, 0x08933904u>(ctx, &aot_mem) && ctx.pc == 0x08934A94u) goto L_08934A94;
    return;
L_08934A94:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934AD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[31]);
    ctx.gpr[31] = (0x08934B14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 436u, 0x08ACA9D8u>(ctx, &aot_mem) && ctx.pc == 0x08934B14u) goto L_08934B14;
    return;
L_08934B14:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934B68;
      }
      goto L_08934B1C;
    }
L_08934B1C:
    ctx.gpr[31] = (0x08934B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 440u, 0x08ACAA00u>(ctx, &aot_mem) && ctx.pc == 0x08934B24u) goto L_08934B24;
    return;
L_08934B24:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08934B68;
      }
      goto L_08934B2C;
    }
L_08934B2C:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22640)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11240)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934B68;
      }
      goto L_08934B48;
    }
L_08934B48:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7256)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (17352u << 16u);
      if (branch_taken) {
          goto L_08934B70;
      }
      goto L_08934B60;
    }
L_08934B60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935004;
      }
      goto L_08934B68;
    }
L_08934B68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935004;
      }
      goto L_08934B70;
    }
L_08934B70:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[16] = (0u | 400u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12960));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (2228u << 16u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 400 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
        goto L_08934BA0;
    }
    goto L_08934BA0;
L_08934BA0:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08934BB0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 276u, 0x08A7D7BCu>(ctx, &aot_mem) && ctx.pc == 0x08934BB0u) goto L_08934BB0;
    return;
L_08934BB0:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[12];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = ctx.fpr[17] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = ctx.fpr[18] + ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-30876)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08934CA0;
      }
      goto L_08934C20;
    }
L_08934C20:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(-30876), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[20] = (2231u << 16u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-24704));
    goto L_08934C34;
L_08934C34:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08934C40u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08934C40u) goto L_08934C40;
    return;
L_08934C40:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[31] = (0x08934C5Cu);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08934C5Cu) goto L_08934C5C;
    return;
L_08934C5C:
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[26];
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.gpr[31] = (0x08934C78u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08934C78u) goto L_08934C78;
    return;
L_08934C78:
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 400 ? 1u : 0u);
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08934C34;
      }
      goto L_08934CA0;
    }
L_08934CA0:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x08934CACu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08934CACu) goto L_08934CAC;
    return;
L_08934CAC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6904)));
    ctx.gpr[31] = (0x08934CBCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08934CBCu) goto L_08934CBC;
    return;
L_08934CBC:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08934CC8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08934CC8u) goto L_08934CC8;
    return;
L_08934CC8:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08934CD4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08934CD4u) goto L_08934CD4;
    return;
L_08934CD4:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08934CE0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08934CE0u) goto L_08934CE0;
    return;
L_08934CE0:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08934CECu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08934CECu) goto L_08934CEC;
    return;
L_08934CEC:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08934CF8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08934CF8u) goto L_08934CF8;
    return;
L_08934CF8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (57088u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(170));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (57473u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-32640));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (57856u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08934D58u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 489u, 0x08A05EE4u>(ctx, &aot_mem) && ctx.pc == 0x08934D58u) goto L_08934D58;
    return;
L_08934D58:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08934D64u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 526u, 0x08A06A14u>(ctx, &aot_mem) && ctx.pc == 0x08934D64u) goto L_08934D64;
    return;
L_08934D64:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_08934FC8;
      }
      goto L_08934D88;
    }
L_08934D88:
    ctx.gpr[19] = (2231u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-24704));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[21] = (ctx.gpr[19] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (2228u << 16u);
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-30864));
    goto L_08934DC4;
L_08934DC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[31] = (0x08934DD4u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08934DD4u) goto L_08934DD4;
    return;
L_08934DD4:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x08934DF0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08934DF0u) goto L_08934DF0;
    return;
L_08934DF0:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[18] = ctx.fpr[22] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[0] = ctx.fpr[17] + ctx.fpr[18];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08934E54;
      }
      goto L_08934E40;
    }
L_08934E40:
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[19]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
        goto L_08934E54;
    }
    goto L_08934E54;
L_08934E54:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934E84;
      }
      goto L_08934E70;
    }
L_08934E70:
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[19]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
        goto L_08934E84;
    }
    goto L_08934E84;
L_08934E84:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[19];
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[14]));
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
      if (branch_taken) {
          goto L_08934EBC;
      }
      goto L_08934EA4;
    }
L_08934EA4:
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[26];
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934EA4;
      }
      goto L_08934EB8;
    }
L_08934EB8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_08934EBC;
L_08934EBC:
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934EE4;
      }
      goto L_08934ECC;
    }
L_08934ECC:
    ctx.fpr[18] = ctx.fpr[18] - ctx.fpr[26];
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934ECC;
      }
      goto L_08934EE0;
    }
L_08934EE0:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_08934EE4;
L_08934EE4:
    ctx.set_fpu_condition((ctx.fpr[2] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934F0C;
      }
      goto L_08934EF4;
    }
L_08934EF4:
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[28];
    ctx.set_fpu_condition((ctx.fpr[2] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934EF4;
      }
      goto L_08934F08;
    }
L_08934F08:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    goto L_08934F0C;
L_08934F0C:
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934F34;
      }
      goto L_08934F1C;
    }
L_08934F1C:
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[28];
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934F1C;
      }
      goto L_08934F30;
    }
L_08934F30:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    goto L_08934F34;
L_08934F34:
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934F5C;
      }
      goto L_08934F44;
    }
L_08934F44:
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[28];
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934F44;
      }
      goto L_08934F58;
    }
L_08934F58:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_08934F5C;
L_08934F5C:
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934F84;
      }
      goto L_08934F6C;
    }
L_08934F6C:
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[28];
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934F6C;
      }
      goto L_08934F80;
    }
L_08934F80:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_08934F84;
L_08934F84:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08934F9Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 93u, 0x08868A90u>(ctx, &aot_mem) && ctx.pc == 0x08934F9Cu) goto L_08934F9C;
    return;
L_08934F9C:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08934FB0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 95u, 0x08868B08u>(ctx, &aot_mem) && ctx.pc == 0x08934FB0u) goto L_08934FB0;
    return;
L_08934FB0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08934DC4;
      }
      goto L_08934FC8;
    }
L_08934FC8:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08934FD4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08934FD4u) goto L_08934FD4;
    return;
L_08934FD4:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08934FE0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08934FE0u) goto L_08934FE0;
    return;
L_08934FE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935004;
      }
      goto L_08934FF0;
    }
L_08934FF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935004;
      }
      goto L_08934FFC;
    }
L_08934FFC:
    ctx.gpr[31] = (0x08935004u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08935004u) goto L_08935004;
    return;
L_08935004:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935044:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[31]);
    ctx.gpr[31] = (0x08935090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 436u, 0x08ACA9D8u>(ctx, &aot_mem) && ctx.pc == 0x08935090u) goto L_08935090;
    return;
L_08935090:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089351D0;
      }
      goto L_08935098;
    }
L_08935098:
    ctx.gpr[31] = (0x089350A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 440u, 0x08ACAA00u>(ctx, &aot_mem) && ctx.pc == 0x089350A0u) goto L_089350A0;
    return;
L_089350A0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (2229u << 16u);
      if (branch_taken) {
          goto L_089351D0;
      }
      goto L_089350A8;
    }
L_089350A8:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22640)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11240)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089351D0;
      }
      goto L_089350C4;
    }
L_089350C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8088)));
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7168)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089351C8;
      }
      goto L_089350E8;
    }
L_089350E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22640)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(11228)));
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (17024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (15488u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[20] = (2232u << 16u);
      if (branch_taken) {
          goto L_089351C0;
      }
      goto L_0893512C;
    }
L_0893512C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12960));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(276)));
    ctx.gpr[4] = (16352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089351C0;
      }
      goto L_0893514C;
    }
L_0893514C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8016), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8012), 0u);
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16800u << 16u);
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[30]));
    ctx.gpr[23] = (0u | 0u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31344));
      if (branch_taken) {
          goto L_089351D8;
      }
      goto L_089351C0;
    }
L_089351C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935728;
      }
      goto L_089351C8;
    }
L_089351C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935728;
      }
      goto L_089351D0;
    }
L_089351D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935728;
      }
      goto L_089351D8;
    }
L_089351D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (16512u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0893543C;
      }
      goto L_089351E8;
    }
L_089351E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_08935210;
      }
      goto L_08935204;
    }
L_08935204:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[13];
    goto L_08935210;
L_08935210:
    ctx.gpr[4] = (14976u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08935234;
      }
      goto L_0893522C;
    }
L_0893522C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
      if (branch_taken) {
          goto L_0893560C;
      }
      goto L_08935234;
    }
L_08935234:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08935258;
      }
      goto L_08935244;
    }
L_08935244:
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[28];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08935290;
      }
      goto L_08935258;
    }
L_08935258:
    ctx.gpr[4] = (16492u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893528C;
      }
      goto L_08935274;
    }
L_08935274:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[28];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08935290;
      }
      goto L_0893528C;
    }
L_0893528C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    goto L_08935290;
L_08935290:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08935354u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 675u, 0x08933B44u>(ctx, &aot_mem) && ctx.pc == 0x08935354u) goto L_08935354;
    return;
L_08935354:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16448u << 16u);
      if (branch_taken) {
          goto L_08935434;
      }
      goto L_0893536C;
    }
L_0893536C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08935434;
      }
      goto L_08935380;
    }
L_08935380:
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089353A0;
      }
      goto L_08935398;
    }
L_08935398:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_089353BC;
      }
      goto L_089353A0;
    }
L_089353A0:
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_089353BC;
    }
    goto L_089353B8;
L_089353B8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_089353BC;
L_089353BC:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089353E4u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089353E4u) goto L_089353E4;
    return;
L_089353E4:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (15523u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.gpr[4] = (ctx.gpr[4] & 31u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08935414u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08935414u) goto L_08935414;
    return;
L_08935414:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 31u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_08935434;
L_08935434:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893560C;
      }
      goto L_0893543C;
    }
L_0893543C:
    ctx.gpr[31] = (0x08935444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08935444u) goto L_08935444;
    return;
L_08935444:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 3840u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893560C;
      }
      goto L_08935454;
    }
L_08935454:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (16358u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (49472u << 16u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.gpr[4] = (16640u << 16u);
    ctx.fpr[14] = ctx.fpr[18] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[17];
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(679)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08935540;
      }
      goto L_089354D8;
    }
L_089354D8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089354E8u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 175u, 0x089D5818u>(ctx, &aot_mem) && ctx.pc == 0x089354E8u) goto L_089354E8;
    return;
L_089354E8:
    ctx.gpr[4] = (16230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17008u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[31] = (0x0893551Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 175u, 0x089D5818u>(ctx, &aot_mem) && ctx.pc == 0x0893551Cu) goto L_0893551C;
    return;
L_0893551C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
      if (branch_taken) {
          goto L_08935594;
      }
      goto L_08935540;
    }
L_08935540:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2416)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2420)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2424)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[18];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[12];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[19] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08935594;
L_08935594:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089355A0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089355A0u) goto L_089355A0;
    return;
L_089355A0:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-128));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[31] = (0x089355D8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089355D8u) goto L_089355D8;
    return;
L_089355D8:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-128));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    goto L_0893560C;
L_0893560C:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < 35 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_089351D8;
      }
      goto L_0893561C;
    }
L_0893561C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8016)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_0893571C;
      }
      goto L_0893562C;
    }
L_0893562C:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08935638u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08935638u) goto L_08935638;
    return;
L_08935638:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08935644u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08935644u) goto L_08935644;
    return;
L_08935644:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x08935650u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08935650u) goto L_08935650;
    return;
L_08935650:
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[31] = (0x0893565Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0893565Cu) goto L_0893565C;
    return;
L_0893565C:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08935668u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08935668u) goto L_08935668;
    return;
L_08935668:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08935674u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08935674u) goto L_08935674;
    return;
L_08935674:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08935680u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08935680u) goto L_08935680;
    return;
L_08935680:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6900)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08935694u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08935694u) goto L_08935694;
    return;
L_08935694:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8012)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x089356ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20144));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 50u, 0x08868570u>(ctx, &aot_mem) && ctx.pc == 0x089356ACu) goto L_089356AC;
    return;
L_089356AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089356D4;
      }
      goto L_089356B4;
    }
L_089356B4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8016)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x089356CCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-29008));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 71u, 0x0886886Cu>(ctx, &aot_mem) && ctx.pc == 0x089356CCu) goto L_089356CC;
    return;
L_089356CC:
    ctx.gpr[31] = (0x089356D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 70u, 0x08868854u>(ctx, &aot_mem) && ctx.pc == 0x089356D4u) goto L_089356D4;
    return;
L_089356D4:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x089356E0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089356E0u) goto L_089356E0;
    return;
L_089356E0:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x089356ECu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089356ECu) goto L_089356EC;
    return;
L_089356EC:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x089356F8u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089356F8u) goto L_089356F8;
    return;
L_089356F8:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08935704u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08935704u) goto L_08935704;
    return;
L_08935704:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x08935710u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08935710u) goto L_08935710;
    return;
L_08935710:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x0893571Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0893571Cu) goto L_0893571C;
    return;
L_0893571C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8016), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-8012), 0u);
    goto L_08935728;
L_08935728:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935770:
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31068)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2228u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-31072)));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2228u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-31044)));
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
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-31064), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2228u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-31056), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-31060), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31052), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31048), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-31040), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935804:
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
L_08935830:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30660)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08935890;
      }
      goto L_0893584C;
    }
L_0893584C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08935868u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29712));
    ctx.pc = 0x08B0BC24u;
    return;
L_08935868:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-30660), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08935898;
      }
      goto L_08935870;
    }
L_08935870:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30660)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29732));
    ctx.gpr[31] = (0x08935888u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30650));
    goto L_08935804;
L_08935888:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30660)));
      if (branch_taken) {
          goto L_0893589C;
      }
      goto L_08935890;
    }
L_08935890:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893589C;
      }
      goto L_08935898;
    }
L_08935898:
    ctx.gpr[2] = (0u | 0u);
    goto L_0893589C;
L_0893589C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089358AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30660)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089358C8u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BC3Cu;
    return;
L_089358C8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089358D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30660)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089358ECu);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B0BC34u;
    return;
L_089358EC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089358F8:
    ctx.gpr[4] = (2228u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-30652)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935904:
    ctx.gpr[4] = (2228u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-30651)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935910:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (9u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893599C;
      }
      goto L_0893592C;
    }
L_0893592C:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08935934;
L_08935934:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08935944u);
    ctx.gpr[7] = (0u | 1u);
    ctx.pc = 0x08B0B98Cu;
    return;
L_08935944:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893595C;
      }
      goto L_0893594C;
    }
L_0893594C:
    ctx.gpr[31] = (0x08935954u);
    ctx.gpr[4] = (0u | 50u);
    ctx.pc = 0x08B0BC14u;
    return;
L_08935954:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08935934;
      }
      goto L_0893595C;
    }
L_0893595C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08935968u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29756));
    goto L_08935804;
L_08935968:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-30652), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20932)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893598C;
      }
      goto L_08935980;
    }
L_08935980:
    ctx.gpr[31] = (0x08935988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08935988u) goto L_08935988;
    return;
L_08935988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20932)));
    goto L_0893598C;
L_0893598C:
    ctx.gpr[31] = (0x08935994u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 355u, 0x08A09760u>(ctx, &aot_mem) && ctx.pc == 0x08935994u) goto L_08935994;
    return;
L_08935994:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089359C0;
      }
      goto L_0893599C;
    }
L_0893599C:
    ctx.gpr[4] = (6u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089359C0;
      }
      goto L_089359AC;
    }
L_089359AC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x089359B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29772));
    goto L_08935804;
L_089359B8:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-30652), static_cast<std::uint8_t>(0u));
    goto L_089359C0;
L_089359C0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089359D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[5] & 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08935A04;
      }
      goto L_089359F0;
    }
L_089359F0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x089359FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29784));
    goto L_08935804;
L_089359FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935A7C;
      }
      goto L_08935A04;
    }
L_08935A04:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935A7C;
      }
      goto L_08935A10;
    }
L_08935A10:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08935A1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29796));
    goto L_08935804;
L_08935A1C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-30652)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935A34;
      }
      goto L_08935A2C;
    }
L_08935A2C:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-30651), static_cast<std::uint8_t>(0u));
    goto L_08935A34;
L_08935A34:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935A7C;
      }
      goto L_08935A44;
    }
L_08935A44:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08935A50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29808));
    goto L_08935804;
L_08935A50:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
        goto L_08935A6C;
    }
    goto L_08935A60;
L_08935A60:
    ctx.gpr[31] = (0x08935A68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08935A68u) goto L_08935A68;
    return;
L_08935A68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
    goto L_08935A6C;
L_08935A6C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08935A7C;
L_08935A7C:
    ctx.gpr[4] = (ctx.gpr[16] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935AA4;
      }
      goto L_08935A88;
    }
L_08935A88:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08935A94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29868));
    goto L_08935804;
L_08935A94:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2228u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-30651), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08935B0C;
      }
      goto L_08935AA4;
    }
L_08935AA4:
    ctx.gpr[4] = (ctx.gpr[16] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935AC4;
      }
      goto L_08935AB0;
    }
L_08935AB0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08935ABCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29880));
    goto L_08935804;
L_08935ABC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935B0C;
      }
      goto L_08935AC4;
    }
L_08935AC4:
    ctx.gpr[4] = (ctx.gpr[16] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935B0C;
      }
      goto L_08935AD0;
    }
L_08935AD0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08935ADCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29896));
    goto L_08935804;
L_08935ADC:
    ctx.gpr[31] = (0x08935AE4u);
    // nop
    ctx.pc = 0x08B0B884u;
    return;
L_08935AE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935B0C;
      }
      goto L_08935AEC;
    }
L_08935AEC:
    ctx.gpr[31] = (0x08935AF4u);
    // nop
    ctx.pc = 0x08B0B8ACu;
    return;
L_08935AF4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29732));
    ctx.gpr[31] = (0x08935B0Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30636));
    goto L_08935804;
L_08935B0C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935B24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(29916));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08935B44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08935804;
L_08935B44:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(29920));
    ctx.gpr[31] = (0x08935B54u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08935804;
L_08935B54:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08935B60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29944));
    goto L_08935804;
L_08935B60:
    ctx.gpr[31] = (0x08935B68u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08935804;
L_08935B68:
    ctx.gpr[31] = (0x08935B70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08935804;
L_08935B70:
    ctx.gpr[31] = (0x08935B78u);
    // nop
    ctx.pc = 0x08B0BD5Cu;
    return;
L_08935B78:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935B90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08935BA8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30672)));
    ctx.pc = 0x08B0B8BCu;
    return;
L_08935BA8:
    ctx.gpr[31] = (0x08935BB0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0B814u;
    return;
L_08935BB0:
    ctx.gpr[31] = (0x08935BB8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30672)));
    ctx.pc = 0x08B0BC84u;
    return;
L_08935BB8:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08935BC4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30668)));
    ctx.pc = 0x08B0BC84u;
    return;
L_08935BC4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08935BD0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30664)));
    ctx.pc = 0x08B0BC84u;
    return;
L_08935BD0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935BE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (2195u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29968));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08935C08u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22800));
    ctx.pc = 0x08B0BC7Cu;
    return;
L_08935C08:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08935DC4;
      }
      goto L_08935C14;
    }
L_08935C14:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30668), ctx.gpr[16]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (2195u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29984));
    ctx.gpr[31] = (0x08935C34u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22996));
    ctx.pc = 0x08B0BC7Cu;
    return;
L_08935C34:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08935DB0;
      }
      goto L_08935C40;
    }
L_08935C40:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30672), ctx.gpr[16]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (2195u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29996));
    ctx.gpr[31] = (0x08935C60u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23332));
    ctx.pc = 0x08B0BC7Cu;
    return;
L_08935C60:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08935D90;
      }
      goto L_08935C6C;
    }
L_08935C6C:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30664), ctx.gpr[16]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30668)));
    ctx.gpr[31] = (0x08935C84u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0B80Cu;
    return;
L_08935C84:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08935D64;
      }
      goto L_08935C90;
    }
L_08935C90:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08935C9Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30672)));
    ctx.pc = 0x08B0B8B4u;
    return;
L_08935C9C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08935D30;
      }
      goto L_08935CA8;
    }
L_08935CA8:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08935CB4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30664)));
    ctx.pc = 0x08B0BD64u;
    return;
L_08935CB4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08935CF4;
      }
      goto L_08935CC0;
    }
L_08935CC0:
    ctx.gpr[31] = (0x08935CC8u);
    // nop
    goto L_08935830;
L_08935CC8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08935CE4;
      }
      goto L_08935CD4;
    }
L_08935CD4:
    ctx.gpr[31] = (0x08935CDCu);
    ctx.gpr[4] = (0u | 10000u);
    ctx.pc = 0x08B0BC1Cu;
    return;
L_08935CDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935CD4;
      }
      goto L_08935CE4;
    }
L_08935CE4:
    ctx.gpr[31] = (0x08935CECu);
    // nop
    goto L_08935B90;
L_08935CEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08935DC8;
      }
      goto L_08935CF4;
    }
L_08935CF4:
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[31] = (0x08935D00u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30672)));
    ctx.pc = 0x08B0B8BCu;
    return;
L_08935D00:
    ctx.gpr[31] = (0x08935D08u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0B814u;
    return;
L_08935D08:
    ctx.gpr[31] = (0x08935D10u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30672)));
    ctx.pc = 0x08B0BC84u;
    return;
L_08935D10:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08935D1Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30668)));
    ctx.pc = 0x08B0BC84u;
    return;
L_08935D1C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08935D28u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30664)));
    ctx.pc = 0x08B0BC84u;
    return;
L_08935D28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08935DC8;
      }
      goto L_08935D30;
    }
L_08935D30:
    ctx.gpr[31] = (0x08935D38u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0B814u;
    return;
L_08935D38:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08935D44u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30672)));
    ctx.pc = 0x08B0BC84u;
    return;
L_08935D44:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08935D50u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30668)));
    ctx.pc = 0x08B0BC84u;
    return;
L_08935D50:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08935D5Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30664)));
    ctx.pc = 0x08B0BC84u;
    return;
L_08935D5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08935DC8;
      }
      goto L_08935D64;
    }
L_08935D64:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08935D70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30672)));
    ctx.pc = 0x08B0BC84u;
    return;
L_08935D70:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08935D7Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30668)));
    ctx.pc = 0x08B0BC84u;
    return;
L_08935D7C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08935D88u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30664)));
    ctx.pc = 0x08B0BC84u;
    return;
L_08935D88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08935DC8;
      }
      goto L_08935D90;
    }
L_08935D90:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08935D9Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30672)));
    ctx.pc = 0x08B0BC84u;
    return;
L_08935D9C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08935DA8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30668)));
    ctx.pc = 0x08B0BC84u;
    return;
L_08935DA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08935DC8;
      }
      goto L_08935DB0;
    }
L_08935DB0:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08935DBCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30668)));
    ctx.pc = 0x08B0BC84u;
    return;
L_08935DBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08935DC8;
      }
      goto L_08935DC4;
    }
L_08935DC4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08935DC8;
L_08935DC8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935DDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (2195u << 16u);
    ctx.gpr[6] = (0u | 111u);
    ctx.gpr[7] = (0u | 4096u);
    ctx.gpr[8] = (0u | 16384u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30012));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08935E08u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23520));
    ctx.pc = 0x08B0BBA4u;
    return;
L_08935E08:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08935E18;
      }
      goto L_08935E10;
    }
L_08935E10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935E34;
      }
      goto L_08935E18;
    }
L_08935E18:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30656), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08935E30u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BBACu;
    return;
L_08935E30:
    ctx.gpr[2] = (0u | 0u);
    goto L_08935E34;
L_08935E34:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935E40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[18] = (2225u << 16u);
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[30] = (32770u << 16u);
    ctx.gpr[23] = (32769u << 16u);
    ctx.gpr[22] = (2225u << 16u);
    ctx.gpr[21] = (2225u << 16u);
    ctx.gpr[20] = (32801u << 16u);
    ctx.gpr[19] = (32801u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(30024));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-30620));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-20479));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(91));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(30088));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(30048));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    goto L_08935EB8;
L_08935EB8:
    ctx.gpr[31] = (0x08935EC0u);
    // nop
    ctx.pc = 0x08B0B8A4u;
    return;
L_08935EC0:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935F10;
      }
      goto L_08935ECC;
    }
L_08935ECC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08935EDCu);
    ctx.gpr[6] = (0u | 466u);
    goto L_08935804;
L_08935EDC:
    ctx.gpr[31] = (0x08935EE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 595u, 0x08AB35BCu>(ctx, &aot_mem) && ctx.pc == 0x08935EE4u) goto L_08935EE4;
    return;
L_08935EE4:
    ctx.gpr[31] = (0x08935EECu);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BB44u;
    return;
L_08935EEC:
    ctx.gpr[31] = (0x08935EF4u);
    ctx.gpr[4] = (0u | 32u);
    ctx.pc = 0x08B0B894u;
    return;
L_08935EF4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08935F08;
      }
      goto L_08935F00;
    }
L_08935F00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0893606C;
      }
      goto L_08935F08;
    }
L_08935F08:
    ctx.gpr[31] = (0x08935F10u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BB4Cu;
    return;
L_08935F10:
    ctx.gpr[31] = (0x08935F18u);
    // nop
    goto L_089358AC;
L_08935F18:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08935F2C;
      }
      goto L_08935F24;
    }
L_08935F24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935F00;
      }
      goto L_08935F2C;
    }
L_08935F2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08935F3Cu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.pc = 0x08B0BD7Cu;
    return;
L_08935F3C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08935F50;
      }
      goto L_08935F48;
    }
L_08935F48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935F00;
      }
      goto L_08935F50;
    }
L_08935F50:
    ctx.gpr[4] = (32769u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (32769u << 16u);
      if (branch_taken) {
          goto L_08935FAC;
      }
      goto L_08935F60;
    }
L_08935F60:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (32769u << 16u);
      if (branch_taken) {
          goto L_08935FAC;
      }
      goto L_08935F6C;
    }
L_08935F6C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (32770u << 16u);
      if (branch_taken) {
          goto L_08935FAC;
      }
      goto L_08935F78;
    }
L_08935F78:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20477));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (32769u << 16u);
      if (branch_taken) {
          goto L_08935FAC;
      }
      goto L_08935F84;
    }
L_08935F84:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (32801u << 16u);
      if (branch_taken) {
          goto L_08935FAC;
      }
      goto L_08935F90;
    }
L_08935F90:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08935FAC;
      }
      goto L_08935F9C;
    }
L_08935F9C:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08935FAC;
      }
      goto L_08935FA4;
    }
L_08935FA4:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08935FB8;
      }
      goto L_08935FAC;
    }
L_08935FAC:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08935FB8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08935804;
L_08935FB8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08935FC8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08935804;
L_08935FC8:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08935FEC;
      }
      goto L_08935FD0;
    }
L_08935FD0:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08935FEC;
      }
      goto L_08935FD8;
    }
L_08935FD8:
    ctx.gpr[31] = (0x08935FE0u);
    // nop
    ctx.pc = 0x08B0B8A4u;
    return;
L_08935FE0:
    ctx.gpr[4] = (ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936030;
      }
      goto L_08935FEC;
    }
L_08935FEC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08935FFCu);
    ctx.gpr[6] = (0u | 515u);
    goto L_08935804;
L_08935FFC:
    ctx.gpr[31] = (0x08936004u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 595u, 0x08AB35BCu>(ctx, &aot_mem) && ctx.pc == 0x08936004u) goto L_08936004;
    return;
L_08936004:
    ctx.gpr[31] = (0x0893600Cu);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BB44u;
    return;
L_0893600C:
    ctx.gpr[31] = (0x08936014u);
    ctx.gpr[4] = (0u | 2u);
    ctx.pc = 0x08B0B894u;
    return;
L_08936014:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08936028;
      }
      goto L_08936020;
    }
L_08936020:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935F00;
      }
      goto L_08936028;
    }
L_08936028:
    ctx.gpr[31] = (0x08936030u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BB4Cu;
    return;
L_08936030:
    ctx.gpr[31] = (0x08936038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 595u, 0x08AB35BCu>(ctx, &aot_mem) && ctx.pc == 0x08936038u) goto L_08936038;
    return;
L_08936038:
    ctx.gpr[31] = (0x08936040u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BB44u;
    return;
L_08936040:
    ctx.gpr[31] = (0x08936048u);
    ctx.gpr[4] = (0u | 32u);
    ctx.pc = 0x08B0B894u;
    return;
L_08936048:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0893605C;
      }
      goto L_08936054;
    }
L_08936054:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935F00;
      }
      goto L_0893605C;
    }
L_0893605C:
    ctx.gpr[31] = (0x08936064u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BB4Cu;
    return;
L_08936064:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935EB8;
      }
      goto L_0893606C;
    }
L_0893606C:
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
L_0893609C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x089360C8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_089358AC;
L_089360C8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08936130;
      }
      goto L_089360D4;
    }
L_089360D4:
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089360E8u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B0BD94u;
    return;
L_089360E8:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30596)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30600)));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] ^ ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893613C;
      }
      goto L_0893611C;
    }
L_0893611C:
    ctx.gpr[31] = (0x08936124u);
    // nop
    goto L_089358D4;
L_08936124:
    ctx.gpr[3] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08936144;
      }
      goto L_08936130;
    }
L_08936130:
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08936144;
      }
      goto L_0893613C;
    }
L_0893613C:
    ctx.gpr[3] = (ctx.gpr[17] | 0u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08936144;
L_08936144:
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
L_08936160:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[18] = (2225u << 16u);
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[30] = (32770u << 16u);
    ctx.gpr[23] = (32769u << 16u);
    ctx.gpr[22] = (2225u << 16u);
    ctx.gpr[21] = (2225u << 16u);
    ctx.gpr[20] = (32801u << 16u);
    ctx.gpr[19] = (32801u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(30024));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-30583));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-20479));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(91));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(30088));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(30048));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    goto L_089361D8;
L_089361D8:
    ctx.gpr[31] = (0x089361E0u);
    // nop
    ctx.pc = 0x08B0B8A4u;
    return;
L_089361E0:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08936230;
      }
      goto L_089361EC;
    }
L_089361EC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089361FCu);
    ctx.gpr[6] = (0u | 864u);
    goto L_08935804;
L_089361FC:
    ctx.gpr[31] = (0x08936204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 595u, 0x08AB35BCu>(ctx, &aot_mem) && ctx.pc == 0x08936204u) goto L_08936204;
    return;
L_08936204:
    ctx.gpr[31] = (0x0893620Cu);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BB44u;
    return;
L_0893620C:
    ctx.gpr[31] = (0x08936214u);
    ctx.gpr[4] = (0u | 32u);
    ctx.pc = 0x08B0B894u;
    return;
L_08936214:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08936228;
      }
      goto L_08936220;
    }
L_08936220:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08936390;
      }
      goto L_08936228;
    }
L_08936228:
    ctx.gpr[31] = (0x08936230u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BB4Cu;
    return;
L_08936230:
    ctx.gpr[31] = (0x08936238u);
    // nop
    goto L_089358AC;
L_08936238:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0893624C;
      }
      goto L_08936244;
    }
L_08936244:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08936220;
      }
      goto L_0893624C;
    }
L_0893624C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x0893625Cu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.pc = 0x08B0BD74u;
    return;
L_0893625C:
    ctx.gpr[31] = (0x08936264u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_089358D4;
L_08936264:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08936274;
      }
      goto L_0893626C;
    }
L_0893626C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08936220;
      }
      goto L_08936274;
    }
L_08936274:
    ctx.gpr[4] = (32769u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (32769u << 16u);
      if (branch_taken) {
          goto L_089362D0;
      }
      goto L_08936284;
    }
L_08936284:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (32769u << 16u);
      if (branch_taken) {
          goto L_089362D0;
      }
      goto L_08936290;
    }
L_08936290:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (32770u << 16u);
      if (branch_taken) {
          goto L_089362D0;
      }
      goto L_0893629C;
    }
L_0893629C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20477));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (32769u << 16u);
      if (branch_taken) {
          goto L_089362D0;
      }
      goto L_089362A8;
    }
L_089362A8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (32801u << 16u);
      if (branch_taken) {
          goto L_089362D0;
      }
      goto L_089362B4;
    }
L_089362B4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089362D0;
      }
      goto L_089362C0;
    }
L_089362C0:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_089362D0;
      }
      goto L_089362C8;
    }
L_089362C8:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_089362DC;
      }
      goto L_089362D0;
    }
L_089362D0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089362DCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08935804;
L_089362DC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089362ECu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08935804;
L_089362EC:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08936310;
      }
      goto L_089362F4;
    }
L_089362F4:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08936310;
      }
      goto L_089362FC;
    }
L_089362FC:
    ctx.gpr[31] = (0x08936304u);
    // nop
    ctx.pc = 0x08B0B8A4u;
    return;
L_08936304:
    ctx.gpr[4] = (ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936354;
      }
      goto L_08936310;
    }
L_08936310:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08936320u);
    ctx.gpr[6] = (0u | 913u);
    goto L_08935804;
L_08936320:
    ctx.gpr[31] = (0x08936328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 595u, 0x08AB35BCu>(ctx, &aot_mem) && ctx.pc == 0x08936328u) goto L_08936328;
    return;
L_08936328:
    ctx.gpr[31] = (0x08936330u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BB44u;
    return;
L_08936330:
    ctx.gpr[31] = (0x08936338u);
    ctx.gpr[4] = (0u | 2u);
    ctx.pc = 0x08B0B894u;
    return;
L_08936338:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0893634C;
      }
      goto L_08936344;
    }
L_08936344:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08936220;
      }
      goto L_0893634C;
    }
L_0893634C:
    ctx.gpr[31] = (0x08936354u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BB4Cu;
    return;
L_08936354:
    ctx.gpr[31] = (0x0893635Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 595u, 0x08AB35BCu>(ctx, &aot_mem) && ctx.pc == 0x0893635Cu) goto L_0893635C;
    return;
L_0893635C:
    ctx.gpr[31] = (0x08936364u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BB44u;
    return;
L_08936364:
    ctx.gpr[31] = (0x0893636Cu);
    ctx.gpr[4] = (0u | 32u);
    ctx.pc = 0x08B0B894u;
    return;
L_0893636C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08936380;
      }
      goto L_08936378;
    }
L_08936378:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08936220;
      }
      goto L_08936380;
    }
L_08936380:
    ctx.gpr[31] = (0x08936388u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BB4Cu;
    return;
L_08936388:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089361D8;
      }
      goto L_08936390;
    }
L_08936390:
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
L_089363C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x089363ECu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_089358AC;
L_089363EC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08936474;
      }
      goto L_089363F8;
    }
L_089363F8:
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0893640Cu);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B0BD8Cu;
    return;
L_0893640C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30596)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30600)));
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] ^ ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08936460;
      }
      goto L_08936440;
    }
L_08936440:
    ctx.gpr[31] = (0x08936448u);
    // nop
    goto L_089358D4;
L_08936448:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08936480;
      }
      goto L_08936454;
    }
L_08936454:
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08936488;
      }
      goto L_08936460;
    }
L_08936460:
    ctx.gpr[31] = (0x08936468u);
    // nop
    goto L_089358D4;
L_08936468:
    ctx.gpr[3] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08936488;
      }
      goto L_08936474;
    }
L_08936474:
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08936488;
      }
      goto L_08936480;
    }
L_08936480:
    ctx.gpr[3] = (ctx.gpr[17] | 0u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08936488;
L_08936488:
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
L_089364A4:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089364C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21288));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (16179u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (16204u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08936538u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08936538u) goto L_08936538;
    return;
L_08936538:
    ctx.gpr[4] = (0u | 640u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936590:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_089365DC;
      }
      goto L_089365C4;
    }
L_089365C4:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
        goto L_08936658;
    }
    goto L_089365DC;
L_089365DC:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08936604;
      }
      goto L_089365EC;
    }
L_089365EC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
        goto L_08936658;
    }
    goto L_08936604;
L_08936604:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893662C;
      }
      goto L_08936614;
    }
L_08936614:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
        goto L_08936658;
    }
    goto L_0893662C;
L_0893662C:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08936674;
      }
      goto L_0893663C;
    }
L_0893663C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08936674;
      }
      goto L_08936654;
    }
L_08936654:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    goto L_08936658;
L_08936658:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08936674;
L_08936674:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893667C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x0893669Cu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 21u, 0x0893828Cu>(ctx, &aot_mem) && ctx.pc == 0x0893669Cu) goto L_0893669C;
    return;
L_0893669C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089366B4;
      }
      goto L_089366A8;
    }
L_089366A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936754;
      }
      goto L_089366B4;
    }
L_089366B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089366C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 665u, 0x08AA31B4u>(ctx, &aot_mem) && ctx.pc == 0x089366C4u) goto L_089366C4;
    return;
L_089366C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089366E0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x089366E0u) goto L_089366E0;
    return;
L_089366E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x089366ECu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A542E8u>(ctx, &aot_mem) && ctx.pc == 0x089366ECu) goto L_089366EC;
    return;
L_089366EC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) >= 0;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0893671C;
      }
      goto L_08936710;
    }
L_08936710:
    ctx.gpr[9] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0893671C;
L_0893671C:
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    ctx.gpr[10] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[11] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[11] | 0u);
    ctx.gpr[31] = (0x08936748u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 277u, 0x08A55444u>(ctx, &aot_mem) && ctx.pc == 0x08936748u) goto L_08936748;
    return;
L_08936748:
    ctx.gpr[31] = (0x08936750u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 669u, 0x08AA31FCu>(ctx, &aot_mem) && ctx.pc == 0x08936750u) goto L_08936750;
    return;
L_08936750:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    goto L_08936754;
L_08936754:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08936774;
      }
      goto L_0893675C;
    }
L_0893675C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08936774;
L_08936774:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08936790;
      }
      goto L_08936784;
    }
L_08936784:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08936790u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08936790u) goto L_08936790;
    return;
L_08936790:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089367A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089369A8;
      }
      goto L_089367D4;
    }
L_089367D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08936808;
      }
      goto L_089367EC;
    }
L_089367EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0893680C;
      }
      goto L_08936804;
    }
L_08936804:
    ctx.gpr[4] = (0u | 1u);
    goto L_08936808;
L_08936808:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0893680C;
L_0893680C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089369A8;
      }
      goto L_08936814;
    }
L_08936814:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08936858;
      }
      goto L_08936824;
    }
L_08936824:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(25)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_0893685C;
    }
    goto L_08936834;
L_08936834:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(26)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(26)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_0893685C;
    }
    goto L_08936844;
L_08936844:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(27)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0893685C;
      }
      goto L_08936854;
    }
L_08936854:
    ctx.gpr[4] = (0u | 1u);
    goto L_08936858;
L_08936858:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0893685C;
L_0893685C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089369A8;
      }
      goto L_08936864;
    }
L_08936864:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089369A8;
      }
      goto L_08936874;
    }
L_08936874:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089369A8;
      }
      goto L_08936884;
    }
L_08936884:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089368B8;
      }
      goto L_0893689C;
    }
L_0893689C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089368BC;
      }
      goto L_089368B4;
    }
L_089368B4:
    ctx.gpr[4] = (0u | 1u);
    goto L_089368B8;
L_089368B8:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089368BC;
L_089368BC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089369A8;
      }
      goto L_089368C4;
    }
L_089368C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089368F8;
      }
      goto L_089368DC;
    }
L_089368DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089368FC;
      }
      goto L_089368F4;
    }
L_089368F4:
    ctx.gpr[4] = (0u | 1u);
    goto L_089368F8;
L_089368F8:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089368FC;
L_089368FC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089369A8;
      }
      goto L_08936904;
    }
L_08936904:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08936938;
      }
      goto L_0893691C;
    }
L_0893691C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0893693C;
      }
      goto L_08936934;
    }
L_08936934:
    ctx.gpr[4] = (0u | 1u);
    goto L_08936938;
L_08936938:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0893693C;
L_0893693C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089369A8;
      }
      goto L_08936944;
    }
L_08936944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08936970;
      }
      goto L_08936954;
    }
L_08936954:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08936964u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 385u, 0x08AED584u>(ctx, &aot_mem) && ctx.pc == 0x08936964u) goto L_08936964;
    return;
L_08936964:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_08936974;
      }
      goto L_0893696C;
    }
L_0893696C:
    ctx.gpr[19] = (0u | 1u);
    goto L_08936970;
L_08936970:
    ctx.gpr[4] = (ctx.gpr[19] & 255u);
    goto L_08936974;
L_08936974:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089369A8;
      }
      goto L_0893697C;
    }
L_0893697C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089369A8;
      }
      goto L_08936994;
    }
L_08936994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089369A8;
      }
      goto L_089369A4;
    }
L_089369A4:
    ctx.gpr[18] = (0u | 1u);
    goto L_089369A8;
L_089369A8:
    ctx.gpr[2] = (ctx.gpr[18] & 255u);
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
L_089369C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[31] = (0x089369F4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 667u, 0x08AC3EE8u>(ctx, &aot_mem) && ctx.pc == 0x089369F4u) goto L_089369F4;
    return;
L_089369F4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18596));
    ctx.gpr[18] = (2276u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-30360));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08936A38;
      }
      goto L_08936A18;
    }
L_08936A18:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08936A30;
      }
      goto L_08936A24;
    }
L_08936A24:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08936A30;
L_08936A30:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08936B44;
      }
      goto L_08936A38;
    }
L_08936A38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-30360)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08936A78;
      }
      goto L_08936A68;
    }
L_08936A68:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[5] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08936A84;
      }
      goto L_08936A78;
    }
L_08936A78:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[5] + ctx.gpr[20]);
    goto L_08936A84;
L_08936A84:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08936AC4;
      }
      goto L_08936A8C;
    }
L_08936A8C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[31] = (0x08936AA0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08936AA0u) goto L_08936AA0;
    return;
L_08936AA0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08936AC4;
      }
      goto L_08936AB0;
    }
L_08936AB0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[31] = (0x08936ABCu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x08936ABCu) goto L_08936ABC;
    return;
L_08936ABC:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08936AC4;
L_08936AC4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-30360)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08936AD8;
      }
      goto L_08936AD0;
    }
L_08936AD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08936AF4;
      }
      goto L_08936AD8;
    }
L_08936AD8:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[22] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08936AECu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08936AECu) goto L_08936AEC;
    return;
L_08936AEC:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08936AF4;
L_08936AF4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
        goto L_08936B1C;
    }
    goto L_08936B08;
L_08936B08:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08936B08;
      }
      goto L_08936B18;
    }
L_08936B18:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08936B1C;
L_08936B1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-30360)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08936B30;
      }
      goto L_08936B28;
    }
L_08936B28:
    ctx.gpr[31] = (0x08936B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08936B30u) goto L_08936B30;
    return;
L_08936B30:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-30360), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08936B44;
L_08936B44:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936B70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[31] = (0x08936BACu);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 667u, 0x08AC3EE8u>(ctx, &aot_mem) && ctx.pc == 0x08936BACu) goto L_08936BAC;
    return;
L_08936BAC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18596));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(152));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08936BCCu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08936BCCu) goto L_08936BCC;
    return;
L_08936BCC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[31] = (0x08936BE0u);
    ctx.gpr[4] = (0u | 72u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 745u, 0x089C71ACu>(ctx, &aot_mem) && ctx.pc == 0x08936BE0u) goto L_08936BE0;
    return;
L_08936BE0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 72u);
    ctx.gpr[31] = (0x08936BF0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x08936BF0u) goto L_08936BF0;
    return;
L_08936BF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (2276u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(-30360));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08936C1C;
      }
      goto L_08936C10;
    }
L_08936C10:
    ctx.gpr[31] = (0x08936C18u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089364C0;
L_08936C18:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08936C1C;
L_08936C1C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08936C2Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 147u, 0x08AC5138u>(ctx, &aot_mem) && ctx.pc == 0x08936C2Cu) goto L_08936C2C;
    return;
L_08936C2C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(116));
    ctx.gpr[31] = (0x08936C40u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 75u, 0x089C052Cu>(ctx, &aot_mem) && ctx.pc == 0x08936C40u) goto L_08936C40;
    return;
L_08936C40:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08936C4Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 429u, 0x08A5A3FCu>(ctx, &aot_mem) && ctx.pc == 0x08936C4Cu) goto L_08936C4C;
    return;
L_08936C4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08936C7C;
      }
      goto L_08936C5C;
    }
L_08936C5C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08936C74;
      }
      goto L_08936C68;
    }
L_08936C68:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08936C74;
L_08936C74:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08936D88;
      }
      goto L_08936C7C;
    }
L_08936C7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-30360)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08936CBC;
      }
      goto L_08936CAC;
    }
L_08936CAC:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08936CC8;
      }
      goto L_08936CBC;
    }
L_08936CBC:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[18]);
    goto L_08936CC8;
L_08936CC8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08936D08;
      }
      goto L_08936CD0;
    }
L_08936CD0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[31] = (0x08936CE4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08936CE4u) goto L_08936CE4;
    return;
L_08936CE4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08936D08;
      }
      goto L_08936CF4;
    }
L_08936CF4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[31] = (0x08936D00u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x08936D00u) goto L_08936D00;
    return;
L_08936D00:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08936D08;
L_08936D08:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-30360)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08936D1C;
      }
      goto L_08936D14;
    }
L_08936D14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08936D38;
      }
      goto L_08936D1C;
    }
L_08936D1C:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[22] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08936D30u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08936D30u) goto L_08936D30;
    return;
L_08936D30:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08936D38;
L_08936D38:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
        goto L_08936D60;
    }
    goto L_08936D4C;
L_08936D4C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08936D4C;
      }
      goto L_08936D5C;
    }
L_08936D5C:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08936D60;
L_08936D60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-30360)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08936D74;
      }
      goto L_08936D6C;
    }
L_08936D6C:
    ctx.gpr[31] = (0x08936D74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08936D74u) goto L_08936D74;
    return;
L_08936D74:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-30360), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08936D88;
L_08936D88:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936DB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08936ECC;
      }
      goto L_08936DD4;
    }
L_08936DD4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18596));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30360));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30360)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08936E00u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 409u, 0x08B01B6Cu>(ctx, &aot_mem) && ctx.pc == 0x08936E00u) goto L_08936E00;
    return;
L_08936E00:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08936E14;
      }
      goto L_08936E0C;
    }
L_08936E0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08936E4C;
      }
      goto L_08936E14;
    }
L_08936E14:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08936E4C;
      }
      goto L_08936E24;
    }
L_08936E24:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08936E28;
L_08936E28:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[6] == ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08936E44;
    }
    goto L_08936E34;
L_08936E34:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08936E44;
L_08936E44:
    if (ctx.gpr[4] != ctx.gpr[18]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08936E28;
    }
    goto L_08936E4C;
L_08936E4C:
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30360));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08936E84;
      }
      goto L_08936E64;
    }
L_08936E64:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08936E7Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08936E7Cu) goto L_08936E7C;
    return;
L_08936E7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08936E84;
      }
      goto L_08936E84;
    }
L_08936E84:
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30360));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08936EB8;
      }
      goto L_08936E98;
    }
L_08936E98:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9460));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[31] = (0x08936EACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 115u, 0x08AC4DBCu>(ctx, &aot_mem) && ctx.pc == 0x08936EACu) goto L_08936EAC;
    return;
L_08936EAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08936EB8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 7u, 0x08AC4044u>(ctx, &aot_mem) && ctx.pc == 0x08936EB8u) goto L_08936EB8;
    return;
L_08936EB8:
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936ECC;
      }
      goto L_08936EC4;
    }
L_08936EC4:
    ctx.gpr[31] = (0x08936ECCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08936ECCu) goto L_08936ECC;
    return;
L_08936ECC:
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
L_08936EE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08936F20;
      }
      goto L_08936F04;
    }
L_08936F04:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08936F14u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08936F14u) goto L_08936F14;
    return;
L_08936F14:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08936F20;
L_08936F20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08936F34u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 692u, 0x08AFAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08936F34u) goto L_08936F34;
    return;
L_08936F34:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936F48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08936F7C;
      }
      goto L_08936F60;
    }
L_08936F60:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08936F70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08936F70u) goto L_08936F70;
    return;
L_08936F70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08936F7C;
L_08936F7C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936F94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[16]);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08936FE8;
      }
      goto L_08936FCC;
    }
L_08936FCC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08936FDCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08936FDCu) goto L_08936FDC;
    return;
L_08936FDC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08936FE8;
L_08936FE8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_089370DC;
      }
      goto L_08937004;
    }
L_08937004:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_089370FC;
      }
      goto L_089370DC;
    }
L_089370DC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_089370FC;
L_089370FC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893711C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08937150;
      }
      goto L_08937134;
    }
L_08937134:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08937144u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08937144u) goto L_08937144;
    return;
L_08937144:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08937150;
L_08937150:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(52));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08937168:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089371AC;
      }
      goto L_08937190;
    }
L_08937190:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x089371A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x089371A0u) goto L_089371A0;
    return;
L_089371A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089371AC;
L_089371AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089371DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08937210;
      }
      goto L_089371F4;
    }
L_089371F4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08937204u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08937204u) goto L_08937204;
    return;
L_08937204:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08937210;
L_08937210:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08937228:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08937264;
      }
      goto L_08937248;
    }
L_08937248:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08937258u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08937258u) goto L_08937258;
    return;
L_08937258:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08937264;
L_08937264:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08937280:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089372B4;
      }
      goto L_08937298;
    }
L_08937298:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089372A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x089372A8u) goto L_089372A8;
    return;
L_089372A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089372B4;
L_089372B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089372CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08937308;
      }
      goto L_089372EC;
    }
L_089372EC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089372FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x089372FCu) goto L_089372FC;
    return;
L_089372FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08937308;
L_08937308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08937324:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08937358;
      }
      goto L_0893733C;
    }
L_0893733C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0893734Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x0893734Cu) goto L_0893734C;
    return;
L_0893734C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08937358;
L_08937358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08937370:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089373AC;
      }
      goto L_08937390;
    }
L_08937390:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089373A0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x089373A0u) goto L_089373A0;
    return;
L_089373A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089373AC;
L_089373AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089373C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089373FC;
      }
      goto L_089373E0;
    }
L_089373E0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089373F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x089373F0u) goto L_089373F0;
    return;
L_089373F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089373FC;
L_089373FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08937414:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08937450;
      }
      goto L_08937434;
    }
L_08937434:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08937444u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08937444u) goto L_08937444;
    return;
L_08937444:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08937450;
L_08937450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893748C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089374C0;
      }
      goto L_089374A4;
    }
L_089374A4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089374B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x089374B4u) goto L_089374B4;
    return;
L_089374B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089374C0;
L_089374C0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(24));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089374D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08937514;
      }
      goto L_089374F8;
    }
L_089374F8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08937508u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08937508u) goto L_08937508;
    return;
L_08937508:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08937514;
L_08937514:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08937530:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08937564;
      }
      goto L_08937548;
    }
L_08937548:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08937558u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08937558u) goto L_08937558;
    return;
L_08937558:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08937564;
L_08937564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893757C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089375B8;
      }
      goto L_0893759C;
    }
L_0893759C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089375ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x089375ACu) goto L_089375AC;
    return;
L_089375AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089375B8;
L_089375B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089375D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08937608;
      }
      goto L_089375EC;
    }
L_089375EC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089375FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x089375FCu) goto L_089375FC;
    return;
L_089375FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08937608;
L_08937608:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08937620:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08937634u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08936590;
L_08937634:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08937640:
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
          goto L_089376C4;
      }
      goto L_08937694;
    }
L_08937694:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089376A8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x089376A8u) goto L_089376A8;
    return;
L_089376A8:
    ctx.gpr[7] = (0u | 65535u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089376BCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_08937D24;
L_089376BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08937704;
      }
      goto L_089376C4;
    }
L_089376C4:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089376D8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x089376D8u) goto L_089376D8;
    return;
L_089376D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[31] = (0x089376F0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 130u, 0x08AC4F78u>(ctx, &aot_mem) && ctx.pc == 0x089376F0u) goto L_089376F0;
    return;
L_089376F0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08937704u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    goto L_08937A68;
L_08937704:
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
L_0893771C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] << 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    ctx.gpr[4] = (ctx.gpr[17] & 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937784;
      }
      goto L_08937778;
    }
L_08937778:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08937784u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 115u, 0x08A5CFACu>(ctx, &aot_mem) && ctx.pc == 0x08937784u) goto L_08937784;
    return;
L_08937784:
    ctx.gpr[4] = (ctx.gpr[17] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893779C;
      }
      goto L_08937790;
    }
L_08937790:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0893779Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 114u, 0x08A5CED4u>(ctx, &aot_mem) && ctx.pc == 0x0893779Cu) goto L_0893779C;
    return;
L_0893779C:
    ctx.gpr[4] = (ctx.gpr[17] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089377B4;
      }
      goto L_089377A8;
    }
L_089377A8:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x089377B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 120u, 0x08A5D034u>(ctx, &aot_mem) && ctx.pc == 0x089377B4u) goto L_089377B4;
    return;
L_089377B4:
    ctx.gpr[4] = (ctx.gpr[17] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937824;
      }
      goto L_089377C0;
    }
L_089377C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_08937824;
L_08937824:
    ctx.gpr[4] = (ctx.gpr[17] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893783C;
      }
      goto L_08937830;
    }
L_08937830:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(44));
    ctx.gpr[31] = (0x0893783Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 114u, 0x08A5CED4u>(ctx, &aot_mem) && ctx.pc == 0x0893783Cu) goto L_0893783C;
    return;
L_0893783C:
    ctx.gpr[4] = (ctx.gpr[17] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937854;
      }
      goto L_08937848;
    }
L_08937848:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08937854u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 114u, 0x08A5CED4u>(ctx, &aot_mem) && ctx.pc == 0x08937854u) goto L_08937854;
    return;
L_08937854:
    ctx.gpr[4] = (ctx.gpr[17] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893786C;
      }
      goto L_08937860;
    }
L_08937860:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(52));
    ctx.gpr[31] = (0x0893786Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 114u, 0x08A5CED4u>(ctx, &aot_mem) && ctx.pc == 0x0893786Cu) goto L_0893786C;
    return;
L_0893786C:
    ctx.gpr[4] = (ctx.gpr[17] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893788C;
      }
      goto L_08937878;
    }
L_08937878:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0893788C;
L_0893788C:
    ctx.gpr[4] = (ctx.gpr[17] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089378AC;
      }
      goto L_08937898;
    }
L_08937898:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089378AC;
L_089378AC:
    ctx.gpr[4] = (ctx.gpr[17] & 1024u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937920;
      }
      goto L_089378B8;
    }
L_089378B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08937920;
L_08937920:
    ctx.gpr[4] = (ctx.gpr[17] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937990;
      }
      goto L_0893792C;
    }
L_0893792C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    goto L_08937990;
L_08937990:
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
L_089379AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089379D4u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 644u, 0x088A7DA8u>(ctx, &aot_mem) && ctx.pc == 0x089379D4u) goto L_089379D4;
    return;
L_089379D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089379F4;
      }
      goto L_089379DC;
    }
L_089379DC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16401)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089379FC;
      }
      goto L_089379EC;
    }
L_089379EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937A18;
      }
      goto L_089379F4;
    }
L_089379F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937A58;
      }
      goto L_089379FC;
    }
L_089379FC:
    ctx.gpr[31] = (0x08937A04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08937530;
L_08937A04:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08937A2C;
      }
      goto L_08937A18;
    }
L_08937A18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937A34;
      }
      goto L_08937A24;
    }
L_08937A24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937A50;
      }
      goto L_08937A2C;
    }
L_08937A2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937A58;
      }
      goto L_08937A34;
    }
L_08937A34:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08937A44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08937A44u) goto L_08937A44;
    return;
L_08937A44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08937A50;
L_08937A50:
    ctx.gpr[31] = (0x08937A58u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_0893667C;
L_08937A58:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08937A68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[8];
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08937AC8;
      }
      goto L_08937AAC;
    }
L_08937AAC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08937ABCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 385u, 0x08AED584u>(ctx, &aot_mem) && ctx.pc == 0x08937ABCu) goto L_08937ABC;
    return;
L_08937ABC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08937ACC;
      }
      goto L_08937AC4;
    }
L_08937AC4:
    ctx.gpr[21] = (0u | 1u);
    goto L_08937AC8;
L_08937AC8:
    ctx.gpr[4] = (ctx.gpr[21] & 255u);
    goto L_08937ACC;
L_08937ACC:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937AE0;
      }
      goto L_08937ADC;
    }
L_08937ADC:
    ctx.gpr[20] = (0u | 2u);
    goto L_08937AE0;
L_08937AE0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08937B14;
      }
      goto L_08937AF8;
    }
L_08937AF8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08937B18;
      }
      goto L_08937B10;
    }
L_08937B10:
    ctx.gpr[4] = (0u | 1u);
    goto L_08937B14;
L_08937B14:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08937B18;
L_08937B18:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937B2C;
      }
      goto L_08937B28;
    }
L_08937B28:
    ctx.gpr[20] = (ctx.gpr[20] | 8u);
    goto L_08937B2C;
L_08937B2C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08937B70;
      }
      goto L_08937B3C;
    }
L_08937B3C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(25)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(25)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08937B74;
    }
    goto L_08937B4C;
L_08937B4C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(26)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(26)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08937B74;
    }
    goto L_08937B5C;
L_08937B5C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(27)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(27)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08937B74;
      }
      goto L_08937B6C;
    }
L_08937B6C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08937B70;
L_08937B70:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08937B74;
L_08937B74:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937B88;
      }
      goto L_08937B84;
    }
L_08937B84:
    ctx.gpr[20] = (ctx.gpr[20] | 16u);
    goto L_08937B88;
L_08937B88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08937B9C;
      }
      goto L_08937B98;
    }
L_08937B98:
    ctx.gpr[20] = (ctx.gpr[20] | 32u);
    goto L_08937B9C;
L_08937B9C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08937BD0;
      }
      goto L_08937BB4;
    }
L_08937BB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08937BD4;
      }
      goto L_08937BCC;
    }
L_08937BCC:
    ctx.gpr[4] = (0u | 1u);
    goto L_08937BD0;
L_08937BD0:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08937BD4;
L_08937BD4:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937BE8;
      }
      goto L_08937BE4;
    }
L_08937BE4:
    ctx.gpr[20] = (ctx.gpr[20] | 64u);
    goto L_08937BE8;
L_08937BE8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08937C1C;
      }
      goto L_08937C00;
    }
L_08937C00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08937C20;
      }
      goto L_08937C18;
    }
L_08937C18:
    ctx.gpr[4] = (0u | 1u);
    goto L_08937C1C;
L_08937C1C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08937C20;
L_08937C20:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937C34;
      }
      goto L_08937C30;
    }
L_08937C30:
    ctx.gpr[20] = (ctx.gpr[20] | 128u);
    goto L_08937C34;
L_08937C34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08937C68;
      }
      goto L_08937C4C;
    }
L_08937C4C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08937C6C;
      }
      goto L_08937C64;
    }
L_08937C64:
    ctx.gpr[4] = (0u | 1u);
    goto L_08937C68;
L_08937C68:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08937C6C;
L_08937C6C:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937C80;
      }
      goto L_08937C7C;
    }
L_08937C7C:
    ctx.gpr[20] = (ctx.gpr[20] | 256u);
    goto L_08937C80;
L_08937C80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08937C94;
      }
      goto L_08937C90;
    }
L_08937C90:
    ctx.gpr[20] = (ctx.gpr[20] | 512u);
    goto L_08937C94;
L_08937C94:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08937CA8;
      }
      goto L_08937CA4;
    }
L_08937CA4:
    ctx.gpr[20] = (ctx.gpr[20] | 4u);
    goto L_08937CA8;
L_08937CA8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08937CC4;
      }
      goto L_08937CC0;
    }
L_08937CC0:
    ctx.gpr[20] = (ctx.gpr[20] | 1024u);
    goto L_08937CC4;
L_08937CC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08937CD8;
      }
      goto L_08937CD4;
    }
L_08937CD4:
    ctx.gpr[20] = (ctx.gpr[20] | 2048u);
    goto L_08937CD8;
L_08937CD8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937CFC;
      }
      goto L_08937CE0;
    }
L_08937CE0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08937CF4u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    goto L_08937D24;
L_08937CF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08937D00;
      }
      goto L_08937CFC;
    }
L_08937CFC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08937D00;
L_08937D00:
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
L_08937D24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[4] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[4] & 255u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[7] & 2u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08937DB4;
      }
      goto L_08937DA8;
    }
L_08937DA8:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08937DB4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 108u, 0x08A5CC64u>(ctx, &aot_mem) && ctx.pc == 0x08937DB4u) goto L_08937DB4;
    return;
L_08937DB4:
    ctx.gpr[4] = (ctx.gpr[16] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937DCC;
      }
      goto L_08937DC0;
    }
L_08937DC0:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08937DCCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 107u, 0x08A5CAE0u>(ctx, &aot_mem) && ctx.pc == 0x08937DCCu) goto L_08937DCC;
    return;
L_08937DCC:
    ctx.gpr[4] = (ctx.gpr[16] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937DE4;
      }
      goto L_08937DD8;
    }
L_08937DD8:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08937DE4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 112u, 0x08A5CCF0u>(ctx, &aot_mem) && ctx.pc == 0x08937DE4u) goto L_08937DE4;
    return;
L_08937DE4:
    ctx.gpr[4] = (ctx.gpr[16] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937EAC;
      }
      goto L_08937DF0;
    }
L_08937DF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] >> 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08937EAC;
L_08937EAC:
    ctx.gpr[4] = (ctx.gpr[16] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937EC4;
      }
      goto L_08937EB8;
    }
L_08937EB8:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(44));
    ctx.gpr[31] = (0x08937EC4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 107u, 0x08A5CAE0u>(ctx, &aot_mem) && ctx.pc == 0x08937EC4u) goto L_08937EC4;
    return;
L_08937EC4:
    ctx.gpr[4] = (ctx.gpr[16] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937EDC;
      }
      goto L_08937ED0;
    }
L_08937ED0:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08937EDCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 107u, 0x08A5CAE0u>(ctx, &aot_mem) && ctx.pc == 0x08937EDCu) goto L_08937EDC;
    return;
L_08937EDC:
    ctx.gpr[4] = (ctx.gpr[16] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937EF4;
      }
      goto L_08937EE8;
    }
L_08937EE8:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(52));
    ctx.gpr[31] = (0x08937EF4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 107u, 0x08A5CAE0u>(ctx, &aot_mem) && ctx.pc == 0x08937EF4u) goto L_08937EF4;
    return;
L_08937EF4:
    ctx.gpr[4] = (ctx.gpr[16] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937F28;
      }
      goto L_08937F00;
    }
L_08937F00:
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
    goto L_08937F28;
L_08937F28:
    ctx.gpr[4] = (ctx.gpr[16] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937F5C;
      }
      goto L_08937F34;
    }
L_08937F34:
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08937F5C;
L_08937F5C:
    ctx.gpr[4] = (ctx.gpr[16] & 1024u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 2u, 0x08938028u>(ctx, &aot_mem); return;
      }
      goto L_08937F68;
    }
L_08937F68:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[5] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[5] >> 16u);
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.pc = 0x08938000u; return;
}

void recomp_unit_0076(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0076_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_76(Runtime &runtime) {
    runtime.register_generated_unit(76u, 0x08934000u, 16384u, &recomp_unit_0076, &recomp_unit_0076_entry);
    runtime.register_function(0x08934000u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934030u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089340E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089340F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934108u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934118u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893412Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893413Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893415Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934160u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893416Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893417Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934188u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893418Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934190u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934198u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089341A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089341B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089341BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089341C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089341C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089341CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089341ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089341F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934204u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893420Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934214u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893421Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934224u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893423Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934248u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934250u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934268u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934290u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089342C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089342E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089342F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934314u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893431Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934324u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893432Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934340u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934370u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934378u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934384u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934390u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089343A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089343C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089343D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089343E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089343ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893441Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934420u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934438u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934444u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893444Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934454u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893445Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934464u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934470u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934484u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893448Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934494u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893449Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089344A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089344ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089344B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089344BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089344E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089344ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934500u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893450Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893452Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934534u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934540u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893454Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893455Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893456Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934574u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934578u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934584u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345D0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934604u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893460Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934614u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934624u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934630u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934638u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934644u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934654u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893465Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934664u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934668u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934674u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893467Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934688u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934698u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089346A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089346B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089346BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089346C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089346CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089346E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089346F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934700u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893471Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934738u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934744u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893474Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934754u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934760u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893476Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934774u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934780u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934790u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089347C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089347E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089347F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934804u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893480Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934848u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934854u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089348B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089348CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089348D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089348E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089348F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934904u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934910u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893491Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934938u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893493Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893494Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934954u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934964u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893496Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893497Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934984u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934994u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893499Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A04u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A0Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A14u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A3Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A4Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A68u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A70u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A74u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A80u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A8Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A94u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934AD0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B14u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B2Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B48u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B60u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B68u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B70u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934BA0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934BB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934C20u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934C34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934C40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934C5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934C78u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934CA0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934CACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934CBCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934CC8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934CD4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934CE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934CECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934CF8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D58u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D64u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D88u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934DC4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934DD4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934DF0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E70u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934EA4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934EB8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934EBCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934ECCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934EE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934EE4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934EF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F08u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F0Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F30u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F58u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F6Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F80u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F9Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934FB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934FC8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934FD4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934FE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934FF0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934FFCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935004u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935044u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935090u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935098u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089350A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089350A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089350C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089350E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893512Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893514Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089351C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089351C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089351D0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089351D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089351E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935204u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935210u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893522Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935234u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935244u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935258u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935274u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893528Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935290u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935354u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893536Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935380u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935398u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089353A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089353B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089353BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089353E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935414u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935434u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893543Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935444u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935454u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089354D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089354E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893551Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935540u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935594u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089355A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089355D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893560Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893561Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893562Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935638u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935644u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935650u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893565Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935668u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935674u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935680u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935694u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089356ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089356B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089356CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089356D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089356E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089356ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089356F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935704u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935710u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893571Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935728u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935770u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935804u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935830u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893584Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935868u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935870u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935888u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935890u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935898u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893589Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089358ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089358C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089358D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089358ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089358F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935904u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935910u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893592Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935934u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935944u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893594Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935954u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893595Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935968u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935980u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935988u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893598Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935994u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893599Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A04u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A10u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A2Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A50u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A60u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A68u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A6Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A7Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A88u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A94u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935AA4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935AB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935ABCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935AC4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935AD0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935ADCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935AE4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935AECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935AF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B0Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B60u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B68u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B70u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B78u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B90u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935BA8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935BB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935BB8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935BC4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935BD0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935BE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C08u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C14u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C60u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C6Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C90u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C9Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935CA8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935CB4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935CC0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935CC8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935CD4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935CDCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935CE4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935CECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935CF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D00u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D08u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D10u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D28u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D30u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D38u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D50u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D64u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D70u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D7Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D88u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D90u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D9Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935DA8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935DB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935DBCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935DC4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935DC8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935DDCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E08u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E10u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E18u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E30u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935EB8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935EC0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935ECCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935EDCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935EE4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935EECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935EF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F00u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F08u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F10u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F18u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F2Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F3Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F48u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F50u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F60u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F6Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F78u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F90u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F9Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FA4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FB8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FC8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FD0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FD8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FFCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936004u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893600Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936014u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936020u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936028u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936030u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936038u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936040u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936048u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936054u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893605Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936064u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893606Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893609Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089360C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089360D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089360E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893611Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936124u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936130u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893613Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936144u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936160u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089361D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089361E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089361ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089361FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936204u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893620Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936214u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936220u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936228u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936230u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936238u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936244u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893624Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893625Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936264u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893626Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936274u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936284u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936290u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893629Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362D0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936304u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936310u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936320u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936328u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936330u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936338u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936344u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893634Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936354u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893635Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936364u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893636Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936378u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936380u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936388u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936390u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089363C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089363ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089363F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893640Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936440u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936448u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936454u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936460u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936468u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936474u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936480u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936488u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089364A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089364C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936538u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936590u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089365C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089365DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089365ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936604u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936614u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893662Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893663Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936654u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936658u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936674u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893667Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893669Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089366A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089366B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089366C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089366E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089366ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936710u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893671Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936748u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936750u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936754u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893675Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936774u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936784u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936790u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089367A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089367D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089367ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936804u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936808u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893680Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936814u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936824u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936834u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936844u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936854u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936858u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893685Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936864u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936874u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936884u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893689Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936904u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893691Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936934u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936938u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893693Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936944u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936954u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936964u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893696Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936970u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936974u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893697Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936994u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089369A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089369A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089369C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089369F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A18u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A30u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A38u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A68u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A78u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A8Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936AA0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936AB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936ABCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936AC4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936AD0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936AD8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936AECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936AF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B08u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B18u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B28u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B30u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B70u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936BACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936BCCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936BE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936BF0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C10u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C18u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C2Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C4Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C68u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C74u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C7Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936CACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936CBCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936CC8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936CD0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936CE4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936CF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D00u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D08u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D14u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D30u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D38u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D4Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D60u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D6Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D74u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D88u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936DB4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936DD4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E00u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E0Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E14u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E28u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E4Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E64u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E7Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E98u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936EACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936EB8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936EC4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936ECCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936EE4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F04u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F14u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F20u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F48u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F60u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F70u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F7Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F94u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936FCCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936FDCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936FE8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937004u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089370DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089370FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893711Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937134u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937144u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937150u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937168u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937190u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089371A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089371ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089371DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089371F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937204u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937210u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937228u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937248u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937258u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937264u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937280u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937298u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089372A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089372B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089372CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089372ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089372FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937308u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937324u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893733Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893734Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937358u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937370u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937390u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089373A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089373ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089373C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089373E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089373F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089373FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937414u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937434u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937444u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937450u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893748Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089374A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089374B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089374C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089374D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089374F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937508u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937514u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937530u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937548u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937558u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937564u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893757Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893759Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089375ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089375B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089375D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089375ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089375FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937608u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937620u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937634u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937640u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937694u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089376A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089376BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089376C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089376D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089376F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937704u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893771Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937778u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937784u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937790u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893779Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089377A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089377B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089377C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937824u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937830u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893783Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937848u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937854u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937860u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893786Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937878u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893788Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937898u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089378ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089378B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937920u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893792Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937990u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089379ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089379D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089379DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089379ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089379F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089379FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A04u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A18u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A2Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A50u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A58u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A68u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937AACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937ABCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937AC4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937AC8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937ACCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937ADCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937AE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937AF8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B10u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B14u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B18u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B28u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B2Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B3Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B4Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B6Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B70u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B74u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B88u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B98u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B9Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BB4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BCCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BD0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BD4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BE4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BE8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C00u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C18u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C20u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C30u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C4Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C64u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C68u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C6Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C7Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C80u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C90u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C94u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937CA4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937CA8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937CC0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937CC4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937CD4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937CD8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937CE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937CF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937CFCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D00u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937DA8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937DB4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937DC0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937DCCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937DD8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937DE4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937DF0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937EACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937EB8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937EC4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937ED0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937EDCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937EE8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937EF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F00u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F28u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F68u, &recomp_unit_0076, "recomp_unit_0076");
}
} // namespace psprecomp
