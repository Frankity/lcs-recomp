#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0107[4095] = {
    1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0,
    12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0,
    18, 0, 0, 19, 0, 0, 20, 0, 21, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 25, 0, 26, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0,
    29, 0, 30, 0, 31, 0, 0, 32, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 37, 0, 0, 0, 38, 0, 39, 40,
    0, 41, 0, 0, 42, 0, 43, 0, 0, 44, 45, 0, 0, 46, 0, 47, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0,
    50, 0, 51, 0, 0, 52, 0, 53, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 57, 0, 58, 0, 0, 59, 0,
    60, 0, 0, 61, 0, 0, 0, 62, 0, 0, 63, 64, 0, 0, 65, 0, 0, 66, 0, 67, 0, 68, 69, 0, 70, 71, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0,
    76, 0, 0, 77, 0, 0, 78, 0, 79, 0, 80, 81, 0, 82, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 87,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 90, 0, 91, 92, 0, 0, 0, 0, 93, 0, 0, 0, 94,
    0, 0, 0, 95, 0, 96, 0, 0, 0, 97, 0, 98, 0, 0, 0, 99, 0, 100, 0, 101, 0, 102, 0, 0, 0, 103, 0, 104, 105, 0, 0, 106,
    0, 107, 0, 108, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 112, 0, 113, 0, 114, 0, 115, 0,
    0, 0, 0, 116, 0, 0, 117, 0, 118, 0, 0, 0, 0, 119, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0,
    0, 123, 0, 0, 0, 124, 0, 0, 125, 0, 126, 0, 127, 128, 0, 0, 0, 129, 0, 0, 130, 0, 131, 0, 132, 133, 0, 134, 135, 0, 0, 0,
    0, 0, 0, 136, 0, 0, 137, 0, 138, 0, 139, 0, 0, 0, 140, 0, 0, 141, 0, 142, 0, 143, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0,
    0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 150, 0, 0, 151, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 159, 0, 0, 160, 0, 161, 0, 0, 0, 162,
    0, 163, 0, 164, 0, 165, 0, 0, 166, 0, 167, 0, 0, 0, 0, 168, 0, 169, 0, 170, 0, 171, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0,
    0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 180, 0, 181, 0, 182, 0, 0, 0,
    0, 183, 0, 184, 0, 185, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 0, 192, 0,
    193, 0, 194, 0, 195, 0, 0, 0, 196, 0, 0, 197, 0, 198, 0, 199, 200, 0, 201, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 204, 205,
    0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 212, 0,
    213, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 224, 0, 0, 225, 0, 0, 226, 0, 0, 0,
    227, 0, 0, 228, 0, 229, 0, 230, 0, 0, 231, 0, 232, 0, 233, 0, 0, 234, 0, 235, 0, 0, 236, 0, 0, 237, 0, 0, 238, 0, 0, 239,
    0, 0, 240, 241, 0, 242, 0, 0, 0, 243, 0, 244, 0, 245, 0, 246, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0,
    0, 0, 0, 0, 250, 251, 0, 252, 0, 0, 253, 0, 0, 254, 0, 0, 0, 255, 0, 256, 0, 257, 0, 258, 0, 259, 0, 0, 260, 0, 0, 261,
    0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 264, 0, 265, 0, 0, 0, 0, 266, 0, 0, 267, 0, 268, 0, 0, 269, 0,
    0, 270, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 274, 0, 0, 275, 0, 276, 0, 277, 278, 0, 279, 0, 280, 0, 281, 0, 282, 0,
    0, 0, 0, 0, 283, 0, 284, 0, 0, 0, 0, 0, 285, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0,
    290, 291, 0, 292, 0, 0, 0, 0, 0, 293, 0, 294, 0, 295, 0, 0, 296, 0, 0, 297, 0, 0, 298, 0, 0, 0, 299, 300, 0, 301, 0, 0,
    0, 302, 303, 0, 304, 0, 0, 305, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0,
    309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 317, 0,
    0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 320, 0, 321, 0, 0, 0, 0, 322, 0, 0, 323, 0, 324, 0, 0, 325, 0, 0, 0, 326, 327,
    0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0,
    332, 0, 333, 0, 334, 0, 335, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 339, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0,
    342, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0,
    0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 360, 0,
    0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0,
    366, 0, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 370, 0, 371, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 373, 374, 0, 375, 0, 376, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 380,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 382, 0, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 385, 0, 386, 0, 387, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 388, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 393,
    0, 0, 0, 394, 0, 0, 0, 395, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0,
    0, 401, 0, 0, 0, 402, 0, 403, 0, 404, 0, 0, 0, 405, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407,
    0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 410, 0, 411, 0, 0, 0, 0, 0, 412, 413, 0, 0, 414, 0, 415, 0, 0, 0, 416, 0, 417, 0,
    0, 0, 418, 0, 419, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 423, 0, 424, 0, 0, 0, 0, 0, 0, 425, 0, 426, 0, 427, 0,
    428, 0, 429, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 432, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0,
    0, 0, 435, 0, 0, 0, 436, 0, 437, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 444, 0, 445, 0, 0, 0, 0, 0, 0, 446, 0, 0,
    447, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0,
    0, 0, 451, 452, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 455, 0, 456, 0, 0, 0, 0, 0, 457, 0, 458, 0, 0,
    0, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 461, 0, 462, 463, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 466, 467, 0,
    468, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0,
    0, 0, 471, 0, 472, 0, 473, 474, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 477, 0, 478, 0, 479, 480, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0,
    0, 0, 0, 0, 483, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485,
    0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0,
    489, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 497, 498, 0, 0, 0,
    0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0,
    503, 0, 0, 0, 504, 0, 0, 505, 0, 506, 0, 0, 507, 0, 508, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 511,
    0, 512, 0, 0, 513, 0, 514, 0, 0, 0, 515, 0, 0, 0, 0, 516, 0, 0, 517, 0, 518, 0, 0, 0, 519, 0, 0, 520, 0, 0, 0, 521,
    0, 522, 0, 523, 0, 524, 0, 525, 0, 526, 0, 0, 0, 527, 0, 0, 0, 528, 0, 0, 0, 529, 0, 0, 0, 530, 0, 0, 0, 531, 0, 0,
    0, 532, 0, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 537, 0, 538, 0, 539, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 540, 0, 0, 541, 0, 542, 0, 543, 0, 544, 0, 0, 0, 545, 0, 0, 0, 546, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 549, 0, 0, 550, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 552, 0, 553, 0,
    0, 0, 554, 0, 0, 555, 0, 556, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 559, 0, 0, 560, 0,
    561, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 564, 0, 565, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 567,
    0, 0, 0, 568, 0, 0, 0, 569, 0, 0, 570, 0, 0, 0, 571, 0, 572, 0, 573, 0, 574, 0, 0, 0, 0, 0, 575, 0, 0, 0, 576, 0,
    0, 0, 0, 0, 577, 0, 578, 0, 0, 579, 0, 0, 0, 0, 580, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0,
    0, 0, 0, 583, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 588, 0,
    0, 0, 589, 0, 0, 0, 0, 590, 0, 0, 591, 592, 0, 0, 0, 0, 593, 0, 594, 0, 0, 595, 0, 596, 0, 0, 597, 0, 598, 0, 599, 0,
    0, 600, 0, 0, 0, 601, 0, 602, 0, 603, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 605, 0, 0, 0, 0, 0, 606, 0, 0, 607, 0, 0,
    0, 0, 608, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 612, 0, 0, 0, 0, 0,
    0, 0, 0, 613, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 616, 0, 0, 617, 0, 618, 0, 0, 0, 0, 0, 0, 619, 0,
    0, 0, 620, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    623, 0, 624, 0, 625, 0, 0, 626, 0, 627, 0, 628, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 631, 0, 0,
    0, 0, 0, 0, 632, 0, 0, 0, 633, 0, 634, 0, 0, 0, 635, 0, 0, 636, 0, 0, 0, 637, 0, 0, 0, 638, 0, 639, 0, 640, 0, 0,
    0, 0, 0, 641, 0, 0, 0, 642, 0, 0, 0, 643, 0, 644, 0, 645, 0, 646, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 648, 0, 0, 0,
    0, 649, 0, 0, 0, 0, 0, 0, 650, 0, 0, 651, 0, 0, 652, 0, 653, 0, 0, 0, 654, 0, 0, 0, 655, 0, 0, 656, 0, 0, 0, 0,
    657, 0, 658, 0, 0, 659, 0, 0, 660, 0, 0, 0, 661, 0, 662, 0, 663, 0, 0, 0, 664, 0, 0, 0, 0, 0, 665, 0, 0, 666, 0, 0,
    0, 667, 0, 0, 0, 668, 669, 0, 0, 0, 0, 0, 0, 670, 0, 0, 671, 0, 0, 672, 0, 0, 673, 674, 0, 675, 0, 0, 0, 0, 0, 0,
    676, 0, 0, 0, 677, 0, 0, 0, 0, 678, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 681, 0, 0, 0, 682,
    0, 683, 0, 0, 0, 684, 0, 0, 0, 0, 0, 685, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 688, 0, 0, 0, 0,
    689, 0, 0, 0, 0, 0, 690, 0, 691, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 694, 0, 0, 0, 695, 0, 0, 0,
    696, 0, 0, 0, 0, 0, 697, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0,
    0, 0, 0, 0, 0, 702, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 705, 0, 0, 706, 0, 0, 0, 0, 707, 0, 0,
    0, 708, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 710, 0, 711, 0, 712, 0, 0, 0, 713, 0, 0, 0, 714, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    715, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 716, 0, 0, 717, 0, 718, 0, 0, 0, 719, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    721, 0, 722, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 724, 0, 0, 725, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 727, 728, 729, 0, 0, 0, 730, 0, 0, 0,
    0, 731, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 733, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 736, 0,
    0, 0, 737, 0, 738, 0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0,
    0, 0, 0, 742, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 744, 0, 0, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0, 746, 0, 0, 0, 747,
    0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 750, 0, 751, 0, 752, 0, 0, 0, 753, 0, 0, 0, 754,
    0, 0, 0, 755, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0,
    0, 0, 0, 0, 0, 759, 0, 0, 0, 0, 760, 0, 0, 0, 761, 0, 0, 0, 762, 0, 0, 0, 763, 764, 0, 0, 765, 0, 0, 0, 0, 0,
    766, 0, 0, 0, 767, 0, 0, 0, 768, 0, 0, 769, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 770, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 771, 0, 0, 0, 0, 0, 772, 0, 0, 773, 0, 0, 0, 0, 0, 0, 0, 774, 0, 0, 0, 0, 0, 0, 0, 0, 0, 775,
    0, 0, 0, 0, 0, 0, 0, 0, 776, 0, 0, 777, 0, 0, 0, 0, 0, 0, 0, 778, 779, 0, 0, 780, 0, 0, 0, 781, 0, 0, 782, 0,
    0, 0, 0, 0, 0, 0, 783, 0, 0, 0, 0, 0, 0, 0, 0, 0, 784, 0, 0, 0, 0, 0, 785, 0, 0, 786, 0, 0, 0, 0, 0, 0,
    0, 787, 0, 0, 0, 0, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 789, 0, 790, 0, 0, 0, 0, 791, 0, 0, 0, 0, 0, 0, 0, 0, 0, 792, 793, 0, 0, 0, 0, 0, 0, 794,
    0, 0, 0, 0, 795, 0, 0, 0, 0, 796, 0, 797, 0, 0, 0, 0, 0, 0, 798, 0, 799, 0, 800, 0, 801, 0, 0, 0, 802, 0, 803, 0,
    804, 0, 805, 0, 806, 0, 807, 0, 0, 0, 808, 0, 809, 0, 0, 0, 0, 0, 0, 0, 810, 0, 0, 0, 0, 0, 811, 0, 0, 812, 0, 0,
    0, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0, 815, 0, 816, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 817, 0, 818, 0, 819, 0, 820, 0, 821, 0, 0, 0, 822, 0, 823, 0, 0, 0, 0, 0, 0, 0, 824, 0, 0, 0,
    0, 0, 825, 0, 0, 0, 0, 0, 826, 0, 0, 0, 0, 0, 0, 827, 0, 0, 0, 0, 0, 0, 828, 0, 0, 829, 0, 0, 830, 0, 0, 831,
    832, 0, 833, 0, 0, 0, 834, 0, 0, 835, 0, 0, 0, 836, 0, 0, 837, 0, 838, 0, 0, 839, 0, 0, 840, 0, 0, 841, 842, 0, 843, 0,
    0, 0, 844, 0, 0, 845, 0, 846, 0, 0, 0, 847, 0, 0, 848, 0, 849, 0, 850, 0, 0, 0, 851, 0, 0, 852, 0, 0, 0, 853, 0, 0,
    0, 854, 0, 0, 0, 0, 0, 0, 0, 0, 0, 855, 0, 856, 0, 0, 0, 0, 857, 0, 0, 858, 0, 0, 0, 0, 0, 0, 0, 859, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 860, 0, 0, 861, 0, 0, 0, 862, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 863, 0, 864,
    0, 865, 0, 866, 0, 867, 0, 0, 868, 0, 0, 0, 869, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 870, 0, 871, 0, 872,
};
void recomp_unit_0107_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089B0000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0107[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089B0000;
    case 2u: goto L_089B0008;
    case 3u: goto L_089B0010;
    case 4u: goto L_089B0018;
    case 5u: goto L_089B0020;
    case 6u: goto L_089B0028;
    case 7u: goto L_089B0030;
    case 8u: goto L_089B0038;
    case 9u: goto L_089B004C;
    case 10u: goto L_089B0054;
    case 11u: goto L_089B0078;
    case 12u: goto L_089B0080;
    case 13u: goto L_089B008C;
    case 14u: goto L_089B00BC;
    case 15u: goto L_089B00D0;
    case 16u: goto L_089B00E0;
    case 17u: goto L_089B00F4;
    case 18u: goto L_089B0100;
    case 19u: goto L_089B010C;
    case 20u: goto L_089B0118;
    case 21u: goto L_089B0120;
    case 22u: goto L_089B0124;
    case 23u: goto L_089B0134;
    case 24u: goto L_089B0144;
    case 25u: goto L_089B014C;
    case 26u: goto L_089B0154;
    case 27u: goto L_089B0168;
    case 28u: goto L_089B0170;
    case 29u: goto L_089B0180;
    case 30u: goto L_089B0188;
    case 31u: goto L_089B0190;
    case 32u: goto L_089B019C;
    case 33u: goto L_089B01A4;
    case 34u: goto L_089B01B4;
    case 35u: goto L_089B01C8;
    case 36u: goto L_089B01D8;
    case 37u: goto L_089B01E0;
    case 38u: goto L_089B01F0;
    case 39u: goto L_089B01F8;
    case 40u: goto L_089B01FC;
    case 41u: goto L_089B0204;
    case 42u: goto L_089B0210;
    case 43u: goto L_089B0218;
    case 44u: goto L_089B0224;
    case 45u: goto L_089B0228;
    case 46u: goto L_089B0234;
    case 47u: goto L_089B023C;
    case 48u: goto L_089B0244;
    case 49u: goto L_089B025C;
    case 50u: goto L_089B0280;
    case 51u: goto L_089B0288;
    case 52u: goto L_089B0294;
    case 53u: goto L_089B029C;
    case 54u: goto L_089B02A4;
    case 55u: goto L_089B02BC;
    case 56u: goto L_089B02E0;
    case 57u: goto L_089B02E4;
    case 58u: goto L_089B02EC;
    case 59u: goto L_089B02F8;
    case 60u: goto L_089B0300;
    case 61u: goto L_089B030C;
    case 62u: goto L_089B031C;
    case 63u: goto L_089B0328;
    case 64u: goto L_089B032C;
    case 65u: goto L_089B0338;
    case 66u: goto L_089B0344;
    case 67u: goto L_089B034C;
    case 68u: goto L_089B0354;
    case 69u: goto L_089B0358;
    case 70u: goto L_089B0360;
    case 71u: goto L_089B0364;
    case 72u: goto L_089B0398;
    case 73u: goto L_089B03CC;
    case 74u: goto L_089B03D4;
    case 75u: goto L_089B03E8;
    case 76u: goto L_089B0400;
    case 77u: goto L_089B040C;
    case 78u: goto L_089B0418;
    case 79u: goto L_089B0420;
    case 80u: goto L_089B0428;
    case 81u: goto L_089B042C;
    case 82u: goto L_089B0434;
    case 83u: goto L_089B043C;
    case 84u: goto L_089B0444;
    case 85u: goto L_089B0468;
    case 86u: goto L_089B0470;
    case 87u: goto L_089B047C;
    case 88u: goto L_089B04AC;
    case 89u: goto L_089B04B4;
    case 90u: goto L_089B04CC;
    case 91u: goto L_089B04D4;
    case 92u: goto L_089B04D8;
    case 93u: goto L_089B04EC;
    case 94u: goto L_089B04FC;
    case 95u: goto L_089B050C;
    case 96u: goto L_089B0514;
    case 97u: goto L_089B0524;
    case 98u: goto L_089B052C;
    case 99u: goto L_089B053C;
    case 100u: goto L_089B0544;
    case 101u: goto L_089B054C;
    case 102u: goto L_089B0554;
    case 103u: goto L_089B0564;
    case 104u: goto L_089B056C;
    case 105u: goto L_089B0570;
    case 106u: goto L_089B057C;
    case 107u: goto L_089B0584;
    case 108u: goto L_089B058C;
    case 109u: goto L_089B059C;
    case 110u: goto L_089B05A4;
    case 111u: goto L_089B05DC;
    case 112u: goto L_089B05E0;
    case 113u: goto L_089B05E8;
    case 114u: goto L_089B05F0;
    case 115u: goto L_089B05F8;
    case 116u: goto L_089B060C;
    case 117u: goto L_089B0618;
    case 118u: goto L_089B0620;
    case 119u: goto L_089B0634;
    case 120u: goto L_089B0640;
    case 121u: goto L_089B0648;
    case 122u: goto L_089B0660;
    case 123u: goto L_089B0684;
    case 124u: goto L_089B0694;
    case 125u: goto L_089B06A0;
    case 126u: goto L_089B06A8;
    case 127u: goto L_089B06B0;
    case 128u: goto L_089B06B4;
    case 129u: goto L_089B06C4;
    case 130u: goto L_089B06D0;
    case 131u: goto L_089B06D8;
    case 132u: goto L_089B06E0;
    case 133u: goto L_089B06E4;
    case 134u: goto L_089B06EC;
    case 135u: goto L_089B06F0;
    case 136u: goto L_089B070C;
    case 137u: goto L_089B0718;
    case 138u: goto L_089B0720;
    case 139u: goto L_089B0728;
    case 140u: goto L_089B0738;
    case 141u: goto L_089B0744;
    case 142u: goto L_089B074C;
    case 143u: goto L_089B0754;
    case 144u: goto L_089B0758;
    case 145u: goto L_089B0760;
    case 146u: goto L_089B0784;
    case 147u: goto L_089B0798;
    case 148u: goto L_089B07AC;
    case 149u: goto L_089B07B4;
    case 150u: goto L_089B07C4;
    case 151u: goto L_089B07D0;
    case 152u: goto L_089B07D8;
    case 153u: goto L_089B07E0;
    case 154u: goto L_089B0824;
    case 155u: goto L_089B085C;
    case 156u: goto L_089B0884;
    case 157u: goto L_089B08C4;
    case 158u: goto L_089B08D4;
    case 159u: goto L_089B08D8;
    case 160u: goto L_089B08E4;
    case 161u: goto L_089B08EC;
    case 162u: goto L_089B08FC;
    case 163u: goto L_089B0904;
    case 164u: goto L_089B090C;
    case 165u: goto L_089B0914;
    case 166u: goto L_089B0920;
    case 167u: goto L_089B0928;
    case 168u: goto L_089B093C;
    case 169u: goto L_089B0944;
    case 170u: goto L_089B094C;
    case 171u: goto L_089B0954;
    case 172u: goto L_089B0960;
    case 173u: goto L_089B0970;
    case 174u: goto L_089B098C;
    case 175u: goto L_089B0998;
    case 176u: goto L_089B09AC;
    case 177u: goto L_089B09B4;
    case 178u: goto L_089B09C8;
    case 179u: goto L_089B09D4;
    case 180u: goto L_089B09E0;
    case 181u: goto L_089B09E8;
    case 182u: goto L_089B09F0;
    case 183u: goto L_089B0A04;
    case 184u: goto L_089B0A0C;
    case 185u: goto L_089B0A14;
    case 186u: goto L_089B0A20;
    case 187u: goto L_089B0A30;
    case 188u: goto L_089B0A48;
    case 189u: goto L_089B0A50;
    case 190u: goto L_089B0A5C;
    case 191u: goto L_089B0A68;
    case 192u: goto L_089B0A78;
    case 193u: goto L_089B0A80;
    case 194u: goto L_089B0A88;
    case 195u: goto L_089B0A90;
    case 196u: goto L_089B0AA0;
    case 197u: goto L_089B0AAC;
    case 198u: goto L_089B0AB4;
    case 199u: goto L_089B0ABC;
    case 200u: goto L_089B0AC0;
    case 201u: goto L_089B0AC8;
    case 202u: goto L_089B0AD4;
    case 203u: goto L_089B0AE8;
    case 204u: goto L_089B0AF8;
    case 205u: goto L_089B0AFC;
    case 206u: goto L_089B0B1C;
    case 207u: goto L_089B0B30;
    case 208u: goto L_089B0B44;
    case 209u: goto L_089B0B58;
    case 210u: goto L_089B0B64;
    case 211u: goto L_089B0B70;
    case 212u: goto L_089B0B78;
    case 213u: goto L_089B0B80;
    case 214u: goto L_089B0B8C;
    case 215u: goto L_089B0B94;
    case 216u: goto L_089B0BB0;
    case 217u: goto L_089B0BB8;
    case 218u: goto L_089B0BC0;
    case 219u: goto L_089B0BE0;
    case 220u: goto L_089B0BEC;
    case 221u: goto L_089B0C18;
    case 222u: goto L_089B0C48;
    case 223u: goto L_089B0C50;
    case 224u: goto L_089B0C58;
    case 225u: goto L_089B0C64;
    case 226u: goto L_089B0C70;
    case 227u: goto L_089B0C80;
    case 228u: goto L_089B0C8C;
    case 229u: goto L_089B0C94;
    case 230u: goto L_089B0C9C;
    case 231u: goto L_089B0CA8;
    case 232u: goto L_089B0CB0;
    case 233u: goto L_089B0CB8;
    case 234u: goto L_089B0CC4;
    case 235u: goto L_089B0CCC;
    case 236u: goto L_089B0CD8;
    case 237u: goto L_089B0CE4;
    case 238u: goto L_089B0CF0;
    case 239u: goto L_089B0CFC;
    case 240u: goto L_089B0D08;
    case 241u: goto L_089B0D0C;
    case 242u: goto L_089B0D14;
    case 243u: goto L_089B0D24;
    case 244u: goto L_089B0D2C;
    case 245u: goto L_089B0D34;
    case 246u: goto L_089B0D3C;
    case 247u: goto L_089B0D48;
    case 248u: goto L_089B0D54;
    case 249u: goto L_089B0D6C;
    case 250u: goto L_089B0D90;
    case 251u: goto L_089B0D94;
    case 252u: goto L_089B0D9C;
    case 253u: goto L_089B0DA8;
    case 254u: goto L_089B0DB4;
    case 255u: goto L_089B0DC4;
    case 256u: goto L_089B0DCC;
    case 257u: goto L_089B0DD4;
    case 258u: goto L_089B0DDC;
    case 259u: goto L_089B0DE4;
    case 260u: goto L_089B0DF0;
    case 261u: goto L_089B0DFC;
    case 262u: goto L_089B0E14;
    case 263u: goto L_089B0E38;
    case 264u: goto L_089B0E3C;
    case 265u: goto L_089B0E44;
    case 266u: goto L_089B0E58;
    case 267u: goto L_089B0E64;
    case 268u: goto L_089B0E6C;
    case 269u: goto L_089B0E78;
    case 270u: goto L_089B0E84;
    case 271u: goto L_089B0E88;
    case 272u: goto L_089B0EA0;
    case 273u: goto L_089B0EB0;
    case 274u: goto L_089B0EB8;
    case 275u: goto L_089B0EC4;
    case 276u: goto L_089B0ECC;
    case 277u: goto L_089B0ED4;
    case 278u: goto L_089B0ED8;
    case 279u: goto L_089B0EE0;
    case 280u: goto L_089B0EE8;
    case 281u: goto L_089B0EF0;
    case 282u: goto L_089B0EF8;
    case 283u: goto L_089B0F10;
    case 284u: goto L_089B0F18;
    case 285u: goto L_089B0F30;
    case 286u: goto L_089B0F38;
    case 287u: goto L_089B0F48;
    case 288u: goto L_089B0F60;
    case 289u: goto L_089B0F68;
    case 290u: goto L_089B0F80;
    case 291u: goto L_089B0F84;
    case 292u: goto L_089B0F8C;
    case 293u: goto L_089B0FA4;
    case 294u: goto L_089B0FAC;
    case 295u: goto L_089B0FB4;
    case 296u: goto L_089B0FC0;
    case 297u: goto L_089B0FCC;
    case 298u: goto L_089B0FD8;
    case 299u: goto L_089B0FE8;
    case 300u: goto L_089B0FEC;
    case 301u: goto L_089B0FF4;
    case 302u: goto L_089B1004;
    case 303u: goto L_089B1008;
    case 304u: goto L_089B1010;
    case 305u: goto L_089B101C;
    case 306u: goto L_089B1028;
    case 307u: goto L_089B1038;
    case 308u: goto L_089B1074;
    case 309u: goto L_089B1080;
    case 310u: goto L_089B1090;
    case 311u: goto L_089B10C8;
    case 312u: goto L_089B10EC;
    case 313u: goto L_089B1134;
    case 314u: goto L_089B114C;
    case 315u: goto L_089B115C;
    case 316u: goto L_089B1168;
    case 317u: goto L_089B1178;
    case 318u: goto L_089B1188;
    case 319u: goto L_089B11A4;
    case 320u: goto L_089B11AC;
    case 321u: goto L_089B11B4;
    case 322u: goto L_089B11C8;
    case 323u: goto L_089B11D4;
    case 324u: goto L_089B11DC;
    case 325u: goto L_089B11E8;
    case 326u: goto L_089B11F8;
    case 327u: goto L_089B11FC;
    case 328u: goto L_089B1208;
    case 329u: goto L_089B1234;
    case 330u: goto L_089B1260;
    case 331u: goto L_089B1270;
    case 332u: goto L_089B1280;
    case 333u: goto L_089B1288;
    case 334u: goto L_089B1290;
    case 335u: goto L_089B1298;
    case 336u: goto L_089B12A0;
    case 337u: goto L_089B12B0;
    case 338u: goto L_089B12CC;
    case 339u: goto L_089B12D4;
    case 340u: goto L_089B12E0;
    case 341u: goto L_089B12F0;
    case 342u: goto L_089B1300;
    case 343u: goto L_089B130C;
    case 344u: goto L_089B131C;
    case 345u: goto L_089B1330;
    case 346u: goto L_089B134C;
    case 347u: goto L_089B1364;
    case 348u: goto L_089B13AC;
    case 349u: goto L_089B13D4;
    case 350u: goto L_089B13DC;
    case 351u: goto L_089B13F4;
    case 352u: goto L_089B140C;
    case 353u: goto L_089B1440;
    case 354u: goto L_089B1474;
    case 355u: goto L_089B14A8;
    case 356u: goto L_089B14DC;
    case 357u: goto L_089B1510;
    case 358u: goto L_089B1544;
    case 359u: goto L_089B1570;
    case 360u: goto L_089B1578;
    case 361u: goto L_089B1594;
    case 362u: goto L_089B15A0;
    case 363u: goto L_089B15B8;
    case 364u: goto L_089B15C4;
    case 365u: goto L_089B15E4;
    case 366u: goto L_089B1600;
    case 367u: goto L_089B160C;
    case 368u: goto L_089B1628;
    case 369u: goto L_089B1634;
    case 370u: goto L_089B1698;
    case 371u: goto L_089B16A0;
    case 372u: goto L_089B16AC;
    case 373u: goto L_089B1708;
    case 374u: goto L_089B170C;
    case 375u: goto L_089B1714;
    case 376u: goto L_089B171C;
    case 377u: goto L_089B1724;
    case 378u: goto L_089B1734;
    case 379u: goto L_089B1774;
    case 380u: goto L_089B177C;
    case 381u: goto L_089B17A8;
    case 382u: goto L_089B17B4;
    case 383u: goto L_089B17C0;
    case 384u: goto L_089B17DC;
    case 385u: goto L_089B17E4;
    case 386u: goto L_089B17EC;
    case 387u: goto L_089B17F4;
    case 388u: goto L_089B181C;
    case 389u: goto L_089B1824;
    case 390u: goto L_089B184C;
    case 391u: goto L_089B185C;
    case 392u: goto L_089B186C;
    case 393u: goto L_089B187C;
    case 394u: goto L_089B188C;
    case 395u: goto L_089B189C;
    case 396u: goto L_089B18A0;
    case 397u: goto L_089B18BC;
    case 398u: goto L_089B18CC;
    case 399u: goto L_089B18DC;
    case 400u: goto L_089B18EC;
    case 401u: goto L_089B1904;
    case 402u: goto L_089B1914;
    case 403u: goto L_089B191C;
    case 404u: goto L_089B1924;
    case 405u: goto L_089B1934;
    case 406u: goto L_089B1938;
    case 407u: goto L_089B197C;
    case 408u: goto L_089B1988;
    case 409u: goto L_089B19A0;
    case 410u: goto L_089B19A8;
    case 411u: goto L_089B19B0;
    case 412u: goto L_089B19C8;
    case 413u: goto L_089B19CC;
    case 414u: goto L_089B19D8;
    case 415u: goto L_089B19E0;
    case 416u: goto L_089B19F0;
    case 417u: goto L_089B19F8;
    case 418u: goto L_089B1A08;
    case 419u: goto L_089B1A10;
    case 420u: goto L_089B1A18;
    case 421u: goto L_089B1A2C;
    case 422u: goto L_089B1A3C;
    case 423u: goto L_089B1A44;
    case 424u: goto L_089B1A4C;
    case 425u: goto L_089B1A68;
    case 426u: goto L_089B1A70;
    case 427u: goto L_089B1A78;
    case 428u: goto L_089B1A80;
    case 429u: goto L_089B1A88;
    case 430u: goto L_089B1A90;
    case 431u: goto L_089B1AB4;
    case 432u: goto L_089B1ABC;
    case 433u: goto L_089B1AC4;
    case 434u: goto L_089B1AF8;
    case 435u: goto L_089B1B08;
    case 436u: goto L_089B1B18;
    case 437u: goto L_089B1B20;
    case 438u: goto L_089B1B28;
    case 439u: goto L_089B1B40;
    case 440u: goto L_089B1B4C;
    case 441u: goto L_089B1B70;
    case 442u: goto L_089B1BA4;
    case 443u: goto L_089B1BB0;
    case 444u: goto L_089B1BD0;
    case 445u: goto L_089B1BD8;
    case 446u: goto L_089B1BF4;
    case 447u: goto L_089B1C00;
    case 448u: goto L_089B1C08;
    case 449u: goto L_089B1C18;
    case 450u: goto L_089B1C64;
    case 451u: goto L_089B1C88;
    case 452u: goto L_089B1C8C;
    case 453u: goto L_089B1CAC;
    case 454u: goto L_089B1CC4;
    case 455u: goto L_089B1CCC;
    case 456u: goto L_089B1CD4;
    case 457u: goto L_089B1CEC;
    case 458u: goto L_089B1CF4;
    case 459u: goto L_089B1D0C;
    case 460u: goto L_089B1D24;
    case 461u: goto L_089B1D30;
    case 462u: goto L_089B1D38;
    case 463u: goto L_089B1D3C;
    case 464u: goto L_089B1D58;
    case 465u: goto L_089B1D6C;
    case 466u: goto L_089B1D74;
    case 467u: goto L_089B1D78;
    case 468u: goto L_089B1D80;
    case 469u: goto L_089B1D84;
    case 470u: goto L_089B1E74;
    case 471u: goto L_089B1E88;
    case 472u: goto L_089B1E90;
    case 473u: goto L_089B1E98;
    case 474u: goto L_089B1E9C;
    case 475u: goto L_089B1EA4;
    case 476u: goto L_089B1ED0;
    case 477u: goto L_089B1EE4;
    case 478u: goto L_089B1EEC;
    case 479u: goto L_089B1EF4;
    case 480u: goto L_089B1EF8;
    case 481u: goto L_089B1F48;
    case 482u: goto L_089B1F6C;
    case 483u: goto L_089B1F90;
    case 484u: goto L_089B1FA4;
    case 485u: goto L_089B1FFC;
    case 486u: goto L_089B2014;
    case 487u: goto L_089B2040;
    case 488u: goto L_089B2070;
    case 489u: goto L_089B2080;
    case 490u: goto L_089B2088;
    case 491u: goto L_089B20BC;
    case 492u: goto L_089B20D4;
    case 493u: goto L_089B2100;
    case 494u: goto L_089B2130;
    case 495u: goto L_089B2140;
    case 496u: goto L_089B2150;
    case 497u: goto L_089B216C;
    case 498u: goto L_089B2170;
    case 499u: goto L_089B2188;
    case 500u: goto L_089B2198;
    case 501u: goto L_089B21A8;
    case 502u: goto L_089B21E8;
    case 503u: goto L_089B2200;
    case 504u: goto L_089B2210;
    case 505u: goto L_089B221C;
    case 506u: goto L_089B2224;
    case 507u: goto L_089B2230;
    case 508u: goto L_089B2238;
    case 509u: goto L_089B2250;
    case 510u: goto L_089B226C;
    case 511u: goto L_089B227C;
    case 512u: goto L_089B2284;
    case 513u: goto L_089B2290;
    case 514u: goto L_089B2298;
    case 515u: goto L_089B22A8;
    case 516u: goto L_089B22BC;
    case 517u: goto L_089B22C8;
    case 518u: goto L_089B22D0;
    case 519u: goto L_089B22E0;
    case 520u: goto L_089B22EC;
    case 521u: goto L_089B22FC;
    case 522u: goto L_089B2304;
    case 523u: goto L_089B230C;
    case 524u: goto L_089B2314;
    case 525u: goto L_089B231C;
    case 526u: goto L_089B2324;
    case 527u: goto L_089B2334;
    case 528u: goto L_089B2344;
    case 529u: goto L_089B2354;
    case 530u: goto L_089B2364;
    case 531u: goto L_089B2374;
    case 532u: goto L_089B2384;
    case 533u: goto L_089B2394;
    case 534u: goto L_089B23A4;
    case 535u: goto L_089B23B4;
    case 536u: goto L_089B23C4;
    case 537u: goto L_089B23D0;
    case 538u: goto L_089B23D8;
    case 539u: goto L_089B23E0;
    case 540u: goto L_089B240C;
    case 541u: goto L_089B2418;
    case 542u: goto L_089B2420;
    case 543u: goto L_089B2428;
    case 544u: goto L_089B2430;
    case 545u: goto L_089B2440;
    case 546u: goto L_089B2450;
    case 547u: goto L_089B2460;
    case 548u: goto L_089B249C;
    case 549u: goto L_089B24B4;
    case 550u: goto L_089B24C0;
    case 551u: goto L_089B24D0;
    case 552u: goto L_089B24F0;
    case 553u: goto L_089B24F8;
    case 554u: goto L_089B2508;
    case 555u: goto L_089B2514;
    case 556u: goto L_089B251C;
    case 557u: goto L_089B2528;
    case 558u: goto L_089B255C;
    case 559u: goto L_089B256C;
    case 560u: goto L_089B2578;
    case 561u: goto L_089B2580;
    case 562u: goto L_089B258C;
    case 563u: goto L_089B25C0;
    case 564u: goto L_089B25C8;
    case 565u: goto L_089B25D0;
    case 566u: goto L_089B25E0;
    case 567u: goto L_089B25FC;
    case 568u: goto L_089B260C;
    case 569u: goto L_089B261C;
    case 570u: goto L_089B2628;
    case 571u: goto L_089B2638;
    case 572u: goto L_089B2640;
    case 573u: goto L_089B2648;
    case 574u: goto L_089B2650;
    case 575u: goto L_089B2668;
    case 576u: goto L_089B2678;
    case 577u: goto L_089B2690;
    case 578u: goto L_089B2698;
    case 579u: goto L_089B26A4;
    case 580u: goto L_089B26B8;
    case 581u: goto L_089B26C4;
    case 582u: goto L_089B26E8;
    case 583u: goto L_089B270C;
    case 584u: goto L_089B2718;
    case 585u: goto L_089B273C;
    case 586u: goto L_089B2748;
    case 587u: goto L_089B276C;
    case 588u: goto L_089B2778;
    case 589u: goto L_089B2788;
    case 590u: goto L_089B279C;
    case 591u: goto L_089B27A8;
    case 592u: goto L_089B27AC;
    case 593u: goto L_089B27C0;
    case 594u: goto L_089B27C8;
    case 595u: goto L_089B27D4;
    case 596u: goto L_089B27DC;
    case 597u: goto L_089B27E8;
    case 598u: goto L_089B27F0;
    case 599u: goto L_089B27F8;
    case 600u: goto L_089B2804;
    case 601u: goto L_089B2814;
    case 602u: goto L_089B281C;
    case 603u: goto L_089B2824;
    case 604u: goto L_089B2840;
    case 605u: goto L_089B2850;
    case 606u: goto L_089B2868;
    case 607u: goto L_089B2874;
    case 608u: goto L_089B2888;
    case 609u: goto L_089B2894;
    case 610u: goto L_089B28B8;
    case 611u: goto L_089B28DC;
    case 612u: goto L_089B28E8;
    case 613u: goto L_089B290C;
    case 614u: goto L_089B2918;
    case 615u: goto L_089B293C;
    case 616u: goto L_089B2948;
    case 617u: goto L_089B2954;
    case 618u: goto L_089B295C;
    case 619u: goto L_089B2978;
    case 620u: goto L_089B2988;
    case 621u: goto L_089B298C;
    case 622u: goto L_089B29C4;
    case 623u: goto L_089B2A00;
    case 624u: goto L_089B2A08;
    case 625u: goto L_089B2A10;
    case 626u: goto L_089B2A1C;
    case 627u: goto L_089B2A24;
    case 628u: goto L_089B2A2C;
    case 629u: goto L_089B2A34;
    case 630u: goto L_089B2A58;
    case 631u: goto L_089B2A74;
    case 632u: goto L_089B2A90;
    case 633u: goto L_089B2AA0;
    case 634u: goto L_089B2AA8;
    case 635u: goto L_089B2AB8;
    case 636u: goto L_089B2AC4;
    case 637u: goto L_089B2AD4;
    case 638u: goto L_089B2AE4;
    case 639u: goto L_089B2AEC;
    case 640u: goto L_089B2AF4;
    case 641u: goto L_089B2B0C;
    case 642u: goto L_089B2B1C;
    case 643u: goto L_089B2B2C;
    case 644u: goto L_089B2B34;
    case 645u: goto L_089B2B3C;
    case 646u: goto L_089B2B44;
    case 647u: goto L_089B2B60;
    case 648u: goto L_089B2B70;
    case 649u: goto L_089B2B84;
    case 650u: goto L_089B2BA0;
    case 651u: goto L_089B2BAC;
    case 652u: goto L_089B2BB8;
    case 653u: goto L_089B2BC0;
    case 654u: goto L_089B2BD0;
    case 655u: goto L_089B2BE0;
    case 656u: goto L_089B2BEC;
    case 657u: goto L_089B2C00;
    case 658u: goto L_089B2C08;
    case 659u: goto L_089B2C14;
    case 660u: goto L_089B2C20;
    case 661u: goto L_089B2C30;
    case 662u: goto L_089B2C38;
    case 663u: goto L_089B2C40;
    case 664u: goto L_089B2C50;
    case 665u: goto L_089B2C68;
    case 666u: goto L_089B2C74;
    case 667u: goto L_089B2C84;
    case 668u: goto L_089B2C94;
    case 669u: goto L_089B2C98;
    case 670u: goto L_089B2CB4;
    case 671u: goto L_089B2CC0;
    case 672u: goto L_089B2CCC;
    case 673u: goto L_089B2CD8;
    case 674u: goto L_089B2CDC;
    case 675u: goto L_089B2CE4;
    case 676u: goto L_089B2D00;
    case 677u: goto L_089B2D10;
    case 678u: goto L_089B2D24;
    case 679u: goto L_089B2D34;
    case 680u: goto L_089B2D60;
    case 681u: goto L_089B2D6C;
    case 682u: goto L_089B2D7C;
    case 683u: goto L_089B2D84;
    case 684u: goto L_089B2D94;
    case 685u: goto L_089B2DAC;
    case 686u: goto L_089B2DBC;
    case 687u: goto L_089B2DDC;
    case 688u: goto L_089B2DEC;
    case 689u: goto L_089B2E00;
    case 690u: goto L_089B2E18;
    case 691u: goto L_089B2E20;
    case 692u: goto L_089B2E3C;
    case 693u: goto L_089B2ECC;
    case 694u: goto L_089B2EE0;
    case 695u: goto L_089B2EF0;
    case 696u: goto L_089B2F00;
    case 697u: goto L_089B2F18;
    case 698u: goto L_089B2F28;
    case 699u: goto L_089B2F4C;
    case 700u: goto L_089B2FAC;
    case 701u: goto L_089B2FF4;
    case 702u: goto L_089B3014;
    case 703u: goto L_089B3020;
    case 704u: goto L_089B304C;
    case 705u: goto L_089B3054;
    case 706u: goto L_089B3060;
    case 707u: goto L_089B3074;
    case 708u: goto L_089B3084;
    case 709u: goto L_089B30A4;
    case 710u: goto L_089B30BC;
    case 711u: goto L_089B30C4;
    case 712u: goto L_089B30CC;
    case 713u: goto L_089B30DC;
    case 714u: goto L_089B30EC;
    case 715u: goto L_089B3180;
    case 716u: goto L_089B32D4;
    case 717u: goto L_089B32E0;
    case 718u: goto L_089B32E8;
    case 719u: goto L_089B32F8;
    case 720u: goto L_089B3320;
    case 721u: goto L_089B3380;
    case 722u: goto L_089B3388;
    case 723u: goto L_089B3398;
    case 724u: goto L_089B33E8;
    case 725u: goto L_089B33F4;
    case 726u: goto L_089B3440;
    case 727u: goto L_089B3458;
    case 728u: goto L_089B345C;
    case 729u: goto L_089B3460;
    case 730u: goto L_089B3470;
    case 731u: goto L_089B3484;
    case 732u: goto L_089B34C8;
    case 733u: goto L_089B34F8;
    case 734u: goto L_089B3548;
    case 735u: goto L_089B3568;
    case 736u: goto L_089B3578;
    case 737u: goto L_089B3588;
    case 738u: goto L_089B3590;
    case 739u: goto L_089B35B4;
    case 740u: goto L_089B35D0;
    case 741u: goto L_089B35F8;
    case 742u: goto L_089B360C;
    case 743u: goto L_089B3620;
    case 744u: goto L_089B3638;
    case 745u: goto L_089B365C;
    case 746u: goto L_089B366C;
    case 747u: goto L_089B367C;
    case 748u: goto L_089B3684;
    case 749u: goto L_089B36BC;
    case 750u: goto L_089B36CC;
    case 751u: goto L_089B36D4;
    case 752u: goto L_089B36DC;
    case 753u: goto L_089B36EC;
    case 754u: goto L_089B36FC;
    case 755u: goto L_089B370C;
    case 756u: goto L_089B3724;
    case 757u: goto L_089B374C;
    case 758u: goto L_089B3774;
    case 759u: goto L_089B3794;
    case 760u: goto L_089B37A8;
    case 761u: goto L_089B37B8;
    case 762u: goto L_089B37C8;
    case 763u: goto L_089B37D8;
    case 764u: goto L_089B37DC;
    case 765u: goto L_089B37E8;
    case 766u: goto L_089B3800;
    case 767u: goto L_089B3810;
    case 768u: goto L_089B3820;
    case 769u: goto L_089B382C;
    case 770u: goto L_089B3868;
    case 771u: goto L_089B3890;
    case 772u: goto L_089B38A8;
    case 773u: goto L_089B38B4;
    case 774u: goto L_089B38D4;
    case 775u: goto L_089B38FC;
    case 776u: goto L_089B3920;
    case 777u: goto L_089B392C;
    case 778u: goto L_089B394C;
    case 779u: goto L_089B3950;
    case 780u: goto L_089B395C;
    case 781u: goto L_089B396C;
    case 782u: goto L_089B3978;
    case 783u: goto L_089B3998;
    case 784u: goto L_089B39C0;
    case 785u: goto L_089B39D8;
    case 786u: goto L_089B39E4;
    case 787u: goto L_089B3A04;
    case 788u: goto L_089B3A24;
    case 789u: goto L_089B3A98;
    case 790u: goto L_089B3AA0;
    case 791u: goto L_089B3AB4;
    case 792u: goto L_089B3ADC;
    case 793u: goto L_089B3AE0;
    case 794u: goto L_089B3AFC;
    case 795u: goto L_089B3B10;
    case 796u: goto L_089B3B24;
    case 797u: goto L_089B3B2C;
    case 798u: goto L_089B3B48;
    case 799u: goto L_089B3B50;
    case 800u: goto L_089B3B58;
    case 801u: goto L_089B3B60;
    case 802u: goto L_089B3B70;
    case 803u: goto L_089B3B78;
    case 804u: goto L_089B3B80;
    case 805u: goto L_089B3B88;
    case 806u: goto L_089B3B90;
    case 807u: goto L_089B3B98;
    case 808u: goto L_089B3BA8;
    case 809u: goto L_089B3BB0;
    case 810u: goto L_089B3BD0;
    case 811u: goto L_089B3BE8;
    case 812u: goto L_089B3BF4;
    case 813u: goto L_089B3C14;
    case 814u: goto L_089B3C40;
    case 815u: goto L_089B3C54;
    case 816u: goto L_089B3C5C;
    case 817u: goto L_089B3C98;
    case 818u: goto L_089B3CA0;
    case 819u: goto L_089B3CA8;
    case 820u: goto L_089B3CB0;
    case 821u: goto L_089B3CB8;
    case 822u: goto L_089B3CC8;
    case 823u: goto L_089B3CD0;
    case 824u: goto L_089B3CF0;
    case 825u: goto L_089B3D08;
    case 826u: goto L_089B3D20;
    case 827u: goto L_089B3D3C;
    case 828u: goto L_089B3D58;
    case 829u: goto L_089B3D64;
    case 830u: goto L_089B3D70;
    case 831u: goto L_089B3D7C;
    case 832u: goto L_089B3D80;
    case 833u: goto L_089B3D88;
    case 834u: goto L_089B3D98;
    case 835u: goto L_089B3DA4;
    case 836u: goto L_089B3DB4;
    case 837u: goto L_089B3DC0;
    case 838u: goto L_089B3DC8;
    case 839u: goto L_089B3DD4;
    case 840u: goto L_089B3DE0;
    case 841u: goto L_089B3DEC;
    case 842u: goto L_089B3DF0;
    case 843u: goto L_089B3DF8;
    case 844u: goto L_089B3E08;
    case 845u: goto L_089B3E14;
    case 846u: goto L_089B3E1C;
    case 847u: goto L_089B3E2C;
    case 848u: goto L_089B3E38;
    case 849u: goto L_089B3E40;
    case 850u: goto L_089B3E48;
    case 851u: goto L_089B3E58;
    case 852u: goto L_089B3E64;
    case 853u: goto L_089B3E74;
    case 854u: goto L_089B3E84;
    case 855u: goto L_089B3EAC;
    case 856u: goto L_089B3EB4;
    case 857u: goto L_089B3EC8;
    case 858u: goto L_089B3ED4;
    case 859u: goto L_089B3EF4;
    case 860u: goto L_089B3F20;
    case 861u: goto L_089B3F2C;
    case 862u: goto L_089B3F3C;
    case 863u: goto L_089B3F74;
    case 864u: goto L_089B3F7C;
    case 865u: goto L_089B3F84;
    case 866u: goto L_089B3F8C;
    case 867u: goto L_089B3F94;
    case 868u: goto L_089B3FA0;
    case 869u: goto L_089B3FB0;
    case 870u: goto L_089B3FE8;
    case 871u: goto L_089B3FF0;
    case 872u: goto L_089B3FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089B0000:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[19];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089B0020;
      }
      goto L_089B0008;
    }
