#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0147[4091] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0,
    0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 11, 0, 12, 0, 13, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 22, 0, 23, 0, 24, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0,
    32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0,
    0, 0, 39, 0, 0, 40, 0, 41, 0, 0, 0, 42, 0, 0, 43, 0, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0,
    48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 51, 0, 0, 0, 52, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0,
    55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 64, 0, 0, 65, 0, 66, 0, 67, 0, 68,
    0, 69, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75,
    0, 0, 0, 76, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    86, 0, 87, 0, 88, 0, 89, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 96, 0,
    0, 97, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 107, 0,
    0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 111, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0,
    0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0,
    0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0,
    0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 0,
    129, 0, 0, 130, 0, 0, 131, 0, 0, 132, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 137,
    0, 138, 0, 139, 0, 140, 0, 141, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144, 0, 145, 0, 0, 0, 146, 0, 0, 147, 0, 148, 0,
    149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153,
    0, 0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0,
    162, 0, 0, 0, 163, 0, 0, 164, 0, 165, 0, 166, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 0, 176, 0, 0, 177, 0,
    0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 185, 0,
    186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191,
    0, 0, 0, 192, 0, 0, 193, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 199, 0, 0,
    0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0,
    0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0,
    213, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 220, 0, 221, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0,
    0, 227, 0, 0, 228, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0,
    235, 0, 0, 236, 0, 0, 0, 237, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0,
    0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 245, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0,
    0, 249, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 256, 0, 0, 0,
    257, 0, 0, 0, 258, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 262,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0,
    0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0,
    0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 272, 0, 0, 273,
    0, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 279,
    0, 0, 280, 0, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0,
    288, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0,
    0, 295, 0, 0, 296, 0, 0, 297, 0, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 302, 0, 0, 0, 303,
    0, 0, 0, 304, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 0,
    0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 313, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0,
    318, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0,
    0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 328, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0,
    0, 0, 332, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0,
    339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 343, 0, 0, 344, 0, 0, 0, 345, 0, 0,
    346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0,
    0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 359, 0, 360, 0,
    0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 367, 0, 0, 0, 0, 368,
    0, 0, 0, 369, 0, 0, 0, 370, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0,
    373, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0,
    377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0,
    380, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383,
    0, 0, 0, 0, 0, 384, 0, 385, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0, 0, 390,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 0, 395, 0, 396, 0, 0, 0, 0,
    397, 0, 398, 0, 399, 0, 0, 0, 0, 0, 0, 0, 400, 0, 401, 0, 0, 0, 0, 0, 402, 0, 0, 403, 0, 404, 0, 405, 0, 0, 0, 0,
    0, 0, 0, 406, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 0, 410, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 413, 0, 414, 0, 415, 0, 416, 0, 0, 0, 417, 0, 0, 418, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 421, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 431, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 434,
    0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 437, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 440, 0, 441, 442, 0, 0, 0, 0, 0,
    443, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 446, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 450, 451, 0, 0, 0,
    0, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0, 455, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 0, 458, 0, 459, 460, 0, 0,
    0, 0, 0, 461, 0, 0, 0, 462, 0, 463, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 466, 0, 0, 467, 0, 0, 0, 0,
    468, 0, 0, 0, 469, 0, 470, 471, 0, 0, 0, 0, 0, 472, 0, 0, 0, 473, 0, 474, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0,
    476, 0, 477, 0, 0, 478, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 480, 0, 481, 482, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 484, 0,
    0, 0, 0, 485, 0, 486, 0, 0, 0, 0, 487, 0, 0, 488, 0, 0, 0, 489, 0, 0, 490, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 492,
    0, 493, 494, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 497, 0, 498, 0, 0, 0, 0, 499, 0, 0, 500, 0, 0,
    0, 0, 0, 501, 0, 0, 0, 502, 0, 0, 503, 0, 504, 0, 0, 0, 505, 0, 0, 0, 506, 0, 0, 507, 0, 0, 0, 508, 0, 0, 0, 509,
    0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 512, 0, 513, 514, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 517,
    0, 518, 0, 0, 519, 0, 0, 0, 0, 520, 0, 0, 0, 521, 0, 522, 523, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 525, 0, 0, 0,
    0, 526, 0, 527, 0, 0, 528, 0, 0, 0, 0, 529, 0, 0, 0, 530, 0, 531, 532, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 534, 0,
    0, 0, 0, 535, 0, 536, 0, 0, 537, 0, 0, 0, 538, 0, 0, 539, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    541, 0, 0, 0, 542, 0, 543, 544, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 547, 0, 548, 0, 0, 549, 0,
    0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 552, 0, 553, 554, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0,
    0, 0, 556, 0, 0, 0, 557, 0, 558, 559, 0, 560, 561, 0, 0, 0, 0, 0, 562, 0, 0, 0, 563, 0, 0, 564, 0, 565, 0, 566, 0, 0,
    567, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 571, 0, 0, 0, 572, 0, 573, 0, 0,
    0, 0, 0, 0, 574, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 577, 0, 578, 0, 0, 579, 0, 0, 0, 0,
    580, 0, 0, 0, 581, 0, 582, 583, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 585, 0, 0, 0, 0, 586, 0, 587, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 588, 0, 0, 0, 589, 0, 0, 0, 590, 0, 0, 591, 0, 0, 0, 0, 592, 0, 0, 0, 593, 0, 594, 595, 0, 0, 0, 0,
    0, 596, 0, 0, 0, 0, 597, 0, 0, 0, 0, 598, 0, 599, 0, 0, 0, 600, 0, 601, 0, 0, 602, 0, 603, 0, 0, 604, 0, 0, 605, 0,
    606, 0, 607, 0, 608, 609, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 611, 0, 0, 612, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 616, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 619, 0, 620, 0, 0, 0, 0, 0, 621, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 623, 0, 624, 625, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 628,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0,
    0, 639, 0, 0, 640, 0, 0, 0, 0, 641, 0, 642, 0, 0, 0, 643, 0, 644, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0,
    0, 649, 0, 650, 0, 0, 0, 651, 0, 652, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0,
    0, 0, 0, 0, 0, 0, 660, 0, 661, 0, 0, 662, 0, 663, 0, 664, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 666, 0, 0, 667, 0, 0,
    668, 0, 669, 0, 670, 0, 671, 672, 0, 0, 673, 0, 0, 0, 0, 0, 0, 674, 0, 0, 675, 0, 0, 676, 0, 0, 677, 0, 0, 678, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 679, 0, 0, 680, 0, 0, 681, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 683, 0, 0, 0, 0, 684, 0, 685, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 688, 0, 0, 0, 0, 689, 0, 690, 0, 0, 0, 0, 691, 0, 0, 692, 0, 693, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 695, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 697,
};
void recomp_unit_0147_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A50000u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0147[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A50000;
    case 2u: goto L_08A50008;
    case 3u: goto L_08A50070;
    case 4u: goto L_08A50088;
    case 5u: goto L_08A500BC;
    case 6u: goto L_08A500D4;
    case 7u: goto L_08A500E4;
    case 8u: goto L_08A500FC;
    case 9u: goto L_08A5012C;
    case 10u: goto L_08A50134;
    case 11u: goto L_08A50138;
    case 12u: goto L_08A50140;
    case 13u: goto L_08A50148;
    case 14u: goto L_08A50154;
    case 15u: goto L_08A50160;
    case 16u: goto L_08A50190;
    case 17u: goto L_08A501A4;
    case 18u: goto L_08A501AC;
    case 19u: goto L_08A501B4;
    case 20u: goto L_08A501D0;
    case 21u: goto L_08A501D8;
    case 22u: goto L_08A501E0;
    case 23u: goto L_08A501E8;
    case 24u: goto L_08A501F0;
    case 25u: goto L_08A50218;
    case 26u: goto L_08A50220;
    case 27u: goto L_08A50228;
    case 28u: goto L_08A50248;
    case 29u: goto L_08A50250;
    case 30u: goto L_08A50264;
    case 31u: goto L_08A50278;
    case 32u: goto L_08A50280;
    case 33u: goto L_08A50294;
    case 34u: goto L_08A502A8;
    case 35u: goto L_08A502AC;
    case 36u: goto L_08A502D8;
    case 37u: goto L_08A502E8;
    case 38u: goto L_08A502F8;
    case 39u: goto L_08A50308;
    case 40u: goto L_08A50314;
    case 41u: goto L_08A5031C;
    case 42u: goto L_08A5032C;
    case 43u: goto L_08A50338;
    case 44u: goto L_08A50340;
    case 45u: goto L_08A50350;
    case 46u: goto L_08A50360;
    case 47u: goto L_08A50370;
    case 48u: goto L_08A50380;
    case 49u: goto L_08A503A4;
    case 50u: goto L_08A503B4;
    case 51u: goto L_08A503BC;
    case 52u: goto L_08A503CC;
    case 53u: goto L_08A503D4;
    case 54u: goto L_08A503E4;
    case 55u: goto L_08A50400;
    case 56u: goto L_08A5040C;
    case 57u: goto L_08A50430;
    case 58u: goto L_08A50440;
    case 59u: goto L_08A5044C;
    case 60u: goto L_08A50454;
    case 61u: goto L_08A504AC;
    case 62u: goto L_08A504BC;
    case 63u: goto L_08A504C8;
    case 64u: goto L_08A504D8;
    case 65u: goto L_08A504E4;
    case 66u: goto L_08A504EC;
    case 67u: goto L_08A504F4;
    case 68u: goto L_08A504FC;
    case 69u: goto L_08A50504;
    case 70u: goto L_08A5050C;
    case 71u: goto L_08A50518;
    case 72u: goto L_08A50524;
    case 73u: goto L_08A5053C;
    case 74u: goto L_08A50544;
    case 75u: goto L_08A5057C;
    case 76u: goto L_08A5058C;
    case 77u: goto L_08A50598;
    case 78u: goto L_08A505A0;
    case 79u: goto L_08A505DC;
    case 80u: goto L_08A505E8;
    case 81u: goto L_08A5061C;
    case 82u: goto L_08A50628;
    case 83u: goto L_08A50648;
    case 84u: goto L_08A50654;
    case 85u: goto L_08A50670;
    case 86u: goto L_08A50680;
    case 87u: goto L_08A50688;
    case 88u: goto L_08A50690;
    case 89u: goto L_08A50698;
    case 90u: goto L_08A506A0;
    case 91u: goto L_08A506AC;
    case 92u: goto L_08A506C4;
    case 93u: goto L_08A506CC;
    case 94u: goto L_08A506DC;
    case 95u: goto L_08A506E8;
    case 96u: goto L_08A506F8;
    case 97u: goto L_08A50704;
    case 98u: goto L_08A50714;
    case 99u: goto L_08A50720;
    case 100u: goto L_08A50734;
    case 101u: goto L_08A5074C;
    case 102u: goto L_08A50758;
    case 103u: goto L_08A507C0;
    case 104u: goto L_08A507CC;
    case 105u: goto L_08A507DC;
    case 106u: goto L_08A507EC;
    case 107u: goto L_08A507F8;
    case 108u: goto L_08A50804;
    case 109u: goto L_08A50818;
    case 110u: goto L_08A50828;
    case 111u: goto L_08A50838;
    case 112u: goto L_08A5083C;
    case 113u: goto L_08A50864;
    case 114u: goto L_08A50874;
    case 115u: goto L_08A5088C;
    case 116u: goto L_08A508BC;
    case 117u: goto L_08A508E8;
    case 118u: goto L_08A508F8;
    case 119u: goto L_08A50904;
    case 120u: goto L_08A50934;
    case 121u: goto L_08A50958;
    case 122u: goto L_08A5096C;
    case 123u: goto L_08A50984;
    case 124u: goto L_08A50990;
    case 125u: goto L_08A509C8;
    case 126u: goto L_08A509D8;
    case 127u: goto L_08A509E4;
    case 128u: goto L_08A509F0;
    case 129u: goto L_08A50A00;
    case 130u: goto L_08A50A0C;
    case 131u: goto L_08A50A18;
    case 132u: goto L_08A50A24;
    case 133u: goto L_08A50A34;
    case 134u: goto L_08A50A3C;
    case 135u: goto L_08A50A5C;
    case 136u: goto L_08A50A64;
    case 137u: goto L_08A50A7C;
    case 138u: goto L_08A50A84;
    case 139u: goto L_08A50A8C;
    case 140u: goto L_08A50A94;
    case 141u: goto L_08A50A9C;
    case 142u: goto L_08A50AAC;
    case 143u: goto L_08A50ABC;
    case 144u: goto L_08A50ACC;
    case 145u: goto L_08A50AD4;
    case 146u: goto L_08A50AE4;
    case 147u: goto L_08A50AF0;
    case 148u: goto L_08A50AF8;
    case 149u: goto L_08A50B00;
    case 150u: goto L_08A50B34;
    case 151u: goto L_08A50B40;
    case 152u: goto L_08A50B64;
    case 153u: goto L_08A50B7C;
    case 154u: goto L_08A50B8C;
    case 155u: goto L_08A50B98;
    case 156u: goto L_08A50BA4;
    case 157u: goto L_08A50BB4;
    case 158u: goto L_08A50BC0;
    case 159u: goto L_08A50BD4;
    case 160u: goto L_08A50BE4;
    case 161u: goto L_08A50BF0;
    case 162u: goto L_08A50C00;
    case 163u: goto L_08A50C10;
    case 164u: goto L_08A50C1C;
    case 165u: goto L_08A50C24;
    case 166u: goto L_08A50C2C;
    case 167u: goto L_08A50C34;
    case 168u: goto L_08A50C3C;
    case 169u: goto L_08A50C6C;
    case 170u: goto L_08A50C78;
    case 171u: goto L_08A50CA0;
    case 172u: goto L_08A50CB4;
    case 173u: goto L_08A50CC4;
    case 174u: goto L_08A50CD0;
    case 175u: goto L_08A50CDC;
    case 176u: goto L_08A50CEC;
    case 177u: goto L_08A50CF8;
    case 178u: goto L_08A50D10;
    case 179u: goto L_08A50D20;
    case 180u: goto L_08A50D2C;
    case 181u: goto L_08A50D3C;
    case 182u: goto L_08A50D4C;
    case 183u: goto L_08A50D58;
    case 184u: goto L_08A50D60;
    case 185u: goto L_08A50D78;
    case 186u: goto L_08A50D80;
    case 187u: goto L_08A50D88;
    case 188u: goto L_08A50DC8;
    case 189u: goto L_08A50DD4;
    case 190u: goto L_08A50DEC;
    case 191u: goto L_08A50DFC;
    case 192u: goto L_08A50E0C;
    case 193u: goto L_08A50E18;
    case 194u: goto L_08A50E20;
    case 195u: goto L_08A50E30;
    case 196u: goto L_08A50E48;
    case 197u: goto L_08A50E58;
    case 198u: goto L_08A50E64;
    case 199u: goto L_08A50E74;
    case 200u: goto L_08A50E84;
    case 201u: goto L_08A50E90;
    case 202u: goto L_08A50EA8;
    case 203u: goto L_08A50EB0;
    case 204u: goto L_08A50EB8;
    case 205u: goto L_08A50EF8;
    case 206u: goto L_08A50F04;
    case 207u: goto L_08A50F1C;
    case 208u: goto L_08A50F34;
    case 209u: goto L_08A50F44;
    case 210u: goto L_08A50F50;
    case 211u: goto L_08A50F58;
    case 212u: goto L_08A50F68;
    case 213u: goto L_08A50F80;
    case 214u: goto L_08A50F90;
    case 215u: goto L_08A50F9C;
    case 216u: goto L_08A50FAC;
    case 217u: goto L_08A50FBC;
    case 218u: goto L_08A50FC8;
    case 219u: goto L_08A50FE0;
    case 220u: goto L_08A50FE8;
    case 221u: goto L_08A50FF0;
    case 222u: goto L_08A51020;
    case 223u: goto L_08A5102C;
    case 224u: goto L_08A51054;
    case 225u: goto L_08A51068;
    case 226u: goto L_08A51078;
    case 227u: goto L_08A51084;
    case 228u: goto L_08A51090;
    case 229u: goto L_08A510A0;
    case 230u: goto L_08A510AC;
    case 231u: goto L_08A510C4;
    case 232u: goto L_08A510D4;
    case 233u: goto L_08A510E0;
    case 234u: goto L_08A510F0;
    case 235u: goto L_08A51100;
    case 236u: goto L_08A5110C;
    case 237u: goto L_08A5111C;
    case 238u: goto L_08A51124;
    case 239u: goto L_08A5112C;
    case 240u: goto L_08A51160;
    case 241u: goto L_08A5116C;
    case 242u: goto L_08A51190;
    case 243u: goto L_08A511A8;
    case 244u: goto L_08A511B8;
    case 245u: goto L_08A511C4;
    case 246u: goto L_08A511CC;
    case 247u: goto L_08A511DC;
    case 248u: goto L_08A511F4;
    case 249u: goto L_08A51204;
    case 250u: goto L_08A51210;
    case 251u: goto L_08A51220;
    case 252u: goto L_08A51230;
    case 253u: goto L_08A5123C;
    case 254u: goto L_08A51250;
    case 255u: goto L_08A51268;
    case 256u: goto L_08A51270;
    case 257u: goto L_08A51280;
    case 258u: goto L_08A51290;
    case 259u: goto L_08A51294;
    case 260u: goto L_08A512D0;
    case 261u: goto L_08A512F4;
    case 262u: goto L_08A512FC;
    case 263u: goto L_08A51328;
    case 264u: goto L_08A5135C;
    case 265u: goto L_08A51374;
    case 266u: goto L_08A5138C;
    case 267u: goto L_08A513E0;
    case 268u: goto L_08A513F4;
    case 269u: goto L_08A5140C;
    case 270u: goto L_08A51458;
    case 271u: goto L_08A51460;
    case 272u: goto L_08A51470;
    case 273u: goto L_08A5147C;
    case 274u: goto L_08A51498;
    case 275u: goto L_08A514A4;
    case 276u: goto L_08A514C8;
    case 277u: goto L_08A514E0;
    case 278u: goto L_08A514F0;
    case 279u: goto L_08A514FC;
    case 280u: goto L_08A51508;
    case 281u: goto L_08A51518;
    case 282u: goto L_08A51524;
    case 283u: goto L_08A51538;
    case 284u: goto L_08A51548;
    case 285u: goto L_08A51554;
    case 286u: goto L_08A51564;
    case 287u: goto L_08A51574;
    case 288u: goto L_08A51580;
    case 289u: goto L_08A51588;
    case 290u: goto L_08A51590;
    case 291u: goto L_08A515AC;
    case 292u: goto L_08A515B8;
    case 293u: goto L_08A515E0;
    case 294u: goto L_08A515F4;
    case 295u: goto L_08A51604;
    case 296u: goto L_08A51610;
    case 297u: goto L_08A5161C;
    case 298u: goto L_08A5162C;
    case 299u: goto L_08A51638;
    case 300u: goto L_08A51650;
    case 301u: goto L_08A51660;
    case 302u: goto L_08A5166C;
    case 303u: goto L_08A5167C;
    case 304u: goto L_08A5168C;
    case 305u: goto L_08A51698;
    case 306u: goto L_08A516A0;
    case 307u: goto L_08A516B8;
    case 308u: goto L_08A516D8;
    case 309u: goto L_08A516E4;
    case 310u: goto L_08A51708;
    case 311u: goto L_08A51718;
    case 312u: goto L_08A51728;
    case 313u: goto L_08A51734;
    case 314u: goto L_08A5173C;
    case 315u: goto L_08A5174C;
    case 316u: goto L_08A51764;
    case 317u: goto L_08A51774;
    case 318u: goto L_08A51780;
    case 319u: goto L_08A51790;
    case 320u: goto L_08A517A0;
    case 321u: goto L_08A517AC;
    case 322u: goto L_08A517C4;
    case 323u: goto L_08A517E4;
    case 324u: goto L_08A517F0;
    case 325u: goto L_08A51814;
    case 326u: goto L_08A5182C;
    case 327u: goto L_08A5183C;
    case 328u: goto L_08A51848;
    case 329u: goto L_08A51850;
    case 330u: goto L_08A51860;
    case 331u: goto L_08A51878;
    case 332u: goto L_08A51888;
    case 333u: goto L_08A51894;
    case 334u: goto L_08A518A4;
    case 335u: goto L_08A518B4;
    case 336u: goto L_08A518C0;
    case 337u: goto L_08A518D8;
    case 338u: goto L_08A518F4;
    case 339u: goto L_08A51900;
    case 340u: goto L_08A51928;
    case 341u: goto L_08A5193C;
    case 342u: goto L_08A5194C;
    case 343u: goto L_08A51958;
    case 344u: goto L_08A51964;
    case 345u: goto L_08A51974;
    case 346u: goto L_08A51980;
    case 347u: goto L_08A51998;
    case 348u: goto L_08A519A8;
    case 349u: goto L_08A519B4;
    case 350u: goto L_08A519C4;
    case 351u: goto L_08A519D4;
    case 352u: goto L_08A519E0;
    case 353u: goto L_08A519F0;
    case 354u: goto L_08A51A0C;
    case 355u: goto L_08A51A18;
    case 356u: goto L_08A51A3C;
    case 357u: goto L_08A51A54;
    case 358u: goto L_08A51A64;
    case 359u: goto L_08A51A70;
    case 360u: goto L_08A51A78;
    case 361u: goto L_08A51A88;
    case 362u: goto L_08A51AA0;
    case 363u: goto L_08A51AB0;
    case 364u: goto L_08A51ABC;
    case 365u: goto L_08A51ACC;
    case 366u: goto L_08A51ADC;
    case 367u: goto L_08A51AE8;
    case 368u: goto L_08A51AFC;
    case 369u: goto L_08A51B0C;
    case 370u: goto L_08A51B1C;
    case 371u: goto L_08A51B20;
    case 372u: goto L_08A51B5C;
    case 373u: goto L_08A51B80;
    case 374u: goto L_08A51B88;
    case 375u: goto L_08A51BB4;
    case 376u: goto L_08A51BE8;
    case 377u: goto L_08A51C00;
    case 378u: goto L_08A51C18;
    case 379u: goto L_08A51C6C;
    case 380u: goto L_08A51C80;
    case 381u: goto L_08A51C98;
    case 382u: goto L_08A51CE4;
    case 383u: goto L_08A51CFC;
    case 384u: goto L_08A51D14;
    case 385u: goto L_08A51D1C;
    case 386u: goto L_08A51D28;
    case 387u: goto L_08A51D4C;
    case 388u: goto L_08A51D58;
    case 389u: goto L_08A51D64;
    case 390u: goto L_08A51D7C;
    case 391u: goto L_08A51DA4;
    case 392u: goto L_08A51DB0;
    case 393u: goto L_08A51DD0;
    case 394u: goto L_08A51DD8;
    case 395u: goto L_08A51DE4;
    case 396u: goto L_08A51DEC;
    case 397u: goto L_08A51E00;
    case 398u: goto L_08A51E08;
    case 399u: goto L_08A51E10;
    case 400u: goto L_08A51E30;
    case 401u: goto L_08A51E38;
    case 402u: goto L_08A51E50;
    case 403u: goto L_08A51E5C;
    case 404u: goto L_08A51E64;
    case 405u: goto L_08A51E6C;
    case 406u: goto L_08A51E8C;
    case 407u: goto L_08A51E94;
    case 408u: goto L_08A51EB0;
    case 409u: goto L_08A51EBC;
    case 410u: goto L_08A51ECC;
    case 411u: goto L_08A51ED8;
    case 412u: goto L_08A51EE4;
    case 413u: goto L_08A51F10;
    case 414u: goto L_08A51F18;
    case 415u: goto L_08A51F20;
    case 416u: goto L_08A51F28;
    case 417u: goto L_08A51F38;
    case 418u: goto L_08A51F44;
    case 419u: goto L_08A51F50;
    case 420u: goto L_08A51F68;
    case 421u: goto L_08A51F70;
    case 422u: goto L_08A51FB4;
    case 423u: goto L_08A51FF8;
    case 424u: goto L_08A52028;
    case 425u: goto L_08A5209C;
    case 426u: goto L_08A520C0;
    case 427u: goto L_08A520D4;
    case 428u: goto L_08A520E0;
    case 429u: goto L_08A52124;
    case 430u: goto L_08A52134;
    case 431u: goto L_08A5213C;
    case 432u: goto L_08A52140;
    case 433u: goto L_08A52158;
    case 434u: goto L_08A5217C;
    case 435u: goto L_08A52190;
    case 436u: goto L_08A521A4;
    case 437u: goto L_08A521AC;
    case 438u: goto L_08A521B8;
    case 439u: goto L_08A521CC;
    case 440u: goto L_08A521DC;
    case 441u: goto L_08A521E4;
    case 442u: goto L_08A521E8;
    case 443u: goto L_08A52200;
    case 444u: goto L_08A52218;
    case 445u: goto L_08A5222C;
    case 446u: goto L_08A52234;
    case 447u: goto L_08A52240;
    case 448u: goto L_08A52254;
    case 449u: goto L_08A52264;
    case 450u: goto L_08A5226C;
    case 451u: goto L_08A52270;
    case 452u: goto L_08A52288;
    case 453u: goto L_08A5229C;
    case 454u: goto L_08A522B0;
    case 455u: goto L_08A522B8;
    case 456u: goto L_08A522C4;
    case 457u: goto L_08A522D8;
    case 458u: goto L_08A522E8;
    case 459u: goto L_08A522F0;
    case 460u: goto L_08A522F4;
    case 461u: goto L_08A5230C;
    case 462u: goto L_08A5231C;
    case 463u: goto L_08A52324;
    case 464u: goto L_08A52344;
    case 465u: goto L_08A52358;
    case 466u: goto L_08A52360;
    case 467u: goto L_08A5236C;
    case 468u: goto L_08A52380;
    case 469u: goto L_08A52390;
    case 470u: goto L_08A52398;
    case 471u: goto L_08A5239C;
    case 472u: goto L_08A523B4;
    case 473u: goto L_08A523C4;
    case 474u: goto L_08A523CC;
    case 475u: goto L_08A523EC;
    case 476u: goto L_08A52400;
    case 477u: goto L_08A52408;
    case 478u: goto L_08A52414;
    case 479u: goto L_08A52430;
    case 480u: goto L_08A52440;
    case 481u: goto L_08A52448;
    case 482u: goto L_08A5244C;
    case 483u: goto L_08A52464;
    case 484u: goto L_08A52478;
    case 485u: goto L_08A5248C;
    case 486u: goto L_08A52494;
    case 487u: goto L_08A524A8;
    case 488u: goto L_08A524B4;
    case 489u: goto L_08A524C4;
    case 490u: goto L_08A524D0;
    case 491u: goto L_08A524EC;
    case 492u: goto L_08A524FC;
    case 493u: goto L_08A52504;
    case 494u: goto L_08A52508;
    case 495u: goto L_08A52520;
    case 496u: goto L_08A52538;
    case 497u: goto L_08A5254C;
    case 498u: goto L_08A52554;
    case 499u: goto L_08A52568;
    case 500u: goto L_08A52574;
    case 501u: goto L_08A5258C;
    case 502u: goto L_08A5259C;
    case 503u: goto L_08A525A8;
    case 504u: goto L_08A525B0;
    case 505u: goto L_08A525C0;
    case 506u: goto L_08A525D0;
    case 507u: goto L_08A525DC;
    case 508u: goto L_08A525EC;
    case 509u: goto L_08A525FC;
    case 510u: goto L_08A52608;
    case 511u: goto L_08A5261C;
    case 512u: goto L_08A5262C;
    case 513u: goto L_08A52634;
    case 514u: goto L_08A52638;
    case 515u: goto L_08A52650;
    case 516u: goto L_08A52668;
    case 517u: goto L_08A5267C;
    case 518u: goto L_08A52684;
    case 519u: goto L_08A52690;
    case 520u: goto L_08A526A4;
    case 521u: goto L_08A526B4;
    case 522u: goto L_08A526BC;
    case 523u: goto L_08A526C0;
    case 524u: goto L_08A526D8;
    case 525u: goto L_08A526F0;
    case 526u: goto L_08A52704;
    case 527u: goto L_08A5270C;
    case 528u: goto L_08A52718;
    case 529u: goto L_08A5272C;
    case 530u: goto L_08A5273C;
    case 531u: goto L_08A52744;
    case 532u: goto L_08A52748;
    case 533u: goto L_08A52760;
    case 534u: goto L_08A52778;
    case 535u: goto L_08A5278C;
    case 536u: goto L_08A52794;
    case 537u: goto L_08A527A0;
    case 538u: goto L_08A527B0;
    case 539u: goto L_08A527BC;
    case 540u: goto L_08A527D8;
    case 541u: goto L_08A52800;
    case 542u: goto L_08A52810;
    case 543u: goto L_08A52818;
    case 544u: goto L_08A5281C;
    case 545u: goto L_08A52834;
    case 546u: goto L_08A52850;
    case 547u: goto L_08A52864;
    case 548u: goto L_08A5286C;
    case 549u: goto L_08A52878;
    case 550u: goto L_08A52884;
    case 551u: goto L_08A528B4;
    case 552u: goto L_08A528C4;
    case 553u: goto L_08A528CC;
    case 554u: goto L_08A528D0;
    case 555u: goto L_08A528E8;
    case 556u: goto L_08A52908;
    case 557u: goto L_08A52918;
    case 558u: goto L_08A52920;
    case 559u: goto L_08A52924;
    case 560u: goto L_08A5292C;
    case 561u: goto L_08A52930;
    case 562u: goto L_08A52948;
    case 563u: goto L_08A52958;
    case 564u: goto L_08A52964;
    case 565u: goto L_08A5296C;
    case 566u: goto L_08A52974;
    case 567u: goto L_08A52980;
    case 568u: goto L_08A5299C;
    case 569u: goto L_08A529B0;
    case 570u: goto L_08A529CC;
    case 571u: goto L_08A529DC;
    case 572u: goto L_08A529EC;
    case 573u: goto L_08A529F4;
    case 574u: goto L_08A52A10;
    case 575u: goto L_08A52A14;
    case 576u: goto L_08A52AC4;
    case 577u: goto L_08A52AD8;
    case 578u: goto L_08A52AE0;
    case 579u: goto L_08A52AEC;
    case 580u: goto L_08A52B00;
    case 581u: goto L_08A52B10;
    case 582u: goto L_08A52B18;
    case 583u: goto L_08A52B1C;
    case 584u: goto L_08A52B34;
    case 585u: goto L_08A52B48;
    case 586u: goto L_08A52B5C;
    case 587u: goto L_08A52B64;
    case 588u: goto L_08A52C10;
    case 589u: goto L_08A52C20;
    case 590u: goto L_08A52C30;
    case 591u: goto L_08A52C3C;
    case 592u: goto L_08A52C50;
    case 593u: goto L_08A52C60;
    case 594u: goto L_08A52C68;
    case 595u: goto L_08A52C6C;
    case 596u: goto L_08A52C84;
    case 597u: goto L_08A52C98;
    case 598u: goto L_08A52CAC;
    case 599u: goto L_08A52CB4;
    case 600u: goto L_08A52CC4;
    case 601u: goto L_08A52CCC;
    case 602u: goto L_08A52CD8;
    case 603u: goto L_08A52CE0;
    case 604u: goto L_08A52CEC;
    case 605u: goto L_08A52CF8;
    case 606u: goto L_08A52D00;
    case 607u: goto L_08A52D08;
    case 608u: goto L_08A52D10;
    case 609u: goto L_08A52D14;
    case 610u: goto L_08A52D38;
    case 611u: goto L_08A52D44;
    case 612u: goto L_08A52D50;
    case 613u: goto L_08A52D58;
    case 614u: goto L_08A52D98;
    case 615u: goto L_08A52DDC;
    case 616u: goto L_08A52E18;
    case 617u: goto L_08A52E20;
    case 618u: goto L_08A52EA0;
    case 619u: goto L_08A52EAC;
    case 620u: goto L_08A52EB4;
    case 621u: goto L_08A52ECC;
    case 622u: goto L_08A52ED4;
    case 623u: goto L_08A52F04;
    case 624u: goto L_08A52F0C;
    case 625u: goto L_08A52F10;
    case 626u: goto L_08A52F18;
    case 627u: goto L_08A52F74;
    case 628u: goto L_08A52F7C;
    case 629u: goto L_08A53050;
    case 630u: goto L_08A53138;
    case 631u: goto L_08A531D4;
    case 632u: goto L_08A532F4;
    case 633u: goto L_08A53414;
    case 634u: goto L_08A53510;
    case 635u: goto L_08A53630;
    case 636u: goto L_08A53744;
    case 637u: goto L_08A53848;
    case 638u: goto L_08A53878;
    case 639u: goto L_08A53884;
    case 640u: goto L_08A53890;
    case 641u: goto L_08A538A4;
    case 642u: goto L_08A538AC;
    case 643u: goto L_08A538BC;
    case 644u: goto L_08A538C4;
    case 645u: goto L_08A538D0;
    case 646u: goto L_08A539BC;
    case 647u: goto L_08A539C4;
    case 648u: goto L_08A539F0;
    case 649u: goto L_08A53A04;
    case 650u: goto L_08A53A0C;
    case 651u: goto L_08A53A1C;
    case 652u: goto L_08A53A24;
    case 653u: goto L_08A53A30;
    case 654u: goto L_08A53A68;
    case 655u: goto L_08A53AA4;
    case 656u: goto L_08A53AB8;
    case 657u: goto L_08A53B24;
    case 658u: goto L_08A53B30;
    case 659u: goto L_08A53B74;
    case 660u: goto L_08A53B98;
    case 661u: goto L_08A53BA0;
    case 662u: goto L_08A53BAC;
    case 663u: goto L_08A53BB4;
    case 664u: goto L_08A53BBC;
    case 665u: goto L_08A53BDC;
    case 666u: goto L_08A53BE8;
    case 667u: goto L_08A53BF4;
    case 668u: goto L_08A53C00;
    case 669u: goto L_08A53C08;
    case 670u: goto L_08A53C10;
    case 671u: goto L_08A53C18;
    case 672u: goto L_08A53C1C;
    case 673u: goto L_08A53C28;
    case 674u: goto L_08A53C44;
    case 675u: goto L_08A53C50;
    case 676u: goto L_08A53C5C;
    case 677u: goto L_08A53C68;
    case 678u: goto L_08A53C74;
    case 679u: goto L_08A53D08;
    case 680u: goto L_08A53D14;
    case 681u: goto L_08A53D20;
    case 682u: goto L_08A53D2C;
    case 683u: goto L_08A53E04;
    case 684u: goto L_08A53E18;
    case 685u: goto L_08A53E20;
    case 686u: goto L_08A53E24;
    case 687u: goto L_08A53EA8;
    case 688u: goto L_08A53EB4;
    case 689u: goto L_08A53EC8;
    case 690u: goto L_08A53ED0;
    case 691u: goto L_08A53EE4;
    case 692u: goto L_08A53EF0;
    case 693u: goto L_08A53EF8;
    case 694u: goto L_08A53F24;
    case 695u: goto L_08A53F9C;
    case 696u: goto L_08A53FA8;
    case 697u: goto L_08A53FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A50000:
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5012C;
      }
      goto L_08A50008;
    }