L_089B0008:
    ctx.gpr[31] = (0x089B0010u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x089B0010u) goto L_089B0010;
    return;
L_089B0010:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0028;
      }
      goto L_089B0018;
    }
L_089B0018:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0364;
      }
      goto L_089B0020;
    }
L_089B0020:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0364;
      }
      goto L_089B0028;
    }
L_089B0028:
    ctx.gpr[31] = (0x089B0030u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B0030u) goto L_089B0030;
    return;
L_089B0030:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B004C;
      }
      goto L_089B0038;
    }
L_089B0038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0054;
      }
      goto L_089B004C;
    }
L_089B004C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0364;
      }
      goto L_089B0054;
    }
L_089B0054:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x089B0078u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0078u) goto L_089B0078;
    return;
L_089B0078:
    ctx.gpr[31] = (0x089B0080u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0080u) goto L_089B0080;
    return;
L_089B0080:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[31] = (0x089B008Cu);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x089B008Cu) goto L_089B008C;
    return;
L_089B008C:
    ctx.gpr[4] = (16457u << 16u);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[0];
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_089B00BC;
    }
    goto L_089B00BC;
L_089B00BC:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_089B00E0;
      }
      goto L_089B00D0;
    }
L_089B00D0:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[12];
    goto L_089B00E0;