L_08A50008:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    ctx.gpr[4] = (16480u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (15477u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[4] = (16288u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (16544u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A50070u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 416u, 0x08A4DF6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50070u) goto L_08A50070;
    return;
L_08A50070:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (17076u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08A50088u);
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 416u, 0x08A4DF6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50088u) goto L_08A50088;
    return;
L_08A50088:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[23] = (0u | 500u);
    ctx.gpr[4] = (0u | 45u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x08A500BCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 276u, 0x089999ACu>(ctx, &aot_mem) && ctx.pc == 0x08A500BCu) goto L_08A500BC;
    return;
L_08A500BC:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    ctx.gpr[6] = (16192u << 16u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A500D4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A500D4u) goto L_08A500D4;
    return;
L_08A500D4:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08A500E4u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 416u, 0x08A4DF6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A500E4u) goto L_08A500E4;
    return;
L_08A500E4:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (16948u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08A500FCu);
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 416u, 0x08A4DF6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A500FCu) goto L_08A500FC;
    return;
L_08A500FC:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[11] = (0u | 3u);
    ctx.gpr[31] = (0x08A5012Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 276u, 0x089999ACu>(ctx, &aot_mem) && ctx.pc == 0x08A5012Cu) goto L_08A5012C;
    return;
L_08A5012C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50138;
      }
      goto L_08A50134;
    }
L_08A50134:
    ctx.gpr[19] = (0u | 1u);
    goto L_08A50138;
L_08A50138:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A503CC;
      }
      goto L_08A50140;
    }
L_08A50140:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A503CC;
      }
      goto L_08A50148;
    }
L_08A50148:
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A50154u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 350u, 0x08AF9904u>(ctx, &aot_mem) && ctx.pc == 0x08A50154u) goto L_08A50154;
    return;
L_08A50154:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A50160u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 295u, 0x08A4D514u>(ctx, &aot_mem) && ctx.pc == 0x08A50160u) goto L_08A50160;
    return;
L_08A50160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A501A4;
      }
      goto L_08A50190;
    }
L_08A50190:
    ctx.gpr[4] = (15395u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    goto L_08A501A4;
L_08A501A4:
    ctx.gpr[31] = (0x08A501ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 456u, 0x08AFA15Cu>(ctx, &aot_mem) && ctx.pc == 0x08A501ACu) goto L_08A501AC;
    return;
L_08A501AC:
    ctx.gpr[31] = (0x08A501B4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 303u, 0x08A4D5B4u>(ctx, &aot_mem) && ctx.pc == 0x08A501B4u) goto L_08A501B4;
    return;
L_08A501B4:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A50248;
      }
      goto L_08A501D0;
    }
L_08A501D0:
    ctx.gpr[31] = (0x08A501D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 418u, 0x08AF9DE0u>(ctx, &aot_mem) && ctx.pc == 0x08A501D8u) goto L_08A501D8;
    return;
L_08A501D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A50218;
      }
      goto L_08A501E0;
    }
L_08A501E0:
    ctx.gpr[31] = (0x08A501E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 456u, 0x08AFA15Cu>(ctx, &aot_mem) && ctx.pc == 0x08A501E8u) goto L_08A501E8;
    return;
L_08A501E8:
    ctx.gpr[31] = (0x08A501F0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 303u, 0x08A4D5B4u>(ctx, &aot_mem) && ctx.pc == 0x08A501F0u) goto L_08A501F0;
    return;
L_08A501F0:
    ctx.gpr[4] = (16140u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[0];
    ctx.gpr[4] = (16294u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_08A50248;
      }
      goto L_08A50218;
    }
L_08A50218:
    ctx.gpr[31] = (0x08A50220u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 456u, 0x08AFA15Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50220u) goto L_08A50220;
    return;
L_08A50220:
    ctx.gpr[31] = (0x08A50228u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 303u, 0x08A4D5B4u>(ctx, &aot_mem) && ctx.pc == 0x08A50228u) goto L_08A50228;
    return;
L_08A50228:
    ctx.gpr[4] = (16140u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[0];
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    goto L_08A50248;
L_08A50248:
    ctx.gpr[31] = (0x08A50250u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 456u, 0x08AFA15Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50250u) goto L_08A50250;
    return;
L_08A50250:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A50278;
      }
      goto L_08A50264;
    }
L_08A50264:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A502A8;
      }
      goto L_08A50278;
    }
L_08A50278:
    ctx.gpr[31] = (0x08A50280u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 456u, 0x08AFA15Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50280u) goto L_08A50280;
    return;
L_08A50280:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A502AC;
      }
      goto L_08A50294;
    }
L_08A50294:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A502AC;
      }
      goto L_08A502A8;
    }
L_08A502A8:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
    goto L_08A502AC;
L_08A502AC:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(800));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(752));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
    ctx.gpr[31] = (0x08A502D8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 304u, 0x08A4D5C0u>(ctx, &aot_mem) && ctx.pc == 0x08A502D8u) goto L_08A502D8;
    return;
L_08A502D8:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A502E8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A502E8u) goto L_08A502E8;
    return;
L_08A502E8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A502F8u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 293u, 0x08A4D4D4u>(ctx, &aot_mem) && ctx.pc == 0x08A502F8u) goto L_08A502F8;
    return;
L_08A502F8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08A50308u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 298u, 0x08A4D560u>(ctx, &aot_mem) && ctx.pc == 0x08A50308u) goto L_08A50308;
    return;
L_08A50308:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A50314u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 308u, 0x08A4D618u>(ctx, &aot_mem) && ctx.pc == 0x08A50314u) goto L_08A50314;
    return;
L_08A50314:
    ctx.gpr[31] = (0x08A5031Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 347u, 0x08AF98D4u>(ctx, &aot_mem) && ctx.pc == 0x08A5031Cu) goto L_08A5031C;
    return;
L_08A5031C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A5032Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5032Cu) goto L_08A5032C;
    return;
L_08A5032C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A50338u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 440u, 0x08AF9F60u>(ctx, &aot_mem) && ctx.pc == 0x08A50338u) goto L_08A50338;
    return;
L_08A50338:
    ctx.gpr[31] = (0x08A50340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 347u, 0x08AF98D4u>(ctx, &aot_mem) && ctx.pc == 0x08A50340u) goto L_08A50340;
    return;
L_08A50340:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A50350u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50350u) goto L_08A50350;
    return;
L_08A50350:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A50360u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AF9F84u>(ctx, &aot_mem) && ctx.pc == 0x08A50360u) goto L_08A50360;
    return;
L_08A50360:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A50370u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(816), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 347u, 0x08AF98D4u>(ctx, &aot_mem) && ctx.pc == 0x08A50370u) goto L_08A50370;
    return;
L_08A50370:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(820), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(820));
    ctx.gpr[31] = (0x08A50380u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF98A0u>(ctx, &aot_mem) && ctx.pc == 0x08A50380u) goto L_08A50380;
    return;
L_08A50380:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (48960u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[31] = (0x08A503A4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 349u, 0x08AF98FCu>(ctx, &aot_mem) && ctx.pc == 0x08A503A4u) goto L_08A503A4;
    return;
L_08A503A4:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A503B4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 298u, 0x08A4D560u>(ctx, &aot_mem) && ctx.pc == 0x08A503B4u) goto L_08A503B4;
    return;
L_08A503B4:
    ctx.gpr[31] = (0x08A503BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF990Cu>(ctx, &aot_mem) && ctx.pc == 0x08A503BCu) goto L_08A503BC;
    return;
L_08A503BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A503CCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AF9F84u>(ctx, &aot_mem) && ctx.pc == 0x08A503CCu) goto L_08A503CC;
    return;
L_08A503CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A503E4;
      }
      goto L_08A503D4;
    }
L_08A503D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(948))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(948), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A503E4;
L_08A503E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A504E4;
      }
      goto L_08A50400;
    }
L_08A50400:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(864));
    ctx.gpr[31] = (0x08A5040Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 350u, 0x08AF9904u>(ctx, &aot_mem) && ctx.pc == 0x08A5040Cu) goto L_08A5040C;
    return;
L_08A5040C:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(832));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A50430u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 304u, 0x08A4D5C0u>(ctx, &aot_mem) && ctx.pc == 0x08A50430u) goto L_08A50430;
    return;
L_08A50430:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A50440u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 292u, 0x08A4D4BCu>(ctx, &aot_mem) && ctx.pc == 0x08A50440u) goto L_08A50440;
    return;
L_08A50440:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A5044Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 295u, 0x08A4D514u>(ctx, &aot_mem) && ctx.pc == 0x08A5044Cu) goto L_08A5044C;
    return;
L_08A5044C:
    ctx.gpr[31] = (0x08A50454u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 347u, 0x08AF98D4u>(ctx, &aot_mem) && ctx.pc == 0x08A50454u) goto L_08A50454;
    return;
L_08A50454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (15820u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[4] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1000)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(868)));
    ctx.gpr[5] = (16025u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(848));
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(864)));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]) ^ 0x80000000u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A504ACu);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 304u, 0x08A4D5C0u>(ctx, &aot_mem) && ctx.pc == 0x08A504ACu) goto L_08A504AC;
    return;
L_08A504AC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A504BCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 298u, 0x08A4D560u>(ctx, &aot_mem) && ctx.pc == 0x08A504BCu) goto L_08A504BC;
    return;
L_08A504BC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A504C8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x08A504C8u) goto L_08A504C8;
    return;
L_08A504C8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A504D8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 298u, 0x08A4D560u>(ctx, &aot_mem) && ctx.pc == 0x08A504D8u) goto L_08A504D8;
    return;
L_08A504D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A504E4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 440u, 0x08AF9F60u>(ctx, &aot_mem) && ctx.pc == 0x08A504E4u) goto L_08A504E4;
    return;
L_08A504E4:
    ctx.gpr[31] = (0x08A504ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 418u, 0x08AF9DE0u>(ctx, &aot_mem) && ctx.pc == 0x08A504ECu) goto L_08A504EC;
    return;
L_08A504EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A50598;
      }
      goto L_08A504F4;
    }
L_08A504F4:
    ctx.gpr[31] = (0x08A504FCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A504FCu) goto L_08A504FC;
    return;
L_08A504FC:
    ctx.gpr[31] = (0x08A50504u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1075u, 0x08A97EECu>(ctx, &aot_mem) && ctx.pc == 0x08A50504u) goto L_08A50504;
    return;
L_08A50504:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50598;
      }
      goto L_08A5050C;
    }
L_08A5050C:
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A50518u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 350u, 0x08AF9904u>(ctx, &aot_mem) && ctx.pc == 0x08A50518u) goto L_08A50518;
    return;
L_08A50518:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A50524u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 295u, 0x08A4D514u>(ctx, &aot_mem) && ctx.pc == 0x08A50524u) goto L_08A50524;
    return;
L_08A50524:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A50598;
      }
      goto L_08A5053C;
    }
L_08A5053C:
    ctx.gpr[31] = (0x08A50544u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(880));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 347u, 0x08AF98D4u>(ctx, &aot_mem) && ctx.pc == 0x08A50544u) goto L_08A50544;
    return;
L_08A50544:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    ctx.gpr[4] = (48588u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1000)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A5057Cu);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 350u, 0x08AF9904u>(ctx, &aot_mem) && ctx.pc == 0x08A5057Cu) goto L_08A5057C;
    return;
L_08A5057C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A5058Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 298u, 0x08A4D560u>(ctx, &aot_mem) && ctx.pc == 0x08A5058Cu) goto L_08A5058C;
    return;
L_08A5058C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A50598u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 440u, 0x08AF9F60u>(ctx, &aot_mem) && ctx.pc == 0x08A50598u) goto L_08A50598;
    return;
L_08A50598:
    ctx.gpr[31] = (0x08A505A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x08A505A0u) goto L_08A505A0;
    return;
L_08A505A0:
    ctx.gpr[4] = (17645u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[4] = (48163u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A505DCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 337u, 0x08AF9854u>(ctx, &aot_mem) && ctx.pc == 0x08A505DCu) goto L_08A505DC;
    return;
L_08A505DC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A505E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x08A505E8u) goto L_08A505E8;
    return;
L_08A505E8:
    ctx.gpr[4] = (50413u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A5061Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF98A0u>(ctx, &aot_mem) && ctx.pc == 0x08A5061Cu) goto L_08A5061C;
    return;
L_08A5061C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A50628u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50628u) goto L_08A50628;
    return;
L_08A50628:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(116));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A50648u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 337u, 0x08AF9854u>(ctx, &aot_mem) && ctx.pc == 0x08A50648u) goto L_08A50648;
    return;
L_08A50648:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A50654u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50654u) goto L_08A50654;
    return;
L_08A50654:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A50670u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF98A0u>(ctx, &aot_mem) && ctx.pc == 0x08A50670u) goto L_08A50670;
    return;
L_08A50670:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(948))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A50698;
      }
      goto L_08A50680;
    }
L_08A50680:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A50698;
      }
      goto L_08A50688;
    }
L_08A50688:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A50698;
      }
      goto L_08A50690;
    }
L_08A50690:
    ctx.gpr[31] = (0x08A50698u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A53F24;
L_08A50698:
    ctx.gpr[31] = (0x08A506A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 358u, 0x08AF995Cu>(ctx, &aot_mem) && ctx.pc == 0x08A506A0u) goto L_08A506A0;
    return;
L_08A506A0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A506C4;
      }
      goto L_08A506AC;
    }
L_08A506AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(972)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1000)));
        goto L_08A5083C;
    }
    goto L_08A506C4;
L_08A506C4:
    if (ctx.gpr[18] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1000)));
        goto L_08A5083C;
    }
    goto L_08A506CC;
L_08A506CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(944)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(912));
    ctx.gpr[31] = (0x08A506DCu);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 347u, 0x08AF98D4u>(ctx, &aot_mem) && ctx.pc == 0x08A506DCu) goto L_08A506DC;
    return;
L_08A506DC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A506E8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 394u, 0x08AF9BECu>(ctx, &aot_mem) && ctx.pc == 0x08A506E8u) goto L_08A506E8;
    return;
L_08A506E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(944)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A506F8u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 347u, 0x08AF98D4u>(ctx, &aot_mem) && ctx.pc == 0x08A506F8u) goto L_08A506F8;
    return;
L_08A506F8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A50704u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 394u, 0x08AF9BECu>(ctx, &aot_mem) && ctx.pc == 0x08A50704u) goto L_08A50704;
    return;
L_08A50704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(944)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A50714u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 347u, 0x08AF98D4u>(ctx, &aot_mem) && ctx.pc == 0x08A50714u) goto L_08A50714;
    return;
L_08A50714:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08A50720u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 394u, 0x08AF9BECu>(ctx, &aot_mem) && ctx.pc == 0x08A50720u) goto L_08A50720;
    return;
L_08A50720:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A50734u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 304u, 0x08A4D5C0u>(ctx, &aot_mem) && ctx.pc == 0x08A50734u) goto L_08A50734;
    return;
L_08A50734:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A5074Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 294u, 0x08A4D4F4u>(ctx, &aot_mem) && ctx.pc == 0x08A5074Cu) goto L_08A5074C;
    return;
L_08A5074C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A50758u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 308u, 0x08A4D618u>(ctx, &aot_mem) && ctx.pc == 0x08A50758u) goto L_08A50758;
    return;
L_08A50758:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(912)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[14] / ctx.fpr[13];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(916)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(136)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(920)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(912), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A507C0u);
    ctx.fpr[20] = ctx.fpr[14] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 293u, 0x08A4D4D4u>(ctx, &aot_mem) && ctx.pc == 0x08A507C0u) goto L_08A507C0;
    return;
L_08A507C0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A507CCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 308u, 0x08A4D618u>(ctx, &aot_mem) && ctx.pc == 0x08A507CCu) goto L_08A507CC;
    return;
L_08A507CC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A507DCu);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF990Cu>(ctx, &aot_mem) && ctx.pc == 0x08A507DCu) goto L_08A507DC;
    return;
L_08A507DC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A507ECu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 298u, 0x08A4D560u>(ctx, &aot_mem) && ctx.pc == 0x08A507ECu) goto L_08A507EC;
    return;
L_08A507EC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A507F8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 308u, 0x08A4D618u>(ctx, &aot_mem) && ctx.pc == 0x08A507F8u) goto L_08A507F8;
    return;
L_08A507F8:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(928));
    ctx.gpr[31] = (0x08A50804u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 350u, 0x08AF9904u>(ctx, &aot_mem) && ctx.pc == 0x08A50804u) goto L_08A50804;
    return;
L_08A50804:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(240));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A50818u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 293u, 0x08A4D4D4u>(ctx, &aot_mem) && ctx.pc == 0x08A50818u) goto L_08A50818;
    return;
L_08A50818:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A50828u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 296u, 0x08A4D530u>(ctx, &aot_mem) && ctx.pc == 0x08A50828u) goto L_08A50828;
    return;
L_08A50828:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A50838u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AF9F84u>(ctx, &aot_mem) && ctx.pc == 0x08A50838u) goto L_08A50838;
    return;
L_08A50838:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1000)));
    goto L_08A5083C;
L_08A5083C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1024)));
    ctx.gpr[4] = (17948u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1028), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A50A34;
      }
      goto L_08A50864;
    }
L_08A50864:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(948))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50A34;
      }
      goto L_08A50874;
    }
L_08A50874:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A50A34;
      }
      goto L_08A5088C;
    }
L_08A5088C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1028))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(944)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (17224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A508E8;
      }
      goto L_08A508BC;
    }
L_08A508BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1028))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (0u | 24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(944)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[31] = (0x08A508E8u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x08A508E8u) goto L_08A508E8;
    return;
L_08A508E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1028))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 201 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A50A34;
      }
      goto L_08A508F8;
    }
L_08A508F8:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08A50904u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 307u, 0x08A4D600u>(ctx, &aot_mem) && ctx.pc == 0x08A50904u) goto L_08A50904;
    return;
L_08A50904:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1028))))));
    ctx.gpr[5] = (14979u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[5] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A50934u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 304u, 0x08A4D5C0u>(ctx, &aot_mem) && ctx.pc == 0x08A50934u) goto L_08A50934;
    return;
L_08A50934:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(984)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(156)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5096C;
      }
      goto L_08A50958;
    }