L_089B00E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0124;
      }
      goto L_089B00F4;
    }
L_089B00F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0124;
      }
      goto L_089B0100;
    }
L_089B0100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(680)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0124;
      }
      goto L_089B010C;
    }
L_089B010C:
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[31] = (0x089B0118u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B0118u) goto L_089B0118;
    return;
L_089B0118:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0124;
      }
      goto L_089B0120;
    }
L_089B0120:
    ctx.gpr[18] = (0u | 1u);
    goto L_089B0124;
L_089B0124:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B0154;
      }
      goto L_089B0134;
    }
L_089B0134:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 169u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0154;
      }
      goto L_089B0144;
    }
L_089B0144:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0154;
      }
      goto L_089B014C;
    }
L_089B014C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0188;
      }
      goto L_089B0154;
    }
L_089B0154:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089B0168u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 85u, 0x089A064Cu>(ctx, &aot_mem) && ctx.pc == 0x089B0168u) goto L_089B0168;
    return;
L_089B0168:
    ctx.gpr[31] = (0x089B0170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089B0170u) goto L_089B0170;
    return;
L_089B0170:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B01A4;
      }
      goto L_089B0180;
    }
L_089B0180:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
      if (branch_taken) {
          goto L_089B0190;
      }
      goto L_089B0188;
    }
L_089B0188:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0364;
      }
      goto L_089B0190;
    }
L_089B0190:
    ctx.gpr[5] = (0u | 169u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B01A4;
      }
      goto L_089B019C;
    }
L_089B019C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0288;
      }
      goto L_089B01A4;
    }
L_089B01A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (0x089B01B4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089B01B4u) goto L_089B01B4;
    return;
L_089B01B4:
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[26];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089B01D8;
      }
      goto L_089B01C8;
    }
L_089B01C8:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    goto L_089B01D8;
L_089B01D8:
    ctx.gpr[31] = (0x089B01E0u);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[24];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x089B01E0u) goto L_089B01E0;
    return;
L_089B01E0:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B01F8;
      }
      goto L_089B01F0;
    }
L_089B01F0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[24] - ctx.fpr[28];
      if (branch_taken) {
          goto L_089B01FC;
      }
      goto L_089B01F8;
    }
L_089B01F8:
    ctx.fpr[20] = ctx.fpr[24] + ctx.fpr[28];
    goto L_089B01FC;
L_089B01FC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (0u | 169u);
      if (branch_taken) {
          goto L_089B0210;
      }
      goto L_089B0204;
    }
L_089B0204:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B0218;
      }
      goto L_089B0210;
    }
L_089B0210:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 145u);
      if (branch_taken) {
          goto L_089B0228;
      }
      goto L_089B0218;
    }
L_089B0218:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B0228;
      }
      goto L_089B0224;
    }
L_089B0224:
    ctx.gpr[17] = (0u | 158u);
    goto L_089B0228;
L_089B0228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B0234u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B0234u) goto L_089B0234;
    return;
L_089B0234:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0244;
      }
      goto L_089B023C;
    }
L_089B023C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0364;
      }
      goto L_089B0244;
    }
L_089B0244:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089B025Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089B025Cu) goto L_089B025C;
    return;
L_089B025C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B0280u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12596));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x089B0280u) goto L_089B0280;
    return;
L_089B0280:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 11u);
      if (branch_taken) {
          goto L_089B02E4;
      }
      goto L_089B0288;
    }
L_089B0288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B0294u);
    ctx.gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B0294u) goto L_089B0294;
    return;
L_089B0294:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B02A4;
      }
      goto L_089B029C;
    }
L_089B029C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0364;
      }
      goto L_089B02A4;
    }
L_089B02A4:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089B02BCu);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089B02BCu) goto L_089B02BC;
    return;
L_089B02BC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B02E0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12596));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x089B02E0u) goto L_089B02E0;
    return;
L_089B02E0:
    ctx.gpr[17] = (0u | 11u);
    goto L_089B02E4;
L_089B02E4:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B02F8;
      }
      goto L_089B02EC;
    }
L_089B02EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B02F8u);
    ctx.gpr[5] = (0u | 142u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x089B02F8u) goto L_089B02F8;
    return;
L_089B02F8:
    ctx.gpr[31] = (0x089B0300u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0300u) goto L_089B0300;
    return;
L_089B0300:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x089B030Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 61u, 0x089A04ACu>(ctx, &aot_mem) && ctx.pc == 0x089B030Cu) goto L_089B030C;
    return;
L_089B030C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), 0u);
    ctx.gpr[31] = (0x089B031Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 727u, 0x0899FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089B031Cu) goto L_089B031C;
    return;
L_089B031C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B032C;
      }
      goto L_089B0328;
    }
L_089B0328:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), ctx.gpr[18]);
    goto L_089B032C;
L_089B032C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089B0360;
      }
      goto L_089B0338;
    }
L_089B0338:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0358;
      }
      goto L_089B0344;
    }
L_089B0344:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089B0358;
    }
    goto L_089B034C;
L_089B034C:
    ctx.gpr[31] = (0x089B0354u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089B0354u) goto L_089B0354;
    return;
L_089B0354:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089B0358;
L_089B0358:
    ctx.gpr[31] = (0x089B0360u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x089B0360u) goto L_089B0360;
    return;
L_089B0360:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[19]);
    goto L_089B0364;
L_089B0364:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B0398:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x089B03CCu);
    ctx.gpr[19] = (ctx.gpr[6] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x089B03CCu) goto L_089B03CC;
    return;
L_089B03CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B085C;
      }
      goto L_089B03D4;
    }
L_089B03D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B085C;
      }
      goto L_089B03E8;
    }
L_089B03E8:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089B042C;
      }
      goto L_089B0400;
    }
L_089B0400:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B042C;
      }
      goto L_089B040C;
    }
L_089B040C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(680)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B042C;
      }
      goto L_089B0418;
    }
L_089B0418:
    ctx.gpr[31] = (0x089B0420u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B0420u) goto L_089B0420;
    return;
L_089B0420:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B042C;
      }
      goto L_089B0428;
    }
L_089B0428:
    ctx.gpr[19] = (0u | 1u);
    goto L_089B042C;
L_089B042C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0584;
      }
      goto L_089B0434;
    }
L_089B0434:
    ctx.gpr[31] = (0x089B043Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B043Cu) goto L_089B043C;
    return;
L_089B043C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B04B4;
      }
      goto L_089B0444;
    }
L_089B0444:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x089B0468u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0468u) goto L_089B0468;
    return;
L_089B0468:
    ctx.gpr[31] = (0x089B0470u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0470u) goto L_089B0470;
    return;
L_089B0470:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[31] = (0x089B047Cu);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x089B047Cu) goto L_089B047C;
    return;
L_089B047C:
    ctx.gpr[4] = (16457u << 16u);
    ctx.fpr[13] = ctx.fpr[24] - ctx.fpr[0];
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B04D4;
      }
      goto L_089B04AC;
    }
L_089B04AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B04D8;
      }
      goto L_089B04B4;
    }
L_089B04B4:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2950), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2968), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(2968));
    ctx.gpr[31] = (0x089B04CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089B04CCu) goto L_089B04CC;
    return;
L_089B04CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B085C;
      }
      goto L_089B04D4;
    }
L_089B04D4:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    goto L_089B04D8;
L_089B04D8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B04FC;
      }
      goto L_089B04EC;
    }
L_089B04EC:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_089B04FC;
L_089B04FC:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B054C;
      }
      goto L_089B050C;
    }
L_089B050C:
    ctx.gpr[31] = (0x089B0514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089B0514u) goto L_089B0514;
    return;
L_089B0514:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0544;
      }
      goto L_089B0524;
    }
L_089B0524:
    ctx.gpr[31] = (0x089B052Cu);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089B052Cu) goto L_089B052C;
    return;
L_089B052C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B056C;
      }
      goto L_089B053C;
    }
L_089B053C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0570;
      }
      goto L_089B0544;
    }
L_089B0544:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B085C;
      }
      goto L_089B054C;
    }
L_089B054C:
    ctx.gpr[31] = (0x089B0554u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089B0554u) goto L_089B0554;
    return;
L_089B0554:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0524;
      }
      goto L_089B0564;
    }
L_089B0564:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089B0524;
      }
      goto L_089B056C;
    }
L_089B056C:
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[22];
    goto L_089B0570;
L_089B0570:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B057Cu);
    ctx.gpr[5] = (0u | 142u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x089B057Cu) goto L_089B057C;
    return;
L_089B057C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B05E0;
      }
      goto L_089B0584;
    }
L_089B0584:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B05E0;
      }
      goto L_089B058C;
    }
L_089B058C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (0x089B059Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089B059Cu) goto L_089B059C;
    return;
L_089B059C:
    ctx.gpr[31] = (0x089B05A4u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089B05A4u) goto L_089B05A4;
    return;
L_089B05A4:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49097u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[31] = (0x089B05DCu);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x089B05DCu) goto L_089B05DC;
    return;
L_089B05DC:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B05E0;
L_089B05E0:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B060C;
      }
      goto L_089B05E8;
    }
L_089B05E8:
    ctx.gpr[31] = (0x089B05F0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B05F0u) goto L_089B05F0;
    return;
L_089B05F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B070C;
      }
      goto L_089B05F8;
    }
L_089B05F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B070C;
      }
      goto L_089B060C;
    }
L_089B060C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089B0618u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 92u, 0x089A0714u>(ctx, &aot_mem) && ctx.pc == 0x089B0618u) goto L_089B0618;
    return;
L_089B0618:
    ctx.gpr[31] = (0x089B0620u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 61u, 0x089A04ACu>(ctx, &aot_mem) && ctx.pc == 0x089B0620u) goto L_089B0620;
    return;
L_089B0620:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089B0634u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 85u, 0x089A064Cu>(ctx, &aot_mem) && ctx.pc == 0x089B0634u) goto L_089B0634;
    return;
L_089B0634:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B0640u);
    ctx.gpr[5] = (0u | 157u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B0640u) goto L_089B0640;
    return;
L_089B0640:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B06A8;
      }
      goto L_089B0648;
    }
L_089B0648:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089B0660u);
    ctx.gpr[6] = (0u | 157u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089B0660u) goto L_089B0660;
    return;
L_089B0660:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B0684u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12596));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x089B0684u) goto L_089B0684;
    return;
L_089B0684:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(848)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(848), 0u);
    ctx.gpr[31] = (0x089B0694u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 727u, 0x0899FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089B0694u) goto L_089B0694;
    return;
L_089B0694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(848)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B06B0;
      }
      goto L_089B06A0;
    }
L_089B06A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B06B4;
      }
      goto L_089B06A8;
    }
L_089B06A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B085C;
      }
      goto L_089B06B0;
    }
L_089B06B0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(848), ctx.gpr[18]);
    goto L_089B06B4;
L_089B06B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 31u);
      if (branch_taken) {
          goto L_089B06F0;
      }
      goto L_089B06C4;
    }
L_089B06C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B06E4;
      }
      goto L_089B06D0;
    }
L_089B06D0:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
        goto L_089B06E4;
    }
    goto L_089B06D8;
L_089B06D8:
    ctx.gpr[31] = (0x089B06E0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089B06E0u) goto L_089B06E0;
    return;
L_089B06E0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
    goto L_089B06E4;
L_089B06E4:
    ctx.gpr[31] = (0x089B06ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x089B06ECu) goto L_089B06EC;
    return;
L_089B06EC:
    ctx.gpr[4] = (0u | 31u);
    goto L_089B06F0;
L_089B06F0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089B07AC;
      }
      goto L_089B070C;
    }
L_089B070C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089B0718u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 92u, 0x089A0714u>(ctx, &aot_mem) && ctx.pc == 0x089B0718u) goto L_089B0718;
    return;
L_089B0718:
    ctx.gpr[31] = (0x089B0720u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 61u, 0x089A04ACu>(ctx, &aot_mem) && ctx.pc == 0x089B0720u) goto L_089B0720;
    return;
L_089B0720:
    ctx.gpr[31] = (0x089B0728u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 727u, 0x0899FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089B0728u) goto L_089B0728;
    return;
L_089B0728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0760;
      }
      goto L_089B0738;
    }
L_089B0738:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0758;
      }
      goto L_089B0744;
    }
L_089B0744:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
        goto L_089B0758;
    }
    goto L_089B074C;
L_089B074C:
    ctx.gpr[31] = (0x089B0754u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089B0754u) goto L_089B0754;
    return;
L_089B0754:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
    goto L_089B0758;
L_089B0758:
    ctx.gpr[31] = (0x089B0760u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x089B0760u) goto L_089B0760;
    return;
L_089B0760:
    ctx.gpr[4] = (0u | 45u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089B0784u);
    ctx.gpr[6] = (0u | 146u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089B0784u) goto L_089B0784;
    return;
L_089B0784:
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B0798u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12596));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x089B0798u) goto L_089B0798;
    return;
L_089B0798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089B07AC;
L_089B07AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B085C;
      }
      goto L_089B07B4;
    }
L_089B07B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B085C;
      }
      goto L_089B07C4;
    }
L_089B07C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B085C;
      }
      goto L_089B07D0;
    }
L_089B07D0:
    ctx.gpr[31] = (0x089B07D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B07D8u) goto L_089B07D8;
    return;
L_089B07D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_089B085C;
      }
      goto L_089B07E0;
    }
L_089B07E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2064));
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B0824u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 306u, 0x08ACD40Cu>(ctx, &aot_mem) && ctx.pc == 0x089B0824u) goto L_089B0824;
    return;
L_089B0824:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2064));
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B085Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 306u, 0x08ACD40Cu>(ctx, &aot_mem) && ctx.pc == 0x089B085Cu) goto L_089B085C;
    return;
L_089B085C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
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
L_089B0884:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089B08D8;
      }
      goto L_089B08C4;
    }
L_089B08C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 214u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B08D8;
      }
      goto L_089B08D4;
    }
L_089B08D4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1924), 0u);
    goto L_089B08D8;
L_089B08D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B08FC;
      }
      goto L_089B08E4;
    }
L_089B08E4:
    ctx.gpr[31] = (0x089B08ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A296C8u>(ctx, &aot_mem) && ctx.pc == 0x089B08ECu) goto L_089B08EC;
    return;
L_089B08EC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B08FCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 510u, 0x08A2AA08u>(ctx, &aot_mem) && ctx.pc == 0x089B08FCu) goto L_089B08FC;
    return;
L_089B08FC:
    ctx.gpr[31] = (0x089B0904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089B0904u) goto L_089B0904;
    return;
L_089B0904:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B0998;
      }
      goto L_089B090C;
    }
L_089B090C:
    ctx.gpr[31] = (0x089B0914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089B0914u) goto L_089B0914;
    return;
L_089B0914:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2997)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0944;
      }
      goto L_089B0920;
    }
L_089B0920:
    ctx.gpr[31] = (0x089B0928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089B0928u) goto L_089B0928;
    return;
L_089B0928:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B094C;
      }
      goto L_089B093C;
    }
L_089B093C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B098C;
      }
      goto L_089B0944;
    }
L_089B0944:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0BEC;
      }
      goto L_089B094C;
    }
L_089B094C:
    ctx.gpr[31] = (0x089B0954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x089B0954u) goto L_089B0954;
    return;
L_089B0954:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B098C;
      }
      goto L_089B0960;
    }
L_089B0960:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B098C;
      }
      goto L_089B0970;
    }
L_089B0970:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (0u | 204u);
    ctx.gpr[31] = (0x089B098Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x089B098Cu) goto L_089B098C;
    return;
L_089B098C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B0998u);
    ctx.gpr[5] = (0u | 104u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x089B0998u) goto L_089B0998;
    return;
L_089B0998:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(640), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[18] = (0u | 54u);
      if (branch_taken) {
          goto L_089B0BEC;
      }
      goto L_089B09AC;
    }
L_089B09AC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089B0BEC;
      }
      goto L_089B09B4;
    }
L_089B09B4:
    ctx.gpr[19] = (0u | 0u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[20] = (0u | 58u);
      if (branch_taken) {
          goto L_089B09D4;
      }
      goto L_089B09C8;
    }
L_089B09C8:
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B09E0;
      }
      goto L_089B09D4;
    }
L_089B09D4:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_089B09E0;
L_089B09E0:
    ctx.gpr[31] = (0x089B09E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 727u, 0x0899FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089B09E8u) goto L_089B09E8;
    return;
L_089B09E8:
    ctx.gpr[31] = (0x089B09F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 463u, 0x089A2034u>(ctx, &aot_mem) && ctx.pc == 0x089B09F0u) goto L_089B09F0;
    return;
L_089B09F0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0A50;
      }
      goto L_089B0A04;
    }
L_089B0A04:
    ctx.gpr[31] = (0x089B0A0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B0A0Cu) goto L_089B0A0C;
    return;
L_089B0A0C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0A90;
      }
      goto L_089B0A14;
    }
L_089B0A14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0A30;
      }
      goto L_089B0A20;
    }
L_089B0A20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0A90;
      }
      goto L_089B0A30;
    }
L_089B0A30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(152));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089B0A48u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B0A48u) goto L_089B0A48;
    return;
L_089B0A48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0A90;
      }
      goto L_089B0A50;
    }
L_089B0A50:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0A78;
      }
      goto L_089B0A5C;
    }
L_089B0A5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0A90;
      }
      goto L_089B0A68;
    }
L_089B0A68:
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B0A90;
      }
      goto L_089B0A78;
    }
L_089B0A78:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    ctx.gpr[5] = (0u | 56u);
      if (branch_taken) {
          goto L_089B0A88;
      }
      goto L_089B0A80;
    }
L_089B0A80:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0A90;
      }
      goto L_089B0A88;
    }
L_089B0A88:
    ctx.gpr[31] = (0x089B0A90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 621u, 0x0888F0A4u>(ctx, &aot_mem) && ctx.pc == 0x089B0A90u) goto L_089B0A90;
    return;
L_089B0A90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0AC8;
      }
      goto L_089B0AA0;
    }
L_089B0AA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0AC0;
      }
      goto L_089B0AAC;
    }
L_089B0AAC:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089B0AC0;
    }
    goto L_089B0AB4;
L_089B0AB4:
    ctx.gpr[31] = (0x089B0ABCu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089B0ABCu) goto L_089B0ABC;
    return;
L_089B0ABC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089B0AC0;
L_089B0AC0:
    ctx.gpr[31] = (0x089B0AC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x089B0AC8u) goto L_089B0AC8;
    return;
L_089B0AC8:
    ctx.gpr[4] = (0u | 169u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[18]);
      if (branch_taken) {
          goto L_089B0B44;
      }
      goto L_089B0AD4;
    }
L_089B0AD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089B0AE8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089B0AE8u) goto L_089B0AE8;
    return;
L_089B0AE8:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089B0AFC;
      }
      goto L_089B0AF8;
    }
L_089B0AF8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_089B0AFC;
L_089B0AFC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0B58;
      }
      goto L_089B0B1C;
    }
L_089B0B1C:
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B0B30u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13080));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x089B0B30u) goto L_089B0B30;
    return;
L_089B0B30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B0B58;
      }
      goto L_089B0B44;
    }
L_089B0B44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (61440u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089B0B58;
L_089B0B58:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B0B64u);
    ctx.gpr[5] = (0u | 103u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x089B0B64u) goto L_089B0B64;
    return;
L_089B0B64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    ctx.gpr[5] = (0u | 56u);
      if (branch_taken) {
          goto L_089B0B78;
      }
      goto L_089B0B70;
    }
L_089B0B70:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0B80;
      }
      goto L_089B0B78;
    }
L_089B0B78:
    ctx.gpr[31] = (0x089B0B80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 621u, 0x0888F0A4u>(ctx, &aot_mem) && ctx.pc == 0x089B0B80u) goto L_089B0B80;
    return;
L_089B0B80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0B94;
      }
      goto L_089B0B8C;
    }
L_089B0B8C:
    ctx.gpr[31] = (0x089B0B94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 547u, 0x089A2528u>(ctx, &aot_mem) && ctx.pc == 0x089B0B94u) goto L_089B0B94;
    return;
L_089B0B94:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1812), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-29516)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 37u);
      if (branch_taken) {
          goto L_089B0BEC;
      }
      goto L_089B0BB0;
    }
L_089B0BB0:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B0BEC;
      }
      goto L_089B0BB8;
    }
L_089B0BB8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0BEC;
      }
      goto L_089B0BC0;
    }
L_089B0BC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (15395u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[5] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089B0BE0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x089B0BE0u) goto L_089B0BE0;
    return;
L_089B0BE0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089B0BEC;
L_089B0BEC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B0C18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(856)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089B0C94;
      }
      goto L_089B0C48;
    }
L_089B0C48:
    ctx.gpr[31] = (0x089B0C50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x089B0C50u) goto L_089B0C50;
    return;
L_089B0C50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0C94;
      }
      goto L_089B0C58;
    }
L_089B0C58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0C94;
      }
      goto L_089B0C64;
    }
L_089B0C64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0C8C;
      }
      goto L_089B0C70;
    }
L_089B0C70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0C9C;
      }
      goto L_089B0C80;
    }
L_089B0C80:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_089B0CCC;
      }
      goto L_089B0C8C;
    }
L_089B0C8C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(856), 0u);
      if (branch_taken) {
          goto L_089B10C8;
      }
      goto L_089B0C94;
    }
L_089B0C94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B10C8;
      }
      goto L_089B0C9C;
    }
L_089B0C9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0CC4;
      }
      goto L_089B0CA8;
    }
L_089B0CA8:
    ctx.gpr[31] = (0x089B0CB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B0CB0u) goto L_089B0CB0;
    return;
L_089B0CB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0CC4;
      }
      goto L_089B0CB8;
    }
L_089B0CB8:
    ctx.gpr[17] = (0u | 31u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_089B0CCC;
      }
      goto L_089B0CC4;
    }
L_089B0CC4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    goto L_089B0CCC;
L_089B0CCC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B0CD8u);
    ctx.gpr[5] = (0u | 2048u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 337u, 0x08865864u>(ctx, &aot_mem) && ctx.pc == 0x089B0CD8u) goto L_089B0CD8;
    return;
L_089B0CD8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0D94;
      }
      goto L_089B0CE4;
    }
L_089B0CE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B0CF0u);
    ctx.gpr[5] = (0u | 41u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B0CF0u) goto L_089B0CF0;
    return;
L_089B0CF0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0D0C;
      }
      goto L_089B0CFC;
    }
L_089B0CFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B0D08u);
    ctx.gpr[5] = (0u | 204u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B0D08u) goto L_089B0D08;
    return;
L_089B0D08:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_089B0D0C;
L_089B0D0C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0D24;
      }
      goto L_089B0D14;
    }
L_089B0D14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0D34;
      }
      goto L_089B0D24;
    }
L_089B0D24:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0D3C;
      }
      goto L_089B0D2C;
    }
L_089B0D2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0D94;
      }
      goto L_089B0D34;
    }
L_089B0D34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B10C8;
      }
      goto L_089B0D3C;
    }
L_089B0D3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B0D48u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B0D48u) goto L_089B0D48;
    return;
L_089B0D48:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0D6C;
      }
      goto L_089B0D54;
    }
L_089B0D54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B0D94;
      }
      goto L_089B0D6C;
    }
L_089B0D6C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B0D90u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089B0D90u) goto L_089B0D90;
    return;
L_089B0D90:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_089B0D94;
L_089B0D94:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0E3C;
      }
      goto L_089B0D9C;
    }
L_089B0D9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B0DA8u);
    ctx.gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B0DA8u) goto L_089B0DA8;
    return;
L_089B0DA8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0DCC;
      }
      goto L_089B0DB4;
    }
L_089B0DB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 20u);
      if (branch_taken) {
          goto L_089B0DDC;
      }
      goto L_089B0DC4;
    }
L_089B0DC4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0DDC;
      }
      goto L_089B0DCC;
    }
L_089B0DCC:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0DE4;
      }
      goto L_089B0DD4;
    }
L_089B0DD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0E3C;
      }
      goto L_089B0DDC;
    }
L_089B0DDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B10C8;
      }
      goto L_089B0DE4;
    }
L_089B0DE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B0DF0u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B0DF0u) goto L_089B0DF0;
    return;
L_089B0DF0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0E14;
      }
      goto L_089B0DFC;
    }
L_089B0DFC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B0E3C;
      }
      goto L_089B0E14;
    }
L_089B0E14:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B0E38u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089B0E38u) goto L_089B0E38;
    return;
L_089B0E38:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_089B0E3C;
L_089B0E3C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B10C8;
      }
      goto L_089B0E44;
    }
L_089B0E44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[19] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(856), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[20] = (0u | 5u);
      if (branch_taken) {
          goto L_089B0E6C;
      }
      goto L_089B0E58;
    }
L_089B0E58:
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0E6C;
      }
      goto L_089B0E64;
    }
L_089B0E64:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089B0ED8;
      }
      goto L_089B0E6C;
    }
L_089B0E6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B0E78u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 337u, 0x08865864u>(ctx, &aot_mem) && ctx.pc == 0x089B0E78u) goto L_089B0E78;
    return;
L_089B0E78:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (49152u << 16u);
      if (branch_taken) {
          goto L_089B0EC4;
      }
      goto L_089B0E84;
    }