L_08A50958:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(156)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(984), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A5096C;
L_08A5096C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(984)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1028))))));
        goto L_08A50990;
    }
    goto L_08A50984;
L_08A50984:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(984), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1028))))));
    goto L_08A50990;
L_08A50990:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (48163u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(160)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(944));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(960));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A509C8u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 350u, 0x08AF9904u>(ctx, &aot_mem) && ctx.pc == 0x08A509C8u) goto L_08A509C8;
    return;
L_08A509C8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A509D8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 298u, 0x08A4D560u>(ctx, &aot_mem) && ctx.pc == 0x08A509D8u) goto L_08A509D8;
    return;
L_08A509D8:
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A509E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 350u, 0x08AF9904u>(ctx, &aot_mem) && ctx.pc == 0x08A509E4u) goto L_08A509E4;
    return;
L_08A509E4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A509F0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 295u, 0x08A4D514u>(ctx, &aot_mem) && ctx.pc == 0x08A509F0u) goto L_08A509F0;
    return;
L_08A509F0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A50A00u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50A00u) goto L_08A50A00;
    return;
L_08A50A00:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A50A0Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50A0Cu) goto L_08A50A0C;
    return;
L_08A50A0C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[31] = (0x08A50A18u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 309u, 0x08A4D628u>(ctx, &aot_mem) && ctx.pc == 0x08A50A18u) goto L_08A50A18;
    return;
L_08A50A18:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A50A24u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 440u, 0x08AF9F60u>(ctx, &aot_mem) && ctx.pc == 0x08A50A24u) goto L_08A50A24;
    return;
L_08A50A24:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A50A34u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AF9F84u>(ctx, &aot_mem) && ctx.pc == 0x08A50A34u) goto L_08A50A34;
    return;
L_08A50A34:
    ctx.gpr[31] = (0x08A50A3Cu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 306u, 0x08A4D5E4u>(ctx, &aot_mem) && ctx.pc == 0x08A50A3Cu) goto L_08A50A3C;
    return;
L_08A50A3C:
    ctx.gpr[4] = (15692u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A51CE4;
      }
      goto L_08A50A5C;
    }
L_08A50A5C:
    ctx.gpr[31] = (0x08A50A64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF990Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50A64u) goto L_08A50A64;
    return;
L_08A50A64:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A51CE4;
      }
      goto L_08A50A7C;
    }
L_08A50A7C:
    ctx.gpr[31] = (0x08A50A84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 126u, 0x088ED0BCu>(ctx, &aot_mem) && ctx.pc == 0x08A50A84u) goto L_08A50A84;
    return;
L_08A50A84:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A51CE4;
      }
      goto L_08A50A8C;
    }
L_08A50A8C:
    ctx.gpr[31] = (0x08A50A94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 746u, 0x08A2F818u>(ctx, &aot_mem) && ctx.pc == 0x08A50A94u) goto L_08A50A94;
    return;
L_08A50A94:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51CE4;
      }
      goto L_08A50A9C;
    }
L_08A50A9C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A50ACC;
      }
      goto L_08A50AAC;
    }
L_08A50AAC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A51CE4;
      }
      goto L_08A50ABC;
    }
L_08A50ABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A51CE4;
      }
      goto L_08A50ACC;
    }
L_08A50ACC:
    ctx.gpr[31] = (0x08A50AD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 358u, 0x08AF995Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50AD4u) goto L_08A50AD4;
    return;
L_08A50AD4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -973 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 195u);
      if (branch_taken) {
          goto L_08A50C24;
      }
      goto L_08A50AE4;
    }
L_08A50AE4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -991 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(991));
      if (branch_taken) {
          goto L_08A50D60;
      }
      goto L_08A50AF0;
    }
L_08A50AF0:
    ctx.gpr[31] = (0x08A50AF8u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 310u, 0x08A4D644u>(ctx, &aot_mem) && ctx.pc == 0x08A50AF8u) goto L_08A50AF8;
    return;
L_08A50AF8:
    ctx.gpr[31] = (0x08A50B00u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 406u, 0x08AF9CDCu>(ctx, &aot_mem) && ctx.pc == 0x08A50B00u) goto L_08A50B00;
    return;
L_08A50B00:
    ctx.gpr[4] = (16230u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[6] = (48896u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A50B34u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 298u, 0x08A4D560u>(ctx, &aot_mem) && ctx.pc == 0x08A50B34u) goto L_08A50B34;
    return;
L_08A50B34:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A50B40u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 308u, 0x08A4D618u>(ctx, &aot_mem) && ctx.pc == 0x08A50B40u) goto L_08A50B40;
    return;
L_08A50B40:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x08A50B64u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 349u, 0x08AF98FCu>(ctx, &aot_mem) && ctx.pc == 0x08A50B64u) goto L_08A50B64;
    return;
L_08A50B64:
    ctx.gpr[5] = (16051u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A50B7Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50B7Cu) goto L_08A50B7C;
    return;
L_08A50B7C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A50B8Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50B8Cu) goto L_08A50B8C;
    return;
L_08A50B8C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A50B98u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50B98u) goto L_08A50B98;
    return;
L_08A50B98:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[31] = (0x08A50BA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50BA4u) goto L_08A50BA4;
    return;
L_08A50BA4:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(1008));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A50BB4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 296u, 0x08A4D530u>(ctx, &aot_mem) && ctx.pc == 0x08A50BB4u) goto L_08A50BB4;
    return;
L_08A50BB4:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.gpr[31] = (0x08A50BC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 349u, 0x08AF98FCu>(ctx, &aot_mem) && ctx.pc == 0x08A50BC0u) goto L_08A50BC0;
    return;
L_08A50BC0:
    ctx.gpr[6] = (16128u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A50BD4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50BD4u) goto L_08A50BD4;
    return;
L_08A50BD4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A50BE4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 296u, 0x08A4D530u>(ctx, &aot_mem) && ctx.pc == 0x08A50BE4u) goto L_08A50BE4;
    return;
L_08A50BE4:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    ctx.gpr[31] = (0x08A50BF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 350u, 0x08AF9904u>(ctx, &aot_mem) && ctx.pc == 0x08A50BF0u) goto L_08A50BF0;
    return;
L_08A50BF0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A50C00u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 298u, 0x08A4D560u>(ctx, &aot_mem) && ctx.pc == 0x08A50C00u) goto L_08A50C00;
    return;
L_08A50C00:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A50C10u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 296u, 0x08A4D530u>(ctx, &aot_mem) && ctx.pc == 0x08A50C10u) goto L_08A50C10;
    return;
L_08A50C10:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[31] = (0x08A50C1Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 308u, 0x08A4D618u>(ctx, &aot_mem) && ctx.pc == 0x08A50C1Cu) goto L_08A50C1C;
    return;
L_08A50C1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51250;
      }
      goto L_08A50C24;
    }
L_08A50C24:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A50AF0;
      }
      goto L_08A50C2C;
    }
L_08A50C2C:
    ctx.gpr[31] = (0x08A50C34u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 310u, 0x08A4D644u>(ctx, &aot_mem) && ctx.pc == 0x08A50C34u) goto L_08A50C34;
    return;
L_08A50C34:
    ctx.gpr[31] = (0x08A50C3Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 406u, 0x08AF9CDCu>(ctx, &aot_mem) && ctx.pc == 0x08A50C3Cu) goto L_08A50C3C;
    return;
L_08A50C3C:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[6] = (48896u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A50C6Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 298u, 0x08A4D560u>(ctx, &aot_mem) && ctx.pc == 0x08A50C6Cu) goto L_08A50C6C;
    return;
L_08A50C6C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A50C78u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 308u, 0x08A4D618u>(ctx, &aot_mem) && ctx.pc == 0x08A50C78u) goto L_08A50C78;
    return;
L_08A50C78:
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x08A50CA0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 349u, 0x08AF98FCu>(ctx, &aot_mem) && ctx.pc == 0x08A50CA0u) goto L_08A50CA0;
    return;
L_08A50CA0:
    ctx.gpr[6] = (16128u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A50CB4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50CB4u) goto L_08A50CB4;
    return;
L_08A50CB4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A50CC4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50CC4u) goto L_08A50CC4;
    return;
L_08A50CC4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A50CD0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50CD0u) goto L_08A50CD0;
    return;
L_08A50CD0:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[31] = (0x08A50CDCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50CDCu) goto L_08A50CDC;
    return;
L_08A50CDC:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(1008));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A50CECu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 296u, 0x08A4D530u>(ctx, &aot_mem) && ctx.pc == 0x08A50CECu) goto L_08A50CEC;
    return;
L_08A50CEC:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.gpr[31] = (0x08A50CF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 349u, 0x08AF98FCu>(ctx, &aot_mem) && ctx.pc == 0x08A50CF8u) goto L_08A50CF8;
    return;
L_08A50CF8:
    ctx.gpr[5] = (16294u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A50D10u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50D10u) goto L_08A50D10;
    return;
L_08A50D10:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A50D20u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 296u, 0x08A4D530u>(ctx, &aot_mem) && ctx.pc == 0x08A50D20u) goto L_08A50D20;
    return;
L_08A50D20:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    ctx.gpr[31] = (0x08A50D2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 350u, 0x08AF9904u>(ctx, &aot_mem) && ctx.pc == 0x08A50D2Cu) goto L_08A50D2C;
    return;
L_08A50D2C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A50D3Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 298u, 0x08A4D560u>(ctx, &aot_mem) && ctx.pc == 0x08A50D3Cu) goto L_08A50D3C;
    return;
L_08A50D3C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A50D4Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 296u, 0x08A4D530u>(ctx, &aot_mem) && ctx.pc == 0x08A50D4Cu) goto L_08A50D4C;
    return;
L_08A50D4C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[31] = (0x08A50D58u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 308u, 0x08A4D618u>(ctx, &aot_mem) && ctx.pc == 0x08A50D58u) goto L_08A50D58;
    return;
L_08A50D58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51250;
      }
      goto L_08A50D60;
    }
L_08A50D60:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(6776)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A50D78:
    ctx.gpr[31] = (0x08A50D80u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 310u, 0x08A4D644u>(ctx, &aot_mem) && ctx.pc == 0x08A50D80u) goto L_08A50D80;
    return;
L_08A50D80:
    ctx.gpr[31] = (0x08A50D88u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 406u, 0x08AF9CDCu>(ctx, &aot_mem) && ctx.pc == 0x08A50D88u) goto L_08A50D88;
    return;
L_08A50D88:
    ctx.gpr[4] = (16230u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    ctx.gpr[4] = (16000u << 16u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[4] = (16051u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A50DC8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 298u, 0x08A4D560u>(ctx, &aot_mem) && ctx.pc == 0x08A50DC8u) goto L_08A50DC8;
    return;
L_08A50DC8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A50DD4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 308u, 0x08A4D618u>(ctx, &aot_mem) && ctx.pc == 0x08A50DD4u) goto L_08A50DD4;
    return;
L_08A50DD4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A50DECu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 349u, 0x08AF98FCu>(ctx, &aot_mem) && ctx.pc == 0x08A50DECu) goto L_08A50DEC;
    return;
L_08A50DEC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A50DFCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50DFCu) goto L_08A50DFC;
    return;
L_08A50DFC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A50E0Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50E0Cu) goto L_08A50E0C;
    return;
L_08A50E0C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A50E18u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50E18u) goto L_08A50E18;
    return;
L_08A50E18:
    ctx.gpr[31] = (0x08A50E20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50E20u) goto L_08A50E20;
    return;
L_08A50E20:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[31] = (0x08A50E30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 349u, 0x08AF98FCu>(ctx, &aot_mem) && ctx.pc == 0x08A50E30u) goto L_08A50E30;
    return;
L_08A50E30:
    ctx.gpr[5] = (16153u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A50E48u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50E48u) goto L_08A50E48;
    return;
L_08A50E48:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A50E58u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 296u, 0x08A4D530u>(ctx, &aot_mem) && ctx.pc == 0x08A50E58u) goto L_08A50E58;
    return;
L_08A50E58:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    ctx.gpr[31] = (0x08A50E64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 350u, 0x08AF9904u>(ctx, &aot_mem) && ctx.pc == 0x08A50E64u) goto L_08A50E64;
    return;
L_08A50E64:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A50E74u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 298u, 0x08A4D560u>(ctx, &aot_mem) && ctx.pc == 0x08A50E74u) goto L_08A50E74;
    return;
L_08A50E74:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A50E84u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 296u, 0x08A4D530u>(ctx, &aot_mem) && ctx.pc == 0x08A50E84u) goto L_08A50E84;
    return;
L_08A50E84:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[31] = (0x08A50E90u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 308u, 0x08A4D618u>(ctx, &aot_mem) && ctx.pc == 0x08A50E90u) goto L_08A50E90;
    return;
L_08A50E90:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1016)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1016), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A51250;
      }
      goto L_08A50EA8;
    }
L_08A50EA8:
    ctx.gpr[31] = (0x08A50EB0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 310u, 0x08A4D644u>(ctx, &aot_mem) && ctx.pc == 0x08A50EB0u) goto L_08A50EB0;
    return;
L_08A50EB0:
    ctx.gpr[31] = (0x08A50EB8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 406u, 0x08AF9CDCu>(ctx, &aot_mem) && ctx.pc == 0x08A50EB8u) goto L_08A50EB8;
    return;
L_08A50EB8:
    ctx.gpr[4] = (16204u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    ctx.gpr[4] = (16000u << 16u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[4] = (15912u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A50EF8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 298u, 0x08A4D560u>(ctx, &aot_mem) && ctx.pc == 0x08A50EF8u) goto L_08A50EF8;
    return;
L_08A50EF8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A50F04u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 308u, 0x08A4D618u>(ctx, &aot_mem) && ctx.pc == 0x08A50F04u) goto L_08A50F04;
    return;
L_08A50F04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A50F1Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 349u, 0x08AF98FCu>(ctx, &aot_mem) && ctx.pc == 0x08A50F1Cu) goto L_08A50F1C;
    return;
L_08A50F1C:
    ctx.gpr[5] = (15897u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A50F34u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50F34u) goto L_08A50F34;
    return;
L_08A50F34:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A50F44u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50F44u) goto L_08A50F44;
    return;
L_08A50F44:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A50F50u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50F50u) goto L_08A50F50;
    return;
L_08A50F50:
    ctx.gpr[31] = (0x08A50F58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50F58u) goto L_08A50F58;
    return;
L_08A50F58:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.gpr[31] = (0x08A50F68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 349u, 0x08AF98FCu>(ctx, &aot_mem) && ctx.pc == 0x08A50F68u) goto L_08A50F68;
    return;
L_08A50F68:
    ctx.gpr[5] = (16166u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A50F80u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50F80u) goto L_08A50F80;
    return;
L_08A50F80:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A50F90u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 296u, 0x08A4D530u>(ctx, &aot_mem) && ctx.pc == 0x08A50F90u) goto L_08A50F90;
    return;
L_08A50F90:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    ctx.gpr[31] = (0x08A50F9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 350u, 0x08AF9904u>(ctx, &aot_mem) && ctx.pc == 0x08A50F9Cu) goto L_08A50F9C;
    return;
L_08A50F9C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A50FACu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 298u, 0x08A4D560u>(ctx, &aot_mem) && ctx.pc == 0x08A50FACu) goto L_08A50FAC;
    return;
L_08A50FAC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A50FBCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 296u, 0x08A4D530u>(ctx, &aot_mem) && ctx.pc == 0x08A50FBCu) goto L_08A50FBC;
    return;
L_08A50FBC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[31] = (0x08A50FC8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 308u, 0x08A4D618u>(ctx, &aot_mem) && ctx.pc == 0x08A50FC8u) goto L_08A50FC8;
    return;
L_08A50FC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1016)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1016), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A51250;
      }
      goto L_08A50FE0;
    }
L_08A50FE0:
    ctx.gpr[31] = (0x08A50FE8u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 310u, 0x08A4D644u>(ctx, &aot_mem) && ctx.pc == 0x08A50FE8u) goto L_08A50FE8;
    return;
L_08A50FE8:
    ctx.gpr[31] = (0x08A50FF0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 406u, 0x08AF9CDCu>(ctx, &aot_mem) && ctx.pc == 0x08A50FF0u) goto L_08A50FF0;
    return;
L_08A50FF0:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[6] = (48640u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A51020u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 298u, 0x08A4D560u>(ctx, &aot_mem) && ctx.pc == 0x08A51020u) goto L_08A51020;
    return;
L_08A51020:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A5102Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 308u, 0x08A4D618u>(ctx, &aot_mem) && ctx.pc == 0x08A5102Cu) goto L_08A5102C;
    return;
L_08A5102C:
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x08A51054u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 349u, 0x08AF98FCu>(ctx, &aot_mem) && ctx.pc == 0x08A51054u) goto L_08A51054;
    return;
L_08A51054:
    ctx.gpr[6] = (16000u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A51068u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51068u) goto L_08A51068;
    return;
L_08A51068:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A51078u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51078u) goto L_08A51078;
    return;
L_08A51078:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A51084u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51084u) goto L_08A51084;
    return;
L_08A51084:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.gpr[31] = (0x08A51090u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51090u) goto L_08A51090;
    return;
L_08A51090:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(1008));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A510A0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 296u, 0x08A4D530u>(ctx, &aot_mem) && ctx.pc == 0x08A510A0u) goto L_08A510A0;
    return;
L_08A510A0:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    ctx.gpr[31] = (0x08A510ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 349u, 0x08AF98FCu>(ctx, &aot_mem) && ctx.pc == 0x08A510ACu) goto L_08A510AC;
    return;
L_08A510AC:
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A510C4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A510C4u) goto L_08A510C4;
    return;
L_08A510C4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A510D4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 296u, 0x08A4D530u>(ctx, &aot_mem) && ctx.pc == 0x08A510D4u) goto L_08A510D4;
    return;