L_089B0E84:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_089B0E88;
L_089B0E88:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0EB0;
      }
      goto L_089B0EA0;
    }
L_089B0EA0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_089B0EB0;
L_089B0EB0:
    ctx.gpr[31] = (0x089B0EB8u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 347u, 0x088658D8u>(ctx, &aot_mem) && ctx.pc == 0x089B0EB8u) goto L_089B0EB8;
    return;
L_089B0EB8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0E88;
      }
      goto L_089B0EC4;
    }
L_089B0EC4:
    ctx.gpr[31] = (0x089B0ECCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 61u, 0x089A04ACu>(ctx, &aot_mem) && ctx.pc == 0x089B0ECCu) goto L_089B0ECC;
    return;
L_089B0ECC:
    ctx.gpr[31] = (0x089B0ED4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 92u, 0x089A0714u>(ctx, &aot_mem) && ctx.pc == 0x089B0ED4u) goto L_089B0ED4;
    return;
L_089B0ED4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    goto L_089B0ED8;
L_089B0ED8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_089B0F8C;
      }
      goto L_089B0EE0;
    }
L_089B0EE0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0F38;
      }
      goto L_089B0EE8;
    }
L_089B0EE8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_089B0F18;
      }
      goto L_089B0EF0;
    }
L_089B0EF0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0FAC;
      }
      goto L_089B0EF8;
    }
L_089B0EF8:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B0F10u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089B0F10u) goto L_089B0F10;
    return;
L_089B0F10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089B0FAC;
      }
      goto L_089B0F18;
    }
L_089B0F18:
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B0F30u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089B0F30u) goto L_089B0F30;
    return;
L_089B0F30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089B0FAC;
      }
      goto L_089B0F38;
    }
L_089B0F38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_089B0F68;
      }
      goto L_089B0F48;
    }
L_089B0F48:
    ctx.gpr[7] = (16448u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B0F60u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089B0F60u) goto L_089B0F60;
    return;
L_089B0F60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089B0F84;
      }
      goto L_089B0F68;
    }
L_089B0F68:
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B0F80u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089B0F80u) goto L_089B0F80;
    return;
L_089B0F80:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_089B0F84;
L_089B0F84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0FAC;
      }
      goto L_089B0F8C;
    }
L_089B0F8C:
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B0FA4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089B0FA4u) goto L_089B0FA4;
    return;
L_089B0FA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089B0FAC;
      }
      goto L_089B0FAC;
    }
L_089B0FAC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B10C8;
      }
      goto L_089B0FB4;
    }
L_089B0FB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1074;
      }
      goto L_089B0FC0;
    }
L_089B0FC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B0FCCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B0FCCu) goto L_089B0FCC;
    return;
L_089B0FCC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0FEC;
      }
      goto L_089B0FD8;
    }
L_089B0FD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089B0FE8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B0FE8u) goto L_089B0FE8;
    return;
L_089B0FE8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B0FEC;
L_089B0FEC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B1008;
      }
      goto L_089B0FF4;
    }
L_089B0FF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x089B1004u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B1004u) goto L_089B1004;
    return;
L_089B1004:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B1008;
L_089B1008:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B101C;
      }
      goto L_089B1010;
    }
L_089B1010:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B10C8;
      }
      goto L_089B101C;
    }
L_089B101C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    if (ctx.gpr[4] != ctx.gpr[19]) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
        goto L_089B1038;
    }
    goto L_089B1028;
L_089B1028:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B10C8;
      }
      goto L_089B1038;
    }
L_089B1038:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (12288u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B10C8;
      }
      goto L_089B1074;
    }
L_089B1074:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    if (ctx.gpr[4] != ctx.gpr[19]) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
        goto L_089B1090;
    }
    goto L_089B1080;
L_089B1080:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B10C8;
      }
      goto L_089B1090;
    }
L_089B1090:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (12288u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B10C8;
L_089B10C8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_089B10EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1472));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2040)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1416), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1420), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1424), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1428), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1432), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1436), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1440), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1444), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1448), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1452), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1456), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1460), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1464), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1468), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089B1168;
      }
      goto L_089B1134;
    }
L_089B1134:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2036)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1168;
      }
      goto L_089B114C;
    }
L_089B114C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B1168;
      }
      goto L_089B115C;
    }
L_089B115C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2040), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(324), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089B1168;
L_089B1168:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1188;
      }
      goto L_089B1178;
    }
L_089B1178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_089B1188;
L_089B1188:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 31u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B11AC;
      }
      goto L_089B11A4;
    }
L_089B11A4:
    ctx.gpr[31] = (0x089B11ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 720u, 0x0883BA30u>(ctx, &aot_mem) && ctx.pc == 0x089B11ACu) goto L_089B11AC;
    return;
L_089B11AC:
    ctx.gpr[31] = (0x089B11B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 314u, 0x08925FC8u>(ctx, &aot_mem) && ctx.pc == 0x089B11B4u) goto L_089B11B4;
    return;
L_089B11B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[6] = (128u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089B11DC;
      }
      goto L_089B11C8;
    }
L_089B11C8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089B11FC;
      }
      goto L_089B11D4;
    }
L_089B11D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089B11FC;
      }
      goto L_089B11DC;
    }
L_089B11DC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B11FC;
      }
      goto L_089B11E8;
    }
L_089B11E8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B11FC;
      }
      goto L_089B11F8;
    }
L_089B11F8:
    ctx.gpr[4] = (0u | 255u);
    goto L_089B11FC;
L_089B11FC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089B1208u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 313u, 0x08925FB4u>(ctx, &aot_mem) && ctx.pc == 0x089B1208u) goto L_089B1208;
    return;
L_089B1208:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65472u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    ctx.gpr[31] = (0x089B1234u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 432u, 0x089A66B8u>(ctx, &aot_mem) && ctx.pc == 0x089B1234u) goto L_089B1234;
    return;
L_089B1234:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (65535u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[31] = (0x089B1260u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 157u, 0x089ACE50u>(ctx, &aot_mem) && ctx.pc == 0x089B1260u) goto L_089B1260;
    return;
L_089B1260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B1288;
      }
      goto L_089B1270;
    }
L_089B1270:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B1298;
      }
      goto L_089B1280;
    }
L_089B1280:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B177C;
      }
      goto L_089B1288;
    }
L_089B1288:
    ctx.gpr[31] = (0x089B1290u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 474u, 0x088B6B30u>(ctx, &aot_mem) && ctx.pc == 0x089B1290u) goto L_089B1290;
    return;
L_089B1290:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 344u, 0x089B51E8u>(ctx, &aot_mem); return;
      }
      goto L_089B1298;
    }
L_089B1298:
    ctx.gpr[31] = (0x089B12A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 296u, 0x0880D928u>(ctx, &aot_mem) && ctx.pc == 0x089B12A0u) goto L_089B12A0;
    return;
L_089B12A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B170C;
      }
      goto L_089B12B0;
    }
L_089B12B0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1812)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[17] = (ctx.gpr[4] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(2000) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B12D4;
      }
      goto L_089B12CC;
    }
L_089B12CC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089B131C;
      }
      goto L_089B12D4;
    }
L_089B12D4:
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(7001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B12F0;
      }
      goto L_089B12E0;
    }
L_089B12E0:
    ctx.gpr[4] = (16192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B131C;
      }
      goto L_089B12F0;
    }
L_089B12F0:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2000));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_089B130C;
      }
      goto L_089B1300;
    }
L_089B1300:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_089B130C;
L_089B130C:
    ctx.gpr[4] = (14621u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18770u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_089B131C;
L_089B131C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B15B8;
      }
      goto L_089B1330;
    }
L_089B1330:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[5] = (0u | 54u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
      if (branch_taken) {
          goto L_089B15A0;
      }
      goto L_089B134C;
    }
L_089B134C:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[5] = (0u | 55u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
      if (branch_taken) {
          goto L_089B15A0;
      }
      goto L_089B1364;
    }
L_089B1364:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
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
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
      if (branch_taken) {
          goto L_089B15A0;
      }
      goto L_089B13AC;
    }
L_089B13AC:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[5] = (0u | 200u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1812), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(408)));
    ctx.gpr[6] = (ctx.gpr[6] | 64u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(408), ctx.gpr[6]);
    ctx.gpr[31] = (0x089B13D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B13D4u) goto L_089B13D4;
    return;
L_089B13D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
      if (branch_taken) {
          goto L_089B15A0;
      }
      goto L_089B13DC;
    }
L_089B13DC:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
      if (branch_taken) {
          goto L_089B15A0;
      }
      goto L_089B13F4;
    }
L_089B13F4:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089B15A0;
      }
      goto L_089B140C;
    }
L_089B140C:
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
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089B15A0;
      }
      goto L_089B1440;
    }
L_089B1440:
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
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089B15A0;
      }
      goto L_089B1474;
    }
L_089B1474:
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
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089B15A0;
      }
      goto L_089B14A8;
    }
L_089B14A8:
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
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089B15A0;
      }
      goto L_089B14DC;
    }
L_089B14DC:
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
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089B15A0;
      }
      goto L_089B1510;
    }
L_089B1510:
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
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089B15A0;
      }
      goto L_089B1544;
    }
L_089B1544:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(400));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089B1570u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 534u, 0x088EAEDCu>(ctx, &aot_mem) && ctx.pc == 0x089B1570u) goto L_089B1570;
    return;
L_089B1570:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B15A0;
      }
      goto L_089B1578;
    }
L_089B1578:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[19] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089B1594u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 85u, 0x089A064Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1594u) goto L_089B1594;
    return;
L_089B1594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[31] = (0x089B15A0u);
    ctx.gpr[5] = (0u | 500u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 798u, 0x0899FF9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B15A0u) goto L_089B15A0;
    return;
L_089B15A0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B1330;
      }
      goto L_089B15B8;
    }
L_089B15B8:
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(2001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B170C;
      }
      goto L_089B15C4;
    }
L_089B15C4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2000));
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(5000) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B16A0;
      }
      goto L_089B15E4;
    }
L_089B15E4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(17));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27688)));
      if (branch_taken) {
          goto L_089B160C;
      }
      goto L_089B1600;
    }
L_089B1600:
    ctx.gpr[7] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_089B160C;
L_089B160C:
    ctx.gpr[7] = (14621u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[7] = (ctx.gpr[7] | 18770u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_089B1634;
      }
      goto L_089B1628;
    }
L_089B1628:
    ctx.gpr[7] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_089B1634;
L_089B1634:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (47389u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 18770u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[8] = (16256u << 16u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[9] = (16928u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089B1698u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 328u, 0x0892AA10u>(ctx, &aot_mem) && ctx.pc == 0x089B1698u) goto L_089B1698;
    return;
L_089B1698:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B170C;
      }
      goto L_089B16A0;
    }
L_089B16A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1825)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B170C;
      }
      goto L_089B16AC;
    }
L_089B16AC:
    ctx.gpr[10] = (16192u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[10] = (ctx.gpr[10] | 1u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[2] = (16512u << 16u);
    ctx.gpr[10] = (48960u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27688)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[2] = (16256u << 16u);
    ctx.gpr[17] = (0u | 1u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[11] = (0u | 40000u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x089B1708u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 147u, 0x089292F8u>(ctx, &aot_mem) && ctx.pc == 0x089B1708u) goto L_089B1708;
    return;
L_089B1708:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1825), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_089B170C;
L_089B170C:
    ctx.gpr[31] = (0x089B1714u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 470u, 0x088B6B0Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1714u) goto L_089B1714;
    return;
L_089B1714:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1724;
      }
      goto L_089B171C;
    }
L_089B171C:
    ctx.gpr[31] = (0x089B1724u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 474u, 0x088B6B30u>(ctx, &aot_mem) && ctx.pc == 0x089B1724u) goto L_089B1724;
    return;
L_089B1724:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1774;
      }
      goto L_089B1734;
    }
L_089B1734:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[31] = (0x089B1774u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 230u, 0x08A0DCCCu>(ctx, &aot_mem) && ctx.pc == 0x089B1774u) goto L_089B1774;
    return;
L_089B1774:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 344u, 0x089B51E8u>(ctx, &aot_mem); return;
      }
      goto L_089B177C;
    }
L_089B177C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089B17DC;
      }
      goto L_089B17A8;
    }
L_089B17A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8091)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B17DC;
      }
      goto L_089B17B4;
    }
L_089B17B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B17DC;
      }
      goto L_089B17C0;
    }
L_089B17C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B17F4;
      }
      goto L_089B17DC;
    }
L_089B17DC:
    ctx.gpr[31] = (0x089B17E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x089B17E4u) goto L_089B17E4;
    return;
L_089B17E4:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
        goto L_089B181C;
    }
    goto L_089B17EC;
L_089B17EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B189C;
      }
      goto L_089B17F4;
    }
L_089B17F4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (65534u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 17u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 344u, 0x089B51E8u>(ctx, &aot_mem); return;
      }
      goto L_089B181C;
    }
L_089B181C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089B189C;
      }
      goto L_089B1824;
    }
L_089B1824:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(292)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B189C;
      }
      goto L_089B184C;
    }
L_089B184C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(856)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B187C;
      }
      goto L_089B185C;
    }
L_089B185C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(856)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B187C;
      }
      goto L_089B186C;
    }
L_089B186C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(856)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B189C;
      }
      goto L_089B187C;
    }
L_089B187C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1824)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B18A0;
      }
      goto L_089B188C;
    }
L_089B188C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1824)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1824), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089B18A0;
      }
      goto L_089B189C;
    }
L_089B189C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1824), static_cast<std::uint8_t>(0u));
    goto L_089B18A0;
L_089B18A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
        goto L_089B1938;
    }
    goto L_089B18BC;
L_089B18BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 39 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
        goto L_089B1938;
    }
    goto L_089B18CC;
L_089B18CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
        goto L_089B1938;
    }
    goto L_089B18DC;
L_089B18DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
        goto L_089B1938;
    }
    goto L_089B18EC;
L_089B18EC:
    ctx.gpr[6] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x089B1904u);
    ctx.gpr[5] = (0u | 13u);
    goto L_089B0884;
L_089B1904:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
        goto L_089B1938;
    }
    goto L_089B1914;
L_089B1914:
    ctx.gpr[31] = (0x089B191Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B191Cu) goto L_089B191C;
    return;
L_089B191C:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
        goto L_089B1938;
    }
    goto L_089B1924;
L_089B1924:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089B1934u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 122u, 0x088A8660u>(ctx, &aot_mem) && ctx.pc == 0x089B1934u) goto L_089B1934;
    return;
L_089B1934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    goto L_089B1938;
L_089B1938:
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[21] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (49152u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (57344u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (0u < ctx.gpr[21] ? 1u : 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 69u, 0x089B4424u>(ctx, &aot_mem); return;
      }
      goto L_089B197C;
    }
L_089B197C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(300)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B19A0;
      }
      goto L_089B1988;
    }
L_089B1988:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(296)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
        goto L_089B19CC;
    }
    goto L_089B19A0;
L_089B19A0:
    ctx.gpr[31] = (0x089B19A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B19A8u) goto L_089B19A8;
    return;
L_089B19A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 69u, 0x089B4424u>(ctx, &aot_mem); return;
      }
      goto L_089B19B0;
    }
L_089B19B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 69u, 0x089B4424u>(ctx, &aot_mem); return;
      }
      goto L_089B19C8;
    }
L_089B19C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    goto L_089B19CC;
L_089B19CC:
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 69u, 0x089B4424u>(ctx, &aot_mem); return;
      }
      goto L_089B19D8;
    }
L_089B19D8:
    ctx.gpr[31] = (0x089B19E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A296C8u>(ctx, &aot_mem) && ctx.pc == 0x089B19E0u) goto L_089B19E0;
    return;
L_089B19E0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B19F0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 622u, 0x08A2AF58u>(ctx, &aot_mem) && ctx.pc == 0x089B19F0u) goto L_089B19F0;
    return;
L_089B19F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 69u, 0x089B4424u>(ctx, &aot_mem); return;
      }
      goto L_089B19F8;
    }
L_089B19F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1824)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(300)));
      if (branch_taken) {
          goto L_089B1A44;
      }
      goto L_089B1A08;
    }
L_089B1A08:
    ctx.gpr[31] = (0x089B1A10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x089B1A10u) goto L_089B1A10;
    return;
L_089B1A10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1A44;
      }
      goto L_089B1A18;
    }
L_089B1A18:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089B1A2Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 549u, 0x089BA410u>(ctx, &aot_mem) && ctx.pc == 0x089B1A2Cu) goto L_089B1A2C;
    return;
L_089B1A2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B36EC;
      }
      goto L_089B1A3C;
    }
L_089B1A3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B36EC;
      }
      goto L_089B1A44;
    }
L_089B1A44:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B36EC;
      }
      goto L_089B1A4C;
    }
L_089B1A4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089B36EC;
      }
      goto L_089B1A68;
    }
L_089B1A68:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089B295C;
      }
      goto L_089B1A70;
    }
L_089B1A70:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089B1AC4;
      }
      goto L_089B1A78;
    }
L_089B1A78:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089B27DC;
      }
      goto L_089B1A80;
    }
L_089B1A80:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089B295C;
      }
      goto L_089B1A88;
    }
L_089B1A88:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_089B36EC;
      }
      goto L_089B1A90;
    }
L_089B1A90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089B1AB4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23884));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B1AB4u) goto L_089B1AB4;
    return;
L_089B1AB4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B1AC4;
      }
      goto L_089B1ABC;
    }
L_089B1ABC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B36EC;
      }
      goto L_089B1AC4;
    }
L_089B1AC4:
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B1B08;
      }
      goto L_089B1AF8;
    }
L_089B1AF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_089B1B08;
L_089B1B08:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 200u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B1BD8;
      }
      goto L_089B1B18;
    }
L_089B1B18:
    ctx.gpr[31] = (0x089B1B20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B1B20u) goto L_089B1B20;
    return;
L_089B1B20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (14545u << 16u);
      if (branch_taken) {
          goto L_089B1BD8;
      }
      goto L_089B1B28;
    }
L_089B1B28:
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B1BD8;
      }
      goto L_089B1B40;
    }
L_089B1B40:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089B1B4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17996));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 112u, 0x0899CE80u>(ctx, &aot_mem) && ctx.pc == 0x089B1B4Cu) goto L_089B1B4C;
    return;
L_089B1B4C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x089B1B70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 349u, 0x0899E234u>(ctx, &aot_mem) && ctx.pc == 0x089B1B70u) goto L_089B1B70;
    return;
L_089B1B70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[20] + static_cast<std::uint32_t>(25));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[31] = (0x089B1BA4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 106u, 0x089A07E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1BA4u) goto L_089B1BA4;
    return;
L_089B1BA4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B1BB0u);
    ctx.gpr[5] = (0u | 104u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x089B1BB0u) goto L_089B1BB0;
    return;