L_08A510D4:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    ctx.gpr[31] = (0x08A510E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 350u, 0x08AF9904u>(ctx, &aot_mem) && ctx.pc == 0x08A510E0u) goto L_08A510E0;
    return;
L_08A510E0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A510F0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 298u, 0x08A4D560u>(ctx, &aot_mem) && ctx.pc == 0x08A510F0u) goto L_08A510F0;
    return;
L_08A510F0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A51100u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 296u, 0x08A4D530u>(ctx, &aot_mem) && ctx.pc == 0x08A51100u) goto L_08A51100;
    return;
L_08A51100:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[31] = (0x08A5110Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 308u, 0x08A4D618u>(ctx, &aot_mem) && ctx.pc == 0x08A5110Cu) goto L_08A5110C;
    return;
L_08A5110C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1016)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1016), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A51250;
      }
      goto L_08A5111C;
    }
L_08A5111C:
    ctx.gpr[31] = (0x08A51124u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 310u, 0x08A4D644u>(ctx, &aot_mem) && ctx.pc == 0x08A51124u) goto L_08A51124;
    return;
L_08A51124:
    ctx.gpr[31] = (0x08A5112Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 406u, 0x08AF9CDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5112Cu) goto L_08A5112C;
    return;
L_08A5112C:
    ctx.gpr[4] = (16230u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[6] = (48896u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A51160u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 298u, 0x08A4D560u>(ctx, &aot_mem) && ctx.pc == 0x08A51160u) goto L_08A51160;
    return;
L_08A51160:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A5116Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 308u, 0x08A4D618u>(ctx, &aot_mem) && ctx.pc == 0x08A5116Cu) goto L_08A5116C;
    return;
L_08A5116C:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x08A51190u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 349u, 0x08AF98FCu>(ctx, &aot_mem) && ctx.pc == 0x08A51190u) goto L_08A51190;
    return;
L_08A51190:
    ctx.gpr[5] = (16051u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A511A8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A511A8u) goto L_08A511A8;
    return;
L_08A511A8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A511B8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A511B8u) goto L_08A511B8;
    return;
L_08A511B8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A511C4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x08A511C4u) goto L_08A511C4;
    return;
L_08A511C4:
    ctx.gpr[31] = (0x08A511CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x08A511CCu) goto L_08A511CC;
    return;
L_08A511CC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[31] = (0x08A511DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 349u, 0x08AF98FCu>(ctx, &aot_mem) && ctx.pc == 0x08A511DCu) goto L_08A511DC;
    return;
L_08A511DC:
    ctx.gpr[5] = (16364u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A511F4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A511F4u) goto L_08A511F4;
    return;
L_08A511F4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A51204u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 296u, 0x08A4D530u>(ctx, &aot_mem) && ctx.pc == 0x08A51204u) goto L_08A51204;
    return;
L_08A51204:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.gpr[31] = (0x08A51210u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 350u, 0x08AF9904u>(ctx, &aot_mem) && ctx.pc == 0x08A51210u) goto L_08A51210;
    return;
L_08A51210:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A51220u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 298u, 0x08A4D560u>(ctx, &aot_mem) && ctx.pc == 0x08A51220u) goto L_08A51220;
    return;
L_08A51220:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A51230u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 296u, 0x08A4D530u>(ctx, &aot_mem) && ctx.pc == 0x08A51230u) goto L_08A51230;
    return;
L_08A51230:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[31] = (0x08A5123Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 308u, 0x08A4D618u>(ctx, &aot_mem) && ctx.pc == 0x08A5123Cu) goto L_08A5123C;
    return;
L_08A5123C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1016)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1016), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A51250;
L_08A51250:
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A51270;
      }
      goto L_08A51268;
    }
L_08A51268:
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A51270;
L_08A51270:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1028))))));
        goto L_08A51294;
    }
    goto L_08A51280;
L_08A51280:
    ctx.gpr[5] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[31] = (0x08A51290u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 309u, 0x08A4D628u>(ctx, &aot_mem) && ctx.pc == 0x08A51290u) goto L_08A51290;
    return;
L_08A51290:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1028))))));
    goto L_08A51294;
L_08A51294:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (14749u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18770u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.fpr[17] = ctx.fpr[14] + ctx.fpr[17];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1008)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1012)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1016)));
    ctx.gpr[31] = (0x08A512D0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 292u, 0x0890DE48u>(ctx, &aot_mem) && ctx.pc == 0x08A512D0u) goto L_08A512D0;
    return;
L_08A512D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1016)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A51458;
      }
      goto L_08A512F4;
    }
L_08A512F4:
    ctx.gpr[31] = (0x08A512FCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 523u, 0x089270A4u>(ctx, &aot_mem) && ctx.pc == 0x08A512FCu) goto L_08A512FC;
    return;
L_08A512FC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (17036u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_08A51458;
      }
      goto L_08A51328;
    }
L_08A51328:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[6] = (16192u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1016), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A5135Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5135Cu) goto L_08A5135C;
    return;
L_08A5135C:
    ctx.fpr[28] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[26] = ctx.fpr[24] + ctx.fpr[26];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A51374u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 416u, 0x08A4DF6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51374u) goto L_08A51374;
    return;
L_08A51374:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (17076u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08A5138Cu);
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 416u, 0x08A4DF6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5138Cu) goto L_08A5138C;
    return;
L_08A5138C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    ctx.gpr[21] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-9980)));
    ctx.gpr[22] = (2229u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-9976)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[11] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A513E0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 276u, 0x089999ACu>(ctx, &aot_mem) && ctx.pc == 0x08A513E0u) goto L_08A513E0;
    return;
L_08A513E0:
    ctx.gpr[4] = (16076u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[31] = (0x08A513F4u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 416u, 0x08A4DF6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A513F4u) goto L_08A513F4;
    return;
L_08A513F4:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (16948u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08A5140Cu);
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 416u, 0x08A4DF6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5140Cu) goto L_08A5140C;
    return;
L_08A5140C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-9980)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-9976)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u | 45u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.fpr[14] = ctx.fpr[16] + ctx.fpr[12];
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A51458u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 276u, 0x089999ACu>(ctx, &aot_mem) && ctx.pc == 0x08A51458u) goto L_08A51458;
    return;
L_08A51458:
    ctx.gpr[31] = (0x08A51460u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 358u, 0x08AF995Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51460u) goto L_08A51460;
    return;
L_08A51460:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -973 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 195u);
      if (branch_taken) {
          goto L_08A51588;
      }
      goto L_08A51470;
    }
L_08A51470:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -991 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(991));
      if (branch_taken) {
          goto L_08A516A0;
      }
      goto L_08A5147C;
    }
L_08A5147C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1184));
    ctx.gpr[6] = (48896u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A51498u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 298u, 0x08A4D560u>(ctx, &aot_mem) && ctx.pc == 0x08A51498u) goto L_08A51498;
    return;
L_08A51498:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A514A4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 308u, 0x08A4D618u>(ctx, &aot_mem) && ctx.pc == 0x08A514A4u) goto L_08A514A4;
    return;
L_08A514A4:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1168));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x08A514C8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 349u, 0x08AF98FCu>(ctx, &aot_mem) && ctx.pc == 0x08A514C8u) goto L_08A514C8;
    return;
L_08A514C8:
    ctx.gpr[5] = (16051u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A514E0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A514E0u) goto L_08A514E0;
    return;
L_08A514E0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A514F0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A514F0u) goto L_08A514F0;
    return;
L_08A514F0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A514FCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x08927554u>(ctx, &aot_mem) && ctx.pc == 0x08A514FCu) goto L_08A514FC;
    return;
L_08A514FC:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1152));
    ctx.gpr[31] = (0x08A51508u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51508u) goto L_08A51508;
    return;
L_08A51508:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(1008));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A51518u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 296u, 0x08A4D530u>(ctx, &aot_mem) && ctx.pc == 0x08A51518u) goto L_08A51518;
    return;
L_08A51518:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1136));
    ctx.gpr[31] = (0x08A51524u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 349u, 0x08AF98FCu>(ctx, &aot_mem) && ctx.pc == 0x08A51524u) goto L_08A51524;
    return;
L_08A51524:
    ctx.gpr[6] = (16128u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A51538u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51538u) goto L_08A51538;
    return;
L_08A51538:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A51548u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 297u, 0x08A4D548u>(ctx, &aot_mem) && ctx.pc == 0x08A51548u) goto L_08A51548;
    return;
L_08A51548:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    ctx.gpr[31] = (0x08A51554u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 350u, 0x08AF9904u>(ctx, &aot_mem) && ctx.pc == 0x08A51554u) goto L_08A51554;
    return;
L_08A51554:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A51564u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 298u, 0x08A4D560u>(ctx, &aot_mem) && ctx.pc == 0x08A51564u) goto L_08A51564;
    return;
L_08A51564:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A51574u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 296u, 0x08A4D530u>(ctx, &aot_mem) && ctx.pc == 0x08A51574u) goto L_08A51574;
    return;
L_08A51574:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[31] = (0x08A51580u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 308u, 0x08A4D618u>(ctx, &aot_mem) && ctx.pc == 0x08A51580u) goto L_08A51580;
    return;
L_08A51580:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51AFC;
      }
      goto L_08A51588;
    }
L_08A51588:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5147C;
      }
      goto L_08A51590;
    }
L_08A51590:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1184));
    ctx.gpr[6] = (48896u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A515ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 298u, 0x08A4D560u>(ctx, &aot_mem) && ctx.pc == 0x08A515ACu) goto L_08A515AC;
    return;
L_08A515AC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A515B8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 308u, 0x08A4D618u>(ctx, &aot_mem) && ctx.pc == 0x08A515B8u) goto L_08A515B8;
    return;
L_08A515B8:
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1168));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x08A515E0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 349u, 0x08AF98FCu>(ctx, &aot_mem) && ctx.pc == 0x08A515E0u) goto L_08A515E0;
    return;
L_08A515E0:
    ctx.gpr[6] = (16128u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A515F4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A515F4u) goto L_08A515F4;
    return;
L_08A515F4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A51604u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51604u) goto L_08A51604;
    return;
L_08A51604:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A51610u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x08927554u>(ctx, &aot_mem) && ctx.pc == 0x08A51610u) goto L_08A51610;
    return;
L_08A51610:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1152));
    ctx.gpr[31] = (0x08A5161Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5161Cu) goto L_08A5161C;
    return;
L_08A5161C:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(1008));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A5162Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 296u, 0x08A4D530u>(ctx, &aot_mem) && ctx.pc == 0x08A5162Cu) goto L_08A5162C;
    return;
L_08A5162C:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1136));
    ctx.gpr[31] = (0x08A51638u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 349u, 0x08AF98FCu>(ctx, &aot_mem) && ctx.pc == 0x08A51638u) goto L_08A51638;
    return;
L_08A51638:
    ctx.gpr[5] = (16294u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A51650u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51650u) goto L_08A51650;
    return;
L_08A51650:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A51660u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 297u, 0x08A4D548u>(ctx, &aot_mem) && ctx.pc == 0x08A51660u) goto L_08A51660;
    return;
L_08A51660:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    ctx.gpr[31] = (0x08A5166Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 350u, 0x08AF9904u>(ctx, &aot_mem) && ctx.pc == 0x08A5166Cu) goto L_08A5166C;
    return;
L_08A5166C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A5167Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 298u, 0x08A4D560u>(ctx, &aot_mem) && ctx.pc == 0x08A5167Cu) goto L_08A5167C;
    return;
L_08A5167C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A5168Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 296u, 0x08A4D530u>(ctx, &aot_mem) && ctx.pc == 0x08A5168Cu) goto L_08A5168C;
    return;
L_08A5168C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[31] = (0x08A51698u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 308u, 0x08A4D618u>(ctx, &aot_mem) && ctx.pc == 0x08A51698u) goto L_08A51698;
    return;
L_08A51698:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51AFC;
      }
      goto L_08A516A0;
    }
L_08A516A0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(6848)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A516B8:
    ctx.gpr[4] = (16051u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A516D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 298u, 0x08A4D560u>(ctx, &aot_mem) && ctx.pc == 0x08A516D8u) goto L_08A516D8;
    return;
L_08A516D8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A516E4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 308u, 0x08A4D618u>(ctx, &aot_mem) && ctx.pc == 0x08A516E4u) goto L_08A516E4;
    return;
L_08A516E4:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1136));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[31] = (0x08A51708u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 349u, 0x08AF98FCu>(ctx, &aot_mem) && ctx.pc == 0x08A51708u) goto L_08A51708;
    return;
L_08A51708:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A51718u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51718u) goto L_08A51718;
    return;
L_08A51718:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A51728u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51728u) goto L_08A51728;
    return;
L_08A51728:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A51734u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x08927554u>(ctx, &aot_mem) && ctx.pc == 0x08A51734u) goto L_08A51734;
    return;
L_08A51734:
    ctx.gpr[31] = (0x08A5173Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5173Cu) goto L_08A5173C;
    return;
L_08A5173C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1152));
    ctx.gpr[31] = (0x08A5174Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 349u, 0x08AF98FCu>(ctx, &aot_mem) && ctx.pc == 0x08A5174Cu) goto L_08A5174C;
    return;
L_08A5174C:
    ctx.gpr[5] = (16153u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A51764u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51764u) goto L_08A51764;
    return;
L_08A51764:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A51774u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 297u, 0x08A4D548u>(ctx, &aot_mem) && ctx.pc == 0x08A51774u) goto L_08A51774;
    return;
L_08A51774:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1168));
    ctx.gpr[31] = (0x08A51780u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 350u, 0x08AF9904u>(ctx, &aot_mem) && ctx.pc == 0x08A51780u) goto L_08A51780;
    return;
L_08A51780:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A51790u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 298u, 0x08A4D560u>(ctx, &aot_mem) && ctx.pc == 0x08A51790u) goto L_08A51790;
    return;
L_08A51790:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A517A0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 296u, 0x08A4D530u>(ctx, &aot_mem) && ctx.pc == 0x08A517A0u) goto L_08A517A0;
    return;
L_08A517A0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[31] = (0x08A517ACu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 308u, 0x08A4D618u>(ctx, &aot_mem) && ctx.pc == 0x08A517ACu) goto L_08A517AC;
    return;
L_08A517AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1016)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1016), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A51AFC;
      }
      goto L_08A517C4;
    }
L_08A517C4:
    ctx.gpr[4] = (15912u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1168));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A517E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 298u, 0x08A4D560u>(ctx, &aot_mem) && ctx.pc == 0x08A517E4u) goto L_08A517E4;
    return;
L_08A517E4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A517F0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 308u, 0x08A4D618u>(ctx, &aot_mem) && ctx.pc == 0x08A517F0u) goto L_08A517F0;
    return;
L_08A517F0:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1152));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x08A51814u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 349u, 0x08AF98FCu>(ctx, &aot_mem) && ctx.pc == 0x08A51814u) goto L_08A51814;
    return;
L_08A51814:
    ctx.gpr[5] = (15897u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A5182Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5182Cu) goto L_08A5182C;
    return;
L_08A5182C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5183Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5183Cu) goto L_08A5183C;
    return;
L_08A5183C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A51848u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x08927554u>(ctx, &aot_mem) && ctx.pc == 0x08A51848u) goto L_08A51848;
    return;
L_08A51848:
    ctx.gpr[31] = (0x08A51850u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51850u) goto L_08A51850;
    return;
L_08A51850:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1136));
    ctx.gpr[31] = (0x08A51860u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 349u, 0x08AF98FCu>(ctx, &aot_mem) && ctx.pc == 0x08A51860u) goto L_08A51860;
    return;
L_08A51860:
    ctx.gpr[5] = (16166u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A51878u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51878u) goto L_08A51878;
    return;
L_08A51878:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A51888u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 297u, 0x08A4D548u>(ctx, &aot_mem) && ctx.pc == 0x08A51888u) goto L_08A51888;
    return;
L_08A51888:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    ctx.gpr[31] = (0x08A51894u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 350u, 0x08AF9904u>(ctx, &aot_mem) && ctx.pc == 0x08A51894u) goto L_08A51894;
    return;
L_08A51894:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A518A4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 298u, 0x08A4D560u>(ctx, &aot_mem) && ctx.pc == 0x08A518A4u) goto L_08A518A4;
    return;
L_08A518A4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A518B4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 296u, 0x08A4D530u>(ctx, &aot_mem) && ctx.pc == 0x08A518B4u) goto L_08A518B4;
    return;
L_08A518B4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[31] = (0x08A518C0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 308u, 0x08A4D618u>(ctx, &aot_mem) && ctx.pc == 0x08A518C0u) goto L_08A518C0;
    return;
L_08A518C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1016)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1016), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A51AFC;
      }
      goto L_08A518D8;
    }
L_08A518D8:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1168));
    ctx.gpr[6] = (48640u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A518F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 298u, 0x08A4D560u>(ctx, &aot_mem) && ctx.pc == 0x08A518F4u) goto L_08A518F4;
    return;
L_08A518F4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A51900u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 308u, 0x08A4D618u>(ctx, &aot_mem) && ctx.pc == 0x08A51900u) goto L_08A51900;
    return;
L_08A51900:
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1152));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x08A51928u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 349u, 0x08AF98FCu>(ctx, &aot_mem) && ctx.pc == 0x08A51928u) goto L_08A51928;
    return;
L_08A51928:
    ctx.gpr[6] = (16000u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A5193Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5193Cu) goto L_08A5193C;
    return;
L_08A5193C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5194Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5194Cu) goto L_08A5194C;
    return;
L_08A5194C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A51958u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x08927554u>(ctx, &aot_mem) && ctx.pc == 0x08A51958u) goto L_08A51958;
    return;
L_08A51958:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1136));
    ctx.gpr[31] = (0x08A51964u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51964u) goto L_08A51964;
    return;
L_08A51964:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(1008));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A51974u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 296u, 0x08A4D530u>(ctx, &aot_mem) && ctx.pc == 0x08A51974u) goto L_08A51974;
    return;
L_08A51974:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    ctx.gpr[31] = (0x08A51980u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 349u, 0x08AF98FCu>(ctx, &aot_mem) && ctx.pc == 0x08A51980u) goto L_08A51980;
    return;
L_08A51980:
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A51998u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51998u) goto L_08A51998;
    return;
L_08A51998:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A519A8u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 297u, 0x08A4D548u>(ctx, &aot_mem) && ctx.pc == 0x08A519A8u) goto L_08A519A8;
    return;
L_08A519A8:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1184));
    ctx.gpr[31] = (0x08A519B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 350u, 0x08AF9904u>(ctx, &aot_mem) && ctx.pc == 0x08A519B4u) goto L_08A519B4;
    return;
L_08A519B4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A519C4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 298u, 0x08A4D560u>(ctx, &aot_mem) && ctx.pc == 0x08A519C4u) goto L_08A519C4;
    return;
L_08A519C4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A519D4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 296u, 0x08A4D530u>(ctx, &aot_mem) && ctx.pc == 0x08A519D4u) goto L_08A519D4;
    return;
L_08A519D4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[31] = (0x08A519E0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 308u, 0x08A4D618u>(ctx, &aot_mem) && ctx.pc == 0x08A519E0u) goto L_08A519E0;
    return;
L_08A519E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1016)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1016), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A51AFC;
      }
      goto L_08A519F0;
    }
L_08A519F0:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1184));
    ctx.gpr[6] = (48896u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A51A0Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 298u, 0x08A4D560u>(ctx, &aot_mem) && ctx.pc == 0x08A51A0Cu) goto L_08A51A0C;
    return;
L_08A51A0C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A51A18u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 308u, 0x08A4D618u>(ctx, &aot_mem) && ctx.pc == 0x08A51A18u) goto L_08A51A18;
    return;
L_08A51A18:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1168));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x08A51A3Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 349u, 0x08AF98FCu>(ctx, &aot_mem) && ctx.pc == 0x08A51A3Cu) goto L_08A51A3C;
    return;
L_08A51A3C:
    ctx.gpr[5] = (16051u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A51A54u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51A54u) goto L_08A51A54;
    return;
L_08A51A54:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A51A64u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51A64u) goto L_08A51A64;
    return;
L_08A51A64:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A51A70u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x08927554u>(ctx, &aot_mem) && ctx.pc == 0x08A51A70u) goto L_08A51A70;
    return;
L_08A51A70:
    ctx.gpr[31] = (0x08A51A78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51A78u) goto L_08A51A78;
    return;
L_08A51A78:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1152));
    ctx.gpr[31] = (0x08A51A88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 349u, 0x08AF98FCu>(ctx, &aot_mem) && ctx.pc == 0x08A51A88u) goto L_08A51A88;
    return;
L_08A51A88:
    ctx.gpr[5] = (16364u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A51AA0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51AA0u) goto L_08A51AA0;
    return;
L_08A51AA0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A51AB0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 297u, 0x08A4D548u>(ctx, &aot_mem) && ctx.pc == 0x08A51AB0u) goto L_08A51AB0;
    return;
L_08A51AB0:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1136));
    ctx.gpr[31] = (0x08A51ABCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 350u, 0x08AF9904u>(ctx, &aot_mem) && ctx.pc == 0x08A51ABCu) goto L_08A51ABC;
    return;
L_08A51ABC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A51ACCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 298u, 0x08A4D560u>(ctx, &aot_mem) && ctx.pc == 0x08A51ACCu) goto L_08A51ACC;
    return;
L_08A51ACC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A51ADCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 296u, 0x08A4D530u>(ctx, &aot_mem) && ctx.pc == 0x08A51ADCu) goto L_08A51ADC;
    return;
L_08A51ADC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[31] = (0x08A51AE8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 308u, 0x08A4D618u>(ctx, &aot_mem) && ctx.pc == 0x08A51AE8u) goto L_08A51AE8;
    return;
L_08A51AE8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1016)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1016), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A51AFC;
L_08A51AFC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1028))))));
        goto L_08A51B20;
    }
    goto L_08A51B0C;
L_08A51B0C:
    ctx.gpr[5] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[31] = (0x08A51B1Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 309u, 0x08A4D628u>(ctx, &aot_mem) && ctx.pc == 0x08A51B1Cu) goto L_08A51B1C;
    return;
L_08A51B1C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1028))))));
    goto L_08A51B20;
L_08A51B20:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (14749u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18770u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.fpr[17] = ctx.fpr[14] + ctx.fpr[17];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1008)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1012)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1016)));
    ctx.gpr[31] = (0x08A51B5Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 292u, 0x0890DE48u>(ctx, &aot_mem) && ctx.pc == 0x08A51B5Cu) goto L_08A51B5C;
    return;
L_08A51B5C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1016)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A51CE4;
      }
      goto L_08A51B80;
    }
L_08A51B80:
    ctx.gpr[31] = (0x08A51B88u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 523u, 0x089270A4u>(ctx, &aot_mem) && ctx.pc == 0x08A51B88u) goto L_08A51B88;
    return;
L_08A51B88:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (17036u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_08A51CE4;
      }
      goto L_08A51BB4;
    }
L_08A51BB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1200));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[6] = (16192u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1016), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A51BE8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 299u, 0x08A4D57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51BE8u) goto L_08A51BE8;
    return;
L_08A51BE8:
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[22] = ctx.fpr[24] + ctx.fpr[22];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A51C00u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 416u, 0x08A4DF6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51C00u) goto L_08A51C00;
    return;
L_08A51C00:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (17076u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08A51C18u);
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 416u, 0x08A4DF6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51C18u) goto L_08A51C18;
    return;
L_08A51C18:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    ctx.gpr[21] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-9980)));
    ctx.gpr[22] = (2229u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-9976)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[11] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A51C6Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 276u, 0x089999ACu>(ctx, &aot_mem) && ctx.pc == 0x08A51C6Cu) goto L_08A51C6C;
    return;
L_08A51C6C:
    ctx.gpr[4] = (16076u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[31] = (0x08A51C80u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 416u, 0x08A4DF6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51C80u) goto L_08A51C80;
    return;
L_08A51C80:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (16948u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08A51C98u);
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 416u, 0x08A4DF6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51C98u) goto L_08A51C98;
    return;
L_08A51C98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-9980)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-9976)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u | 45u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.fpr[14] = ctx.fpr[16] + ctx.fpr[12];
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A51CE4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 276u, 0x089999ACu>(ctx, &aot_mem) && ctx.pc == 0x08A51CE4u) goto L_08A51CE4;
    return;
L_08A51CE4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1024)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A51DA4;
      }
      goto L_08A51CFC;
    }
L_08A51CFC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1000)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A51DA4;
      }
      goto L_08A51D14;
    }
L_08A51D14:
    ctx.gpr[31] = (0x08A51D1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 358u, 0x08AF995Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51D1Cu) goto L_08A51D1C;
    return;
L_08A51D1C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A51DA4;
      }
      goto L_08A51D28;
    }
L_08A51D28:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1216));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[31] = (0x08A51D4Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 304u, 0x08A4D5C0u>(ctx, &aot_mem) && ctx.pc == 0x08A51D4Cu) goto L_08A51D4C;
    return;
L_08A51D4C:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1232));
    ctx.gpr[31] = (0x08A51D58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51D58u) goto L_08A51D58;
    return;
L_08A51D58:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A51D64u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 305u, 0x08A4D5D4u>(ctx, &aot_mem) && ctx.pc == 0x08A51D64u) goto L_08A51D64;
    return;
L_08A51D64:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1232)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1236)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1240)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.gpr[31] = (0x08A51D7Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 292u, 0x0890DE48u>(ctx, &aot_mem) && ctx.pc == 0x08A51D7Cu) goto L_08A51D7C;
    return;
L_08A51D7C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1240), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 65u);
    ctx.gpr[31] = (0x08A51DA4u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 618u, 0x089D2840u>(ctx, &aot_mem) && ctx.pc == 0x08A51DA4u) goto L_08A51DA4;
    return;
L_08A51DA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1000)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1024), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A51DD0;
      }
      goto L_08A51DB0;
    }
L_08A51DB0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(948))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(948), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A51DD0;
L_08A51DD0:
    ctx.gpr[31] = (0x08A51DD8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 358u, 0x08AF995Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51DD8u) goto L_08A51DD8;
    return;
L_08A51DD8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A51EBC;
      }
      goto L_08A51DE4;
    }
L_08A51DE4:
    ctx.gpr[31] = (0x08A51DECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 347u, 0x08AF98D4u>(ctx, &aot_mem) && ctx.pc == 0x08A51DECu) goto L_08A51DEC;
    return;
L_08A51DEC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A51EBC;
      }
      goto L_08A51E00;
    }
L_08A51E00:
    ctx.gpr[31] = (0x08A51E08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 418u, 0x08AF9DE0u>(ctx, &aot_mem) && ctx.pc == 0x08A51E08u) goto L_08A51E08;
    return;
L_08A51E08:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A51E64;
      }
      goto L_08A51E10;
    }
L_08A51E10:
    ctx.gpr[4] = (15969u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A51E50;
      }
      goto L_08A51E30;
    }
L_08A51E30:
    ctx.gpr[31] = (0x08A51E38u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 347u, 0x08AF98D4u>(ctx, &aot_mem) && ctx.pc == 0x08A51E38u) goto L_08A51E38;
    return;
L_08A51E38:
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A51E50;
L_08A51E50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A51E5Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 429u, 0x088A222Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51E5Cu) goto L_08A51E5C;
    return;
L_08A51E5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51ED8;
      }
      goto L_08A51E64;
    }
L_08A51E64:
    ctx.gpr[31] = (0x08A51E6Cu);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 347u, 0x08AF98D4u>(ctx, &aot_mem) && ctx.pc == 0x08A51E6Cu) goto L_08A51E6C;
    return;
L_08A51E6C:
    ctx.gpr[4] = (14851u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A51EB0;
      }
      goto L_08A51E8C;
    }
L_08A51E8C:
    ctx.gpr[31] = (0x08A51E94u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 347u, 0x08AF98D4u>(ctx, &aot_mem) && ctx.pc == 0x08A51E94u) goto L_08A51E94;
    return;
L_08A51E94:
    ctx.gpr[4] = (14851u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A51ED8;
      }
      goto L_08A51EB0;
    }
L_08A51EB0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A51ED8;
      }
      goto L_08A51EBC;
    }
L_08A51EBC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(15923)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51ED8;
      }
      goto L_08A51ECC;
    }
L_08A51ECC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A51ED8u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 429u, 0x088A222Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51ED8u) goto L_08A51ED8;
    return;
L_08A51ED8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(949)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51F68;
      }
      goto L_08A51EE4;
    }
L_08A51EE4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (50716u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(952)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 16374u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A51F20;
      }
      goto L_08A51F10;
    }
L_08A51F10:
    ctx.gpr[31] = (0x08A51F18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 399u, 0x08AF9C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51F18u) goto L_08A51F18;
    return;
L_08A51F18:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(952), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A51F68;
      }
      goto L_08A51F20;
    }
L_08A51F20:
    ctx.gpr[31] = (0x08A51F28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 399u, 0x08AF9C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51F28u) goto L_08A51F28;
    return;
L_08A51F28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(952)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A51F38u);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51F38u) goto L_08A51F38;
    return;
L_08A51F38:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1248));
    ctx.gpr[31] = (0x08A51F44u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 305u, 0x08A4D5D4u>(ctx, &aot_mem) && ctx.pc == 0x08A51F44u) goto L_08A51F44;
    return;
L_08A51F44:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A51F50u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A063D8u>(ctx, &aot_mem) && ctx.pc == 0x08A51F50u) goto L_08A51F50;
    return;
L_08A51F50:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1252)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1256)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A51F68;
L_08A51F68:
    ctx.gpr[31] = (0x08A51F70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 629u, 0x0889F030u>(ctx, &aot_mem) && ctx.pc == 0x08A51F70u) goto L_08A51F70;
    return;
L_08A51F70:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1636)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1640)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1644)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1648)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1652)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1656)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1660)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1664)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1668)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1672)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1676)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1680)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1684)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1688)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1692)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1696));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A51FB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A51FF8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 510u, 0x0889E8D0u>(ctx, &aot_mem) && ctx.pc == 0x08A51FF8u) goto L_08A51FF8;
    return;
L_08A51FF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-988));
      if (branch_taken) {
          goto L_08A525B0;
      }
      goto L_08A52028;
    }
L_08A52028:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = ctx.fpr[12] / ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16073u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A5209C;
    }
    goto L_08A5209C;
L_08A5209C:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A520D4;
      }
      goto L_08A520C0;
    }
L_08A520C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 192u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A52408;
      }
      goto L_08A520D4;
    }
L_08A520D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A521AC;
      }
      goto L_08A520E0;
    }
L_08A520E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(584)));
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
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16068u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 38922u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A5213C;
      }
      goto L_08A52124;
    }
L_08A52124:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A52140;
      }
      goto L_08A52134;
    }
L_08A52134:
    ctx.gpr[31] = (0x08A5213Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A5213Cu) goto L_08A5213C;
    return;
L_08A5213C:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_08A52140;
L_08A52140:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A52158u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x08A52158u) goto L_08A52158;
    return;
L_08A52158:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(584)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A5217Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x08A5217Cu) goto L_08A5217C;
    return;
L_08A5217C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A52190u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 524u, 0x08A06780u>(ctx, &aot_mem) && ctx.pc == 0x08A52190u) goto L_08A52190;
    return;
L_08A52190:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A521A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08A521A4u) goto L_08A521A4;
    return;
L_08A521A4:
    ctx.gpr[31] = (0x08A521ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x08A521ACu) goto L_08A521AC;
    return;
L_08A521AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(876)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52234;
      }
      goto L_08A521B8;
    }
L_08A521B8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(876)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A521E4;
      }
      goto L_08A521CC;
    }
L_08A521CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A521E8;
      }
      goto L_08A521DC;
    }
L_08A521DC:
    ctx.gpr[31] = (0x08A521E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A521E4u) goto L_08A521E4;
    return;
L_08A521E4:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_08A521E8;
L_08A521E8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A52200u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x08A52200u) goto L_08A52200;
    return;
L_08A52200:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(584)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x08A52218u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 494u, 0x08A0606Cu>(ctx, &aot_mem) && ctx.pc == 0x08A52218u) goto L_08A52218;
    return;
L_08A52218:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A5222Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08A5222Cu) goto L_08A5222C;
    return;
L_08A5222C:
    ctx.gpr[31] = (0x08A52234u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x08A52234u) goto L_08A52234;
    return;
L_08A52234:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(880)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A522B8;
      }
      goto L_08A52240;
    }
L_08A52240:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(880)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A5226C;
      }
      goto L_08A52254;
    }
L_08A52254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A52270;
      }
      goto L_08A52264;
    }
L_08A52264:
    ctx.gpr[31] = (0x08A5226Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A5226Cu) goto L_08A5226C;
    return;
L_08A5226C:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_08A52270;
L_08A52270:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A52288u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x08A52288u) goto L_08A52288;
    return;
L_08A52288:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(584)));
    ctx.gpr[31] = (0x08A5229Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 494u, 0x08A0606Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5229Cu) goto L_08A5229C;
    return;
L_08A5229C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A522B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08A522B0u) goto L_08A522B0;
    return;
L_08A522B0:
    ctx.gpr[31] = (0x08A522B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x08A522B8u) goto L_08A522B8;
    return;
L_08A522B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(884)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52360;
      }
      goto L_08A522C4;
    }
L_08A522C4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(884)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A522F0;
      }
      goto L_08A522D8;
    }
L_08A522D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A522F4;
      }
      goto L_08A522E8;
    }
L_08A522E8:
    ctx.gpr[31] = (0x08A522F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A522F0u) goto L_08A522F0;
    return;
L_08A522F0:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_08A522F4;
L_08A522F4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A5230Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x08A5230Cu) goto L_08A5230C;
    return;
L_08A5230C:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x08A5231Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A5231Cu) goto L_08A5231C;
    return;
L_08A5231C:
    ctx.gpr[31] = (0x08A52324u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 823u, 0x08A97388u>(ctx, &aot_mem) && ctx.pc == 0x08A52324u) goto L_08A52324;
    return;
L_08A52324:
    ctx.gpr[4] = (0u - ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A52344u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 494u, 0x08A0606Cu>(ctx, &aot_mem) && ctx.pc == 0x08A52344u) goto L_08A52344;
    return;
L_08A52344:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A52358u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08A52358u) goto L_08A52358;
    return;
L_08A52358:
    ctx.gpr[31] = (0x08A52360u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x08A52360u) goto L_08A52360;
    return;
L_08A52360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(888)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52408;
      }
      goto L_08A5236C;
    }
L_08A5236C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(888)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A52398;
      }
      goto L_08A52380;
    }
L_08A52380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A5239C;
      }
      goto L_08A52390;
    }
L_08A52390:
    ctx.gpr[31] = (0x08A52398u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A52398u) goto L_08A52398;
    return;
L_08A52398:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_08A5239C;
L_08A5239C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A523B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x08A523B4u) goto L_08A523B4;
    return;
L_08A523B4:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x08A523C4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A523C4u) goto L_08A523C4;
    return;
L_08A523C4:
    ctx.gpr[31] = (0x08A523CCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 823u, 0x08A97388u>(ctx, &aot_mem) && ctx.pc == 0x08A523CCu) goto L_08A523CC;
    return;
L_08A523CC:
    ctx.gpr[4] = (0u - ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A523ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 494u, 0x08A0606Cu>(ctx, &aot_mem) && ctx.pc == 0x08A523ECu) goto L_08A523EC;
    return;
L_08A523EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A52400u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08A52400u) goto L_08A52400;
    return;
L_08A52400:
    ctx.gpr[31] = (0x08A52408u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x08A52408u) goto L_08A52408;
    return;
L_08A52408:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A524C4;
      }
      goto L_08A52414;
    }