L_089B1BB0:
    ctx.gpr[9] = (17046u << 16u);
    ctx.gpr[8] = (ctx.gpr[20] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 39u);
    ctx.gpr[31] = (0x089B1BD0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 580u, 0x088DEE94u>(ctx, &aot_mem) && ctx.pc == 0x089B1BD0u) goto L_089B1BD0;
    return;
L_089B1BD0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
      if (branch_taken) {
          goto L_089B27AC;
      }
      goto L_089B1BD8;
    }
L_089B1BD8:
    ctx.gpr[4] = (15139u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55051u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2304;
      }
      goto L_089B1BF4;
    }
L_089B1BF4:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(296)));
    ctx.gpr[31] = (0x089B1C00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B1C00u) goto L_089B1C00;
    return;
L_089B1C00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (15692u << 16u);
      if (branch_taken) {
          goto L_089B1C8C;
      }
      goto L_089B1C08;
    }
L_089B1C08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (15692u << 16u);
      if (branch_taken) {
          goto L_089B1C8C;
      }
      goto L_089B1C18;
    }
L_089B1C18:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(756)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
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
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B1C88;
      }
      goto L_089B1C64;
    }
L_089B1C64:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089B1C88;
    }
    goto L_089B1C88;
L_089B1C88:
    ctx.gpr[4] = (15692u << 16u);
    goto L_089B1C8C;
L_089B1C8C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B1CC4;
      }
      goto L_089B1CAC;
    }
L_089B1CAC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 166u);
    ctx.gpr[31] = (0x089B1CC4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1CC4u) goto L_089B1CC4;
    return;
L_089B1CC4:
    ctx.gpr[31] = (0x089B1CCCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B1CCCu) goto L_089B1CCC;
    return;
L_089B1CCC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B22D0;
      }
      goto L_089B1CD4;
    }
L_089B1CD4:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B1CF4;
      }
      goto L_089B1CEC;
    }
L_089B1CEC:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089B1CF4;
L_089B1CF4:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B1D3C;
      }
      goto L_089B1D0C;
    }
L_089B1D0C:
    ctx.gpr[4] = (16720u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B1D38;
      }
      goto L_089B1D24;
    }
L_089B1D24:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B1D30u);
    ctx.gpr[5] = (0u | 104u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x089B1D30u) goto L_089B1D30;
    return;
L_089B1D30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1D3C;
      }
      goto L_089B1D38;
    }
L_089B1D38:
    ctx.gpr[18] = (0u | 1u);
    goto L_089B1D3C;
L_089B1D3C:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[13])) && ctx.fpr[22] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089B1D74;
      }
      goto L_089B1D58;
    }
L_089B1D58:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089B1D78;
    }
    goto L_089B1D6C;
L_089B1D6C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089B1D84;
      }
      goto L_089B1D74;
    }
L_089B1D74:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B1D78;
L_089B1D78:
    ctx.gpr[31] = (0x089B1D80u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1D80u) goto L_089B1D80;
    return;
L_089B1D80:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B1D84;
L_089B1D84:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
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
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
      if (branch_taken) {
          goto L_089B1E90;
      }
      goto L_089B1E74;
    }
L_089B1E74:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B1E90;
      }
      goto L_089B1E88;
    }
L_089B1E88:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089B1E9C;
      }
      goto L_089B1E90;
    }
L_089B1E90:
    ctx.gpr[31] = (0x089B1E98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1E98u) goto L_089B1E98;
    return;
L_089B1E98:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B1E9C;
L_089B1E9C:
    ctx.gpr[31] = (0x089B1EA4u);
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1EA4u) goto L_089B1EA4;
    return;
L_089B1EA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[13];
      if (branch_taken) {
          goto L_089B1EEC;
      }
      goto L_089B1ED0;
    }
L_089B1ED0:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B1EEC;
      }
      goto L_089B1EE4;
    }
L_089B1EE4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089B1EF8;
      }
      goto L_089B1EEC;
    }
L_089B1EEC:
    ctx.gpr[31] = (0x089B1EF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1EF4u) goto L_089B1EF4;
    return;
L_089B1EF4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B1EF8;
L_089B1EF8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
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
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B1F6C;
      }
      goto L_089B1F48;
    }
L_089B1F48:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B1F90;
      }
      goto L_089B1F6C;
    }
L_089B1F6C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(112));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2140;
      }
      goto L_089B1F90;
    }
L_089B1F90:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_089B2088;
    }
    goto L_089B1FA4;
L_089B1FA4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
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
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55051u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_089B2080;
      }
      goto L_089B1FFC;
    }
L_089B1FFC:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2080;
      }
      goto L_089B2014;
    }
L_089B2014:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
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
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2080;
      }
      goto L_089B2040;
    }
L_089B2040:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(112));
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
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2080;
      }
      goto L_089B2070;
    }
L_089B2070:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089B2080u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 717u, 0x089AFFC0u>(ctx, &aot_mem) && ctx.pc == 0x089B2080u) goto L_089B2080;
    return;
L_089B2080:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2140;
      }
      goto L_089B2088;
    }
L_089B2088:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55051u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_089B2140;
      }
      goto L_089B20BC;
    }
L_089B20BC:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2140;
      }
      goto L_089B20D4;
    }
L_089B20D4:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
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
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2140;
      }
      goto L_089B2100;
    }
L_089B2100:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(112));
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
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2140;
      }
      goto L_089B2130;
    }
L_089B2130:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089B2140u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 717u, 0x089AFFC0u>(ctx, &aot_mem) && ctx.pc == 0x089B2140u) goto L_089B2140;
    return;
L_089B2140:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_089B2170;
      }
      goto L_089B2150;
    }
L_089B2150:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(296)));
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2188;
      }
      goto L_089B216C;
    }
L_089B216C:
    ctx.gpr[4] = (15820u << 16u);
    goto L_089B2170;
L_089B2170:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2298;
      }
      goto L_089B2188;
    }
L_089B2188:
    ctx.gpr[4] = (2226u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089B2198u);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17972));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x089B2198u) goto L_089B2198;
    return;
L_089B2198:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B21A8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B21A8u) goto L_089B21A8;
    return;
L_089B21A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x089B21E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 349u, 0x0899E234u>(ctx, &aot_mem) && ctx.pc == 0x089B21E8u) goto L_089B21E8;
    return;
L_089B21E8:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] + static_cast<std::uint32_t>(25));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[31] = (0x089B2200u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 106u, 0x089A07E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2200u) goto L_089B2200;
    return;
L_089B2200:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 197u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B221C;
      }
      goto L_089B2210;
    }
L_089B2210:
    ctx.gpr[4] = (16968u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B2238;
      }
      goto L_089B221C;
    }
L_089B221C:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2230;
      }
      goto L_089B2224;
    }
L_089B2224:
    ctx.gpr[4] = (16672u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B2238;
      }
      goto L_089B2230;
    }
L_089B2230:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089B2238;
L_089B2238:
    ctx.gpr[8] = (ctx.gpr[22] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 39u);
    ctx.gpr[31] = (0x089B2250u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 580u, 0x088DEE94u>(ctx, &aot_mem) && ctx.pc == 0x089B2250u) goto L_089B2250;
    return;
L_089B2250:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2284;
      }
      goto L_089B226C;
    }
L_089B226C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 197u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2284;
      }
      goto L_089B227C;
    }
L_089B227C:
    ctx.gpr[31] = (0x089B2284u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 331u, 0x089A55ACu>(ctx, &aot_mem) && ctx.pc == 0x089B2284u) goto L_089B2284;
    return;
L_089B2284:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B2290u);
    ctx.gpr[5] = (0u | 104u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x089B2290u) goto L_089B2290;
    return;
L_089B2290:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B22C8;
      }
      goto L_089B2298;
    }
L_089B2298:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B22C8;
      }
      goto L_089B22A8;
    }
L_089B22A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089B22BCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 85u, 0x089A064Cu>(ctx, &aot_mem) && ctx.pc == 0x089B22BCu) goto L_089B22BC;
    return;
L_089B22BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B22C8u);
    ctx.gpr[5] = (0u | 700u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 798u, 0x0899FF9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B22C8u) goto L_089B22C8;
    return;
L_089B22C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B22E0;
      }
      goto L_089B22D0;
    }
L_089B22D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(296)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B22E0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 442u, 0x088E1D48u>(ctx, &aot_mem) && ctx.pc == 0x089B22E0u) goto L_089B22E0;
    return;
L_089B22E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1412)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089B22FC;
      }
      goto L_089B22EC;
    }
L_089B22EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_089B22FC;
L_089B22FC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
      if (branch_taken) {
          goto L_089B27AC;
      }
      goto L_089B2304;
    }
L_089B2304:
    ctx.gpr[31] = (0x089B230Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x089B230Cu) goto L_089B230C;
    return;
L_089B230C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B25C0;
      }
      goto L_089B2314;
    }
L_089B2314:
    ctx.gpr[31] = (0x089B231Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B231Cu) goto L_089B231C;
    return;
L_089B231C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B23C4;
      }
      goto L_089B2324;
    }
L_089B2324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B23C4;
      }
      goto L_089B2334;
    }
L_089B2334:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B23C4;
      }
      goto L_089B2344;
    }
L_089B2344:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B23C4;
      }
      goto L_089B2354;
    }
L_089B2354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B23C4;
      }
      goto L_089B2364;
    }
L_089B2364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B23C4;
      }
      goto L_089B2374;
    }
L_089B2374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B23C4;
      }
      goto L_089B2384;
    }
L_089B2384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 53u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B23C4;
      }
      goto L_089B2394;
    }
L_089B2394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B23C4;
      }
      goto L_089B23A4;
    }
L_089B23A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B23C4;
      }
      goto L_089B23B4;
    }
L_089B23B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 25u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B25C0;
      }
      goto L_089B23C4;
    }
L_089B23C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B2430;
      }
      goto L_089B23D0;
    }
L_089B23D0:
    ctx.gpr[31] = (0x089B23D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B23D8u) goto L_089B23D8;
    return;
L_089B23D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B2430;
      }
      goto L_089B23E0;
    }
L_089B23E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089B27A8;
      }
      goto L_089B240C;
    }
L_089B240C:
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089B2418u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 70u, 0x089A43E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2418u) goto L_089B2418;
    return;
L_089B2418:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
        goto L_089B27AC;
    }
    goto L_089B2420;
L_089B2420:
    ctx.gpr[31] = (0x089B2428u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 104u, 0x089A4788u>(ctx, &aot_mem) && ctx.pc == 0x089B2428u) goto L_089B2428;
    return;
L_089B2428:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
      if (branch_taken) {
          goto L_089B27AC;
      }
      goto L_089B2430;
    }
L_089B2430:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    if (ctx.gpr[4] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
        goto L_089B27AC;
    }
    goto L_089B2440;
L_089B2440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B255C;
      }
      goto L_089B2450;
    }
L_089B2450:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089B255C;
      }
      goto L_089B2460;
    }
L_089B2460:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B24F8;
      }
      goto L_089B249C;
    }
L_089B249C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B24F8;
      }
      goto L_089B24B4;
    }
L_089B24B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1392)));
    if (ctx.gpr[4] == ctx.gpr[20]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
        goto L_089B27AC;
    }
    goto L_089B24C0;
L_089B24C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089B24D0u);
    ctx.gpr[6] = (0u | 4000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 385u, 0x089A1B10u>(ctx, &aot_mem) && ctx.pc == 0x089B24D0u) goto L_089B24D0;
    return;
L_089B24D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (57344u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B24F0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089B24F0u) goto L_089B24F0;
    return;
L_089B24F0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
      if (branch_taken) {
          goto L_089B27AC;
      }
      goto L_089B24F8;
    }
L_089B24F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B251C;
      }
      goto L_089B2508;
    }
L_089B2508:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B2514u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 399u, 0x0899E404u>(ctx, &aot_mem) && ctx.pc == 0x089B2514u) goto L_089B2514;
    return;
L_089B2514:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
      if (branch_taken) {
          goto L_089B27AC;
      }
      goto L_089B251C;
    }
L_089B251C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B2528u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 678u, 0x089A7F9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B2528u) goto L_089B2528;
    return;
L_089B2528:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(204), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089B27A8;
      }
      goto L_089B255C;
    }
L_089B255C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2580;
      }
      goto L_089B256C;
    }
L_089B256C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B2578u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 399u, 0x0899E404u>(ctx, &aot_mem) && ctx.pc == 0x089B2578u) goto L_089B2578;
    return;
L_089B2578:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
      if (branch_taken) {
          goto L_089B27AC;
      }
      goto L_089B2580;
    }
L_089B2580:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B258Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 678u, 0x089A7F9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B258Cu) goto L_089B258C;
    return;
L_089B258C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(204), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089B27A8;
      }
      goto L_089B25C0;
    }
L_089B25C0:
    ctx.gpr[31] = (0x089B25C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B25C8u) goto L_089B25C8;
    return;
L_089B25C8:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
        goto L_089B27AC;
    }
    goto L_089B25D0;
L_089B25D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    if (ctx.gpr[4] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
        goto L_089B27AC;
    }
    goto L_089B25E0;
L_089B25E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 12u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089B2638;
      }
      goto L_089B25FC;
    }
L_089B25FC:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B2628;
      }
      goto L_089B260C;
    }
L_089B260C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1152));
    ctx.gpr[31] = (0x089B261Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x089B261Cu) goto L_089B261C;
    return;
L_089B261C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1152)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089B2628;
L_089B2628:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(204))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] & 1u);
      if (branch_taken) {
          goto L_089B2640;
      }
      goto L_089B2638;
    }
L_089B2638:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(504)));
    ctx.gpr[20] = (0u < ctx.gpr[20] ? 1u : 0u);
    goto L_089B2640;
L_089B2640:
    ctx.gpr[31] = (0x089B2648u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x089B2648u) goto L_089B2648;
    return;
L_089B2648:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2788;
      }
      goto L_089B2650;
    }
L_089B2650:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2932)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2788;
      }
      goto L_089B2668;
    }
L_089B2668:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B2788;
      }
      goto L_089B2678;
    }
L_089B2678:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1780)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2788;
      }
      goto L_089B2690;
    }
L_089B2690:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2788;
      }
      goto L_089B2698;
    }
L_089B2698:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089B26A4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 273u, 0x089452C4u>(ctx, &aot_mem) && ctx.pc == 0x089B26A4u) goto L_089B26A4;
    return;
L_089B26A4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089B26B8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 85u, 0x089A064Cu>(ctx, &aot_mem) && ctx.pc == 0x089B26B8u) goto L_089B26B8;
    return;
L_089B26B8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089B26C4u);
    ctx.gpr[5] = (0u | 1300u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 798u, 0x0899FF9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B26C4u) goto L_089B26C4;
    return;
L_089B26C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2778;
      }
      goto L_089B26E8;
    }
L_089B26E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089B270Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 663u, 0x0899F6FCu>(ctx, &aot_mem) && ctx.pc == 0x089B270Cu) goto L_089B270C;
    return;
L_089B270C:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B2778;
      }
      goto L_089B2718;
    }
L_089B2718:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089B273Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 663u, 0x0899F6FCu>(ctx, &aot_mem) && ctx.pc == 0x089B273Cu) goto L_089B273C;
    return;
L_089B273C:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B2778;
      }
      goto L_089B2748;
    }
L_089B2748:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089B276Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 663u, 0x0899F6FCu>(ctx, &aot_mem) && ctx.pc == 0x089B276Cu) goto L_089B276C;
    return;
L_089B276C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B27A8;
      }
      goto L_089B2778;
    }
L_089B2778:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B27A8;
      }
      goto L_089B2788;
    }
L_089B2788:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089B279Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 85u, 0x089A064Cu>(ctx, &aot_mem) && ctx.pc == 0x089B279Cu) goto L_089B279C;
    return;
L_089B279C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B27A8u);
    ctx.gpr[5] = (0u | 500u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 798u, 0x0899FF9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B27A8u) goto L_089B27A8;
    return;
L_089B27A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
    goto L_089B27AC;
L_089B27AC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B27D4;
      }
      goto L_089B27C0;
    }
L_089B27C0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B27D4;
      }
      goto L_089B27C8;
    }
L_089B27C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B27D4u);
    ctx.gpr[5] = (0u | 105u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x089B27D4u) goto L_089B27D4;
    return;
L_089B27D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B36EC;
      }
      goto L_089B27DC;
    }
L_089B27DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B27E8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 208u, 0x088E0BECu>(ctx, &aot_mem) && ctx.pc == 0x089B27E8u) goto L_089B27E8;
    return;
L_089B27E8:
    ctx.gpr[31] = (0x089B27F0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B27F0u) goto L_089B27F0;
    return;
L_089B27F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2954;
      }
      goto L_089B27F8;
    }
L_089B27F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B2804u);
    ctx.gpr[5] = (0u | 156u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x089B2804u) goto L_089B2804;
    return;
L_089B2804:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B2954;
      }
      goto L_089B2814;
    }
L_089B2814:
    ctx.gpr[31] = (0x089B281Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x089B281Cu) goto L_089B281C;
    return;
L_089B281C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2954;
      }
      goto L_089B2824;
    }
L_089B2824:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2932)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2954;
      }
      goto L_089B2840;
    }
L_089B2840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B2954;
      }
      goto L_089B2850;
    }
L_089B2850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1780)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2954;
      }
      goto L_089B2868;
    }
L_089B2868:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B2874u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 273u, 0x089452C4u>(ctx, &aot_mem) && ctx.pc == 0x089B2874u) goto L_089B2874;
    return;
L_089B2874:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089B2888u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 85u, 0x089A064Cu>(ctx, &aot_mem) && ctx.pc == 0x089B2888u) goto L_089B2888;
    return;
L_089B2888:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B2894u);
    ctx.gpr[5] = (0u | 1300u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 798u, 0x0899FF9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B2894u) goto L_089B2894;
    return;
L_089B2894:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2948;
      }
      goto L_089B28B8;
    }
L_089B28B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089B28DCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 663u, 0x0899F6FCu>(ctx, &aot_mem) && ctx.pc == 0x089B28DCu) goto L_089B28DC;
    return;
L_089B28DC:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B2948;
      }
      goto L_089B28E8;
    }
L_089B28E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089B290Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 663u, 0x0899F6FCu>(ctx, &aot_mem) && ctx.pc == 0x089B290Cu) goto L_089B290C;
    return;
L_089B290C:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B2948;
      }
      goto L_089B2918;
    }
L_089B2918:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089B293Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 663u, 0x0899F6FCu>(ctx, &aot_mem) && ctx.pc == 0x089B293Cu) goto L_089B293C;
    return;
L_089B293C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B2954;
      }
      goto L_089B2948;
    }
L_089B2948:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_089B2954;
L_089B2954:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B36EC;
      }
      goto L_089B295C;
    }
L_089B295C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 8u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
        goto L_089B298C;
    }
    goto L_089B2978;
L_089B2978:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(433)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2A00;
      }
      goto L_089B2988;
    }
L_089B2988:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    goto L_089B298C;
L_089B298C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16448u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2A24;
      }
      goto L_089B29C4;
    }
L_089B29C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16448u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2A24;
      }
      goto L_089B2A00;
    }
L_089B2A00:
    ctx.gpr[31] = (0x089B2A08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B2A08u) goto L_089B2A08;
    return;
L_089B2A08:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B2A24;
      }
      goto L_089B2A10;
    }
L_089B2A10:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B2A1Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 678u, 0x089A7F9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B2A1Cu) goto L_089B2A1C;
    return;
L_089B2A1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B36EC;
      }
      goto L_089B2A24;
    }
L_089B2A24:
    ctx.gpr[31] = (0x089B2A2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B2A2Cu) goto L_089B2A2C;
    return;
L_089B2A2C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089B36DC;
      }
      goto L_089B2A34;
    }
L_089B2A34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(308)));
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[15] = ctx.fpr[13] + ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x089B2A58u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2A58u) goto L_089B2A58;
    return;
L_089B2A58:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
        goto L_089B2A74;
    }
    goto L_089B2A74;
L_089B2A74:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2AA0;
      }
      goto L_089B2A90;
    }
L_089B2A90:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[12] - ctx.fpr[22];
    goto L_089B2AA0;
L_089B2AA0:
    ctx.gpr[31] = (0x089B2AA8u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2AA8u) goto L_089B2AA8;
    return;
L_089B2AA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089B3684;
      }
      goto L_089B2AB8;
    }
L_089B2AB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2C40;
      }
      goto L_089B2AC4;
    }
L_089B2AC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2AE4;
      }
      goto L_089B2AD4;
    }
L_089B2AD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2C40;
      }
      goto L_089B2AE4;
    }
L_089B2AE4:
    ctx.gpr[31] = (0x089B2AECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B2AECu) goto L_089B2AEC;
    return;
L_089B2AEC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (16050u << 16u);
      if (branch_taken) {
          goto L_089B2C08;
      }
      goto L_089B2AF4;
    }
L_089B2AF4:
    ctx.gpr[4] = (ctx.gpr[4] | 47299u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2B1C;
      }
      goto L_089B2B0C;
    }
L_089B2B0C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1824)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B2C08;
      }
      goto L_089B2B1C;
    }
L_089B2B1C:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B2B2Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 70u, 0x089A43E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2B2Cu) goto L_089B2B2C;
    return;
L_089B2B2C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2B44;
      }
      goto L_089B2B34;
    }
L_089B2B34:
    ctx.gpr[31] = (0x089B2B3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 104u, 0x089A4788u>(ctx, &aot_mem) && ctx.pc == 0x089B2B3Cu) goto L_089B2B3C;
    return;
L_089B2B3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B365C;
      }
      goto L_089B2B44;
    }
L_089B2B44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(312)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B365C;
      }
      goto L_089B2B60;
    }
L_089B2B60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2BC0;
      }
      goto L_089B2B70;
    }
L_089B2B70:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089B2B84u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 549u, 0x089BA410u>(ctx, &aot_mem) && ctx.pc == 0x089B2B84u) goto L_089B2B84;
    return;
L_089B2B84:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089B2BA0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 85u, 0x089A064Cu>(ctx, &aot_mem) && ctx.pc == 0x089B2BA0u) goto L_089B2BA0;
    return;
L_089B2BA0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B2BACu);
    ctx.gpr[5] = (0u | 3000u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 798u, 0x0899FF9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B2BACu) goto L_089B2BAC;
    return;
L_089B2BAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B2BB8u);
    ctx.gpr[5] = (0u | 158u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x089B2BB8u) goto L_089B2BB8;
    return;
L_089B2BB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B365C;
      }
      goto L_089B2BC0;
    }
L_089B2BC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2BEC;
      }
      goto L_089B2BD0;
    }
L_089B2BD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[5] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2BEC;
      }
      goto L_089B2BE0;
    }
L_089B2BE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2112)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2112), ctx.gpr[4]);
    goto L_089B2BEC;
L_089B2BEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089B2C00u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 549u, 0x089BA410u>(ctx, &aot_mem) && ctx.pc == 0x089B2C00u) goto L_089B2C00;
    return;
L_089B2C00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B365C;
      }
      goto L_089B2C08;
    }
L_089B2C08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2C20;
      }
      goto L_089B2C14;
    }
L_089B2C14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    ctx.gpr[31] = (0x089B2C20u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1760));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089B2C20u) goto L_089B2C20;
    return;
L_089B2C20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1760));
    ctx.gpr[31] = (0x089B2C30u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1760), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089B2C30u) goto L_089B2C30;
    return;
L_089B2C30:
    ctx.gpr[31] = (0x089B2C38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 2u, 0x089A000Cu>(ctx, &aot_mem) && ctx.pc == 0x089B2C38u) goto L_089B2C38;
    return;
L_089B2C38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B365C;
      }
      goto L_089B2C40;
    }
L_089B2C40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (16006u << 16u);
      if (branch_taken) {
          goto L_089B2D24;
      }
      goto L_089B2C50;
    }
L_089B2C50:
    ctx.gpr[4] = (ctx.gpr[4] | 2706u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2D24;
      }
      goto L_089B2C68;
    }
L_089B2C68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B2D24;
      }
      goto L_089B2C74;
    }
L_089B2C74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(856)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (16025u << 16u);
      if (branch_taken) {
          goto L_089B2C98;
      }
      goto L_089B2C84;
    }
L_089B2C84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(856)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2D24;
      }
      goto L_089B2C94;
    }
L_089B2C94:
    ctx.gpr[4] = (16025u << 16u);
    goto L_089B2C98;
L_089B2C98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(312)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2D24;
      }
      goto L_089B2CB4;
    }
L_089B2CB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B2CC0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B2CC0u) goto L_089B2CC0;
    return;
L_089B2CC0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B2CDC;
      }
      goto L_089B2CCC;
    }
L_089B2CCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B2CD8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B2CD8u) goto L_089B2CD8;
    return;
L_089B2CD8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B2CDC;
L_089B2CDC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (16230u << 16u);
      if (branch_taken) {
          goto L_089B2D24;
      }
      goto L_089B2CE4;
    }
L_089B2CE4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2D24;
      }
      goto L_089B2D00;
    }
L_089B2D00:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2D24;
      }
      goto L_089B2D10;
    }
L_089B2D10:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089B2D24u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 549u, 0x089BA410u>(ctx, &aot_mem) && ctx.pc == 0x089B2D24u) goto L_089B2D24;
    return;
L_089B2D24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089B2D84;
      }
      goto L_089B2D34;
    }
L_089B2D34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(308));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1396)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B2D60u);
    ctx.gpr[6] = (0u | 5000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 361u, 0x089A1960u>(ctx, &aot_mem) && ctx.pc == 0x089B2D60u) goto L_089B2D60;
    return;
L_089B2D60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1396)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B2D7C;
      }
      goto L_089B2D6C;
    }
L_089B2D6C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(500));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
    goto L_089B2D7C;
L_089B2D7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B365C;
      }
      goto L_089B2D84;
    }
L_089B2D84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (16095u << 16u);
      if (branch_taken) {
          goto L_089B2E20;
      }
      goto L_089B2D94;
    }
L_089B2D94:
    ctx.gpr[4] = (ctx.gpr[4] | 26355u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2DBC;
      }
      goto L_089B2DAC;
    }
L_089B2DAC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1824)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B2E20;
      }
      goto L_089B2DBC;
    }
L_089B2DBC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1404), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2500));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1408), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1404));
    ctx.gpr[31] = (0x089B2DDCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089B2DDCu) goto L_089B2DDC;
    return;
L_089B2DDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2E00;
      }
      goto L_089B2DEC;
    }
L_089B2DEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089B2E00u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 549u, 0x089BA410u>(ctx, &aot_mem) && ctx.pc == 0x089B2E00u) goto L_089B2E00;
    return;
L_089B2E00:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5000));
    ctx.gpr[31] = (0x089B2E18u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 630u, 0x089AADBCu>(ctx, &aot_mem) && ctx.pc == 0x089B2E18u) goto L_089B2E18;
    return;
L_089B2E18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B365C;
      }
      goto L_089B2E20;
    }
L_089B2E20:
    ctx.gpr[4] = (16262u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2706u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B365C;
      }
      goto L_089B2E3C;
    }
L_089B2E3C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26868)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(308)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x089B2ECCu);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 376u, 0x089757BCu>(ctx, &aot_mem) && ctx.pc == 0x089B2ECCu) goto L_089B2ECC;
    return;
L_089B2ECC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089B2EF0;
      }
      goto L_089B2EE0;
    }
L_089B2EE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089B30CC;
      }
      goto L_089B2EF0;
    }
L_089B2EF0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(308)));
    ctx.gpr[31] = (0x089B2F00u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2F00u) goto L_089B2F00;
    return;
L_089B2F00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2F28;
      }
      goto L_089B2F18;
    }
L_089B2F18:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_089B2F28;
L_089B2F28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
        goto L_089B2FAC;
    }
    goto L_089B2F4C;
L_089B2F4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17204u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.gpr[6] = (16384u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    ctx.fpr[22] = ctx.fpr[15] - ctx.fpr[22];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B2FF4;
      }
      goto L_089B2FAC;
    }
L_089B2FAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17204u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[15] + ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B2FF4;
L_089B2FF4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(200));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B3588;
      }
      goto L_089B3014;
    }
L_089B3014:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3588;
      }
      goto L_089B3020;
    }
L_089B3020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x089B304Cu);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089B304Cu) goto L_089B304C;
    return;
L_089B304C:
    ctx.gpr[31] = (0x089B3054u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x089B3054u) goto L_089B3054;
    return;
L_089B3054:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x089B3060u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x089B3060u) goto L_089B3060;
    return;
L_089B3060:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B3084;
      }
      goto L_089B3074;
    }
L_089B3074:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
    goto L_089B3084;
L_089B3084:
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[22];
    ctx.gpr[4] = (16423u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 36151u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16490u << 16u);
      if (branch_taken) {
          goto L_089B30C4;
      }
      goto L_089B30A4;
    }
L_089B30A4:
    ctx.gpr[4] = (ctx.gpr[4] | 37504u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B30C4;
      }
      goto L_089B30BC;
    }
L_089B30BC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2076), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089B30C4;
L_089B30C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3588;
      }
      goto L_089B30CC;
    }
L_089B30CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089B30EC;
      }
      goto L_089B30DC;
    }
L_089B30DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089B32E8;
      }
      goto L_089B30EC;
    }
L_089B30EC:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vx2i(1u, 0u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1220), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089B3180u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089B3180u) goto L_089B3180;
    return;
L_089B3180:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1236), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1312)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1316)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1264), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1268), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[5]);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[18];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1284), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[16] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B32E0;
      }
      goto L_089B32D4;
    }
L_089B32D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B36EC;
      }
      goto L_089B32E0;
    }
L_089B32E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3588;
      }
      goto L_089B32E8;
    }
L_089B32E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (2228u << 16u);
      if (branch_taken) {
          goto L_089B3388;
      }
      goto L_089B32F8;
    }
L_089B32F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[31] = (0x089B3320u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 726u, 0x08977AB8u>(ctx, &aot_mem) && ctx.pc == 0x089B3320u) goto L_089B3320;
    return;
L_089B3320:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1300), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    ctx.gpr[31] = (0x089B3380u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[16];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089B3380u) goto L_089B3380;
    return;
L_089B3380:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089B3588;
      }
      goto L_089B3388;
    }
L_089B3388:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089B33F4;
      }
      goto L_089B3398;
    }
L_089B3398:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(906))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vx2i(1u, 0u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089B33E8u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089B33E8u) goto L_089B33E8;
    return;
L_089B33E8:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3588;
      }
      goto L_089B33F4;
    }
L_089B33F4:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089B345C;
      }
      goto L_089B3440;
    }
L_089B3440:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089B3460;
      }
      goto L_089B3458;
    }
L_089B3458:
    ctx.gpr[4] = (0u | 1u);
    goto L_089B345C;
L_089B345C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089B3460;
L_089B3460:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3484;
      }
      goto L_089B3470;
    }
L_089B3470:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089B3548;
      }
      goto L_089B3484;
    }
L_089B3484:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089B34C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089B34C8u) goto L_089B34C8;
    return;
L_089B34C8:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089B34F8u);
    ctx.fpr[26] = ctx.fpr[12] - ctx.fpr[24];
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089B34F8u) goto L_089B34F8;
    return;
L_089B34F8:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B3548;
L_089B3548:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x089B3568u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089B3568u) goto L_089B3568;
    return;
L_089B3568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089B3588;
      }
      goto L_089B3578;
    }
L_089B3578:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(500));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
    goto L_089B3588;
L_089B3588:
    ctx.gpr[31] = (0x089B3590u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x089B3590u) goto L_089B3590;
    return;
L_089B3590:
    ctx.gpr[4] = (16457u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089B35D0;
      }
      goto L_089B35B4;
    }
L_089B35B4:
    ctx.gpr[4] = (16585u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B360C;
      }
      goto L_089B35D0;
    }
L_089B35D0:
    ctx.gpr[4] = (16457u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_089B360C;
      }
      goto L_089B35F8;
    }
L_089B35F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B360C;
L_089B360C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[12])) && ctx.fpr[20] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B365C;
      }
      goto L_089B3620;
    }
L_089B3620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (16329u << 16u);
      if (branch_taken) {
          goto L_089B365C;
      }
      goto L_089B3638;
    }
L_089B3638:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(200));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B365C;
L_089B365C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B36DC;
      }
      goto L_089B366C;
    }
L_089B366C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B36DC;
      }
      goto L_089B367C;
    }
L_089B367C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
      if (branch_taken) {
          goto L_089B36DC;
      }
      goto L_089B3684;
    }
L_089B3684:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[4] = (48989u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 45613u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B36DC;
      }
      goto L_089B36BC;
    }
L_089B36BC:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B36CCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 70u, 0x089A43E8u>(ctx, &aot_mem) && ctx.pc == 0x089B36CCu) goto L_089B36CC;
    return;
L_089B36CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B36DC;
      }
      goto L_089B36D4;
    }
L_089B36D4:
    ctx.gpr[31] = (0x089B36DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 104u, 0x089A4788u>(ctx, &aot_mem) && ctx.pc == 0x089B36DCu) goto L_089B36DC;
    return;
L_089B36DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B36EC;
      }
      goto L_089B36EC;
    }
L_089B36EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B37A8;
      }
      goto L_089B36FC;
    }
L_089B36FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B37A8;
      }
      goto L_089B370C;
    }
L_089B370C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(296)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B37A8;
      }
      goto L_089B3724;
    }
L_089B3724:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3774;
      }
      goto L_089B374C;
    }
L_089B374C:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3794;
      }
      goto L_089B3774;
    }
L_089B3774:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
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
    goto L_089B3794;
L_089B3794:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (0x089B37A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 278u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x089B37A8u) goto L_089B37A8;
    return;
L_089B37A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
        goto L_089B37DC;
    }
    goto L_089B37B8;
L_089B37B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
        goto L_089B37DC;
    }
    goto L_089B37C8;
L_089B37C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B3810;
      }
      goto L_089B37D8;
    }
L_089B37D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    goto L_089B37DC;
L_089B37DC:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 66u, 0x089B4408u>(ctx, &aot_mem); return;
      }
      goto L_089B37E8;
    }
L_089B37E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 66u, 0x089B4408u>(ctx, &aot_mem); return;
      }
      goto L_089B3800;
    }
L_089B3800:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 66u, 0x089B4408u>(ctx, &aot_mem); return;
      }
      goto L_089B3810;
    }
L_089B3810:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(720), 0u);
      if (branch_taken) {
          goto L_089B382C;
      }
      goto L_089B3820;
    }
L_089B3820:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3868;
      }
      goto L_089B382C;
    }
L_089B382C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1728));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(736), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(740), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(744), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3890;
      }
      goto L_089B3868;
    }
L_089B3868:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1728));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(752));
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
    goto L_089B3890;
L_089B3890:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_089B38B4;
      }
      goto L_089B38A8;
    }
L_089B38A8:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_089B38B4;
L_089B38B4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_089B38D4;
    }
    goto L_089B38D4;
L_089B38D4:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16968u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[15] / ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(266)));
        goto L_089B3950;
    }
    goto L_089B38FC;
L_089B38FC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_089B392C;
      }
      goto L_089B3920;
    }
L_089B3920:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_089B392C;
L_089B392C:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B3A04;
      }
      goto L_089B394C;
    }
L_089B394C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(266)));
    goto L_089B3950;
L_089B3950:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3E1C;
      }
      goto L_089B395C;
    }
L_089B395C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_089B3978;
      }
      goto L_089B396C;
    }
L_089B396C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_089B3978;
L_089B3978:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_089B3998;
    }
    goto L_089B3998;
L_089B3998:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16968u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[15] / ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B3E1C;
      }
      goto L_089B39C0;
    }
L_089B39C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_089B39E4;
      }
      goto L_089B39D8;
    }
L_089B39D8:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_089B39E4;
L_089B39E4:
    ctx.gpr[4] = (15235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B3E1C;
      }
      goto L_089B3A04;
    }
L_089B3A04:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3B50;
      }
      goto L_089B3A24;
    }
L_089B3A24:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(768), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(772), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(776), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (16261u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x089B3A98u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C075Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3A98u) goto L_089B3A98;
    return;
L_089B3A98:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3B48;
      }
      goto L_089B3AA0;
    }
L_089B3AA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (64u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16261u << 16u);
      if (branch_taken) {
          goto L_089B3AE0;
      }
      goto L_089B3AB4;
    }
L_089B3AB4:
    ctx.gpr[4] = (16261u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B3B24;
      }
      goto L_089B3ADC;
    }
L_089B3ADC:
    ctx.gpr[4] = (16261u << 16u);
    goto L_089B3AE0;
L_089B3AE0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B3AFCu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x089B3AFCu) goto L_089B3AFC;
    return;
L_089B3AFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (64u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3B24;
      }
      goto L_089B3B10;
    }
L_089B3B10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (65472u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_089B3B24;
L_089B3B24:
    ctx.gpr[31] = (0x089B3B2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 213u, 0x089A0F58u>(ctx, &aot_mem) && ctx.pc == 0x089B3B2Cu) goto L_089B3B2C;
    return;
L_089B3B2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089B3B48;
L_089B3B48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 65u, 0x089B4400u>(ctx, &aot_mem); return;
      }
      goto L_089B3B50;
    }
L_089B3B50:
    ctx.gpr[31] = (0x089B3B58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B3B58u) goto L_089B3B58;
    return;
L_089B3B58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3C98;
      }
      goto L_089B3B60;
    }
L_089B3B60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B3C98;
      }
      goto L_089B3B70;
    }
L_089B3B70:
    ctx.gpr[31] = (0x089B3B78u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x089B3B78u) goto L_089B3B78;
    return;