L_08A52414:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (2213u << 16u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-10856));
      if (branch_taken) {
          goto L_08A52448;
      }
      goto L_08A52430;
    }
L_08A52430:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A5244C;
      }
      goto L_08A52440;
    }
L_08A52440:
    ctx.gpr[31] = (0x08A52448u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A52448u) goto L_08A52448;
    return;
L_08A52448:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    goto L_08A5244C;
L_08A5244C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A52464u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x08A52464u) goto L_08A52464;
    return;
L_08A52464:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    ctx.gpr[31] = (0x08A52478u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 496u, 0x08A06094u>(ctx, &aot_mem) && ctx.pc == 0x08A52478u) goto L_08A52478;
    return;
L_08A52478:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A5248Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08A5248Cu) goto L_08A5248C;
    return;
L_08A5248C:
    ctx.gpr[31] = (0x08A52494u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x08A52494u) goto L_08A52494;
    return;
L_08A52494:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A524A8u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 129u, 0x08A5D124u>(ctx, &aot_mem) && ctx.pc == 0x08A524A8u) goto L_08A524A8;
    return;
L_08A524A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A524C4;
      }
      goto L_08A524B4;
    }
L_08A524B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A524C4u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08B8u>(ctx, &aot_mem) && ctx.pc == 0x08A524C4u) goto L_08A524C4;
    return;
L_08A524C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5259C;
      }
      goto L_08A524D0;
    }
L_08A524D0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (2213u << 16u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-10856));
      if (branch_taken) {
          goto L_08A52504;
      }
      goto L_08A524EC;
    }
L_08A524EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A52508;
      }
      goto L_08A524FC;
    }
L_08A524FC:
    ctx.gpr[31] = (0x08A52504u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A52504u) goto L_08A52504;
    return;
L_08A52504:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_08A52508;
L_08A52508:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A52520u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x08A52520u) goto L_08A52520;
    return;
L_08A52520:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x08A52538u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 496u, 0x08A06094u>(ctx, &aot_mem) && ctx.pc == 0x08A52538u) goto L_08A52538;
    return;
L_08A52538:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A5254Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08A5254Cu) goto L_08A5254C;
    return;
L_08A5254C:
    ctx.gpr[31] = (0x08A52554u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x08A52554u) goto L_08A52554;
    return;
L_08A52554:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A52568u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 129u, 0x08A5D124u>(ctx, &aot_mem) && ctx.pc == 0x08A52568u) goto L_08A52568;
    return;
L_08A52568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5259C;
      }
      goto L_08A52574;
    }
L_08A52574:
    ctx.gpr[5] = (0u | 150u);
    ctx.gpr[23] = (ctx.gpr[5] - ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < 0 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[23] = (0u | 0u);
        goto L_08A5258C;
    }
    goto L_08A5258C;
L_08A5258C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5259Cu);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08B8u>(ctx, &aot_mem) && ctx.pc == 0x08A5259Cu) goto L_08A5259C;
    return;
L_08A5259C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A525A8u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 365u, 0x0892AED4u>(ctx, &aot_mem) && ctx.pc == 0x08A525A8u) goto L_08A525A8;
    return;
L_08A525A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-988));
      if (branch_taken) {
          goto L_08A52794;
      }
      goto L_08A525B0;
    }
L_08A525B0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-987));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A525FC;
      }
      goto L_08A525C0;
    }
L_08A525C0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-991));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A525FC;
      }
      goto L_08A525D0;
    }
L_08A525D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A525FC;
      }
      goto L_08A525DC;
    }
L_08A525DC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-974));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A525FC;
      }
      goto L_08A525EC;
    }
L_08A525EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-990));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A52794;
      }
      goto L_08A525FC;
    }
L_08A525FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52684;
      }
      goto L_08A52608;
    }
L_08A52608:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A52634;
      }
      goto L_08A5261C;
    }
L_08A5261C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A52638;
      }
      goto L_08A5262C;
    }
L_08A5262C:
    ctx.gpr[31] = (0x08A52634u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A52634u) goto L_08A52634;
    return;
L_08A52634:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_08A52638;
L_08A52638:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A52650u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x08A52650u) goto L_08A52650;
    return;
L_08A52650:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(584)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x08A52668u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 498u, 0x08A060BCu>(ctx, &aot_mem) && ctx.pc == 0x08A52668u) goto L_08A52668;
    return;
L_08A52668:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A5267Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08A5267Cu) goto L_08A5267C;
    return;
L_08A5267C:
    ctx.gpr[31] = (0x08A52684u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x08A52684u) goto L_08A52684;
    return;
L_08A52684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(884)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5270C;
      }
      goto L_08A52690;
    }
L_08A52690:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(884)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A526BC;
      }
      goto L_08A526A4;
    }
L_08A526A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A526C0;
      }
      goto L_08A526B4;
    }
L_08A526B4:
    ctx.gpr[31] = (0x08A526BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A526BCu) goto L_08A526BC;
    return;
L_08A526BC:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_08A526C0;
L_08A526C0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A526D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x08A526D8u) goto L_08A526D8;
    return;
L_08A526D8:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(584)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x08A526F0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 498u, 0x08A060BCu>(ctx, &aot_mem) && ctx.pc == 0x08A526F0u) goto L_08A526F0;
    return;
L_08A526F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A52704u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08A52704u) goto L_08A52704;
    return;
L_08A52704:
    ctx.gpr[31] = (0x08A5270Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x08A5270Cu) goto L_08A5270C;
    return;
L_08A5270C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(888)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52794;
      }
      goto L_08A52718;
    }
L_08A52718:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(888)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A52744;
      }
      goto L_08A5272C;
    }
L_08A5272C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A52748;
      }
      goto L_08A5273C;
    }
L_08A5273C:
    ctx.gpr[31] = (0x08A52744u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A52744u) goto L_08A52744;
    return;
L_08A52744:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_08A52748;
L_08A52748:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A52760u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x08A52760u) goto L_08A52760;
    return;
L_08A52760:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(584)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x08A52778u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 498u, 0x08A060BCu>(ctx, &aot_mem) && ctx.pc == 0x08A52778u) goto L_08A52778;
    return;
L_08A52778:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A5278Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08A5278Cu) goto L_08A5278C;
    return;
L_08A5278C:
    ctx.gpr[31] = (0x08A52794u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x08A52794u) goto L_08A52794;
    return;
L_08A52794:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A527B0;
      }
      goto L_08A527A0;
    }
L_08A527A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-990));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5286C;
      }
      goto L_08A527B0;
    }
L_08A527B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(876)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5286C;
      }
      goto L_08A527BC;
    }
L_08A527BC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(896));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A527D8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 650u, 0x08A0728Cu>(ctx, &aot_mem) && ctx.pc == 0x08A527D8u) goto L_08A527D8;
    return;
L_08A527D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(905)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(908)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(876)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A52818;
      }
      goto L_08A52800;
    }
L_08A52800:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A5281C;
      }
      goto L_08A52810;
    }
L_08A52810:
    ctx.gpr[31] = (0x08A52818u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A52818u) goto L_08A52818;
    return;
L_08A52818:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_08A5281C;
L_08A5281C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A52834u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x08A52834u) goto L_08A52834;
    return;
L_08A52834:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (0x08A52850u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x08A52850u) goto L_08A52850;
    return;
L_08A52850:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A52864u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08A52864u) goto L_08A52864;
    return;
L_08A52864:
    ctx.gpr[31] = (0x08A5286Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x08A5286Cu) goto L_08A5286C;
    return;
L_08A5286C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A52C10;
      }
      goto L_08A52878;
    }
L_08A52878:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(880)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52AE0;
      }
      goto L_08A52884;
    }
L_08A52884:
    ctx.gpr[5] = (48969u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(880)));
    ctx.gpr[5] = (16268u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] | 48716u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A528CC;
      }
      goto L_08A528B4;
    }
L_08A528B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A528D0;
      }
      goto L_08A528C4;
    }
L_08A528C4:
    ctx.gpr[31] = (0x08A528CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A528CCu) goto L_08A528CC;
    return;
L_08A528CC:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_08A528D0;
L_08A528D0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A528E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x08A528E8u) goto L_08A528E8;
    return;
L_08A528E8:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[20])) && ctx.fpr[22] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08A52920;
      }
      goto L_08A52908;
    }
L_08A52908:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A52924;
    }
    goto L_08A52918;
L_08A52918:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08A52930;
      }
      goto L_08A52920;
    }
L_08A52920:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A52924;
L_08A52924:
    ctx.gpr[31] = (0x08A5292Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x08A5292Cu) goto L_08A5292C;
    return;
L_08A5292C:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A52930;
L_08A52930:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A52964;
      }
      goto L_08A52948;
    }
L_08A52948:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A52964;
      }
      goto L_08A52958;
    }
L_08A52958:
    ctx.fpr[20] = ctx.fpr[22] + ctx.fpr[20];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[24] - ctx.fpr[20];
      if (branch_taken) {
          goto L_08A52974;
      }
      goto L_08A52964;
    }
L_08A52964:
    ctx.gpr[31] = (0x08A5296Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x08A5296Cu) goto L_08A5296C;
    return;
L_08A5296C:
    ctx.fpr[20] = ctx.fpr[22] + ctx.fpr[0];
    ctx.fpr[20] = ctx.fpr[24] - ctx.fpr[20];
    goto L_08A52974;
L_08A52974:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A52980u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A52980u) goto L_08A52980;
    return;
L_08A52980:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A529B0;
      }
      goto L_08A5299C;
    }
L_08A5299C:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[20];
      if (branch_taken) {
          goto L_08A529DC;
      }
      goto L_08A529B0;
    }
L_08A529B0:
    ctx.gpr[4] = (49097u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A529DC;
      }
      goto L_08A529CC;
    }
L_08A529CC:
    ctx.gpr[4] = (49225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[20];
    goto L_08A529DC;
L_08A529DC:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A529F4;
      }
      goto L_08A529EC;
    }
L_08A529EC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08A52A14;
      }
      goto L_08A529F4;
    }
L_08A529F4:
    ctx.gpr[4] = (49036u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 48716u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A52A14;
      }
      goto L_08A52A10;
    }
L_08A52A10:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A52A14;
L_08A52A14:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7968)));
    ctx.gpr[4] = (15363u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (15107u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[5] = (16255u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 40370u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17402u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[31] = (0x08A52AC4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 498u, 0x08A060BCu>(ctx, &aot_mem) && ctx.pc == 0x08A52AC4u) goto L_08A52AC4;
    return;
L_08A52AC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A52AD8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08A52AD8u) goto L_08A52AD8;
    return;
L_08A52AD8:
    ctx.gpr[31] = (0x08A52AE0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x08A52AE0u) goto L_08A52AE0;
    return;
L_08A52AE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
        goto L_08A52D38;
    }
    goto L_08A52AEC;
L_08A52AEC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A52B18;
      }
      goto L_08A52B00;
    }
L_08A52B00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A52B1C;
      }
      goto L_08A52B10;
    }
L_08A52B10:
    ctx.gpr[31] = (0x08A52B18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A52B18u) goto L_08A52B18;
    return;
L_08A52B18:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_08A52B1C;
L_08A52B1C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A52B34u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x08A52B34u) goto L_08A52B34;
    return;
L_08A52B34:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    ctx.gpr[31] = (0x08A52B48u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 496u, 0x08A06094u>(ctx, &aot_mem) && ctx.pc == 0x08A52B48u) goto L_08A52B48;
    return;
L_08A52B48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A52B5Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08A52B5Cu) goto L_08A52B5C;
    return;
L_08A52B5C:
    ctx.gpr[31] = (0x08A52B64u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x08A52B64u) goto L_08A52B64;
    return;
L_08A52B64:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7968)));
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16180u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 65012u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
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
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_08A52D38;
      }
      goto L_08A52C10;
    }
L_08A52C10:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 196u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A52C30;
      }
      goto L_08A52C20;
    }
L_08A52C20:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 195u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
        goto L_08A52D38;
    }
    goto L_08A52C30;
L_08A52C30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
        goto L_08A52D14;
    }
    goto L_08A52C3C;
L_08A52C3C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A52C68;
      }
      goto L_08A52C50;
    }
L_08A52C50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A52C6C;
      }
      goto L_08A52C60;
    }
L_08A52C60:
    ctx.gpr[31] = (0x08A52C68u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A52C68u) goto L_08A52C68;
    return;
L_08A52C68:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    goto L_08A52C6C;
L_08A52C6C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A52C84u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x08A52C84u) goto L_08A52C84;
    return;
L_08A52C84:
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    ctx.gpr[31] = (0x08A52C98u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 498u, 0x08A060BCu>(ctx, &aot_mem) && ctx.pc == 0x08A52C98u) goto L_08A52C98;
    return;
L_08A52C98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A52CACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08A52CACu) goto L_08A52CAC;
    return;
L_08A52CAC:
    ctx.gpr[31] = (0x08A52CB4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x08A52CB4u) goto L_08A52CB4;
    return;
L_08A52CB4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(15916)));
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
        goto L_08A52D14;
    }
    goto L_08A52CC4;
L_08A52CC4:
    ctx.gpr[31] = (0x08A52CCCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 236u, 0x08A4CFA4u>(ctx, &aot_mem) && ctx.pc == 0x08A52CCCu) goto L_08A52CCC;
    return;
L_08A52CCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52D00;
      }
      goto L_08A52CD8;
    }
L_08A52CD8:
    ctx.gpr[31] = (0x08A52CE0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 236u, 0x08A4CFA4u>(ctx, &aot_mem) && ctx.pc == 0x08A52CE0u) goto L_08A52CE0;
    return;
L_08A52CE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[31] = (0x08A52CECu);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 236u, 0x08A4CFA4u>(ctx, &aot_mem) && ctx.pc == 0x08A52CECu) goto L_08A52CEC;
    return;
L_08A52CEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A52CF8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A52CF8u) goto L_08A52CF8;
    return;
L_08A52CF8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
      if (branch_taken) {
          goto L_08A52D14;
      }
      goto L_08A52D00;
    }
L_08A52D00:
    ctx.gpr[31] = (0x08A52D08u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 236u, 0x08A4CFA4u>(ctx, &aot_mem) && ctx.pc == 0x08A52D08u) goto L_08A52D08;
    return;
L_08A52D08:
    ctx.gpr[31] = (0x08A52D10u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 206u, 0x08AC9208u>(ctx, &aot_mem) && ctx.pc == 0x08A52D10u) goto L_08A52D10;
    return;
L_08A52D10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    goto L_08A52D14;
L_08A52D14:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    goto L_08A52D38;
L_08A52D38:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52D58;
      }
      goto L_08A52D44;
    }
L_08A52D44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52D58;
      }
      goto L_08A52D50;
    }
L_08A52D50:
    ctx.gpr[31] = (0x08A52D58u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A52D58u) goto L_08A52D58;
    return;
L_08A52D58:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52D98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-560));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1000));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A52E18;
      }
      goto L_08A52DDC;
    }
L_08A52DDC:
    ctx.gpr[23] = (2232u << 16u);
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(-25744), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-25744));
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (2232u << 16u);
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[17] = (0u | 255u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25728));
      if (branch_taken) {
          goto L_08A52E20;
      }
      goto L_08A52E18;
    }
L_08A52E18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53A30;
      }
      goto L_08A52E20;
    }
L_08A52E20:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(104));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 194 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 196 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A52ECC;
      }
      goto L_08A52EA0;
    }
L_08A52EA0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < -992 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < -973 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A52F74;
      }
      goto L_08A52EAC;
    }
L_08A52EAC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(992));
      if (branch_taken) {
          goto L_08A52F74;
      }
      goto L_08A52EB4;
    }
L_08A52EB4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(6920)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52ECC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 197 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A52F10;
      }
      goto L_08A52ED4;
    }
L_08A52ED4:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < 195 ? 1u : 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(116));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-991));
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[22] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A52F7C;
      }
      goto L_08A52F04;
    }
L_08A52F04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (16437u << 16u);
      if (branch_taken) {
          goto L_08A53050;
      }
      goto L_08A52F0C;
    }
L_08A52F0C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 197 ? 1u : 0u);
    goto L_08A52F10;
L_08A52F10:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16371u << 16u);
      if (branch_taken) {
          goto L_08A52F74;
      }
      goto L_08A52F18;
    }
L_08A52F18:
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49081u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16245u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (16313u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.gpr[4] = (49264u << 16u);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(116));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-991));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A53138;
      }
      goto L_08A52F74;
    }
L_08A52F74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53A30;
      }
      goto L_08A52F7C;
    }
L_08A52F7C:
    ctx.gpr[6] = (49043u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (49061u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 7866u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16238u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 5243u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16275u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 13107u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (49292u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 31457u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24084)));
      if (branch_taken) {
          goto L_08A53848;
      }
      goto L_08A53050;
    }
L_08A53050:
    ctx.gpr[6] = (ctx.gpr[6] | 7864u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (49295u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 23593u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16212u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 31457u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (49139u << 16u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] | 13107u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[6] = (16371u << 16u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] | 13107u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[6] = (49108u << 16u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[6] | 31457u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[6] = (16340u << 16u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[6] | 31457u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24084)));
      if (branch_taken) {
          goto L_08A53848;
      }
      goto L_08A53138;
    }
L_08A53138:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24084)));
      if (branch_taken) {
          goto L_08A53848;
      }
      goto L_08A531D4;
    }
L_08A531D4:
    ctx.gpr[4] = (16338u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 3146u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16146u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 45089u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49080u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 54526u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (16130u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 19923u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(116));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-991));
    ctx.gpr[22] = (2227u << 16u);
    ctx.gpr[4] = (48972u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 2097u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 2097u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (48989u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] | 28836u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (16221u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] | 28836u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24084)));
      if (branch_taken) {
          goto L_08A53848;
      }
      goto L_08A532F4;
    }