L_089B3B78:
    ctx.gpr[31] = (0x089B3B80u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 98u, 0x08A983B8u>(ctx, &aot_mem) && ctx.pc == 0x089B3B80u) goto L_089B3B80;
    return;
L_089B3B80:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3C98;
      }
      goto L_089B3B88;
    }
L_089B3B88:
    ctx.gpr[31] = (0x089B3B90u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x089B3B90u) goto L_089B3B90;
    return;
L_089B3B90:
    ctx.gpr[31] = (0x089B3B98u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 870u, 0x08A975E8u>(ctx, &aot_mem) && ctx.pc == 0x089B3B98u) goto L_089B3B98;
    return;
L_089B3B98:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089B3BA8u);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x089B3BA8u) goto L_089B3BA8;
    return;
L_089B3BA8:
    ctx.gpr[31] = (0x089B3BB0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 879u, 0x08A9764Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3BB0u) goto L_089B3BB0;
    return;
L_089B3BB0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) & 0x7FFFFFFFu);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B3BE8;
      }
      goto L_089B3BD0;
    }
L_089B3BD0:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B3C54;
      }
      goto L_089B3BE8;
    }
L_089B3BE8:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x089B3BF4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089B3BF4u) goto L_089B3BF4;
    return;
L_089B3BF4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089B3C14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x089B3C14u) goto L_089B3C14;
    return;
L_089B3C14:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1392));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089B3C40u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x089B3C40u) goto L_089B3C40;
    return;
L_089B3C40:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1392)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1396)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1400)));
    ctx.gpr[31] = (0x089B3C54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x089B3C54u) goto L_089B3C54;
    return;
L_089B3C54:
    ctx.gpr[31] = (0x089B3C5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 104u, 0x089A4788u>(ctx, &aot_mem) && ctx.pc == 0x089B3C5Cu) goto L_089B3C5C;
    return;
L_089B3C5C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1728));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(784), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(788), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(792), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 65u, 0x089B4400u>(ctx, &aot_mem); return;
      }
      goto L_089B3C98;
    }
L_089B3C98:
    ctx.gpr[31] = (0x089B3CA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B3CA0u) goto L_089B3CA0;
    return;
L_089B3CA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3DC8;
      }
      goto L_089B3CA8;
    }
L_089B3CA8:
    ctx.gpr[31] = (0x089B3CB0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x089B3CB0u) goto L_089B3CB0;
    return;
L_089B3CB0:
    ctx.gpr[31] = (0x089B3CB8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 870u, 0x08A975E8u>(ctx, &aot_mem) && ctx.pc == 0x089B3CB8u) goto L_089B3CB8;
    return;
L_089B3CB8:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089B3CC8u);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x089B3CC8u) goto L_089B3CC8;
    return;
L_089B3CC8:
    ctx.gpr[31] = (0x089B3CD0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 879u, 0x08A9764Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3CD0u) goto L_089B3CD0;
    return;
L_089B3CD0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) & 0x7FFFFFFFu);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B3D08;
      }
      goto L_089B3CF0;
    }
L_089B3CF0:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B3D58;
      }
      goto L_089B3D08;
    }
L_089B3D08:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089B3D20u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 281u, 0x0899DC5Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3D20u) goto L_089B3D20;
    return;
L_089B3D20:
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[12];
    ctx.gpr[31] = (0x089B3D3Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x089B3D3Cu) goto L_089B3D3C;
    return;
L_089B3D3C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B3D58u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 220u, 0x0899D818u>(ctx, &aot_mem) && ctx.pc == 0x089B3D58u) goto L_089B3D58;
    return;
L_089B3D58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B3D64u);
    ctx.gpr[5] = (0u | 137u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B3D64u) goto L_089B3D64;
    return;
L_089B3D64:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3D80;
      }
      goto L_089B3D70;
    }
L_089B3D70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B3D7Cu);
    ctx.gpr[5] = (0u | 140u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B3D7Cu) goto L_089B3D7C;
    return;
L_089B3D7C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_089B3D80;
L_089B3D80:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3DA4;
      }
      goto L_089B3D88;
    }
L_089B3D88:
    ctx.gpr[5] = (49216u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B3D98u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 820u, 0x08AFB908u>(ctx, &aot_mem) && ctx.pc == 0x089B3D98u) goto L_089B3D98;
    return;
L_089B3D98:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B3DA4u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 824u, 0x08AFB93Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3DA4u) goto L_089B3DA4;
    return;
L_089B3DA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B3DC0;
      }
      goto L_089B3DB4;
    }
L_089B3DB4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B3DC0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 469u, 0x08AFA1F4u>(ctx, &aot_mem) && ctx.pc == 0x089B3DC0u) goto L_089B3DC0;
    return;
L_089B3DC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 65u, 0x089B4400u>(ctx, &aot_mem); return;
      }
      goto L_089B3DC8;
    }
L_089B3DC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B3DD4u);
    ctx.gpr[5] = (0u | 137u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B3DD4u) goto L_089B3DD4;
    return;
L_089B3DD4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3DF0;
      }
      goto L_089B3DE0;
    }
L_089B3DE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B3DECu);
    ctx.gpr[5] = (0u | 140u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B3DECu) goto L_089B3DEC;
    return;
L_089B3DEC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_089B3DF0;
L_089B3DF0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3E14;
      }
      goto L_089B3DF8;
    }
L_089B3DF8:
    ctx.gpr[5] = (49216u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B3E08u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 820u, 0x08AFB908u>(ctx, &aot_mem) && ctx.pc == 0x089B3E08u) goto L_089B3E08;
    return;
L_089B3E08:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B3E14u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 824u, 0x08AFB93Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3E14u) goto L_089B3E14;
    return;
L_089B3E14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 65u, 0x089B4400u>(ctx, &aot_mem); return;
      }
      goto L_089B3E1C;
    }
L_089B3E1C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(266)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 44u, 0x089B42D4u>(ctx, &aot_mem); return;
      }
      goto L_089B3E2C;
    }
L_089B3E2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(268)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 44u, 0x089B42D4u>(ctx, &aot_mem); return;
      }
      goto L_089B3E38;
    }
L_089B3E38:
    ctx.gpr[31] = (0x089B3E40u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(268)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D54u>(ctx, &aot_mem) && ctx.pc == 0x089B3E40u) goto L_089B3E40;
    return;
L_089B3E40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 44u, 0x089B42D4u>(ctx, &aot_mem); return;
      }
      goto L_089B3E48;
    }
L_089B3E48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_089B3E64;
      }
      goto L_089B3E58;
    }
L_089B3E58:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_089B3E64;
L_089B3E64:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089B3E74u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(800), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 347u, 0x08AF98D4u>(ctx, &aot_mem) && ctx.pc == 0x089B3E74u) goto L_089B3E74;
    return;
L_089B3E74:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(804), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(804));
    ctx.gpr[31] = (0x089B3E84u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(800));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF98A0u>(ctx, &aot_mem) && ctx.pc == 0x089B3E84u) goto L_089B3E84;
    return;
L_089B3E84:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16968u << 16u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 44u, 0x089B42D4u>(ctx, &aot_mem); return;
      }
      goto L_089B3EAC;
    }
L_089B3EAC:
    ctx.gpr[31] = (0x089B3EB4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 215u, 0x0899D7A8u>(ctx, &aot_mem) && ctx.pc == 0x089B3EB4u) goto L_089B3EB4;
    return;
L_089B3EB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_089B3ED4;
      }
      goto L_089B3EC8;
    }
L_089B3EC8:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_089B3ED4;
L_089B3ED4:
    ctx.gpr[4] = (15235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 44u, 0x089B42D4u>(ctx, &aot_mem); return;
      }
      goto L_089B3EF4;
    }
L_089B3EF4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(704), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(708), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(712), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089B3F20u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 216u, 0x0899D7B4u>(ctx, &aot_mem) && ctx.pc == 0x089B3F20u) goto L_089B3F20;
    return;
L_089B3F20:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    ctx.gpr[31] = (0x089B3F2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3F2Cu) goto L_089B3F2C;
    return;
L_089B3F2C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B3F3Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 114u, 0x0899CED4u>(ctx, &aot_mem) && ctx.pc == 0x089B3F3Cu) goto L_089B3F3C;
    return;
L_089B3F3C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[2] = (49568u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089B3F74u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C075Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3F74u) goto L_089B3F74;
    return;
L_089B3F74:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3F8C;
      }
      goto L_089B3F7C;
    }
L_089B3F7C:
    ctx.gpr[31] = (0x089B3F84u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 431u, 0x08AF9F18u>(ctx, &aot_mem) && ctx.pc == 0x089B3F84u) goto L_089B3F84;
    return;
L_089B3F84:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089B3F94;
      }
      goto L_089B3F8C;
    }
L_089B3F8C:
    ctx.gpr[4] = (17402u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089B3F94;
L_089B3F94:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    ctx.gpr[31] = (0x089B3FA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3FA0u) goto L_089B3FA0;
    return;
L_089B3FA0:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B3FB0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 115u, 0x0899CEECu>(ctx, &aot_mem) && ctx.pc == 0x089B3FB0u) goto L_089B3FB0;
    return;
L_089B3FB0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[2] = (49568u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089B3FE8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C075Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3FE8u) goto L_089B3FE8;
    return;
L_089B3FE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 1u, 0x089B4000u>(ctx, &aot_mem); return;
      }
      goto L_089B3FF0;
    }
L_089B3FF0:
    ctx.gpr[31] = (0x089B3FF8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 431u, 0x08AF9F18u>(ctx, &aot_mem) && ctx.pc == 0x089B3FF8u) goto L_089B3FF8;
    return;
L_089B3FF8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 2u, 0x089B400Cu>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 1u, 0x089B4000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0107(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0107_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_107(Runtime &runtime) {
    runtime.register_generated_unit(107u, 0x089B0000u, 16384u, &recomp_unit_0107, &recomp_unit_0107_entry);
    runtime.register_function(0x089B0000u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0008u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0010u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0018u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0020u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0028u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0030u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0038u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B004Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0054u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0078u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0080u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B008Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B00BCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B00D0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B00E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B00F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0100u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B010Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0118u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0120u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0124u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0134u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0144u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B014Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0154u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0168u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0170u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0180u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0188u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0190u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B019Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B01A4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B01B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B01C8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B01D8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B01E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B01F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B01F8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B01FCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0204u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0210u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0218u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0224u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0228u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0234u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B023Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0244u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B025Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0280u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0288u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0294u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B029Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B02A4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B02BCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B02E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B02E4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B02ECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B02F8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0300u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B030Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B031Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0328u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B032Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0338u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0344u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B034Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0354u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0358u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0360u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0364u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0398u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B03CCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B03D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B03E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0400u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B040Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0418u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0420u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0428u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B042Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0434u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B043Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0444u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0468u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0470u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B047Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B04ACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B04B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B04CCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B04D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B04D8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B04ECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B04FCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B050Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0514u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0524u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B052Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B053Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0544u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B054Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0554u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0564u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B056Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0570u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B057Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0584u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B058Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B059Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B05A4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B05DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B05E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B05E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B05F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B05F8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B060Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0618u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0620u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0634u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0640u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0648u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0660u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0684u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0694u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B06A0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B06A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B06B0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B06B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B06C4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B06D0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B06D8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B06E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B06E4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B06ECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B06F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B070Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0718u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0720u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0728u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0738u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0744u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B074Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0754u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0758u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0760u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0784u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0798u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B07ACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B07B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B07C4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B07D0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B07D8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B07E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0824u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B085Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0884u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B08C4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B08D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B08D8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B08E4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B08ECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B08FCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0904u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B090Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0914u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0920u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0928u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B093Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0944u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B094Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0954u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0960u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0970u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B098Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0998u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B09ACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B09B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B09C8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B09D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B09E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B09E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B09F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A04u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A0Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A14u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A20u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A30u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A48u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A50u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A5Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A68u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A78u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A80u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A88u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A90u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0AA0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0AACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0AB4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0ABCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0AC0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0AC8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0AD4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0AE8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0AF8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0AFCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0B1Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0B30u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0B44u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0B58u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0B64u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0B70u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0B78u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0B80u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0B8Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0B94u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0BB0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0BB8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0BC0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0BE0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0BECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C18u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C48u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C50u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C58u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C64u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C70u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C80u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C8Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C94u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C9Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0CA8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0CB0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0CB8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0CC4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0CCCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0CD8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0CE4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0CF0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0CFCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D08u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D0Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D14u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D24u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D2Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D34u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D3Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D48u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D54u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D6Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D90u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D94u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D9Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0DA8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0DB4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0DC4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0DCCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0DD4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0DDCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0DE4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0DF0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0DFCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E14u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E38u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E3Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E44u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E58u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E64u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E6Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E78u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E84u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E88u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0EA0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0EB0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0EB8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0EC4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0ECCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0ED4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0ED8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0EE0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0EE8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0EF0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0EF8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F10u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F18u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F30u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F38u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F48u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F60u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F68u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F80u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F84u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F8Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0FA4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0FACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0FB4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0FC0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0FCCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0FD8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0FE8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0FECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0FF4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1004u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1008u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1010u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B101Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1028u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1038u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1074u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1080u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1090u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B10C8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B10ECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1134u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B114Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B115Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1168u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1178u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1188u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B11A4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B11ACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B11B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B11C8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B11D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B11DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B11E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B11F8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B11FCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1208u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1234u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1260u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1270u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1280u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1288u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1290u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1298u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B12A0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B12B0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B12CCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B12D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B12E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B12F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1300u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B130Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B131Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1330u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B134Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1364u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B13ACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B13D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B13DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B13F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B140Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1440u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1474u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B14A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B14DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1510u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1544u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1570u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1578u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1594u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B15A0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B15B8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B15C4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B15E4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1600u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B160Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1628u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1634u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1698u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B16A0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B16ACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1708u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B170Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1714u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B171Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1724u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1734u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1774u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B177Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B17A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B17B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B17C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B17DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B17E4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B17ECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B17F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B181Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1824u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B184Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B185Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B186Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B187Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B188Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B189Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B18A0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B18BCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B18CCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B18DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B18ECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1904u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1914u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B191Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1924u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1934u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1938u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B197Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1988u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B19A0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B19A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B19B0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B19C8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B19CCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B19D8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B19E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B19F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B19F8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A08u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A10u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A18u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A2Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A3Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A44u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A4Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A68u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A70u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A78u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A80u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A88u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A90u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1AB4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1ABCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1AC4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1AF8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1B08u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1B18u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1B20u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1B28u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1B40u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1B4Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1B70u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1BA4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1BB0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1BD0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1BD8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1BF4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1C00u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1C08u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1C18u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1C64u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1C88u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1C8Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1CACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1CC4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1CCCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1CD4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1CECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1CF4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1D0Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1D24u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1D30u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1D38u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1D3Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1D58u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1D6Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1D74u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1D78u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1D80u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1D84u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1E74u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1E88u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1E90u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1E98u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1E9Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1EA4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1ED0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1EE4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1EECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1EF4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1EF8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1F48u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1F6Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1F90u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1FA4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1FFCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2014u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2040u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2070u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2080u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2088u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B20BCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B20D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2100u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2130u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2140u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2150u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B216Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2170u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2188u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2198u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B21A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B21E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2200u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2210u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B221Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2224u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2230u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2238u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2250u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B226Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B227Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2284u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2290u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2298u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B22A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B22BCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B22C8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B22D0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B22E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B22ECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B22FCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2304u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B230Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2314u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B231Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2324u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2334u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2344u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2354u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2364u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2374u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2384u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2394u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B23A4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B23B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B23C4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B23D0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B23D8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B23E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B240Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2418u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2420u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2428u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2430u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2440u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2450u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2460u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B249Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B24B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B24C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B24D0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B24F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B24F8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2508u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2514u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B251Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2528u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B255Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B256Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2578u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2580u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B258Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B25C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B25C8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B25D0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B25E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B25FCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B260Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B261Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2628u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2638u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2640u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2648u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2650u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2668u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2678u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2690u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2698u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B26A4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B26B8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B26C4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B26E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B270Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2718u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B273Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2748u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B276Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2778u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2788u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B279Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B27A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B27ACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B27C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B27C8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B27D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B27DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B27E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B27F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B27F8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2804u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2814u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B281Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2824u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2840u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2850u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2868u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2874u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2888u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2894u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B28B8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B28DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B28E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B290Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2918u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B293Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2948u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2954u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B295Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2978u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2988u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B298Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B29C4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A00u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A08u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A10u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A1Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A24u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A2Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A34u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A58u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A74u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A90u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2AA0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2AA8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2AB8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2AC4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2AD4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2AE4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2AECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2AF4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2B0Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2B1Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2B2Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2B34u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2B3Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2B44u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2B60u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2B70u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2B84u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2BA0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2BACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2BB8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2BC0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2BD0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2BE0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2BECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C00u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C08u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C14u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C20u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C30u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C38u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C40u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C50u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C68u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C74u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C84u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C94u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C98u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2CB4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2CC0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2CCCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2CD8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2CDCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2CE4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2D00u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2D10u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2D24u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2D34u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2D60u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2D6Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2D7Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2D84u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2D94u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2DACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2DBCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2DDCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2DECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2E00u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2E18u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2E20u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2E3Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2ECCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2EE0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2EF0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2F00u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2F18u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2F28u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2F4Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2FACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2FF4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3014u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3020u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B304Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3054u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3060u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3074u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3084u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B30A4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B30BCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B30C4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B30CCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B30DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B30ECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3180u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B32D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B32E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B32E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B32F8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3320u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3380u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3388u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3398u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B33E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B33F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3440u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3458u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B345Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3460u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3470u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3484u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B34C8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B34F8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3548u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3568u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3578u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3588u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3590u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B35B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B35D0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B35F8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B360Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3620u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3638u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B365Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B366Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B367Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3684u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B36BCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B36CCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B36D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B36DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B36ECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B36FCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B370Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3724u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B374Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3774u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3794u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B37A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B37B8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B37C8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B37D8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B37DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B37E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3800u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3810u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3820u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B382Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3868u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3890u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B38A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B38B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B38D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B38FCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3920u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B392Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B394Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3950u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B395Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B396Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3978u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3998u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B39C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B39D8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B39E4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3A04u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3A24u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3A98u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3AA0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3AB4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3ADCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3AE0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3AFCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3B10u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3B24u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3B2Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3B48u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3B50u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3B58u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3B60u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3B70u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3B78u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3B80u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3B88u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3B90u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3B98u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3BA8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3BB0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3BD0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3BE8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3BF4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3C14u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3C40u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3C54u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3C5Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3C98u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3CA0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3CA8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3CB0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3CB8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3CC8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3CD0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3CF0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D08u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D20u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D3Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D58u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D64u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D70u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D7Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D80u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D88u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D98u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3DA4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3DB4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3DC0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3DC8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3DD4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3DE0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3DECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3DF0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3DF8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3E08u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3E14u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3E1Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3E2Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3E38u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3E40u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3E48u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3E58u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3E64u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3E74u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3E84u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3EACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3EB4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3EC8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3ED4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3EF4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3F20u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3F2Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3F3Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3F74u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3F7Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3F84u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3F8Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3F94u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3FA0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3FB0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3FE8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3FF0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3FF8u, &recomp_unit_0107, "recomp_unit_0107");
}
} // namespace psprecomp