L_08A532F4:
    ctx.gpr[4] = (16484u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 10486u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16067u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 38273u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16212u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 48234u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (16067u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(116));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-991));
    ctx.gpr[22] = (2227u << 16u);
    ctx.gpr[4] = (48937u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 47710u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (16169u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 47710u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (49035u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[4] | 8913u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (16267u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[4] | 8913u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24084)));
      if (branch_taken) {
          goto L_08A53848;
      }
      goto L_08A53414;
    }
L_08A53414:
    ctx.gpr[4] = (49062u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49026u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 3146u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16130u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 36700u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16294u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (49205u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16253u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(116));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-991));
    ctx.gpr[22] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24084)));
      if (branch_taken) {
          goto L_08A53848;
      }
      goto L_08A53510;
    }
L_08A53510:
    ctx.gpr[4] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16777u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16308u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23069u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49070u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 63963u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (16216u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 37749u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(116));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-991));
    ctx.gpr[22] = (2227u << 16u);
    ctx.gpr[4] = (49052u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 27263u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (16284u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 27263u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (49054u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] | 47186u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (16286u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] | 47186u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24084)));
      if (branch_taken) {
          goto L_08A53848;
      }
      goto L_08A53630;
    }
L_08A53630:
    ctx.gpr[4] = (49071u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 48759u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16201u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 30933u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (49322u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 19923u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(116));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-991));
    ctx.gpr[22] = (2227u << 16u);
    ctx.gpr[4] = (49055u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 31982u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (16287u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 31982u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (49026u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] | 61866u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (16258u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] | 61866u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24084)));
      if (branch_taken) {
          goto L_08A53848;
      }
      goto L_08A53744;
    }
L_08A53744:
    ctx.gpr[4] = (16201u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 30933u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49137u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26739u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49174u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13631u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16369u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26739u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49301u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 28836u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (16215u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 36176u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(116));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-991));
    ctx.gpr[22] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24084)));
    goto L_08A53848;
L_08A53848:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25728), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08A53878u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08A53878u) goto L_08A53878;
    return;
L_08A53878:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x08A53884u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08A53884u) goto L_08A53884;
    return;
L_08A53884:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(15916)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A538C4;
      }
      goto L_08A53890;
    }
L_08A53890:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x08A538A4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 50u, 0x08868570u>(ctx, &aot_mem) && ctx.pc == 0x08A538A4u) goto L_08A538A4;
    return;
L_08A538A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A538C4;
      }
      goto L_08A538AC;
    }
L_08A538AC:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A538BCu);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 71u, 0x0886886Cu>(ctx, &aot_mem) && ctx.pc == 0x08A538BCu) goto L_08A538BC;
    return;
L_08A538BC:
    ctx.gpr[31] = (0x08A538C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 70u, 0x08868854u>(ctx, &aot_mem) && ctx.pc == 0x08A538C4u) goto L_08A538C4;
    return;
L_08A538C4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[21];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A539BC;
      }
      goto L_08A538D0;
    }
L_08A538D0:
    ctx.gpr[4] = (16212u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 48234u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16067u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49214u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 34603u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49035u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 8913u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[4] = (16267u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 8913u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[4] = (49036u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] | 27263u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[4] = (16268u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] | 27263u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A539BC;
      }
      goto L_08A539BC;
    }
L_08A539BC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A53A24;
      }
      goto L_08A539C4;
    }
L_08A539C4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25728), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(15916)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A53A24;
      }
      goto L_08A539F0;
    }
L_08A539F0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x08A53A04u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 50u, 0x08868570u>(ctx, &aot_mem) && ctx.pc == 0x08A53A04u) goto L_08A53A04;
    return;
L_08A53A04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53A24;
      }
      goto L_08A53A0C;
    }
L_08A53A0C:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A53A1Cu);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 71u, 0x0886886Cu>(ctx, &aot_mem) && ctx.pc == 0x08A53A1Cu) goto L_08A53A1C;
    return;
L_08A53A1C:
    ctx.gpr[31] = (0x08A53A24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 70u, 0x08868854u>(ctx, &aot_mem) && ctx.pc == 0x08A53A24u) goto L_08A53A24;
    return;
L_08A53A24:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x08A53A30u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08A53A30u) goto L_08A53A30;
    return;
L_08A53A30:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53A68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(599))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] & 64u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53BB4;
      }
      goto L_08A53AA4;
    }
L_08A53AA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[4] = (15877u << 16u);
      if (branch_taken) {
          goto L_08A53BB4;
      }
      goto L_08A53AB8;
    }
L_08A53AB8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 80u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16179u << 16u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(646), static_cast<std::uint16_t>(0u));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2232u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A53B24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 301u, 0x088EE10Cu>(ctx, &aot_mem) && ctx.pc == 0x08A53B24u) goto L_08A53B24;
    return;
L_08A53B24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (0x08A53B30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 589u, 0x0889EDE8u>(ctx, &aot_mem) && ctx.pc == 0x08A53B30u) goto L_08A53B30;
    return;
L_08A53B30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A53B74u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 95u, 0x088A0754u>(ctx, &aot_mem) && ctx.pc == 0x08A53B74u) goto L_08A53B74;
    return;
L_08A53B74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x08A53B98u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 413u, 0x08A46B40u>(ctx, &aot_mem) && ctx.pc == 0x08A53B98u) goto L_08A53B98;
    return;
L_08A53B98:
    ctx.gpr[31] = (0x08A53BA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 65u, 0x08918454u>(ctx, &aot_mem) && ctx.pc == 0x08A53BA0u) goto L_08A53BA0;
    return;
L_08A53BA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A53BBC;
      }
      goto L_08A53BAC;
    }
L_08A53BAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53EF8;
      }
      goto L_08A53BB4;
    }
L_08A53BB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53EF8;
      }
      goto L_08A53BBC;
    }
L_08A53BBC:
    ctx.gpr[18] = (2213u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-10856));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A53BDCu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 129u, 0x08A5D124u>(ctx, &aot_mem) && ctx.pc == 0x08A53BDCu) goto L_08A53BDC;
    return;
L_08A53BDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53C08;
      }
      goto L_08A53BE8;
    }
L_08A53BE8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A53BF4u);
    ctx.gpr[4] = (0u | 496u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 238u, 0x0883D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08A53BF4u) goto L_08A53BF4;
    return;
L_08A53BF4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A53C10;
      }
      goto L_08A53C00;
    }
L_08A53C00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53C1C;
      }
      goto L_08A53C08;
    }
L_08A53C08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53EF8;
      }
      goto L_08A53C10;
    }
L_08A53C10:
    ctx.gpr[31] = (0x08A53C18u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 192u, 0x0883CF88u>(ctx, &aot_mem) && ctx.pc == 0x08A53C18u) goto L_08A53C18;
    return;
L_08A53C18:
    ctx.gpr[17] = (ctx.gpr[21] | 0u);
    goto L_08A53C1C;
L_08A53C1C:
    ctx.gpr[21] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53E18;
      }
      goto L_08A53C28;
    }
L_08A53C28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A53C44u);
    ctx.gpr[5] = (0u | 245u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A53C44u) goto L_08A53C44;
    return;
L_08A53C44:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[31] = (0x08A53C50u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 290u, 0x0883D718u>(ctx, &aot_mem) && ctx.pc == 0x08A53C50u) goto L_08A53C50;
    return;
L_08A53C50:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[31] = (0x08A53C5Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 226u, 0x08A5D820u>(ctx, &aot_mem) && ctx.pc == 0x08A53C5Cu) goto L_08A53C5C;
    return;
L_08A53C5C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08A53C68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 237u, 0x08A5D914u>(ctx, &aot_mem) && ctx.pc == 0x08A53C68u) goto L_08A53C68;
    return;
L_08A53C68:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A53C74u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 184u, 0x08AC8ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A53C74u) goto L_08A53C74;
    return;
L_08A53C74:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A53D08u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 199u, 0x08AC8FD8u>(ctx, &aot_mem) && ctx.pc == 0x08A53D08u) goto L_08A53D08;
    return;
L_08A53D08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A53D14u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A53D14u) goto L_08A53D14;
    return;
L_08A53D14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A53D20u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 99u, 0x089C8844u>(ctx, &aot_mem) && ctx.pc == 0x08A53D20u) goto L_08A53D20;
    return;
L_08A53D20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A53D2Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 665u, 0x08A2F080u>(ctx, &aot_mem) && ctx.pc == 0x08A53D2Cu) goto L_08A53D2C;
    return;
L_08A53D2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16253u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 28836u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (15363u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16298u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 43691u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(420), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(3284)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(3284), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20000));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(440), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08A53E20;
      }
      goto L_08A53E04;
    }
L_08A53E04:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A53E24;
      }
      goto L_08A53E18;
    }
L_08A53E18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53EF8;
      }
      goto L_08A53E20;
    }
L_08A53E20:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A53E24;
L_08A53E24:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A53EB4;
      }
      goto L_08A53EA8;
    }
L_08A53EA8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A53EB4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x08A53EB4u) goto L_08A53EB4;
    return;
L_08A53EB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x08A53EC8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08A53EC8u) goto L_08A53EC8;
    return;
L_08A53EC8:
    ctx.gpr[31] = (0x08A53ED0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x08A53ED0u) goto L_08A53ED0;
    return;
L_08A53ED0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A53EE4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 129u, 0x08A5D124u>(ctx, &aot_mem) && ctx.pc == 0x08A53EE4u) goto L_08A53EE4;
    return;
L_08A53EE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53EF8;
      }
      goto L_08A53EF0;
    }
L_08A53EF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    goto L_08A53EF8;
L_08A53EF8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53F24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (14979u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (ctx.gpr[5] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1000)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[8] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1000));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08A53FA8;
      }
      goto L_08A53F9C;
    }
L_08A53F9C:
    ctx.gpr[6] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-10008)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08A53FA8;
L_08A53FA8:
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (15692u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_08A53FE8;
    }
    goto L_08A53FE8;
L_08A53FE8:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = ctx.fpr[22] / ctx.fpr[12];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(944)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[7] = (2230u << 16u);
    ctx.pc = 0x08A54000u; return;
}

void recomp_unit_0147(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0147_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_147(Runtime &runtime) {
    runtime.register_generated_unit(147u, 0x08A50000u, 16384u, &recomp_unit_0147, &recomp_unit_0147_entry);
    runtime.register_function(0x08A50000u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50008u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50070u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50088u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A500BCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A500D4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A500E4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A500FCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5012Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50134u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50138u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50140u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50148u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50154u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50160u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50190u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A501A4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A501ACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A501B4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A501D0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A501D8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A501E0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A501E8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A501F0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50218u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50220u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50228u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50248u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50250u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50264u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50278u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50280u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50294u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A502A8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A502ACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A502D8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A502E8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A502F8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50308u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50314u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5031Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5032Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50338u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50340u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50350u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50360u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50370u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50380u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A503A4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A503B4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A503BCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A503CCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A503D4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A503E4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50400u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5040Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50430u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50440u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5044Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50454u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A504ACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A504BCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A504C8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A504D8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A504E4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A504ECu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A504F4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A504FCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50504u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5050Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50518u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50524u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5053Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50544u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5057Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5058Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50598u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A505A0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A505DCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A505E8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5061Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50628u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50648u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50654u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50670u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50680u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50688u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50690u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50698u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A506A0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A506ACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A506C4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A506CCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A506DCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A506E8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A506F8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50704u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50714u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50720u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50734u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5074Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50758u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A507C0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A507CCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A507DCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A507ECu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A507F8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50804u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50818u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50828u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50838u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5083Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50864u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50874u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5088Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A508BCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A508E8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A508F8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50904u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50934u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50958u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5096Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50984u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50990u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A509C8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A509D8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A509E4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A509F0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50A00u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50A0Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50A18u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50A24u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50A34u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50A3Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50A5Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50A64u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50A7Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50A84u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50A8Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50A94u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50A9Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50AACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50ABCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50ACCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50AD4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50AE4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50AF0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50AF8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50B00u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50B34u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50B40u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50B64u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50B7Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50B8Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50B98u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50BA4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50BB4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50BC0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50BD4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50BE4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50BF0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50C00u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50C10u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50C1Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50C24u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50C2Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50C34u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50C3Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50C6Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50C78u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50CA0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50CB4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50CC4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50CD0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50CDCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50CECu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50CF8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50D10u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50D20u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50D2Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50D3Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50D4Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50D58u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50D60u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50D78u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50D80u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50D88u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50DC8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50DD4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50DECu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50DFCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50E0Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50E18u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50E20u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50E30u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50E48u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50E58u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50E64u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50E74u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50E84u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50E90u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50EA8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50EB0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50EB8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50EF8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50F04u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50F1Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50F34u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50F44u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50F50u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50F58u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50F68u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50F80u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50F90u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50F9Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50FACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50FBCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50FC8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50FE0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50FE8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50FF0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51020u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5102Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51054u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51068u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51078u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51084u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51090u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A510A0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A510ACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A510C4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A510D4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A510E0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A510F0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51100u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5110Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5111Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51124u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5112Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51160u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5116Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51190u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A511A8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A511B8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A511C4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A511CCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A511DCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A511F4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51204u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51210u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51220u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51230u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5123Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51250u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51268u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51270u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51280u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51290u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51294u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A512D0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A512F4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A512FCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51328u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5135Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51374u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5138Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A513E0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A513F4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5140Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51458u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51460u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51470u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5147Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51498u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A514A4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A514C8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A514E0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A514F0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A514FCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51508u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51518u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51524u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51538u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51548u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51554u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51564u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51574u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51580u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51588u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51590u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A515ACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A515B8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A515E0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A515F4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51604u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51610u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5161Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5162Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51638u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51650u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51660u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5166Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5167Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5168Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51698u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A516A0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A516B8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A516D8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A516E4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51708u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51718u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51728u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51734u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5173Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5174Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51764u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51774u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51780u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51790u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A517A0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A517ACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A517C4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A517E4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A517F0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51814u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5182Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5183Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51848u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51850u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51860u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51878u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51888u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51894u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A518A4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A518B4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A518C0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A518D8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A518F4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51900u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51928u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5193Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5194Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51958u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51964u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51974u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51980u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51998u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A519A8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A519B4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A519C4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A519D4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A519E0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A519F0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51A0Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51A18u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51A3Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51A54u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51A64u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51A70u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51A78u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51A88u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51AA0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51AB0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51ABCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51ACCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51ADCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51AE8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51AFCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51B0Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51B1Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51B20u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51B5Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51B80u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51B88u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51BB4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51BE8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51C00u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51C18u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51C6Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51C80u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51C98u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51CE4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51CFCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51D14u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51D1Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51D28u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51D4Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51D58u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51D64u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51D7Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51DA4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51DB0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51DD0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51DD8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51DE4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51DECu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51E00u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51E08u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51E10u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51E30u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51E38u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51E50u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51E5Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51E64u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51E6Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51E8Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51E94u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51EB0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51EBCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51ECCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51ED8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51EE4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51F10u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51F18u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51F20u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51F28u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51F38u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51F44u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51F50u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51F68u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51F70u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51FB4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51FF8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52028u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5209Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A520C0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A520D4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A520E0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52124u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52134u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5213Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52140u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52158u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5217Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52190u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A521A4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A521ACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A521B8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A521CCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A521DCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A521E4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A521E8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52200u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52218u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5222Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52234u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52240u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52254u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52264u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5226Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52270u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52288u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5229Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A522B0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A522B8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A522C4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A522D8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A522E8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A522F0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A522F4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5230Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5231Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52324u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52344u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52358u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52360u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5236Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52380u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52390u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52398u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5239Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A523B4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A523C4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A523CCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A523ECu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52400u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52408u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52414u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52430u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52440u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52448u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5244Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52464u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52478u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5248Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52494u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A524A8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A524B4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A524C4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A524D0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A524ECu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A524FCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52504u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52508u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52520u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52538u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5254Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52554u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52568u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52574u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5258Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5259Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A525A8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A525B0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A525C0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A525D0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A525DCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A525ECu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A525FCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52608u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5261Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5262Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52634u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52638u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52650u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52668u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5267Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52684u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52690u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A526A4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A526B4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A526BCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A526C0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A526D8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A526F0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52704u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5270Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52718u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5272Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5273Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52744u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52748u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52760u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52778u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5278Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52794u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A527A0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A527B0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A527BCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A527D8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52800u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52810u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52818u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5281Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52834u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52850u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52864u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5286Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52878u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52884u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A528B4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A528C4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A528CCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A528D0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A528E8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52908u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52918u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52920u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52924u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5292Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52930u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52948u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52958u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52964u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5296Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52974u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52980u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5299Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A529B0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A529CCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A529DCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A529ECu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A529F4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52A10u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52A14u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52AC4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52AD8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52AE0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52AECu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52B00u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52B10u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52B18u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52B1Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52B34u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52B48u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52B5Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52B64u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52C10u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52C20u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52C30u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52C3Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52C50u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52C60u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52C68u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52C6Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52C84u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52C98u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52CACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52CB4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52CC4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52CCCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52CD8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52CE0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52CECu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52CF8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52D00u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52D08u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52D10u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52D14u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52D38u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52D44u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52D50u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52D58u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52D98u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52DDCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52E18u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52E20u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52EA0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52EACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52EB4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52ECCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52ED4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52F04u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52F0Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52F10u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52F18u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52F74u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52F7Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53050u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53138u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A531D4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A532F4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53414u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53510u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53630u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53744u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53848u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53878u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53884u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53890u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A538A4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A538ACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A538BCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A538C4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A538D0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A539BCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A539C4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A539F0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53A04u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53A0Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53A1Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53A24u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53A30u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53A68u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53AA4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53AB8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53B24u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53B30u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53B74u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53B98u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53BA0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53BACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53BB4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53BBCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53BDCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53BE8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53BF4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53C00u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53C08u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53C10u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53C18u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53C1Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53C28u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53C44u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53C50u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53C5Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53C68u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53C74u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53D08u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53D14u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53D20u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53D2Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53E04u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53E18u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53E20u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53E24u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53EA8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53EB4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53EC8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53ED0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53EE4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53EF0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53EF8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53F24u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53F9Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53FA8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53FE8u, &recomp_unit_0147, "recomp_unit_0147");
}
} // namespace psprecomp
