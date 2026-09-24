#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0056[4095] = {
    1, 0, 2, 0, 3, 4, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0,
    0, 9, 0, 0, 10, 0, 11, 0, 12, 0, 13, 0, 14, 0, 15, 0, 16, 0, 17, 0, 0, 18, 0, 19, 0, 20, 0, 21, 0, 22, 0, 23,
    0, 24, 0, 25, 0, 26, 0, 27, 0, 28, 0, 29, 0, 30, 0, 31, 0, 32, 33, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0,
    37, 0, 38, 0, 39, 0, 40, 0, 41, 0, 42, 0, 43, 0, 44, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0,
    0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 51, 0, 52, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 0,
    0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 59, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0,
    63, 0, 64, 0, 65, 0, 66, 0, 67, 0, 68, 0, 69, 0, 70, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0,
    0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 77, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 81, 0,
    0, 0, 82, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0,
    0, 87, 0, 0, 0, 0, 88, 89, 0, 0, 0, 90, 0, 0, 0, 0, 91, 92, 0, 0, 0, 93, 0, 0, 0, 0, 94, 95, 0, 0, 0, 96,
    0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 99, 0, 0, 0, 100, 0, 101, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0,
    0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 108, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 116, 0, 0, 117,
    0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0,
    0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 129, 0, 130, 0, 131, 0, 0, 132, 0, 0, 0, 133, 0, 134, 0, 0, 0,
    0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 141,
    0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0,
    148, 0, 149, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0,
    0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 158, 0, 159, 0, 160, 0, 161, 0, 162, 0, 163, 0, 0, 0, 0, 0, 164, 0, 165, 0, 166, 0, 167, 0, 168, 0, 0, 0,
    0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 176, 0,
    177, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 181, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0,
    184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 188, 0, 189, 0, 0, 0, 190, 191, 0, 0, 0, 0,
    0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 197, 0, 198, 0, 0, 0,
    0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0,
    0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 211, 0, 212, 0,
    0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 215, 216, 0, 217, 0, 218, 0, 0, 0, 0, 0, 219,
    0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    225, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 231, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 238, 0,
    239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0,
    0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 249,
    0, 0, 250, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 257, 258, 0, 259,
    0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 266, 267,
    0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 273, 0,
    274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 277, 0, 278, 279, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0,
    0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 286, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0, 294, 0,
    0, 295, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0,
    301, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 304, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0,
    308, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 311, 0, 0, 312, 0, 313, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0,
    317, 0, 318, 0, 0, 319, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 323, 0,
    0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0, 328, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0,
    0, 331, 0, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 335, 0, 0, 0, 0, 0, 336, 0, 337, 0, 0, 0, 0, 0, 0,
    338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 342, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 344, 0,
    0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 348, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0,
    351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 357, 0, 0,
    0, 0, 358, 0, 0, 0, 0, 359, 0, 360, 0, 0, 0, 0, 0, 361, 0, 362, 0, 363, 0, 364, 0, 365, 0, 366, 0, 367, 368, 0, 0, 0,
    0, 0, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 374, 0, 375, 0, 0,
    0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 378, 0, 0,
    0, 0, 0, 379, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 386, 0, 0,
    0, 387, 0, 0, 388, 0, 389, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 393, 0, 0, 0, 0, 0, 0,
    394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 398, 0, 399, 0, 400,
    401, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 406, 407,
    0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411, 412, 0, 0, 0, 413,
    0, 0, 0, 0, 414, 0, 415, 416, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0,
    0, 0, 0, 0, 0, 421, 422, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 425, 0, 0, 0, 0, 0, 0,
    0, 0, 426, 0, 427, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 430, 431, 0, 432, 0, 0, 0, 0, 0,
    0, 433, 0, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 437, 0, 438, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0,
    0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 444, 0, 445, 0, 446, 447, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 449, 0, 0,
    0, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 452, 453, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0,
    0, 0, 457, 0, 0, 0, 458, 0, 459, 460, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 462, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0,
    464, 0, 0, 0, 0, 0, 0, 465, 466, 0, 467, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0,
    0, 0, 470, 0, 0, 0, 0, 471, 472, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 474, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 476,
    0, 0, 0, 0, 0, 0, 477, 478, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 484,
    485, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 487, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 490, 491,
    0, 492, 493, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 496, 0,
    0, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 0, 502, 0, 0, 0, 0,
    503, 0, 504, 0, 0, 0, 0, 0, 505, 0, 0, 0, 506, 0, 0, 0, 507, 0, 0, 0, 508, 0, 509, 0, 510, 0, 511, 0, 0, 0, 0, 0,
    512, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 514, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 516, 0, 0, 0, 0, 517, 0, 518, 0, 519, 0, 520, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 523,
    0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0,
    0, 527, 0, 0, 0, 528, 529, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 531, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 533, 0, 0,
    0, 0, 0, 0, 534, 535, 0, 536, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0,
    539, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 541, 542, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 544, 0, 0, 0, 0, 0, 0,
    545, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 547, 548, 0, 549, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 551, 0, 0, 0, 0, 552,
    0, 0, 0, 553, 0, 0, 0, 554, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 556, 0, 0, 0, 557, 0, 0, 0, 558, 0, 559, 0, 0, 0,
    560, 0, 0, 0, 561, 562, 0, 0, 563, 0, 564, 0, 0, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 567, 0, 0, 568, 0, 569, 570, 0, 0,
    571, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 576, 0, 0, 0, 577, 0, 0,
    578, 0, 0, 579, 0, 580, 581, 0, 0, 582, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 586, 0, 0,
    0, 0, 587, 0, 588, 0, 0, 0, 0, 0, 589, 0, 0, 0, 590, 0, 591, 0, 592, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0,
    0, 594, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 597, 0, 0, 0,
    0, 0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 601, 0, 602, 0, 0, 0, 0, 0, 603, 0, 0, 0, 604, 0, 0, 605, 0, 0, 606, 0, 607, 0, 0, 0, 608, 0, 609, 0,
    0, 0, 0, 0, 0, 610, 0, 0, 0, 611, 0, 0, 612, 0, 0, 0, 0, 613, 0, 0, 614, 0, 615, 0, 0, 0, 0, 0, 616, 0, 0, 0,
    617, 0, 0, 618, 0, 0, 619, 0, 0, 620, 0, 621, 0, 0, 0, 0, 0, 622, 0, 0, 0, 623, 0, 0, 624, 0, 0, 625, 0, 0, 626, 0,
    627, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 629, 0, 630, 0, 631, 0, 0, 632, 0, 0, 0, 0, 0, 0, 633, 0, 634, 0, 0, 0,
    0, 0, 635, 0, 636, 0, 0, 0, 637, 0, 0, 0, 638, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 641, 0, 0, 0, 642,
    0, 643, 0, 644, 0, 0, 0, 645, 0, 0, 0, 646, 647, 0, 0, 648, 0, 0, 0, 0, 649, 0, 0, 0, 650, 0, 0, 651, 0, 0, 0, 0,
    0, 0, 0, 652, 0, 653, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 655, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 658, 0, 659, 0, 0, 0, 0, 0, 660, 0, 661, 0, 0, 0, 0,
    0, 0, 662, 0, 0, 0, 663, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 666, 0, 0, 0, 0, 0,
    667, 0, 0, 0, 668, 0, 0, 0, 669, 0, 0, 0, 670, 0, 0, 671, 0, 0, 672, 0, 0, 0, 673, 0, 674, 0, 0, 0, 0, 0, 675, 0,
    0, 0, 676, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 678, 0, 679, 0, 0, 0, 0, 0, 680, 0, 681, 0, 0, 682, 0, 683,
    0, 0, 684, 0, 0, 0, 0, 0, 685, 0, 686, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 689,
    690, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 692, 0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 694, 0, 695, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 697, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 698, 0, 699, 0, 0, 0, 700, 0, 701, 0, 0, 0, 0, 0, 0, 702, 0, 0, 0, 703, 0, 0, 0, 0, 0,
    0, 0, 0, 704, 0, 0, 0, 0, 0, 705, 0, 0, 0, 706, 0, 0, 0, 707, 0, 0, 708, 0, 709, 0, 0, 710, 711, 0, 0, 0, 0, 0,
    0, 0, 0, 712, 0, 713, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 716, 717, 0, 718, 0, 0, 0, 0,
    0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 721, 0, 0, 722, 0, 0, 723, 724, 0, 0, 0, 0, 0, 0,
    0, 0, 725, 0, 726, 0, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 729, 730, 0, 731, 0, 0, 0, 0, 0,
    0, 732, 0, 0, 0, 733, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 0, 736, 0, 0, 737, 0, 738, 739, 0,
    0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 742, 0, 0, 0, 0, 0, 0, 743, 0, 0, 0, 0, 744, 0, 0, 0, 0, 0,
    0, 745, 746, 0, 747, 0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 751, 752, 0, 0, 0, 753, 0, 0, 0, 0, 0, 0, 754, 0, 0, 0, 755, 0, 0, 0, 756, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 758, 0, 0, 0, 759, 0, 0, 760, 0, 0, 761, 0, 0, 0, 762, 0, 763, 0, 0, 0, 0, 0, 0, 764, 0,
    765, 0, 0, 0, 0, 0, 0, 766, 0, 0, 0, 0, 767, 0, 0, 0, 0, 0, 0, 768, 769, 0, 770, 0, 0, 0, 0, 0, 771, 0, 0, 0,
    0, 0, 772, 0, 0, 0, 0, 773, 0, 774, 0, 775, 776, 0, 0, 0, 0, 0, 0, 0, 0, 777, 0, 778, 0, 0, 0, 0, 0, 0, 779, 0,
    0, 0, 0, 780, 0, 0, 0, 0, 0, 0, 781, 782, 0, 783, 0, 0, 0, 0, 0, 0, 784, 0, 0, 0, 785, 0, 0, 786, 0, 0, 0, 0,
    787, 0, 788, 0, 0, 0, 0, 789, 0, 790, 0, 0, 0, 0, 0, 791, 0, 0, 792, 0, 0, 793, 0, 0, 794, 0, 795, 0, 0, 0, 0, 0,
    0, 796, 0, 0, 0, 797, 0, 0, 0, 798, 0, 0, 0, 0, 0, 0, 799, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 800, 0, 0, 801, 0, 802, 0, 0, 0, 0, 0, 0, 0, 803, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 804, 805, 0, 806, 0, 807, 808, 0, 0, 0, 0, 0, 0, 0, 0, 809, 0, 810, 0, 0, 0, 0, 0, 0, 811, 0,
    0, 0, 0, 812, 0, 0, 0, 0, 0, 0, 813, 814, 0, 815, 0, 0, 0, 0, 0, 816, 0, 0, 0, 817, 0, 818, 0, 819, 0, 0, 0, 0,
    0, 820, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 821, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 822, 0, 823, 0, 0, 0, 824,
    0, 0, 0, 0, 0, 0, 0, 0, 825, 0, 826, 0, 0, 0, 0, 0, 0, 827, 0, 0, 0, 0, 828, 0, 0, 0, 0, 0, 0, 829, 830, 0,
    831, 0, 0, 0, 0, 0, 832, 0, 0, 0, 833, 0, 0, 0, 0, 834, 0, 0, 0, 0, 0, 0, 0, 0, 0, 835, 0, 836, 0, 0, 0, 837,
    0, 0, 0, 0, 0, 0, 0, 0, 838, 0, 839, 0, 0, 0, 0, 0, 0, 840, 0, 0, 0, 0, 841, 0, 0, 0, 0, 0, 0, 842, 843, 0,
    844, 0, 0, 0, 0, 0, 0, 845, 0, 0, 0, 846, 0, 0, 847, 0, 0, 0, 848, 0, 0, 0, 849, 0, 850, 0, 0, 0, 0, 0, 0, 0,
    851, 0, 852, 0, 0, 853, 0, 0, 854, 0, 0, 0, 0, 0, 0, 0, 0, 855, 0, 856, 0, 0, 0, 0, 0, 857, 0, 0, 0, 858, 0, 0,
    0, 859, 860, 0, 0, 861, 0, 862, 0, 0, 863, 864, 0, 0, 0, 0, 0, 0, 865, 866, 0, 0, 0, 0, 0, 0, 0, 0, 867, 0, 868,
};
void recomp_unit_0056_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088E4000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0056[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088E4000;
    case 2u: goto L_088E4008;
    case 3u: goto L_088E4010;
    case 4u: goto L_088E4014;
    case 5u: goto L_088E401C;
    case 6u: goto L_088E4028;
    case 7u: goto L_088E4070;
    case 8u: goto L_088E4174;
    case 9u: goto L_088E4184;
    case 10u: goto L_088E4190;
    case 11u: goto L_088E4198;
    case 12u: goto L_088E41A0;
    case 13u: goto L_088E41A8;
    case 14u: goto L_088E41B0;
    case 15u: goto L_088E41B8;
    case 16u: goto L_088E41C0;
    case 17u: goto L_088E41C8;
    case 18u: goto L_088E41D4;
    case 19u: goto L_088E41DC;
    case 20u: goto L_088E41E4;
    case 21u: goto L_088E41EC;
    case 22u: goto L_088E41F4;
    case 23u: goto L_088E41FC;
    case 24u: goto L_088E4204;
    case 25u: goto L_088E420C;
    case 26u: goto L_088E4214;
    case 27u: goto L_088E421C;
    case 28u: goto L_088E4224;
    case 29u: goto L_088E422C;
    case 30u: goto L_088E4234;
    case 31u: goto L_088E423C;
    case 32u: goto L_088E4244;
    case 33u: goto L_088E4248;
    case 34u: goto L_088E4250;
    case 35u: goto L_088E4260;
    case 36u: goto L_088E4278;
    case 37u: goto L_088E4280;
    case 38u: goto L_088E4288;
    case 39u: goto L_088E4290;
    case 40u: goto L_088E4298;
    case 41u: goto L_088E42A0;
    case 42u: goto L_088E42A8;
    case 43u: goto L_088E42B0;
    case 44u: goto L_088E42B8;
    case 45u: goto L_088E42BC;
    case 46u: goto L_088E42C4;
    case 47u: goto L_088E42EC;
    case 48u: goto L_088E4308;
    case 49u: goto L_088E4320;
    case 50u: goto L_088E4330;
    case 51u: goto L_088E433C;
    case 52u: goto L_088E4344;
    case 53u: goto L_088E4348;
    case 54u: goto L_088E436C;
    case 55u: goto L_088E4374;
    case 56u: goto L_088E4390;
    case 57u: goto L_088E43A4;
    case 58u: goto L_088E43C0;
    case 59u: goto L_088E43C4;
    case 60u: goto L_088E43CC;
    case 61u: goto L_088E43E4;
    case 62u: goto L_088E43F0;
    case 63u: goto L_088E4400;
    case 64u: goto L_088E4408;
    case 65u: goto L_088E4410;
    case 66u: goto L_088E4418;
    case 67u: goto L_088E4420;
    case 68u: goto L_088E4428;
    case 69u: goto L_088E4430;
    case 70u: goto L_088E4438;
    case 71u: goto L_088E443C;
    case 72u: goto L_088E4460;
    case 73u: goto L_088E4468;
    case 74u: goto L_088E4484;
    case 75u: goto L_088E4498;
    case 76u: goto L_088E44B4;
    case 77u: goto L_088E44B8;
    case 78u: goto L_088E44C0;
    case 79u: goto L_088E44DC;
    case 80u: goto L_088E44EC;
    case 81u: goto L_088E44F8;
    case 82u: goto L_088E4508;
    case 83u: goto L_088E4518;
    case 84u: goto L_088E4520;
    case 85u: goto L_088E4538;
    case 86u: goto L_088E4570;
    case 87u: goto L_088E4584;
    case 88u: goto L_088E4598;
    case 89u: goto L_088E459C;
    case 90u: goto L_088E45AC;
    case 91u: goto L_088E45C0;
    case 92u: goto L_088E45C4;
    case 93u: goto L_088E45D4;
    case 94u: goto L_088E45E8;
    case 95u: goto L_088E45EC;
    case 96u: goto L_088E45FC;
    case 97u: goto L_088E4610;
    case 98u: goto L_088E462C;
    case 99u: goto L_088E4630;
    case 100u: goto L_088E4640;
    case 101u: goto L_088E4648;
    case 102u: goto L_088E464C;
    case 103u: goto L_088E4670;
    case 104u: goto L_088E4678;
    case 105u: goto L_088E4694;
    case 106u: goto L_088E46A8;
    case 107u: goto L_088E46C4;
    case 108u: goto L_088E46C8;
    case 109u: goto L_088E46D0;
    case 110u: goto L_088E46E8;
    case 111u: goto L_088E4710;
    case 112u: goto L_088E472C;
    case 113u: goto L_088E473C;
    case 114u: goto L_088E4754;
    case 115u: goto L_088E4760;
    case 116u: goto L_088E4770;
    case 117u: goto L_088E477C;
    case 118u: goto L_088E4784;
    case 119u: goto L_088E47A0;
    case 120u: goto L_088E47DC;
    case 121u: goto L_088E47F8;
    case 122u: goto L_088E4838;
    case 123u: goto L_088E4858;
    case 124u: goto L_088E4868;
    case 125u: goto L_088E4888;
    case 126u: goto L_088E4890;
    case 127u: goto L_088E48A8;
    case 128u: goto L_088E48B4;
    case 129u: goto L_088E48BC;
    case 130u: goto L_088E48C4;
    case 131u: goto L_088E48CC;
    case 132u: goto L_088E48D8;
    case 133u: goto L_088E48E8;
    case 134u: goto L_088E48F0;
    case 135u: goto L_088E490C;
    case 136u: goto L_088E491C;
    case 137u: goto L_088E4928;
    case 138u: goto L_088E494C;
    case 139u: goto L_088E4954;
    case 140u: goto L_088E4974;
    case 141u: goto L_088E497C;
    case 142u: goto L_088E4998;
    case 143u: goto L_088E49A8;
    case 144u: goto L_088E49B8;
    case 145u: goto L_088E49CC;
    case 146u: goto L_088E49DC;
    case 147u: goto L_088E49E4;
    case 148u: goto L_088E4A00;
    case 149u: goto L_088E4A08;
    case 150u: goto L_088E4A14;
    case 151u: goto L_088E4A1C;
    case 152u: goto L_088E4A38;
    case 153u: goto L_088E4A48;
    case 154u: goto L_088E4A64;
    case 155u: goto L_088E4A84;
    case 156u: goto L_088E4A94;
    case 157u: goto L_088E4AE8;
    case 158u: goto L_088E4B10;
    case 159u: goto L_088E4B18;
    case 160u: goto L_088E4B20;
    case 161u: goto L_088E4B28;
    case 162u: goto L_088E4B30;
    case 163u: goto L_088E4B38;
    case 164u: goto L_088E4B50;
    case 165u: goto L_088E4B58;
    case 166u: goto L_088E4B60;
    case 167u: goto L_088E4B68;
    case 168u: goto L_088E4B70;
    case 169u: goto L_088E4B88;
    case 170u: goto L_088E4BAC;
    case 171u: goto L_088E4BCC;
    case 172u: goto L_088E4BDC;
    case 173u: goto L_088E4C30;
    case 174u: goto L_088E4C58;
    case 175u: goto L_088E4C60;
    case 176u: goto L_088E4C78;
    case 177u: goto L_088E4C80;
    case 178u: goto L_088E4C88;
    case 179u: goto L_088E4CB8;
    case 180u: goto L_088E4CC0;
    case 181u: goto L_088E4CD0;
    case 182u: goto L_088E4CD4;
    case 183u: goto L_088E4CF8;
    case 184u: goto L_088E4D00;
    case 185u: goto L_088E4D1C;
    case 186u: goto L_088E4D30;
    case 187u: goto L_088E4D4C;
    case 188u: goto L_088E4D50;
    case 189u: goto L_088E4D58;
    case 190u: goto L_088E4D68;
    case 191u: goto L_088E4D6C;
    case 192u: goto L_088E4D90;
    case 193u: goto L_088E4D98;
    case 194u: goto L_088E4DB4;
    case 195u: goto L_088E4DC8;
    case 196u: goto L_088E4DE4;
    case 197u: goto L_088E4DE8;
    case 198u: goto L_088E4DF0;
    case 199u: goto L_088E4E08;
    case 200u: goto L_088E4E20;
    case 201u: goto L_088E4E28;
    case 202u: goto L_088E4E44;
    case 203u: goto L_088E4E54;
    case 204u: goto L_088E4E60;
    case 205u: goto L_088E4E78;
    case 206u: goto L_088E4E8C;
    case 207u: goto L_088E4E94;
    case 208u: goto L_088E4EB0;
    case 209u: goto L_088E4EE0;
    case 210u: goto L_088E4EEC;
    case 211u: goto L_088E4EF0;
    case 212u: goto L_088E4EF8;
    case 213u: goto L_088E4F14;
    case 214u: goto L_088E4F44;
    case 215u: goto L_088E4F50;
    case 216u: goto L_088E4F54;
    case 217u: goto L_088E4F5C;
    case 218u: goto L_088E4F64;
    case 219u: goto L_088E4F7C;
    case 220u: goto L_088E4F8C;
    case 221u: goto L_088E4FA4;
    case 222u: goto L_088E4FBC;
    case 223u: goto L_088E4FC4;
    case 224u: goto L_088E4FCC;
    case 225u: goto L_088E5000;
    case 226u: goto L_088E5008;
    case 227u: goto L_088E5020;
    case 228u: goto L_088E5040;
    case 229u: goto L_088E5048;
    case 230u: goto L_088E5050;
    case 231u: goto L_088E5090;
    case 232u: goto L_088E5098;
    case 233u: goto L_088E50A0;
    case 234u: goto L_088E50BC;
    case 235u: goto L_088E50CC;
    case 236u: goto L_088E50D8;
    case 237u: goto L_088E50E8;
    case 238u: goto L_088E50F8;
    case 239u: goto L_088E5100;
    case 240u: goto L_088E5118;
    case 241u: goto L_088E514C;
    case 242u: goto L_088E5178;
    case 243u: goto L_088E5198;
    case 244u: goto L_088E51A8;
    case 245u: goto L_088E51B8;
    case 246u: goto L_088E51C0;
    case 247u: goto L_088E51DC;
    case 248u: goto L_088E51EC;
    case 249u: goto L_088E51FC;
    case 250u: goto L_088E5208;
    case 251u: goto L_088E5210;
    case 252u: goto L_088E5228;
    case 253u: goto L_088E5238;
    case 254u: goto L_088E5240;
    case 255u: goto L_088E5258;
    case 256u: goto L_088E5268;
    case 257u: goto L_088E5270;
    case 258u: goto L_088E5274;
    case 259u: goto L_088E527C;
    case 260u: goto L_088E5284;
    case 261u: goto L_088E52A4;
    case 262u: goto L_088E52AC;
    case 263u: goto L_088E52C8;
    case 264u: goto L_088E52D8;
    case 265u: goto L_088E52F0;
    case 266u: goto L_088E52F8;
    case 267u: goto L_088E52FC;
    case 268u: goto L_088E5320;
    case 269u: goto L_088E5328;
    case 270u: goto L_088E5344;
    case 271u: goto L_088E5358;
    case 272u: goto L_088E5374;
    case 273u: goto L_088E5378;
    case 274u: goto L_088E5380;
    case 275u: goto L_088E539C;
    case 276u: goto L_088E53AC;
    case 277u: goto L_088E53BC;
    case 278u: goto L_088E53C4;
    case 279u: goto L_088E53C8;
    case 280u: goto L_088E53D0;
    case 281u: goto L_088E53EC;
    case 282u: goto L_088E53F4;
    case 283u: goto L_088E5410;
    case 284u: goto L_088E5424;
    case 285u: goto L_088E5440;
    case 286u: goto L_088E5444;
    case 287u: goto L_088E544C;
    case 288u: goto L_088E5468;
    case 289u: goto L_088E5494;
    case 290u: goto L_088E549C;
    case 291u: goto L_088E54B8;
    case 292u: goto L_088E54DC;
    case 293u: goto L_088E54E8;
    case 294u: goto L_088E54F8;
    case 295u: goto L_088E5504;
    case 296u: goto L_088E5514;
    case 297u: goto L_088E5520;
    case 298u: goto L_088E554C;
    case 299u: goto L_088E5554;
    case 300u: goto L_088E5570;
    case 301u: goto L_088E5580;
    case 302u: goto L_088E558C;
    case 303u: goto L_088E559C;
    case 304u: goto L_088E55AC;
    case 305u: goto L_088E55B4;
    case 306u: goto L_088E55D0;
    case 307u: goto L_088E55F4;
    case 308u: goto L_088E5600;
    case 309u: goto L_088E5610;
    case 310u: goto L_088E561C;
    case 311u: goto L_088E562C;
    case 312u: goto L_088E5638;
    case 313u: goto L_088E5640;
    case 314u: goto L_088E5648;
    case 315u: goto L_088E5660;
    case 316u: goto L_088E5670;
    case 317u: goto L_088E5680;
    case 318u: goto L_088E5688;
    case 319u: goto L_088E5694;
    case 320u: goto L_088E569C;
    case 321u: goto L_088E56B8;
    case 322u: goto L_088E56F0;
    case 323u: goto L_088E56F8;
    case 324u: goto L_088E5714;
    case 325u: goto L_088E5720;
    case 326u: goto L_088E5728;
    case 327u: goto L_088E5744;
    case 328u: goto L_088E5750;
    case 329u: goto L_088E5758;
    case 330u: goto L_088E5774;
    case 331u: goto L_088E5784;
    case 332u: goto L_088E5798;
    case 333u: goto L_088E57A4;
    case 334u: goto L_088E57BC;
    case 335u: goto L_088E57C4;
    case 336u: goto L_088E57DC;
    case 337u: goto L_088E57E4;
    case 338u: goto L_088E5800;
    case 339u: goto L_088E5810;
    case 340u: goto L_088E5828;
    case 341u: goto L_088E5848;
    case 342u: goto L_088E584C;
    case 343u: goto L_088E5870;
    case 344u: goto L_088E5878;
    case 345u: goto L_088E5894;
    case 346u: goto L_088E58A8;
    case 347u: goto L_088E58C4;
    case 348u: goto L_088E58C8;
    case 349u: goto L_088E58D0;
    case 350u: goto L_088E58F0;
    case 351u: goto L_088E5900;
    case 352u: goto L_088E5920;
    case 353u: goto L_088E5934;
    case 354u: goto L_088E593C;
    case 355u: goto L_088E5958;
    case 356u: goto L_088E5968;
    case 357u: goto L_088E5974;
    case 358u: goto L_088E5988;
    case 359u: goto L_088E599C;
    case 360u: goto L_088E59A4;
    case 361u: goto L_088E59BC;
    case 362u: goto L_088E59C4;
    case 363u: goto L_088E59CC;
    case 364u: goto L_088E59D4;
    case 365u: goto L_088E59DC;
    case 366u: goto L_088E59E4;
    case 367u: goto L_088E59EC;
    case 368u: goto L_088E59F0;
    case 369u: goto L_088E5A14;
    case 370u: goto L_088E5A1C;
    case 371u: goto L_088E5A38;
    case 372u: goto L_088E5A4C;
    case 373u: goto L_088E5A68;
    case 374u: goto L_088E5A6C;
    case 375u: goto L_088E5A74;
    case 376u: goto L_088E5A90;
    case 377u: goto L_088E5AEC;
    case 378u: goto L_088E5AF4;
    case 379u: goto L_088E5B0C;
    case 380u: goto L_088E5B18;
    case 381u: goto L_088E5B2C;
    case 382u: goto L_088E5B3C;
    case 383u: goto L_088E5B44;
    case 384u: goto L_088E5B58;
    case 385u: goto L_088E5B6C;
    case 386u: goto L_088E5B74;
    case 387u: goto L_088E5B84;
    case 388u: goto L_088E5B90;
    case 389u: goto L_088E5B98;
    case 390u: goto L_088E5BB4;
    case 391u: goto L_088E5BC4;
    case 392u: goto L_088E5BDC;
    case 393u: goto L_088E5BE4;
    case 394u: goto L_088E5C00;
    case 395u: goto L_088E5C34;
    case 396u: goto L_088E5C48;
    case 397u: goto L_088E5C5C;
    case 398u: goto L_088E5C6C;
    case 399u: goto L_088E5C74;
    case 400u: goto L_088E5C7C;
    case 401u: goto L_088E5C80;
    case 402u: goto L_088E5CA4;
    case 403u: goto L_088E5CAC;
    case 404u: goto L_088E5CC8;
    case 405u: goto L_088E5CDC;
    case 406u: goto L_088E5CF8;
    case 407u: goto L_088E5CFC;
    case 408u: goto L_088E5D04;
    case 409u: goto L_088E5D1C;
    case 410u: goto L_088E5D54;
    case 411u: goto L_088E5D68;
    case 412u: goto L_088E5D6C;
    case 413u: goto L_088E5D7C;
    case 414u: goto L_088E5D90;
    case 415u: goto L_088E5D98;
    case 416u: goto L_088E5D9C;
    case 417u: goto L_088E5DC0;
    case 418u: goto L_088E5DC8;
    case 419u: goto L_088E5DE4;
    case 420u: goto L_088E5DF8;
    case 421u: goto L_088E5E14;
    case 422u: goto L_088E5E18;
    case 423u: goto L_088E5E20;
    case 424u: goto L_088E5E60;
    case 425u: goto L_088E5E64;
    case 426u: goto L_088E5E88;
    case 427u: goto L_088E5E90;
    case 428u: goto L_088E5EAC;
    case 429u: goto L_088E5EC0;
    case 430u: goto L_088E5EDC;
    case 431u: goto L_088E5EE0;
    case 432u: goto L_088E5EE8;
    case 433u: goto L_088E5F04;
    case 434u: goto L_088E5F14;
    case 435u: goto L_088E5F20;
    case 436u: goto L_088E5F34;
    case 437u: goto L_088E5F40;
    case 438u: goto L_088E5F48;
    case 439u: goto L_088E5F64;
    case 440u: goto L_088E5F74;
    case 441u: goto L_088E5F88;
    case 442u: goto L_088E5F98;
    case 443u: goto L_088E5FA8;
    case 444u: goto L_088E5FB4;
    case 445u: goto L_088E5FBC;
    case 446u: goto L_088E5FC4;
    case 447u: goto L_088E5FC8;
    case 448u: goto L_088E5FEC;
    case 449u: goto L_088E5FF4;
    case 450u: goto L_088E6010;
    case 451u: goto L_088E6024;
    case 452u: goto L_088E6040;
    case 453u: goto L_088E6044;
    case 454u: goto L_088E604C;
    case 455u: goto L_088E6064;
    case 456u: goto L_088E6074;
    case 457u: goto L_088E6088;
    case 458u: goto L_088E6098;
    case 459u: goto L_088E60A0;
    case 460u: goto L_088E60A4;
    case 461u: goto L_088E60C8;
    case 462u: goto L_088E60D0;
    case 463u: goto L_088E60EC;
    case 464u: goto L_088E6100;
    case 465u: goto L_088E611C;
    case 466u: goto L_088E6120;
    case 467u: goto L_088E6128;
    case 468u: goto L_088E6140;
    case 469u: goto L_088E6174;
    case 470u: goto L_088E6188;
    case 471u: goto L_088E619C;
    case 472u: goto L_088E61A0;
    case 473u: goto L_088E61C4;
    case 474u: goto L_088E61CC;
    case 475u: goto L_088E61E8;
    case 476u: goto L_088E61FC;
    case 477u: goto L_088E6218;
    case 478u: goto L_088E621C;
    case 479u: goto L_088E6224;
    case 480u: goto L_088E623C;
    case 481u: goto L_088E624C;
    case 482u: goto L_088E625C;
    case 483u: goto L_088E626C;
    case 484u: goto L_088E627C;
    case 485u: goto L_088E6280;
    case 486u: goto L_088E62A4;
    case 487u: goto L_088E62AC;
    case 488u: goto L_088E62C8;
    case 489u: goto L_088E62DC;
    case 490u: goto L_088E62F8;
    case 491u: goto L_088E62FC;
    case 492u: goto L_088E6304;
    case 493u: goto L_088E6308;
    case 494u: goto L_088E6324;
    case 495u: goto L_088E635C;
    case 496u: goto L_088E6378;
    case 497u: goto L_088E6394;
    case 498u: goto L_088E63A4;
    case 499u: goto L_088E63B8;
    case 500u: goto L_088E63C8;
    case 501u: goto L_088E63D8;
    case 502u: goto L_088E63EC;
    case 503u: goto L_088E6400;
    case 504u: goto L_088E6408;
    case 505u: goto L_088E6420;
    case 506u: goto L_088E6430;
    case 507u: goto L_088E6440;
    case 508u: goto L_088E6450;
    case 509u: goto L_088E6458;
    case 510u: goto L_088E6460;
    case 511u: goto L_088E6468;
    case 512u: goto L_088E6480;
    case 513u: goto L_088E649C;
    case 514u: goto L_088E64AC;
    case 515u: goto L_088E64B8;
    case 516u: goto L_088E6508;
    case 517u: goto L_088E651C;
    case 518u: goto L_088E6524;
    case 519u: goto L_088E652C;
    case 520u: goto L_088E6534;
    case 521u: goto L_088E653C;
    case 522u: goto L_088E6574;
    case 523u: goto L_088E657C;
    case 524u: goto L_088E6598;
    case 525u: goto L_088E65CC;
    case 526u: goto L_088E65E0;
    case 527u: goto L_088E6604;
    case 528u: goto L_088E6614;
    case 529u: goto L_088E6618;
    case 530u: goto L_088E663C;
    case 531u: goto L_088E6644;
    case 532u: goto L_088E6660;
    case 533u: goto L_088E6674;
    case 534u: goto L_088E6690;
    case 535u: goto L_088E6694;
    case 536u: goto L_088E669C;
    case 537u: goto L_088E66B8;
    case 538u: goto L_088E66EC;
    case 539u: goto L_088E6700;
    case 540u: goto L_088E6724;
    case 541u: goto L_088E6734;
    case 542u: goto L_088E6738;
    case 543u: goto L_088E675C;
    case 544u: goto L_088E6764;
    case 545u: goto L_088E6780;
    case 546u: goto L_088E6794;
    case 547u: goto L_088E67B0;
    case 548u: goto L_088E67B4;
    case 549u: goto L_088E67BC;
    case 550u: goto L_088E67D8;
    case 551u: goto L_088E67E8;
    case 552u: goto L_088E67FC;
    case 553u: goto L_088E680C;
    case 554u: goto L_088E681C;
    case 555u: goto L_088E6830;
    case 556u: goto L_088E6848;
    case 557u: goto L_088E6858;
    case 558u: goto L_088E6868;
    case 559u: goto L_088E6870;
    case 560u: goto L_088E6880;
    case 561u: goto L_088E6890;
    case 562u: goto L_088E6894;
    case 563u: goto L_088E68A0;
    case 564u: goto L_088E68A8;
    case 565u: goto L_088E68C0;
    case 566u: goto L_088E68D0;
    case 567u: goto L_088E68DC;
    case 568u: goto L_088E68E8;
    case 569u: goto L_088E68F0;
    case 570u: goto L_088E68F4;
    case 571u: goto L_088E6900;
    case 572u: goto L_088E6918;
    case 573u: goto L_088E6978;
    case 574u: goto L_088E69B8;
    case 575u: goto L_088E69CC;
    case 576u: goto L_088E69E4;
    case 577u: goto L_088E69F4;
    case 578u: goto L_088E6A00;
    case 579u: goto L_088E6A0C;
    case 580u: goto L_088E6A14;
    case 581u: goto L_088E6A18;
    case 582u: goto L_088E6A24;
    case 583u: goto L_088E6A3C;
    case 584u: goto L_088E6AA0;
    case 585u: goto L_088E6AE0;
    case 586u: goto L_088E6AF4;
    case 587u: goto L_088E6B08;
    case 588u: goto L_088E6B10;
    case 589u: goto L_088E6B28;
    case 590u: goto L_088E6B38;
    case 591u: goto L_088E6B40;
    case 592u: goto L_088E6B48;
    case 593u: goto L_088E6B64;
    case 594u: goto L_088E6B84;
    case 595u: goto L_088E6B8C;
    case 596u: goto L_088E6BE8;
    case 597u: goto L_088E6BF0;
    case 598u: goto L_088E6C0C;
    case 599u: goto L_088E6C1C;
    case 600u: goto L_088E6C30;
    case 601u: goto L_088E6C90;
    case 602u: goto L_088E6C98;
    case 603u: goto L_088E6CB0;
    case 604u: goto L_088E6CC0;
    case 605u: goto L_088E6CCC;
    case 606u: goto L_088E6CD8;
    case 607u: goto L_088E6CE0;
    case 608u: goto L_088E6CF0;
    case 609u: goto L_088E6CF8;
    case 610u: goto L_088E6D14;
    case 611u: goto L_088E6D24;
    case 612u: goto L_088E6D30;
    case 613u: goto L_088E6D44;
    case 614u: goto L_088E6D50;
    case 615u: goto L_088E6D58;
    case 616u: goto L_088E6D70;
    case 617u: goto L_088E6D80;
    case 618u: goto L_088E6D8C;
    case 619u: goto L_088E6D98;
    case 620u: goto L_088E6DA4;
    case 621u: goto L_088E6DAC;
    case 622u: goto L_088E6DC4;
    case 623u: goto L_088E6DD4;
    case 624u: goto L_088E6DE0;
    case 625u: goto L_088E6DEC;
    case 626u: goto L_088E6DF8;
    case 627u: goto L_088E6E00;
    case 628u: goto L_088E6E18;
    case 629u: goto L_088E6E30;
    case 630u: goto L_088E6E38;
    case 631u: goto L_088E6E40;
    case 632u: goto L_088E6E4C;
    case 633u: goto L_088E6E68;
    case 634u: goto L_088E6E70;
    case 635u: goto L_088E6E88;
    case 636u: goto L_088E6E90;
    case 637u: goto L_088E6EA0;
    case 638u: goto L_088E6EB0;
    case 639u: goto L_088E6EC0;
    case 640u: goto L_088E6EE4;
    case 641u: goto L_088E6EEC;
    case 642u: goto L_088E6EFC;
    case 643u: goto L_088E6F04;
    case 644u: goto L_088E6F0C;
    case 645u: goto L_088E6F1C;
    case 646u: goto L_088E6F2C;
    case 647u: goto L_088E6F30;
    case 648u: goto L_088E6F3C;
    case 649u: goto L_088E6F50;
    case 650u: goto L_088E6F60;
    case 651u: goto L_088E6F6C;
    case 652u: goto L_088E6F8C;
    case 653u: goto L_088E6F94;
    case 654u: goto L_088E6FB4;
    case 655u: goto L_088E6FCC;
    case 656u: goto L_088E6FDC;
    case 657u: goto L_088E7030;
    case 658u: goto L_088E7044;
    case 659u: goto L_088E704C;
    case 660u: goto L_088E7064;
    case 661u: goto L_088E706C;
    case 662u: goto L_088E7088;
    case 663u: goto L_088E7098;
    case 664u: goto L_088E70AC;
    case 665u: goto L_088E70E0;
    case 666u: goto L_088E70E8;
    case 667u: goto L_088E7100;
    case 668u: goto L_088E7110;
    case 669u: goto L_088E7120;
    case 670u: goto L_088E7130;
    case 671u: goto L_088E713C;
    case 672u: goto L_088E7148;
    case 673u: goto L_088E7158;
    case 674u: goto L_088E7160;
    case 675u: goto L_088E7178;
    case 676u: goto L_088E7188;
    case 677u: goto L_088E71A0;
    case 678u: goto L_088E71C0;
    case 679u: goto L_088E71C8;
    case 680u: goto L_088E71E0;
    case 681u: goto L_088E71E8;
    case 682u: goto L_088E71F4;
    case 683u: goto L_088E71FC;
    case 684u: goto L_088E7208;
    case 685u: goto L_088E7220;
    case 686u: goto L_088E7228;
    case 687u: goto L_088E7244;
    case 688u: goto L_088E7270;
    case 689u: goto L_088E727C;
    case 690u: goto L_088E7280;
    case 691u: goto L_088E72C0;
    case 692u: goto L_088E72C8;
    case 693u: goto L_088E72E4;
    case 694u: goto L_088E733C;
    case 695u: goto L_088E7344;
    case 696u: goto L_088E7360;
    case 697u: goto L_088E7370;
    case 698u: goto L_088E739C;
    case 699u: goto L_088E73A4;
    case 700u: goto L_088E73B4;
    case 701u: goto L_088E73BC;
    case 702u: goto L_088E73D8;
    case 703u: goto L_088E73E8;
    case 704u: goto L_088E740C;
    case 705u: goto L_088E7424;
    case 706u: goto L_088E7434;
    case 707u: goto L_088E7444;
    case 708u: goto L_088E7450;
    case 709u: goto L_088E7458;
    case 710u: goto L_088E7464;
    case 711u: goto L_088E7468;
    case 712u: goto L_088E748C;
    case 713u: goto L_088E7494;
    case 714u: goto L_088E74B0;
    case 715u: goto L_088E74C4;
    case 716u: goto L_088E74E0;
    case 717u: goto L_088E74E4;
    case 718u: goto L_088E74EC;
    case 719u: goto L_088E7504;
    case 720u: goto L_088E7538;
    case 721u: goto L_088E7548;
    case 722u: goto L_088E7554;
    case 723u: goto L_088E7560;
    case 724u: goto L_088E7564;
    case 725u: goto L_088E7588;
    case 726u: goto L_088E7590;
    case 727u: goto L_088E75AC;
    case 728u: goto L_088E75C0;
    case 729u: goto L_088E75DC;
    case 730u: goto L_088E75E0;
    case 731u: goto L_088E75E8;
    case 732u: goto L_088E7604;
    case 733u: goto L_088E7614;
    case 734u: goto L_088E7630;
    case 735u: goto L_088E7654;
    case 736u: goto L_088E7660;
    case 737u: goto L_088E766C;
    case 738u: goto L_088E7674;
    case 739u: goto L_088E7678;
    case 740u: goto L_088E768C;
    case 741u: goto L_088E76B0;
    case 742u: goto L_088E76B8;
    case 743u: goto L_088E76D4;
    case 744u: goto L_088E76E8;
    case 745u: goto L_088E7704;
    case 746u: goto L_088E7708;
    case 747u: goto L_088E7710;
    case 748u: goto L_088E7728;
    case 749u: goto L_088E7744;
    case 750u: goto L_088E775C;
    case 751u: goto L_088E7784;
    case 752u: goto L_088E7788;
    case 753u: goto L_088E7798;
    case 754u: goto L_088E77B4;
    case 755u: goto L_088E77C4;
    case 756u: goto L_088E77D4;
    case 757u: goto L_088E77EC;
    case 758u: goto L_088E781C;
    case 759u: goto L_088E782C;
    case 760u: goto L_088E7838;
    case 761u: goto L_088E7844;
    case 762u: goto L_088E7854;
    case 763u: goto L_088E785C;
    case 764u: goto L_088E7878;
    case 765u: goto L_088E7880;
    case 766u: goto L_088E789C;
    case 767u: goto L_088E78B0;
    case 768u: goto L_088E78CC;
    case 769u: goto L_088E78D0;
    case 770u: goto L_088E78D8;
    case 771u: goto L_088E78F0;
    case 772u: goto L_088E7908;
    case 773u: goto L_088E791C;
    case 774u: goto L_088E7924;
    case 775u: goto L_088E792C;
    case 776u: goto L_088E7930;
    case 777u: goto L_088E7954;
    case 778u: goto L_088E795C;
    case 779u: goto L_088E7978;
    case 780u: goto L_088E798C;
    case 781u: goto L_088E79A8;
    case 782u: goto L_088E79AC;
    case 783u: goto L_088E79B4;
    case 784u: goto L_088E79D0;
    case 785u: goto L_088E79E0;
    case 786u: goto L_088E79EC;
    case 787u: goto L_088E7A00;
    case 788u: goto L_088E7A08;
    case 789u: goto L_088E7A1C;
    case 790u: goto L_088E7A24;
    case 791u: goto L_088E7A3C;
    case 792u: goto L_088E7A48;
    case 793u: goto L_088E7A54;
    case 794u: goto L_088E7A60;
    case 795u: goto L_088E7A68;
    case 796u: goto L_088E7A84;
    case 797u: goto L_088E7A94;
    case 798u: goto L_088E7AA4;
    case 799u: goto L_088E7AC0;
    case 800u: goto L_088E7B04;
    case 801u: goto L_088E7B10;
    case 802u: goto L_088E7B18;
    case 803u: goto L_088E7B38;
    case 804u: goto L_088E7B98;
    case 805u: goto L_088E7B9C;
    case 806u: goto L_088E7BA4;
    case 807u: goto L_088E7BAC;
    case 808u: goto L_088E7BB0;
    case 809u: goto L_088E7BD4;
    case 810u: goto L_088E7BDC;
    case 811u: goto L_088E7BF8;
    case 812u: goto L_088E7C0C;
    case 813u: goto L_088E7C28;
    case 814u: goto L_088E7C2C;
    case 815u: goto L_088E7C34;
    case 816u: goto L_088E7C4C;
    case 817u: goto L_088E7C5C;
    case 818u: goto L_088E7C64;
    case 819u: goto L_088E7C6C;
    case 820u: goto L_088E7C84;
    case 821u: goto L_088E7CB8;
    case 822u: goto L_088E7CE4;
    case 823u: goto L_088E7CEC;
    case 824u: goto L_088E7CFC;
    case 825u: goto L_088E7D20;
    case 826u: goto L_088E7D28;
    case 827u: goto L_088E7D44;
    case 828u: goto L_088E7D58;
    case 829u: goto L_088E7D74;
    case 830u: goto L_088E7D78;
    case 831u: goto L_088E7D80;
    case 832u: goto L_088E7D98;
    case 833u: goto L_088E7DA8;
    case 834u: goto L_088E7DBC;
    case 835u: goto L_088E7DE4;
    case 836u: goto L_088E7DEC;
    case 837u: goto L_088E7DFC;
    case 838u: goto L_088E7E20;
    case 839u: goto L_088E7E28;
    case 840u: goto L_088E7E44;
    case 841u: goto L_088E7E58;
    case 842u: goto L_088E7E74;
    case 843u: goto L_088E7E78;
    case 844u: goto L_088E7E80;
    case 845u: goto L_088E7E9C;
    case 846u: goto L_088E7EAC;
    case 847u: goto L_088E7EB8;
    case 848u: goto L_088E7EC8;
    case 849u: goto L_088E7ED8;
    case 850u: goto L_088E7EE0;
    case 851u: goto L_088E7F00;
    case 852u: goto L_088E7F08;
    case 853u: goto L_088E7F14;
    case 854u: goto L_088E7F20;
    case 855u: goto L_088E7F44;
    case 856u: goto L_088E7F4C;
    case 857u: goto L_088E7F64;
    case 858u: goto L_088E7F74;
    case 859u: goto L_088E7F84;
    case 860u: goto L_088E7F88;
    case 861u: goto L_088E7F94;
    case 862u: goto L_088E7F9C;
    case 863u: goto L_088E7FA8;
    case 864u: goto L_088E7FAC;
    case 865u: goto L_088E7FC8;
    case 866u: goto L_088E7FCC;
    case 867u: goto L_088E7FF0;
    case 868u: goto L_088E7FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088E4000:
    ctx.gpr[31] = (0x088E4008u);
    ctx.gpr[6] = (0u | 102u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4008u) goto L_088E4008;
    return;
L_088E4008:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4014;
      }
      goto L_088E4010;
    }
L_088E4010:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088E4014;
L_088E4014:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4028;
      }
      goto L_088E401C;
    }
L_088E401C:
    ctx.gpr[4] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088E4028;
L_088E4028:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E4070:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21100)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21096)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21124)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[14] = (2227u << 16u);
    ctx.gpr[13] = (2227u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(21104), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[2] = (2274u << 16u);
    ctx.gpr[15] = (2227u << 16u);
    ctx.gpr[24] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(19296));
    ctx.gpr[10] = (16179u << 16u);
    ctx.gpr[9] = (ctx.gpr[10] | 13107u);
    ctx.gpr[3] = (49024u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[11] = (15948u << 16u);
    ctx.gpr[10] = (ctx.gpr[11] | 52429u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(21112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[12] = (16128u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(21108), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(21116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(19296), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(21120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(21128), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E4174:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 97 ? 1u : 0u);
      if (branch_taken) {
          goto L_088E41C0;
      }
      goto L_088E4184;
    }
L_088E4184:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
        goto L_088E41B0;
    }
    goto L_088E4190;
L_088E4190:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088E41A0;
      }
      goto L_088E4198;
    }
L_088E4198:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E41A8;
      }
      goto L_088E41A0;
    }
L_088E41A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E4248;
      }
      goto L_088E41A8;
    }
L_088E41A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088E4248;
      }
      goto L_088E41B0;
    }
L_088E41B0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E41EC;
      }
      goto L_088E41B8;
    }
L_088E41B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4204;
      }
      goto L_088E41C0;
    }
L_088E41C0:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 105 ? 1u : 0u);
        goto L_088E41DC;
    }
    goto L_088E41C8;
L_088E41C8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E41A0;
      }
      goto L_088E41D4;
    }
L_088E41D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E421C;
      }
      goto L_088E41DC;
    }
L_088E41DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E41A0;
      }
      goto L_088E41E4;
    }
L_088E41E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4234;
      }
      goto L_088E41EC;
    }
L_088E41EC:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E41FC;
      }
      goto L_088E41F4;
    }
L_088E41F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E41A0;
      }
      goto L_088E41FC;
    }
L_088E41FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088E4248;
      }
      goto L_088E4204;
    }
L_088E4204:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E4214;
      }
      goto L_088E420C;
    }
L_088E420C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E41A0;
      }
      goto L_088E4214;
    }
L_088E4214:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088E4248;
      }
      goto L_088E421C;
    }
L_088E421C:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E422C;
      }
      goto L_088E4224;
    }
L_088E4224:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E41A0;
      }
      goto L_088E422C;
    }
L_088E422C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088E4248;
      }
      goto L_088E4234;
    }
L_088E4234:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E4244;
      }
      goto L_088E423C;
    }
L_088E423C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E41A0;
      }
      goto L_088E4244;
    }
L_088E4244:
    ctx.gpr[2] = (0u | 1u);
    goto L_088E4248;
L_088E4248:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E4250:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4280;
      }
      goto L_088E4260;
    }
L_088E4260:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(14456)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E4278:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E4288;
      }
      goto L_088E4280;
    }
L_088E4280:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E42BC;
      }
      goto L_088E4288;
    }
L_088E4288:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088E42BC;
      }
      goto L_088E4290;
    }
L_088E4290:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E42A0;
      }
      goto L_088E4298;
    }
L_088E4298:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4280;
      }
      goto L_088E42A0;
    }
L_088E42A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088E42BC;
      }
      goto L_088E42A8;
    }
L_088E42A8:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E42B8;
      }
      goto L_088E42B0;
    }
L_088E42B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4280;
      }
      goto L_088E42B8;
    }
L_088E42B8:
    ctx.gpr[2] = (0u | 1u);
    goto L_088E42BC;
L_088E42BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E42C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1006));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(99) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088E6304;
      }
      goto L_088E42EC;
    }
L_088E42EC:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1006));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(14528)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E4308:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E4320u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4320u) goto L_088E4320;
    return;
L_088E4320:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E4330u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x088E4330u) goto L_088E4330;
    return;
L_088E4330:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088E433Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x088E433Cu) goto L_088E433C;
    return;
L_088E433C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4348;
      }
      goto L_088E4344;
    }
L_088E4344:
    ctx.gpr[17] = (0u | 1u);
    goto L_088E4348;
L_088E4348:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E4374;
      }
      goto L_088E436C;
    }
L_088E436C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_088E43C4;
      }
      goto L_088E4374;
    }
L_088E4374:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E43A4;
    }
    goto L_088E4390;
L_088E4390:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E43C4;
      }
      goto L_088E43A4;
    }
L_088E43A4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E43C4;
      }
      goto L_088E43C0;
    }
L_088E43C0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E43C4;
L_088E43C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E43CC;
    }
L_088E43CC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E43E4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E43E4u) goto L_088E43E4;
    return;
L_088E43E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4400;
      }
      goto L_088E43F0;
    }
L_088E43F0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-17407), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E4408;
      }
      goto L_088E4400;
    }
L_088E4400:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-17407), static_cast<std::uint8_t>(0u));
    goto L_088E4408;
L_088E4408:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E4410;
    }
L_088E4410:
    ctx.gpr[31] = (0x088E4418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 278u, 0x088799B8u>(ctx, &aot_mem) && ctx.pc == 0x088E4418u) goto L_088E4418;
    return;
L_088E4418:
    ctx.gpr[31] = (0x088E4420u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 492u, 0x08986F48u>(ctx, &aot_mem) && ctx.pc == 0x088E4420u) goto L_088E4420;
    return;
L_088E4420:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E4428;
    }
L_088E4428:
    ctx.gpr[31] = (0x088E4430u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 467u, 0x0897AF68u>(ctx, &aot_mem) && ctx.pc == 0x088E4430u) goto L_088E4430;
    return;
L_088E4430:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E443C;
      }
      goto L_088E4438;
    }
L_088E4438:
    ctx.gpr[17] = (0u | 1u);
    goto L_088E443C;
L_088E443C:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E4468;
      }
      goto L_088E4460;
    }
L_088E4460:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_088E44B8;
      }
      goto L_088E4468;
    }
L_088E4468:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E4498;
    }
    goto L_088E4484;
L_088E4484:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E44B8;
      }
      goto L_088E4498;
    }
L_088E4498:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E44B8;
      }
      goto L_088E44B4;
    }
L_088E44B4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E44B8;
L_088E44B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E44C0;
    }
L_088E44C0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E44DCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E44DCu) goto L_088E44DC;
    return;
L_088E44DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E44ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x088E44ECu) goto L_088E44EC;
    return;
L_088E44EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E4508;
      }
      goto L_088E44F8;
    }
L_088E44F8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1510))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1510), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E4518;
      }
      goto L_088E4508;
    }
L_088E4508:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1510))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1510), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088E4518;
L_088E4518:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E4520;
    }
L_088E4520:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E4538u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4538u) goto L_088E4538;
    return;
L_088E4538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_088E459C;
    }
    goto L_088E4570;
L_088E4570:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 38 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_088E459C;
    }
    goto L_088E4584;
L_088E4584:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 36u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(844)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_088E4630;
    }
    goto L_088E4598;
L_088E4598:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088E459C;
L_088E459C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 41 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_088E45C4;
    }
    goto L_088E45AC;
L_088E45AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 46 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_088E4630;
    }
    goto L_088E45C0;
L_088E45C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088E45C4;
L_088E45C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 47 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_088E45EC;
    }
    goto L_088E45D4;
L_088E45D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 63 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_088E4630;
    }
    goto L_088E45E8;
L_088E45E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088E45EC;
L_088E45EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_088E4630;
    }
    goto L_088E45FC;
L_088E45FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_088E4630;
    }
    goto L_088E4610;
L_088E4610:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1208)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E4640;
      }
      goto L_088E462C;
    }
L_088E462C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088E4630;
L_088E4630:
    ctx.gpr[5] = (0u | 50u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E4648;
      }
      goto L_088E4640;
    }
L_088E4640:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088E464C;
      }
      goto L_088E4648;
    }
L_088E4648:
    ctx.gpr[4] = (0u | 0u);
    goto L_088E464C;
L_088E464C:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E4678;
      }
      goto L_088E4670;
    }
L_088E4670:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E46C8;
      }
      goto L_088E4678;
    }
L_088E4678:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E46A8;
    }
    goto L_088E4694;
L_088E4694:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E46C8;
      }
      goto L_088E46A8;
    }
L_088E46A8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E46C8;
      }
      goto L_088E46C4;
    }
L_088E46C4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E46C8;
L_088E46C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E46D0;
    }
L_088E46D0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E46E8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E46E8u) goto L_088E46E8;
    return;
L_088E46E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[31] = (0x088E4710u);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x088E4710u) goto L_088E4710;
    return;
L_088E4710:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E472Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 267u, 0x089D9220u>(ctx, &aot_mem) && ctx.pc == 0x088E472Cu) goto L_088E472C;
    return;
L_088E472C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(680), static_cast<std::uint8_t>(ctx.gpr[17]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E473C;
    }
L_088E473C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E4754u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4754u) goto L_088E4754;
    return;
L_088E4754:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4770;
      }
      goto L_088E4760;
    }
L_088E4760:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7135), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E477C;
      }
      goto L_088E4770;
    }
L_088E4770:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7135), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088E477C;
L_088E477C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E4784;
    }
L_088E4784:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E47A0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E47A0u) goto L_088E47A0;
    return;
L_088E47A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11740)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.gpr[2] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E47DC;
    }
L_088E47DC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E47F8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E47F8u) goto L_088E47F8;
    return;
L_088E47F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11740)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (~(ctx.gpr[7] | 0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[2] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E4838;
    }
L_088E4838:
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E4858u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4858u) goto L_088E4858;
    return;
L_088E4858:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E4868u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x088E4868u) goto L_088E4868;
    return;
L_088E4868:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(496)));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(497)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[31] = (0x088E4888u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x088E4888u) goto L_088E4888;
    return;
L_088E4888:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E4890;
    }
L_088E4890:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E48A8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E48A8u) goto L_088E48A8;
    return;
L_088E48A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E48C4;
      }
      goto L_088E48B4;
    }
L_088E48B4:
    ctx.gpr[31] = (0x088E48BCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 82u, 0x088C45B8u>(ctx, &aot_mem) && ctx.pc == 0x088E48BCu) goto L_088E48BC;
    return;
L_088E48BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E48E8;
      }
      goto L_088E48C4;
    }
L_088E48C4:
    ctx.gpr[31] = (0x088E48CCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 82u, 0x088C45B8u>(ctx, &aot_mem) && ctx.pc == 0x088E48CCu) goto L_088E48CC;
    return;
L_088E48CC:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x088E48D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x088E48D8u) goto L_088E48D8;
    return;
L_088E48D8:
    ctx.gpr[5] = (17786u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E48E8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 91u, 0x088C463Cu>(ctx, &aot_mem) && ctx.pc == 0x088E48E8u) goto L_088E48E8;
    return;
L_088E48E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E48F0;
    }
L_088E48F0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E490Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E490Cu) goto L_088E490C;
    return;
L_088E490C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E491Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x088E491Cu) goto L_088E491C;
    return;
L_088E491C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E494C;
      }
      goto L_088E4928;
    }
L_088E4928:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E4974;
      }
      goto L_088E494C;
    }
L_088E494C:
    ctx.gpr[31] = (0x088E4954u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 114u, 0x088A0828u>(ctx, &aot_mem) && ctx.pc == 0x088E4954u) goto L_088E4954;
    return;
L_088E4954:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088E4974;
L_088E4974:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E497C;
    }
L_088E497C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x088E4998u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4998u) goto L_088E4998;
    return;
L_088E4998:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[31] = (0x088E49A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x088E49A8u) goto L_088E49A8;
    return;
L_088E49A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E49B8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x088E49B8u) goto L_088E49B8;
    return;
L_088E49B8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E49CCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 633u, 0x089A2B30u>(ctx, &aot_mem) && ctx.pc == 0x088E49CCu) goto L_088E49CC;
    return;
L_088E49CC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E49DCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 633u, 0x089A2B30u>(ctx, &aot_mem) && ctx.pc == 0x088E49DCu) goto L_088E49DC;
    return;
L_088E49DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E49E4;
    }
L_088E49E4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E4A00u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4A00u) goto L_088E4A00;
    return;
L_088E4A00:
    ctx.gpr[31] = (0x088E4A08u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x088E4A08u) goto L_088E4A08;
    return;
L_088E4A08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088E4A14u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 655u, 0x08A96CF0u>(ctx, &aot_mem) && ctx.pc == 0x088E4A14u) goto L_088E4A14;
    return;
L_088E4A14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E4A1C;
    }
L_088E4A1C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E4A38u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4A38u) goto L_088E4A38;
    return;
L_088E4A38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E4A48u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x088E4A48u) goto L_088E4A48;
    return;
L_088E4A48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(1916), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 16384u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E4A64;
    }
L_088E4A64:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088E4A84u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4A84u) goto L_088E4A84;
    return;
L_088E4A84:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    ctx.gpr[31] = (0x088E4A94u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x088E4A94u) goto L_088E4A94;
    return;
L_088E4A94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<7u, 3u>(vfpu_target_raw);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088E4AE8u);
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4AE8u) goto L_088E4AE8;
    return;
L_088E4AE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E4B10u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x088E4B10u) goto L_088E4B10;
    return;
L_088E4B10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E4B18;
    }
L_088E4B18:
    ctx.gpr[31] = (0x088E4B20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 115u, 0x088449ACu>(ctx, &aot_mem) && ctx.pc == 0x088E4B20u) goto L_088E4B20;
    return;
L_088E4B20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E4B28;
    }
L_088E4B28:
    ctx.gpr[31] = (0x088E4B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 116u, 0x088449C0u>(ctx, &aot_mem) && ctx.pc == 0x088E4B30u) goto L_088E4B30;
    return;
L_088E4B30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E4B38;
    }
L_088E4B38:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E4B50u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4B50u) goto L_088E4B50;
    return;
L_088E4B50:
    ctx.gpr[31] = (0x088E4B58u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 120u, 0x08844A08u>(ctx, &aot_mem) && ctx.pc == 0x088E4B58u) goto L_088E4B58;
    return;
L_088E4B58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E4B60;
    }
L_088E4B60:
    ctx.gpr[31] = (0x088E4B68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 117u, 0x088449D4u>(ctx, &aot_mem) && ctx.pc == 0x088E4B68u) goto L_088E4B68;
    return;
L_088E4B68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E4B70;
    }
L_088E4B70:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E4B88u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4B88u) goto L_088E4B88;
    return;
L_088E4B88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[6] = (2274u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(19376));
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E4BAC;
    }
L_088E4BAC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088E4BCCu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4BCCu) goto L_088E4BCC;
    return;
L_088E4BCC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x088E4BDCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x088E4BDCu) goto L_088E4BDC;
    return;
L_088E4BDC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<7u, 3u>(vfpu_target_raw);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088E4C30u);
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4C30u) goto L_088E4C30;
    return;
L_088E4C30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E4C58u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x088E4C58u) goto L_088E4C58;
    return;
L_088E4C58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E4C60;
    }
L_088E4C60:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E4C78u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4C78u) goto L_088E4C78;
    return;
L_088E4C78:
    ctx.gpr[31] = (0x088E4C80u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 183u, 0x08844F50u>(ctx, &aot_mem) && ctx.pc == 0x088E4C80u) goto L_088E4C80;
    return;
L_088E4C80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E4C88;
    }
L_088E4C88:
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
    ctx.gpr[31] = (0x088E4CB8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 466u, 0x089D7190u>(ctx, &aot_mem) && ctx.pc == 0x088E4CB8u) goto L_088E4CB8;
    return;
L_088E4CB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E4CC0;
    }
L_088E4CC0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-29515)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088E4CD4;
      }
      goto L_088E4CD0;
    }
L_088E4CD0:
    ctx.gpr[4] = (0u | 1u);
    goto L_088E4CD4;
L_088E4CD4:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E4D00;
      }
      goto L_088E4CF8;
    }
L_088E4CF8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E4D50;
      }
      goto L_088E4D00;
    }
L_088E4D00:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E4D30;
    }
    goto L_088E4D1C;
L_088E4D1C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E4D50;
      }
      goto L_088E4D30;
    }
L_088E4D30:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4D50;
      }
      goto L_088E4D4C;
    }
L_088E4D4C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E4D50;
L_088E4D50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E4D58;
    }
L_088E4D58:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-29514)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088E4D6C;
      }
      goto L_088E4D68;
    }
L_088E4D68:
    ctx.gpr[4] = (0u | 1u);
    goto L_088E4D6C;
L_088E4D6C:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E4D98;
      }
      goto L_088E4D90;
    }
L_088E4D90:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E4DE8;
      }
      goto L_088E4D98;
    }
L_088E4D98:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E4DC8;
    }
    goto L_088E4DB4;
L_088E4DB4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E4DE8;
      }
      goto L_088E4DC8;
    }
L_088E4DC8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4DE8;
      }
      goto L_088E4DE4;
    }
L_088E4DE4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E4DE8;
L_088E4DE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E4DF0;
    }
L_088E4DF0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E4E08u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4E08u) goto L_088E4E08;
    return;
L_088E4E08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[31] = (0x088E4E20u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 184u, 0x08864D00u>(ctx, &aot_mem) && ctx.pc == 0x088E4E20u) goto L_088E4E20;
    return;
L_088E4E20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E4E28;
    }
L_088E4E28:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E4E44u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4E44u) goto L_088E4E44;
    return;
L_088E4E44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E4E54u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x088E4E54u) goto L_088E4E54;
    return;
L_088E4E54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E4E78;
      }
      goto L_088E4E60;
    }
L_088E4E60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (8192u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E4E8C;
      }
      goto L_088E4E78;
    }
L_088E4E78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (57344u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_088E4E8C;
L_088E4E8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E4E94;
    }
L_088E4E94:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E4EB0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4EB0u) goto L_088E4EB0;
    return;
L_088E4EB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4EEC;
      }
      goto L_088E4EE0;
    }
L_088E4EE0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(361), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E4EF0;
      }
      goto L_088E4EEC;
    }
L_088E4EEC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(361), static_cast<std::uint8_t>(0u));
    goto L_088E4EF0;
L_088E4EF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E4EF8;
    }
L_088E4EF8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E4F14u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4F14u) goto L_088E4F14;
    return;
L_088E4F14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4F50;
      }
      goto L_088E4F44;
    }
L_088E4F44:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(362), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E4F54;
      }
      goto L_088E4F50;
    }
L_088E4F50:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(362), static_cast<std::uint8_t>(0u));
    goto L_088E4F54;
L_088E4F54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E4F5C;
    }
L_088E4F5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E4F64;
    }
L_088E4F64:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E4F7Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4F7Cu) goto L_088E4F7C;
    return;
L_088E4F7C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-7278))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088E4FC4;
      }
      goto L_088E4F8C;
    }
L_088E4F8C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (0u | 65533u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4FBC;
      }
      goto L_088E4FA4;
    }
L_088E4FA4:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (0u | 65535u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E4FC4;
      }
      goto L_088E4FBC;
    }
L_088E4FBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E4FC4;
    }
L_088E4FC4:
    ctx.gpr[31] = (0x088E4FCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 754u, 0x0891B6F8u>(ctx, &aot_mem) && ctx.pc == 0x088E4FCCu) goto L_088E4FCC;
    return;
L_088E4FCC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13456));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[16] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) > 0;
    // nop
      if (branch_taken) {
          goto L_088E5008;
      }
      goto L_088E5000;
    }
L_088E5000:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7284)));
    goto L_088E5008;
L_088E5008:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29616)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E5020u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 215u, 0x088B9234u>(ctx, &aot_mem) && ctx.pc == 0x088E5020u) goto L_088E5020;
    return;
L_088E5020:
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7260)));
    ctx.gpr[31] = (0x088E5040u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 212u, 0x088B91E0u>(ctx, &aot_mem) && ctx.pc == 0x088E5040u) goto L_088E5040;
    return;
L_088E5040:
    ctx.gpr[31] = (0x088E5048u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7260)));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 27u, 0x089581ECu>(ctx, &aot_mem) && ctx.pc == 0x088E5048u) goto L_088E5048;
    return;
L_088E5048:
    ctx.gpr[31] = (0x088E5050u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 756u, 0x0891B71Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5050u) goto L_088E5050;
    return;
L_088E5050:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(526), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(537), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7134), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-7290))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-7288))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E5090u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x088E5090u) goto L_088E5090;
    return;
L_088E5090:
    ctx.gpr[31] = (0x088E5098u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 552u, 0x089579D0u>(ctx, &aot_mem) && ctx.pc == 0x088E5098u) goto L_088E5098;
    return;
L_088E5098:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E50A0;
    }
L_088E50A0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E50BCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E50BCu) goto L_088E50BC;
    return;
L_088E50BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E50CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x088E50CCu) goto L_088E50CC;
    return;
L_088E50CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E50E8;
      }
      goto L_088E50D8;
    }
L_088E50D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E50F8;
      }
      goto L_088E50E8;
    }
L_088E50E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_088E50F8;
L_088E50F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E5100;
    }
L_088E5100:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E5118u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5118u) goto L_088E5118;
    return;
L_088E5118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992), 0u);
      if (branch_taken) {
          goto L_088E51A8;
      }
      goto L_088E514C;
    }
L_088E514C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[8] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088E5198;
      }
      goto L_088E5178;
    }
L_088E5178:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[8] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1440)));
    ctx.gpr[7] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-2992), ctx.gpr[6]);
    goto L_088E5198;
L_088E5198:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E514C;
      }
      goto L_088E51A8;
    }
L_088E51A8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E51B8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x088E51B8u) goto L_088E51B8;
    return;
L_088E51B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E51C0;
    }
L_088E51C0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E51DCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E51DCu) goto L_088E51DC;
    return;
L_088E51DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E51ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x088E51ECu) goto L_088E51EC;
    return;
L_088E51EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E5208;
      }
      goto L_088E51FC;
    }
L_088E51FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E5208u);
    ctx.gpr[5] = (0u | 147u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x088E5208u) goto L_088E5208;
    return;
L_088E5208:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E5210;
    }
L_088E5210:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E5228u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5228u) goto L_088E5228;
    return;
L_088E5228:
    ctx.gpr[4] = (2232u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x088E5238u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 196u, 0x088ED874u>(ctx, &aot_mem) && ctx.pc == 0x088E5238u) goto L_088E5238;
    return;
L_088E5238:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E5240;
    }
L_088E5240:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E5258u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5258u) goto L_088E5258;
    return;
L_088E5258:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088E5274;
      }
      goto L_088E5268;
    }
L_088E5268:
    ctx.gpr[31] = (0x088E5270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088E5270u) goto L_088E5270;
    return;
L_088E5270:
    ctx.gpr[4] = (2230u << 16u);
    goto L_088E5274;
L_088E5274:
    ctx.gpr[31] = (0x088E527Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20904)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 39u, 0x08838234u>(ctx, &aot_mem) && ctx.pc == 0x088E527Cu) goto L_088E527C;
    return;
L_088E527C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E52A4;
      }
      goto L_088E5284;
    }
L_088E5284:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x088E52A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 193u, 0x08864D9Cu>(ctx, &aot_mem) && ctx.pc == 0x088E52A4u) goto L_088E52A4;
    return;
L_088E52A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E52AC;
    }
L_088E52AC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E52C8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E52C8u) goto L_088E52C8;
    return;
L_088E52C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E52D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x088E52D8u) goto L_088E52D8;
    return;
L_088E52D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[31] = (0x088E52F0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 35u, 0x0893C28Cu>(ctx, &aot_mem) && ctx.pc == 0x088E52F0u) goto L_088E52F0;
    return;
L_088E52F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E52FC;
      }
      goto L_088E52F8;
    }
L_088E52F8:
    ctx.gpr[17] = (0u | 1u);
    goto L_088E52FC;
L_088E52FC:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E5328;
      }
      goto L_088E5320;
    }
L_088E5320:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_088E5378;
      }
      goto L_088E5328;
    }
L_088E5328:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E5358;
    }
    goto L_088E5344;
L_088E5344:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E5378;
      }
      goto L_088E5358;
    }
L_088E5358:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5378;
      }
      goto L_088E5374;
    }
L_088E5374:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E5378;
L_088E5378:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E5380;
    }
L_088E5380:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E539Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E539Cu) goto L_088E539C;
    return;
L_088E539C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E53ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x088E53ACu) goto L_088E53AC;
    return;
L_088E53AC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088E53C4;
      }
      goto L_088E53BC;
    }
L_088E53BC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1564), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088E53C8;
      }
      goto L_088E53C4;
    }
L_088E53C4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1284), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088E53C8;
L_088E53C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E53D0;
    }
L_088E53D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E53F4;
      }
      goto L_088E53EC;
    }
L_088E53EC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E5444;
      }
      goto L_088E53F4;
    }
L_088E53F4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E5424;
    }
    goto L_088E5410;
L_088E5410:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E5444;
      }
      goto L_088E5424;
    }
L_088E5424:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5444;
      }
      goto L_088E5440;
    }
L_088E5440:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E5444;
L_088E5444:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E544C;
    }
L_088E544C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E5468u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5468u) goto L_088E5468;
    return;
L_088E5468:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088E5494u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x088E5494u) goto L_088E5494;
    return;
L_088E5494:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E549C;
    }
L_088E549C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x088E54B8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E54B8u) goto L_088E54B8;
    return;
L_088E54B8:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088E54E8;
      }
      goto L_088E54DC;
    }
L_088E54DC:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_088E54E8;
L_088E54E8:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E5504;
      }
      goto L_088E54F8;
    }
L_088E54F8:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_088E5504;
L_088E5504:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E5520;
      }
      goto L_088E5514;
    }
L_088E5514:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_088E5520;
L_088E5520:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26868)));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[31] = (0x088E554Cu);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 663u, 0x089773A0u>(ctx, &aot_mem) && ctx.pc == 0x088E554Cu) goto L_088E554C;
    return;
L_088E554C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E5554;
    }
L_088E5554:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E5570u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5570u) goto L_088E5570;
    return;
L_088E5570:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E5580u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x088E5580u) goto L_088E5580;
    return;
L_088E5580:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E559C;
      }
      goto L_088E558C;
    }
L_088E558C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(416), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E55AC;
      }
      goto L_088E559C;
    }
L_088E559C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(416), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088E55AC;
L_088E55AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E55B4;
    }
L_088E55B4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x088E55D0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E55D0u) goto L_088E55D0;
    return;
L_088E55D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088E5600;
      }
      goto L_088E55F4;
    }
L_088E55F4:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_088E5600;
L_088E5600:
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E561C;
      }
      goto L_088E5610;
    }
L_088E5610:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_088E561C;
L_088E561C:
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E5638;
      }
      goto L_088E562C;
    }
L_088E562C:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_088E5638;
L_088E5638:
    ctx.gpr[31] = (0x088E5640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 63u, 0x088C4424u>(ctx, &aot_mem) && ctx.pc == 0x088E5640u) goto L_088E5640;
    return;
L_088E5640:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E5648;
    }
L_088E5648:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E5660u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5660u) goto L_088E5660;
    return;
L_088E5660:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29514)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5688;
      }
      goto L_088E5670;
    }
L_088E5670:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x088E5680u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 184u, 0x08844F5Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5680u) goto L_088E5680;
    return;
L_088E5680:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5694;
      }
      goto L_088E5688;
    }
L_088E5688:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[31] = (0x088E5694u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 184u, 0x08844F5Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5694u) goto L_088E5694;
    return;
L_088E5694:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E569C;
    }
L_088E569C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E56B8u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E56B8u) goto L_088E56B8;
    return;
L_088E56B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (16025u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088E56F0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x088E56F0u) goto L_088E56F0;
    return;
L_088E56F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E56F8;
    }
L_088E56F8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E5714u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5714u) goto L_088E5714;
    return;
L_088E5714:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x088E5720u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 106u, 0x08844918u>(ctx, &aot_mem) && ctx.pc == 0x088E5720u) goto L_088E5720;
    return;
L_088E5720:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E5728;
    }
L_088E5728:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E5744u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5744u) goto L_088E5744;
    return;
L_088E5744:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x088E5750u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 111u, 0x0884495Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5750u) goto L_088E5750;
    return;
L_088E5750:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E5758;
    }
L_088E5758:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x088E5774u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5774u) goto L_088E5774;
    return;
L_088E5774:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E5784u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x088E5784u) goto L_088E5784;
    return;
L_088E5784:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E5798u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x088E5798u) goto L_088E5798;
    return;
L_088E5798:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E57C4;
      }
      goto L_088E57A4;
    }
L_088E57A4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088E57BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 293u, 0x089BD524u>(ctx, &aot_mem) && ctx.pc == 0x088E57BCu) goto L_088E57BC;
    return;
L_088E57BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E57DC;
      }
      goto L_088E57C4;
    }
L_088E57C4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088E57DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 293u, 0x089BD524u>(ctx, &aot_mem) && ctx.pc == 0x088E57DCu) goto L_088E57DC;
    return;
L_088E57DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E57E4;
    }
L_088E57E4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E5800u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5800u) goto L_088E5800;
    return;
L_088E5800:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E5810u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x088E5810u) goto L_088E5810;
    return;
L_088E5810:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(544)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088E584C;
      }
      goto L_088E5828;
    }
L_088E5828:
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E584C;
      }
      goto L_088E5848;
    }
L_088E5848:
    ctx.gpr[4] = (0u | 1u);
    goto L_088E584C;
L_088E584C:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E5878;
      }
      goto L_088E5870;
    }
L_088E5870:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E58C8;
      }
      goto L_088E5878;
    }
L_088E5878:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E58A8;
    }
    goto L_088E5894;
L_088E5894:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E58C8;
      }
      goto L_088E58A8;
    }
L_088E58A8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E58C8;
      }
      goto L_088E58C4;
    }
L_088E58C4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E58C8;
L_088E58C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E58D0;
    }
L_088E58D0:
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E58F0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E58F0u) goto L_088E58F0;
    return;
L_088E58F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E5900u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x088E5900u) goto L_088E5900;
    return;
L_088E5900:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    ctx.gpr[31] = (0x088E5920u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 493u, 0x08AFE0A8u>(ctx, &aot_mem) && ctx.pc == 0x088E5920u) goto L_088E5920;
    return;
L_088E5920:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E5934u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x088E5934u) goto L_088E5934;
    return;
L_088E5934:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E593C;
    }
L_088E593C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E5958u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5958u) goto L_088E5958;
    return;
L_088E5958:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E5968u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x088E5968u) goto L_088E5968;
    return;
L_088E5968:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E5988;
      }
      goto L_088E5974;
    }
L_088E5974:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E599C;
      }
      goto L_088E5988;
    }
L_088E5988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_088E599C;
L_088E599C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E59A4;
    }
L_088E59A4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E59BCu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E59BCu) goto L_088E59BC;
    return;
L_088E59BC:
    ctx.gpr[31] = (0x088E59C4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 556u, 0x08A8EA68u>(ctx, &aot_mem) && ctx.pc == 0x088E59C4u) goto L_088E59C4;
    return;
L_088E59C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E59CC;
    }
L_088E59CC:
    ctx.gpr[31] = (0x088E59D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 558u, 0x08A8EA88u>(ctx, &aot_mem) && ctx.pc == 0x088E59D4u) goto L_088E59D4;
    return;
L_088E59D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E59DC;
    }
L_088E59DC:
    ctx.gpr[31] = (0x088E59E4u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 560u, 0x08A8EAB0u>(ctx, &aot_mem) && ctx.pc == 0x088E59E4u) goto L_088E59E4;
    return;
L_088E59E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E59F0;
      }
      goto L_088E59EC;
    }
L_088E59EC:
    ctx.gpr[17] = (0u | 1u);
    goto L_088E59F0;
L_088E59F0:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E5A1C;
      }
      goto L_088E5A14;
    }
L_088E5A14:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_088E5A6C;
      }
      goto L_088E5A1C;
    }
L_088E5A1C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E5A4C;
    }
    goto L_088E5A38;
L_088E5A38:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E5A6C;
      }
      goto L_088E5A4C;
    }
L_088E5A4C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5A6C;
      }
      goto L_088E5A68;
    }
L_088E5A68:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E5A6C;
L_088E5A6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E5A74;
    }
L_088E5A74:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x088E5A90u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5A90u) goto L_088E5A90;
    return;
L_088E5A90:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088E5AECu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x088E5AECu) goto L_088E5AEC;
    return;
L_088E5AEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E5AF4;
    }
L_088E5AF4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E5B0Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5B0Cu) goto L_088E5B0C;
    return;
L_088E5B0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5B2C;
      }
      goto L_088E5B18;
    }
L_088E5B18:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(93), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E5B3C;
      }
      goto L_088E5B2C;
    }
L_088E5B2C:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(93), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088E5B3C;
L_088E5B3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E5B44;
    }
L_088E5B44:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E5B58u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 151u, 0x08864AD0u>(ctx, &aot_mem) && ctx.pc == 0x088E5B58u) goto L_088E5B58;
    return;
L_088E5B58:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E5B6Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 145u, 0x08864A64u>(ctx, &aot_mem) && ctx.pc == 0x088E5B6Cu) goto L_088E5B6C;
    return;
L_088E5B6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E5B74;
    }
L_088E5B74:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[31] = (0x088E5B84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 157u, 0x08864B38u>(ctx, &aot_mem) && ctx.pc == 0x088E5B84u) goto L_088E5B84;
    return;
L_088E5B84:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E5B90u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 151u, 0x08864AD0u>(ctx, &aot_mem) && ctx.pc == 0x088E5B90u) goto L_088E5B90;
    return;
L_088E5B90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E5B98;
    }
L_088E5B98:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E5BB4u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5BB4u) goto L_088E5BB4;
    return;
L_088E5BB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E5BC4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x088E5BC4u) goto L_088E5BC4;
    return;
L_088E5BC4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E5BDCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x088E5BDCu) goto L_088E5BDC;
    return;
L_088E5BDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E5BE4;
    }
L_088E5BE4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E5C00u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5C00u) goto L_088E5C00;
    return;
L_088E5C00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E5C34u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x088E5C34u) goto L_088E5C34;
    return;
L_088E5C34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E5C7C;
      }
      goto L_088E5C48;
    }
L_088E5C48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E5C7C;
      }
      goto L_088E5C5C;
    }
L_088E5C5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E5C74;
      }
      goto L_088E5C6C;
    }
L_088E5C6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088E5C80;
      }
      goto L_088E5C74;
    }
L_088E5C74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088E5C80;
      }
      goto L_088E5C7C;
    }
L_088E5C7C:
    ctx.gpr[4] = (0u | 0u);
    goto L_088E5C80;
L_088E5C80:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E5CAC;
      }
      goto L_088E5CA4;
    }
L_088E5CA4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E5CFC;
      }
      goto L_088E5CAC;
    }
L_088E5CAC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E5CDC;
    }
    goto L_088E5CC8;
L_088E5CC8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E5CFC;
      }
      goto L_088E5CDC;
    }
L_088E5CDC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5CFC;
      }
      goto L_088E5CF8;
    }
L_088E5CF8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E5CFC;
L_088E5CFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E5D04;
    }
L_088E5D04:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E5D1Cu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5D1Cu) goto L_088E5D1C;
    return;
L_088E5D1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 50u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(844)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_088E5D6C;
    }
    goto L_088E5D54;
L_088E5D54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E5D90;
      }
      goto L_088E5D68;
    }
L_088E5D68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088E5D6C;
L_088E5D6C:
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E5D98;
      }
      goto L_088E5D7C;
    }
L_088E5D7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 60u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E5D98;
      }
      goto L_088E5D90;
    }
L_088E5D90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088E5D9C;
      }
      goto L_088E5D98;
    }
L_088E5D98:
    ctx.gpr[4] = (0u | 0u);
    goto L_088E5D9C;
L_088E5D9C:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E5DC8;
      }
      goto L_088E5DC0;
    }
L_088E5DC0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E5E18;
      }
      goto L_088E5DC8;
    }
L_088E5DC8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E5DF8;
    }
    goto L_088E5DE4;
L_088E5DE4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E5E18;
      }
      goto L_088E5DF8;
    }
L_088E5DF8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5E18;
      }
      goto L_088E5E14;
    }
L_088E5E14:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E5E18;
L_088E5E18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E5E20;
    }
L_088E5E20:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(15924)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(15922)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(15923)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(15917)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(15918)));
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088E5E64;
      }
      goto L_088E5E60;
    }
L_088E5E60:
    ctx.gpr[4] = (0u | 1u);
    goto L_088E5E64;
L_088E5E64:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E5E90;
      }
      goto L_088E5E88;
    }
L_088E5E88:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E5EE0;
      }
      goto L_088E5E90;
    }
L_088E5E90:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E5EC0;
    }
    goto L_088E5EAC;
L_088E5EAC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E5EE0;
      }
      goto L_088E5EC0;
    }
L_088E5EC0:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5EE0;
      }
      goto L_088E5EDC;
    }
L_088E5EDC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E5EE0;
L_088E5EE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E5EE8;
    }
L_088E5EE8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E5F04u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5F04u) goto L_088E5F04;
    return;
L_088E5F04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E5F14u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x088E5F14u) goto L_088E5F14;
    return;
L_088E5F14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E5F34;
      }
      goto L_088E5F20;
    }
L_088E5F20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E5F40;
      }
      goto L_088E5F34;
    }
L_088E5F34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_088E5F40;
L_088E5F40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E5F48;
    }
L_088E5F48:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E5F64u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5F64u) goto L_088E5F64;
    return;
L_088E5F64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E5F74u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x088E5F74u) goto L_088E5F74;
    return;
L_088E5F74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E5F88u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x088E5F88u) goto L_088E5F88;
    return;
L_088E5F88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E5FC4;
      }
      goto L_088E5F98;
    }
L_088E5F98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E5FC4;
      }
      goto L_088E5FA8;
    }
L_088E5FA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E5FBC;
      }
      goto L_088E5FB4;
    }
L_088E5FB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088E5FC8;
      }
      goto L_088E5FBC;
    }
L_088E5FBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088E5FC8;
      }
      goto L_088E5FC4;
    }
L_088E5FC4:
    ctx.gpr[4] = (0u | 0u);
    goto L_088E5FC8;
L_088E5FC8:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E5FF4;
      }
      goto L_088E5FEC;
    }
L_088E5FEC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E6044;
      }
      goto L_088E5FF4;
    }
L_088E5FF4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E6024;
    }
    goto L_088E6010;
L_088E6010:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E6044;
      }
      goto L_088E6024;
    }
L_088E6024:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6044;
      }
      goto L_088E6040;
    }
L_088E6040:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E6044;
L_088E6044:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E604C;
    }
L_088E604C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E6064u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E6064u) goto L_088E6064;
    return;
L_088E6064:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E6074u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x088E6074u) goto L_088E6074;
    return;
L_088E6074:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E60A0;
      }
      goto L_088E6088;
    }
L_088E6088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E60A0;
      }
      goto L_088E6098;
    }
L_088E6098:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088E60A4;
      }
      goto L_088E60A0;
    }
L_088E60A0:
    ctx.gpr[4] = (0u | 0u);
    goto L_088E60A4;
L_088E60A4:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E60D0;
      }
      goto L_088E60C8;
    }
L_088E60C8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E6120;
      }
      goto L_088E60D0;
    }
L_088E60D0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E6100;
    }
    goto L_088E60EC;
L_088E60EC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E6120;
      }
      goto L_088E6100;
    }
L_088E6100:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6120;
      }
      goto L_088E611C;
    }
L_088E611C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E6120;
L_088E6120:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E6128;
    }
L_088E6128:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E6140u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E6140u) goto L_088E6140;
    return;
L_088E6140:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088E61A0;
      }
      goto L_088E6174;
    }
L_088E6174:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 17u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088E61A0;
      }
      goto L_088E6188;
    }
L_088E6188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E61A0;
      }
      goto L_088E619C;
    }
L_088E619C:
    ctx.gpr[5] = (0u | 1u);
    goto L_088E61A0;
L_088E61A0:
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E61CC;
      }
      goto L_088E61C4;
    }
L_088E61C4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088E621C;
      }
      goto L_088E61CC;
    }
L_088E61CC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E61FC;
    }
    goto L_088E61E8;
L_088E61E8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E621C;
      }
      goto L_088E61FC;
    }
L_088E61FC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E621C;
      }
      goto L_088E6218;
    }
L_088E6218:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E621C;
L_088E621C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E6224;
    }
L_088E6224:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E623Cu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E623Cu) goto L_088E623C;
    return;
L_088E623C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E624Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x088E624Cu) goto L_088E624C;
    return;
L_088E624C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E625C;
    }
L_088E625C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    ctx.gpr[7] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E626C;
    }
L_088E626C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E627C;
    }
L_088E627C:
    ctx.gpr[5] = (0u | 1u);
    goto L_088E6280;
L_088E6280:
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E62AC;
      }
      goto L_088E62A4;
    }
L_088E62A4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088E62FC;
      }
      goto L_088E62AC;
    }
L_088E62AC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E62DC;
    }
    goto L_088E62C8;
L_088E62C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E62FC;
      }
      goto L_088E62DC;
    }
L_088E62DC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E62FC;
      }
      goto L_088E62F8;
    }
L_088E62F8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E62FC;
L_088E62FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6308;
      }
      goto L_088E6304;
    }
L_088E6304:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088E6308;
L_088E6308:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6324:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1106));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(99) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 156u, 0x088E8BD4u>(ctx, &aot_mem); return;
      }
      goto L_088E635C;
    }
L_088E635C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1106));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(14928)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6378:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x088E6394u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x088E6394u) goto L_088E6394;
    return;
L_088E6394:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E63EC;
      }
      goto L_088E63A4;
    }
L_088E63A4:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 65 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E63D8;
      }
      goto L_088E63B8;
    }
L_088E63B8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 91 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E63D8;
      }
      goto L_088E63C8;
    }
L_088E63C8:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_088E63D8;
L_088E63D8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E63A4;
      }
      goto L_088E63EC;
    }
L_088E63EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x088E6400u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 394u, 0x089C1998u>(ctx, &aot_mem) && ctx.pc == 0x088E6400u) goto L_088E6400;
    return;
L_088E6400:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E6408;
    }
L_088E6408:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E6420u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E6420u) goto L_088E6420;
    return;
L_088E6420:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E6430u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x088E6430u) goto L_088E6430;
    return;
L_088E6430:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E6440u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x088E6440u) goto L_088E6440;
    return;
L_088E6440:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E6450u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 235u, 0x089ED82Cu>(ctx, &aot_mem) && ctx.pc == 0x088E6450u) goto L_088E6450;
    return;
L_088E6450:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E6458;
    }
L_088E6458:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E6460;
    }
L_088E6460:
    ctx.gpr[31] = (0x088E6468u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x088E6468u) goto L_088E6468;
    return;
L_088E6468:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E6480;
    }
L_088E6480:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088E649Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E649Cu) goto L_088E649C;
    return;
L_088E649C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    ctx.gpr[31] = (0x088E64ACu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x088E64ACu) goto L_088E64AC;
    return;
L_088E64AC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E64B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x088E64B8u) goto L_088E64B8;
    return;
L_088E64B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088E6508u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x088E6508u) goto L_088E6508;
    return;
L_088E6508:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[31] = (0x088E651Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x088E651Cu) goto L_088E651C;
    return;
L_088E651C:
    ctx.gpr[31] = (0x088E6524u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x088E6524u) goto L_088E6524;
    return;
L_088E6524:
    ctx.gpr[31] = (0x088E652Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F898u>(ctx, &aot_mem) && ctx.pc == 0x088E652Cu) goto L_088E652C;
    return;
L_088E652C:
    ctx.gpr[31] = (0x088E6534u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x088E6534u) goto L_088E6534;
    return;
L_088E6534:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E653C;
    }
L_088E653C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2144)));
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2148)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-2992), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2152)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E6574u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x088E6574u) goto L_088E6574;
    return;
L_088E6574:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E657C;
    }
L_088E657C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E6598u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E6598u) goto L_088E6598;
    return;
L_088E6598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E65CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x088E65CCu) goto L_088E65CC;
    return;
L_088E65CC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6618;
      }
      goto L_088E65E0;
    }
L_088E65E0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & 14u);
    ctx.gpr[6] = (ctx.gpr[6] ^ 6u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6618;
      }
      goto L_088E6604;
    }
L_088E6604:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E6618;
      }
      goto L_088E6614;
    }
L_088E6614:
    ctx.gpr[4] = (0u | 1u);
    goto L_088E6618;
L_088E6618:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E6644;
      }
      goto L_088E663C;
    }
L_088E663C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E6694;
      }
      goto L_088E6644;
    }
L_088E6644:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E6674;
    }
    goto L_088E6660;
L_088E6660:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E6694;
      }
      goto L_088E6674;
    }
L_088E6674:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6694;
      }
      goto L_088E6690;
    }
L_088E6690:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E6694;
L_088E6694:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E669C;
    }
L_088E669C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E66B8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E66B8u) goto L_088E66B8;
    return;
L_088E66B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E66ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x088E66ECu) goto L_088E66EC;
    return;
L_088E66EC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6738;
      }
      goto L_088E6700;
    }
L_088E6700:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & 14u);
    ctx.gpr[6] = (ctx.gpr[6] ^ 8u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6738;
      }
      goto L_088E6724;
    }
L_088E6724:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E6738;
      }
      goto L_088E6734;
    }
L_088E6734:
    ctx.gpr[5] = (0u | 1u);
    goto L_088E6738;
L_088E6738:
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E6764;
      }
      goto L_088E675C;
    }
L_088E675C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088E67B4;
      }
      goto L_088E6764;
    }
L_088E6764:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E6794;
    }
    goto L_088E6780;
L_088E6780:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E67B4;
      }
      goto L_088E6794;
    }
L_088E6794:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E67B4;
      }
      goto L_088E67B0;
    }
L_088E67B0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E67B4;
L_088E67B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E67BC;
    }
L_088E67BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x088E67D8u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x088E67D8u) goto L_088E67D8;
    return;
L_088E67D8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6830;
      }
      goto L_088E67E8;
    }
L_088E67E8:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 65 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E681C;
      }
      goto L_088E67FC;
    }
L_088E67FC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 91 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E681C;
      }
      goto L_088E680C;
    }
L_088E680C:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_088E681C;
L_088E681C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E67E8;
      }
      goto L_088E6830;
    }
L_088E6830:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[31] = (0x088E6848u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 418u, 0x08AED750u>(ctx, &aot_mem) && ctx.pc == 0x088E6848u) goto L_088E6848;
    return;
L_088E6848:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7272)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E68A0;
      }
      goto L_088E6858;
    }
L_088E6858:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088E6868u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 418u, 0x08AED750u>(ctx, &aot_mem) && ctx.pc == 0x088E6868u) goto L_088E6868;
    return;
L_088E6868:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E6894;
      }
      goto L_088E6870;
    }
L_088E6870:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E6880u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7272));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 630u, 0x08957D5Cu>(ctx, &aot_mem) && ctx.pc == 0x088E6880u) goto L_088E6880;
    return;
L_088E6880:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E6890u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7132));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 636u, 0x08957D94u>(ctx, &aot_mem) && ctx.pc == 0x088E6890u) goto L_088E6890;
    return;
L_088E6890:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(524), static_cast<std::uint8_t>(0u));
    goto L_088E6894;
L_088E6894:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E6858;
      }
      goto L_088E68A0;
    }
L_088E68A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E68A8;
    }
L_088E68A8:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E68C0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E68C0u) goto L_088E68C0;
    return;
L_088E68C0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_088E6900;
    }
    goto L_088E68D0;
L_088E68D0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088E68DCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088E68DCu) goto L_088E68DC;
    return;
L_088E68DC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E68F4;
      }
      goto L_088E68E8;
    }
L_088E68E8:
    ctx.gpr[31] = (0x088E68F0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x088E68F0u) goto L_088E68F0;
    return;
L_088E68F0:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_088E68F4;
L_088E68F4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_088E6900;
L_088E6900:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088E6918u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24444)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x088E6918u) goto L_088E6918;
    return;
L_088E6918:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(-7128)));
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[9] = (ctx.gpr[7] << 8u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[8] = (2274u << 16u);
    ctx.gpr[7] = (ctx.gpr[9] - ctx.gpr[7]);
    ctx.gpr[18] = (ctx.gpr[8] + static_cast<std::uint32_t>(23232));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E6978u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E6978u) goto L_088E6978;
    return;
L_088E6978:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(-7128)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[11] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(44));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x088E69B8u);
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 517u, 0x0887B1D0u>(ctx, &aot_mem) && ctx.pc == 0x088E69B8u) goto L_088E69B8;
    return;
L_088E69B8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(-7128)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(-7128), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E69CC;
    }
L_088E69CC:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E69E4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E69E4u) goto L_088E69E4;
    return;
L_088E69E4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_088E6A24;
    }
    goto L_088E69F4;
L_088E69F4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088E6A00u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088E6A00u) goto L_088E6A00;
    return;
L_088E6A00:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6A18;
      }
      goto L_088E6A0C;
    }
L_088E6A0C:
    ctx.gpr[31] = (0x088E6A14u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x088E6A14u) goto L_088E6A14;
    return;
L_088E6A14:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_088E6A18;
L_088E6A18:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_088E6A24;
L_088E6A24:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088E6A3Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24444)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x088E6A3Cu) goto L_088E6A3C;
    return;
L_088E6A3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(-7128)));
    ctx.gpr[21] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(23232));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E6AA0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E6AA0u) goto L_088E6AA0;
    return;
L_088E6AA0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(-7128)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[11] = (ctx.gpr[8] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(44));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x088E6AE0u);
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 517u, 0x0887B1D0u>(ctx, &aot_mem) && ctx.pc == 0x088E6AE0u) goto L_088E6AE0;
    return;
L_088E6AE0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(-7128)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(-7128), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E6AF4;
    }
L_088E6AF4:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7126), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E6B08;
    }
L_088E6B08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E6B10;
    }
L_088E6B10:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E6B28u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E6B28u) goto L_088E6B28;
    return;
L_088E6B28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E6B38u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x088E6B38u) goto L_088E6B38;
    return;
L_088E6B38:
    ctx.gpr[31] = (0x088E6B40u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 262u, 0x0891D608u>(ctx, &aot_mem) && ctx.pc == 0x088E6B40u) goto L_088E6B40;
    return;
L_088E6B40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E6B48;
    }
L_088E6B48:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E6B64u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E6B64u) goto L_088E6B64;
    return;
L_088E6B64:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[31] = (0x088E6B84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 215u, 0x088EDA20u>(ctx, &aot_mem) && ctx.pc == 0x088E6B84u) goto L_088E6B84;
    return;
L_088E6B84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E6B8C;
    }
L_088E6B8C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2144)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2128)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2148)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2132)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2152)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2136)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[5] = (2269u << 16u);
    ctx.fpr[13] = ctx.fpr[16] + ctx.fpr[17];
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E6BE8u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x088E6BE8u) goto L_088E6BE8;
    return;
L_088E6BE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E6BF0;
    }
L_088E6BF0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x088E6C0Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E6C0Cu) goto L_088E6C0C;
    return;
L_088E6C0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E6C1Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x088E6C1Cu) goto L_088E6C1C;
    return;
L_088E6C1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E6C30u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x088E6C30u) goto L_088E6C30;
    return;
L_088E6C30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[17];
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E6C90u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 190u, 0x089A4D08u>(ctx, &aot_mem) && ctx.pc == 0x088E6C90u) goto L_088E6C90;
    return;
L_088E6C90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E6C98;
    }
L_088E6C98:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E6CB0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E6CB0u) goto L_088E6CB0;
    return;
L_088E6CB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E6CC0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x088E6CC0u) goto L_088E6CC0;
    return;
L_088E6CC0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6CF0;
      }
      goto L_088E6CCC;
    }
L_088E6CCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6CF0;
      }
      goto L_088E6CD8;
    }
L_088E6CD8:
    ctx.gpr[31] = (0x088E6CE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 234u, 0x089A4FC0u>(ctx, &aot_mem) && ctx.pc == 0x088E6CE0u) goto L_088E6CE0;
    return;
L_088E6CE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_088E6CF0;
L_088E6CF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E6CF8;
    }
L_088E6CF8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E6D14u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E6D14u) goto L_088E6D14;
    return;
L_088E6D14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E6D24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x088E6D24u) goto L_088E6D24;
    return;
L_088E6D24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E6D44;
      }
      goto L_088E6D30;
    }
L_088E6D30:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(416), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E6D50;
      }
      goto L_088E6D44;
    }
L_088E6D44:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(416), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088E6D50;
L_088E6D50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E6D58;
    }
L_088E6D58:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E6D70u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E6D70u) goto L_088E6D70;
    return;
L_088E6D70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E6D80u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x088E6D80u) goto L_088E6D80;
    return;
L_088E6D80:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6D98;
      }
      goto L_088E6D8C;
    }
L_088E6D8C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1918), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E6DA4;
      }
      goto L_088E6D98;
    }
L_088E6D98:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088E6DA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14344));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x088E6DA4u) goto L_088E6DA4;
    return;
L_088E6DA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E6DAC;
    }
L_088E6DAC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E6DC4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E6DC4u) goto L_088E6DC4;
    return;
L_088E6DC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E6DD4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x088E6DD4u) goto L_088E6DD4;
    return;
L_088E6DD4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6DEC;
      }
      goto L_088E6DE0;
    }
L_088E6DE0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(671), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E6DF8;
      }
      goto L_088E6DEC;
    }
L_088E6DEC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088E6DF8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14400));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x088E6DF8u) goto L_088E6DF8;
    return;
L_088E6DF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E6E00;
    }
L_088E6E00:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[31] = (0x088E6E18u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E6E18u) goto L_088E6E18;
    return;
L_088E6E18:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088E6E30u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x088E6E30u) goto L_088E6E30;
    return;
L_088E6E30:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_088E6E38;
L_088E6E38:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088E704C;
      }
      goto L_088E6E40;
    }
L_088E6E40:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_088E704C;
      }
      goto L_088E6E4C;
    }
L_088E6E4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3248));
      if (branch_taken) {
          goto L_088E6E70;
      }
      goto L_088E6E68;
    }
L_088E6E68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6E88;
      }
      goto L_088E6E70;
    }
L_088E6E70:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    goto L_088E6E88;
L_088E6E88:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7044;
      }
      goto L_088E6E90;
    }
L_088E6E90:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x088E6EA0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 493u, 0x08AFE0A8u>(ctx, &aot_mem) && ctx.pc == 0x088E6EA0u) goto L_088E6EA0;
    return;
L_088E6EA0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7124)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E7044;
      }
      goto L_088E6EB0;
    }
L_088E6EB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_088E7044;
      }
      goto L_088E6EC0;
    }
L_088E6EC0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x088E6EE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088E4174;
L_088E6EE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7044;
      }
      goto L_088E6EEC;
    }
L_088E6EEC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E7044;
      }
      goto L_088E6EFC;
    }
L_088E6EFC:
    ctx.gpr[31] = (0x088E6F04u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x088E6F04u) goto L_088E6F04;
    return;
L_088E6F04:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
        goto L_088E6F30;
    }
    goto L_088E6F0C;
L_088E6F0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
        goto L_088E6F30;
    }
    goto L_088E6F1C;
L_088E6F1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E7044;
      }
      goto L_088E6F2C;
    }
L_088E6F2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    goto L_088E6F30;
L_088E6F30:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E7044;
      }
      goto L_088E6F3C;
    }
L_088E6F3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E7044;
      }
      goto L_088E6F50;
    }
L_088E6F50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E7044;
      }
      goto L_088E6F60;
    }
L_088E6F60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E7044;
      }
      goto L_088E6F6C;
    }
L_088E6F6C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x088E6F8Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 46u, 0x08A288F4u>(ctx, &aot_mem) && ctx.pc == 0x088E6F8Cu) goto L_088E6F8C;
    return;
L_088E6F8C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088E7044;
      }
      goto L_088E6F94;
    }
L_088E6F94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16672u << 16u);
      if (branch_taken) {
          goto L_088E7044;
      }
      goto L_088E6FB4;
    }
L_088E6FB4:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[20] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E7044;
      }
      goto L_088E6FCC;
    }
L_088E6FCC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x088E6FDCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 493u, 0x08AFE0A8u>(ctx, &aot_mem) && ctx.pc == 0x088E6FDCu) goto L_088E6FDC;
    return;
L_088E6FDC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7124), ctx.gpr[17]);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(428), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (65534u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 17u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7300)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7300), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7044;
      }
      goto L_088E7030;
    }
L_088E7030:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E7044u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16256));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 459u, 0x089571E0u>(ctx, &aot_mem) && ctx.pc == 0x088E7044u) goto L_088E7044;
    return;
L_088E7044:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088E6E38;
      }
      goto L_088E704C;
    }
L_088E704C:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E7064u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x088E7064u) goto L_088E7064;
    return;
L_088E7064:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E706C;
    }
L_088E706C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E7088u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E7088u) goto L_088E7088;
    return;
L_088E7088:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E7098u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x088E7098u) goto L_088E7098;
    return;
L_088E7098:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E70ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x088E70ACu) goto L_088E70AC;
    return;
L_088E70AC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 31u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 41u);
    ctx.gpr[31] = (0x088E70E0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x088E70E0u) goto L_088E70E0;
    return;
L_088E70E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E70E8;
    }
L_088E70E8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E7100u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E7100u) goto L_088E7100;
    return;
L_088E7100:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E7110u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x088E7110u) goto L_088E7110;
    return;
L_088E7110:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E713C;
      }
      goto L_088E7120;
    }
L_088E7120:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E7130u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 493u, 0x08AFE0A8u>(ctx, &aot_mem) && ctx.pc == 0x088E7130u) goto L_088E7130;
    return;
L_088E7130:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088E7148;
      }
      goto L_088E713C;
    }
L_088E713C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    goto L_088E7148;
L_088E7148:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E7158u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x088E7158u) goto L_088E7158;
    return;
L_088E7158:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E7160;
    }
L_088E7160:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E7178u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E7178u) goto L_088E7178;
    return;
L_088E7178:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[31] = (0x088E7188u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x088E7188u) goto L_088E7188;
    return;
L_088E7188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088E7208;
      }
      goto L_088E71A0;
    }
L_088E71A0:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(3248));
      if (branch_taken) {
          goto L_088E71C8;
      }
      goto L_088E71C0;
    }
L_088E71C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_088E71E0;
      }
      goto L_088E71C8;
    }
L_088E71C8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    goto L_088E71E0;
L_088E71E0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E71FC;
      }
      goto L_088E71E8;
    }
L_088E71E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088E71FC;
      }
      goto L_088E71F4;
    }
L_088E71F4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_088E71FC;
L_088E71FC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088E71A0;
      }
      goto L_088E7208;
    }
L_088E7208:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E7220u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x088E7220u) goto L_088E7220;
    return;
L_088E7220:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E7228;
    }
L_088E7228:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x088E7244u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E7244u) goto L_088E7244;
    return;
L_088E7244:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088E7280;
      }
      goto L_088E7270;
    }
L_088E7270:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x088E727Cu);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x088E727Cu) goto L_088E727C;
    return;
L_088E727C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088E7280;
L_088E7280:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (16457u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (17204u << 16u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[17];
    ctx.gpr[31] = (0x088E72C0u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 152u, 0x088412BCu>(ctx, &aot_mem) && ctx.pc == 0x088E72C0u) goto L_088E72C0;
    return;
L_088E72C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E72C8;
    }
L_088E72C8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E72E4u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E72E4u) goto L_088E72E4;
    return;
L_088E72E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E733Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x088E733Cu) goto L_088E733C;
    return;
L_088E733C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E7344;
    }
L_088E7344:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E7360u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E7360u) goto L_088E7360;
    return;
L_088E7360:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E7370u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x088E7370u) goto L_088E7370;
    return;
L_088E7370:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E739Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x088E739Cu) goto L_088E739C;
    return;
L_088E739C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E73A4;
    }
L_088E73A4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x088E73B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 564u, 0x0887E9D4u>(ctx, &aot_mem) && ctx.pc == 0x088E73B4u) goto L_088E73B4;
    return;
L_088E73B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E73BC;
    }
L_088E73BC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x088E73D8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E73D8u) goto L_088E73D8;
    return;
L_088E73D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E73E8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x088E73E8u) goto L_088E73E8;
    return;
L_088E73E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(400), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E740C;
    }
L_088E740C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E7424u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E7424u) goto L_088E7424;
    return;
L_088E7424:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E7434u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x088E7434u) goto L_088E7434;
    return;
L_088E7434:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088E7468;
      }
      goto L_088E7444;
    }
L_088E7444:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7468;
      }
      goto L_088E7450;
    }
L_088E7450:
    ctx.gpr[31] = (0x088E7458u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 126u, 0x088A08E8u>(ctx, &aot_mem) && ctx.pc == 0x088E7458u) goto L_088E7458;
    return;
L_088E7458:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E7468;
      }
      goto L_088E7464;
    }
L_088E7464:
    ctx.gpr[17] = (0u | 1u);
    goto L_088E7468;
L_088E7468:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E7494;
      }
      goto L_088E748C;
    }
L_088E748C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_088E74E4;
      }
      goto L_088E7494;
    }
L_088E7494:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E74C4;
    }
    goto L_088E74B0;
L_088E74B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E74E4;
      }
      goto L_088E74C4;
    }
L_088E74C4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E74E4;
      }
      goto L_088E74E0;
    }
L_088E74E0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E74E4;
L_088E74E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E74EC;
    }
L_088E74EC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E7504u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E7504u) goto L_088E7504;
    return;
L_088E7504:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088E7564;
      }
      goto L_088E7538;
    }
L_088E7538:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7564;
      }
      goto L_088E7548;
    }
L_088E7548:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088E7554u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 126u, 0x088A08E8u>(ctx, &aot_mem) && ctx.pc == 0x088E7554u) goto L_088E7554;
    return;
L_088E7554:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E7564;
      }
      goto L_088E7560;
    }
L_088E7560:
    ctx.gpr[17] = (0u | 1u);
    goto L_088E7564;
L_088E7564:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E7590;
      }
      goto L_088E7588;
    }
L_088E7588:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_088E75E0;
      }
      goto L_088E7590;
    }
L_088E7590:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E75C0;
    }
    goto L_088E75AC;
L_088E75AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E75E0;
      }
      goto L_088E75C0;
    }
L_088E75C0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E75E0;
      }
      goto L_088E75DC;
    }
L_088E75DC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E75E0;
L_088E75E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E75E8;
    }
L_088E75E8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E7604u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E7604u) goto L_088E7604;
    return;
L_088E7604:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E7614u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x088E7614u) goto L_088E7614;
    return;
L_088E7614:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088E768C;
      }
      goto L_088E7630;
    }
L_088E7630:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1208)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E7678;
      }
      goto L_088E7654;
    }
L_088E7654:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088E7678;
      }
      goto L_088E7660;
    }
L_088E7660:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088E766Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 310u, 0x0899DDECu>(ctx, &aot_mem) && ctx.pc == 0x088E766Cu) goto L_088E766C;
    return;
L_088E766C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7678;
      }
      goto L_088E7674;
    }
L_088E7674:
    ctx.gpr[19] = (0u | 1u);
    goto L_088E7678;
L_088E7678:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E7630;
      }
      goto L_088E768C;
    }
L_088E768C:
    ctx.gpr[4] = (0u < ctx.gpr[19] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[19] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u < ctx.gpr[19] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E76B8;
      }
      goto L_088E76B0;
    }
L_088E76B0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_088E7708;
      }
      goto L_088E76B8;
    }
L_088E76B8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E76E8;
    }
    goto L_088E76D4;
L_088E76D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E7708;
      }
      goto L_088E76E8;
    }
L_088E76E8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[19] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7708;
      }
      goto L_088E7704;
    }
L_088E7704:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E7708;
L_088E7708:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E7710;
    }
L_088E7710:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E7728u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E7728u) goto L_088E7728;
    return;
L_088E7728:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(15472), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E7744;
    }
L_088E7744:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E775Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E775Cu) goto L_088E775C;
    return;
L_088E775C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(15474), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(15474))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088E7788;
      }
      goto L_088E7784;
    }
L_088E7784:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(15474))))));
    goto L_088E7788;
L_088E7788:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(15474), static_cast<std::uint16_t>(ctx.gpr[16]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E7798;
    }
L_088E7798:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E77B4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E77B4u) goto L_088E77B4;
    return;
L_088E77B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E77C4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x088E77C4u) goto L_088E77C4;
    return;
L_088E77C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1820), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E77D4;
    }
L_088E77D4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E77ECu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E77ECu) goto L_088E77EC;
    return;
L_088E77EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7838;
      }
      goto L_088E781C;
    }
L_088E781C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E782Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 530u, 0x08AFE33Cu>(ctx, &aot_mem) && ctx.pc == 0x088E782Cu) goto L_088E782C;
    return;
L_088E782C:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088E7844;
      }
      goto L_088E7838;
    }
L_088E7838:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    goto L_088E7844;
L_088E7844:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E7854u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x088E7854u) goto L_088E7854;
    return;
L_088E7854:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E785C;
    }
L_088E785C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E7880;
      }
      goto L_088E7878;
    }
L_088E7878:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E78D0;
      }
      goto L_088E7880;
    }
L_088E7880:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E78B0;
    }
    goto L_088E789C;
L_088E789C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E78D0;
      }
      goto L_088E78B0;
    }
L_088E78B0:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E78D0;
      }
      goto L_088E78CC;
    }
L_088E78CC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E78D0;
L_088E78D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E78D8;
    }
L_088E78D8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E78F0u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E78F0u) goto L_088E78F0;
    return;
L_088E78F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088E791C;
      }
      goto L_088E7908;
    }
L_088E7908:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088E791C;
L_088E791C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E792C;
      }
      goto L_088E7924;
    }
L_088E7924:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088E7930;
      }
      goto L_088E792C;
    }
L_088E792C:
    ctx.gpr[4] = (0u | 0u);
    goto L_088E7930;
L_088E7930:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E795C;
      }
      goto L_088E7954;
    }
L_088E7954:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E79AC;
      }
      goto L_088E795C;
    }
L_088E795C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E798C;
    }
    goto L_088E7978;
L_088E7978:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E79AC;
      }
      goto L_088E798C;
    }
L_088E798C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E79AC;
      }
      goto L_088E79A8;
    }
L_088E79A8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E79AC;
L_088E79AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E79B4;
    }
L_088E79B4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E79D0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E79D0u) goto L_088E79D0;
    return;
L_088E79D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E79E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x088E79E0u) goto L_088E79E0;
    return;
L_088E79E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E7A08;
      }
      goto L_088E79EC;
    }
L_088E79EC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088E7A00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 195u, 0x08864DC0u>(ctx, &aot_mem) && ctx.pc == 0x088E7A00u) goto L_088E7A00;
    return;
L_088E7A00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7A1C;
      }
      goto L_088E7A08;
    }
L_088E7A08:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E7A1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 195u, 0x08864DC0u>(ctx, &aot_mem) && ctx.pc == 0x088E7A1Cu) goto L_088E7A1C;
    return;
L_088E7A1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E7A24;
    }
L_088E7A24:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E7A3Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E7A3Cu) goto L_088E7A3C;
    return;
L_088E7A3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7A54;
      }
      goto L_088E7A48;
    }
L_088E7A48:
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(15926), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088E7A60;
      }
      goto L_088E7A54;
    }
L_088E7A54:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(15926), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088E7A60;
L_088E7A60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E7A68;
    }
L_088E7A68:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E7A84u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E7A84u) goto L_088E7A84;
    return;
L_088E7A84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E7A94u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x088E7A94u) goto L_088E7A94;
    return;
L_088E7A94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(502), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E7AA4;
    }
L_088E7AA4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088E7AC0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E7AC0u) goto L_088E7AC0;
    return;
L_088E7AC0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (0u | 0u);
    goto L_088E7B04;
L_088E7B04:
    ctx.gpr[7] = (ctx.gpr[5] < static_cast<std::uint32_t>(336) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7BA4;
      }
      goto L_088E7B10;
    }
L_088E7B10:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
      if (branch_taken) {
          goto L_088E7BA4;
      }
      goto L_088E7B18;
    }
L_088E7B18:
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (2275u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-30592));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7B9C;
      }
      goto L_088E7B38;
    }
L_088E7B38:
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (2275u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-30592));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
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
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E7B9C;
      }
      goto L_088E7B98;
    }
L_088E7B98:
    ctx.gpr[4] = (0u | 1u);
    goto L_088E7B9C;
L_088E7B9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088E7B04;
      }
      goto L_088E7BA4;
    }
L_088E7BA4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7BB0;
      }
      goto L_088E7BAC;
    }
L_088E7BAC:
    ctx.gpr[6] = (0u | 1u);
    goto L_088E7BB0;
L_088E7BB0:
    ctx.gpr[4] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E7BDC;
      }
      goto L_088E7BD4;
    }
L_088E7BD4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_088E7C2C;
      }
      goto L_088E7BDC;
    }
L_088E7BDC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E7C0C;
    }
    goto L_088E7BF8;
L_088E7BF8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E7C2C;
      }
      goto L_088E7C0C;
    }
L_088E7C0C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7C2C;
      }
      goto L_088E7C28;
    }
L_088E7C28:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E7C2C;
L_088E7C2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E7C34;
    }
L_088E7C34:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E7C4Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E7C4Cu) goto L_088E7C4C;
    return;
L_088E7C4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E7C5Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x088E7C5Cu) goto L_088E7C5C;
    return;
L_088E7C5C:
    ctx.gpr[31] = (0x088E7C64u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 693u, 0x0899F8F8u>(ctx, &aot_mem) && ctx.pc == 0x088E7C64u) goto L_088E7C64;
    return;
L_088E7C64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E7C6C;
    }
L_088E7C6C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E7C84u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E7C84u) goto L_088E7C84;
    return;
L_088E7C84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088E7CFC;
      }
      goto L_088E7CB8;
    }
L_088E7CB8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[4] << 5u);
    ctx.gpr[9] = (ctx.gpr[4] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (2269u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088E7CEC;
      }
      goto L_088E7CE4;
    }
L_088E7CE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088E7CFC;
      }
      goto L_088E7CEC;
    }
L_088E7CEC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E7CB8;
      }
      goto L_088E7CFC;
    }
L_088E7CFC:
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E7D28;
      }
      goto L_088E7D20;
    }
L_088E7D20:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088E7D78;
      }
      goto L_088E7D28;
    }
L_088E7D28:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E7D58;
    }
    goto L_088E7D44;
L_088E7D44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E7D78;
      }
      goto L_088E7D58;
    }
L_088E7D58:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7D78;
      }
      goto L_088E7D74;
    }
L_088E7D74:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E7D78;
L_088E7D78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E7D80;
    }
L_088E7D80:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E7D98u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E7D98u) goto L_088E7D98;
    return;
L_088E7D98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E7DA8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x088E7DA8u) goto L_088E7DA8;
    return;
L_088E7DA8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088E7DFC;
      }
      goto L_088E7DBC;
    }
L_088E7DBC:
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[8] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[8] = (2269u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088E7DEC;
      }
      goto L_088E7DE4;
    }
L_088E7DE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088E7DFC;
      }
      goto L_088E7DEC;
    }
L_088E7DEC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E7DBC;
      }
      goto L_088E7DFC;
    }
L_088E7DFC:
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E7E28;
      }
      goto L_088E7E20;
    }
L_088E7E20:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088E7E78;
      }
      goto L_088E7E28;
    }
L_088E7E28:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E7E58;
    }
    goto L_088E7E44;
L_088E7E44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E7E78;
      }
      goto L_088E7E58;
    }
L_088E7E58:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7E78;
      }
      goto L_088E7E74;
    }
L_088E7E74:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E7E78;
L_088E7E78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E7E80;
    }
L_088E7E80:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E7E9Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E7E9Cu) goto L_088E7E9C;
    return;
L_088E7E9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E7EACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x088E7EACu) goto L_088E7EAC;
    return;
L_088E7EAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E7EC8;
      }
      goto L_088E7EB8;
    }
L_088E7EB8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1510))))));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1510), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E7ED8;
      }
      goto L_088E7EC8;
    }
L_088E7EC8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1510))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1510), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088E7ED8;
L_088E7ED8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E7EE0;
    }
L_088E7EE0:
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E7F00u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E7F00u) goto L_088E7F00;
    return;
L_088E7F00:
    ctx.gpr[31] = (0x088E7F08u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x088E7F08u) goto L_088E7F08;
    return;
L_088E7F08:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E7F14u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 659u, 0x08A96D10u>(ctx, &aot_mem) && ctx.pc == 0x088E7F14u) goto L_088E7F14;
    return;
L_088E7F14:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
    ctx.gpr[31] = (0x088E7F20u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 663u, 0x08A96D54u>(ctx, &aot_mem) && ctx.pc == 0x088E7F20u) goto L_088E7F20;
    return;
L_088E7F20:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[6] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[31] = (0x088E7F44u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x088E7F44u) goto L_088E7F44;
    return;
L_088E7F44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 157u, 0x088E8BD8u>(ctx, &aot_mem); return;
      }
      goto L_088E7F4C;
    }
L_088E7F4C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E7F64u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E7F64u) goto L_088E7F64;
    return;
L_088E7F64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E7F74u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x088E7F74u) goto L_088E7F74;
    return;
L_088E7F74:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(580)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088E7F88;
      }
      goto L_088E7F84;
    }
L_088E7F84:
    ctx.gpr[17] = (0u | 1u);
    goto L_088E7F88;
L_088E7F88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E7FAC;
      }
      goto L_088E7F94;
    }
L_088E7F94:
    ctx.gpr[31] = (0x088E7F9Cu);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(848));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 220u, 0x08A293F4u>(ctx, &aot_mem) && ctx.pc == 0x088E7F9Cu) goto L_088E7F9C;
    return;
L_088E7F9C:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(225) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E7FAC;
      }
      goto L_088E7FA8;
    }
L_088E7FA8:
    ctx.gpr[17] = (0u | 1u);
    goto L_088E7FAC;
L_088E7FAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(616)));
    ctx.gpr[4] = (17274u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E7FCC;
      }
      goto L_088E7FC8;
    }
L_088E7FC8:
    ctx.gpr[17] = (0u | 1u);
    goto L_088E7FCC;
L_088E7FCC:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E7FF8;
      }
      goto L_088E7FF0;
    }
L_088E7FF0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 5u, 0x088E8048u>(ctx, &aot_mem); return;
      }
      goto L_088E7FF8;
    }
L_088E7FF8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x088E8000u; return;
}

void recomp_unit_0056(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0056_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_56(Runtime &runtime) {
    runtime.register_generated_unit(56u, 0x088E4000u, 16384u, &recomp_unit_0056, &recomp_unit_0056_entry);
    runtime.register_function(0x088E4000u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4008u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4010u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4014u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E401Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4028u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4070u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4174u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4184u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4190u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4198u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E41A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E41A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E41B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E41B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E41C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E41C8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E41D4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E41DCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E41E4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E41ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E41F4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E41FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4204u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E420Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4214u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E421Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4224u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E422Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4234u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E423Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4244u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4248u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4250u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4260u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4278u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4280u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4288u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4290u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4298u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E42A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E42A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E42B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E42B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E42BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E42C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E42ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4308u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4320u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4330u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E433Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4344u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4348u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E436Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4374u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4390u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E43A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E43C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E43C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E43CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E43E4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E43F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4400u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4408u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4410u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4418u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4420u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4428u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4430u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4438u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E443Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4460u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4468u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4484u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4498u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E44B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E44B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E44C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E44DCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E44ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E44F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4508u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4518u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4520u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4538u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4570u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4584u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4598u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E459Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E45ACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E45C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E45C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E45D4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E45E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E45ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E45FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4610u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E462Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4630u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4640u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4648u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E464Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4670u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4678u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4694u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E46A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E46C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E46C8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E46D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E46E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4710u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E472Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E473Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4754u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4760u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4770u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E477Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4784u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E47A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E47DCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E47F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4838u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4858u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4868u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4888u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4890u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E48A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E48B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E48BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E48C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E48CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E48D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E48E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E48F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E490Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E491Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4928u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E494Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4954u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4974u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E497Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4998u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E49A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E49B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E49CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E49DCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E49E4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4A00u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4A08u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4A14u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4A1Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4A38u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4A48u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4A64u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4A84u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4A94u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4AE8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4B10u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4B18u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4B20u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4B28u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4B30u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4B38u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4B50u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4B58u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4B60u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4B68u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4B70u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4B88u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4BACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4BCCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4BDCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4C30u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4C58u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4C60u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4C78u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4C80u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4C88u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4CB8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4CC0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4CD0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4CD4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4CF8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4D00u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4D1Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4D30u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4D4Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4D50u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4D58u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4D68u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4D6Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4D90u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4D98u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4DB4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4DC8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4DE4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4DE8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4DF0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E08u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E20u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E28u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E44u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E54u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E60u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E78u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E8Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E94u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4EB0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4EE0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4EECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4EF0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4EF8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F14u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F44u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F50u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F54u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F5Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F64u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F7Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F8Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4FA4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4FBCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4FC4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4FCCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5000u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5008u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5020u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5040u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5048u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5050u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5090u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5098u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E50A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E50BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E50CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E50D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E50E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E50F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5100u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5118u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E514Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5178u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5198u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E51A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E51B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E51C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E51DCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E51ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E51FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5208u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5210u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5228u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5238u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5240u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5258u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5268u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5270u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5274u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E527Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5284u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E52A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E52ACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E52C8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E52D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E52F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E52F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E52FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5320u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5328u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5344u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5358u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5374u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5378u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5380u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E539Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E53ACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E53BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E53C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E53C8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E53D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E53ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E53F4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5410u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5424u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5440u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5444u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E544Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5468u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5494u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E549Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E54B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E54DCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E54E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E54F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5504u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5514u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5520u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E554Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5554u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5570u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5580u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E558Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E559Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E55ACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E55B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E55D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E55F4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5600u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5610u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E561Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E562Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5638u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5640u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5648u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5660u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5670u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5680u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5688u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5694u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E569Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E56B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E56F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E56F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5714u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5720u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5728u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5744u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5750u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5758u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5774u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5784u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5798u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E57A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E57BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E57C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E57DCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E57E4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5800u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5810u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5828u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5848u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E584Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5870u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5878u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5894u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E58A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E58C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E58C8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E58D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E58F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5900u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5920u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5934u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E593Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5958u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5968u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5974u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5988u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E599Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E59A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E59BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E59C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E59CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E59D4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E59DCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E59E4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E59ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E59F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5A14u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5A1Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5A38u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5A4Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5A68u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5A6Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5A74u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5A90u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5AECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5AF4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B0Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B18u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B2Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B3Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B44u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B58u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B6Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B74u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B84u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B90u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B98u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5BB4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5BC4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5BDCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5BE4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C00u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C34u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C48u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C5Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C6Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C74u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C7Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C80u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5CA4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5CACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5CC8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5CDCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5CF8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5CFCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D04u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D1Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D54u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D68u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D6Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D7Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D90u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D98u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D9Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5DC0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5DC8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5DE4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5DF8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E14u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E18u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E20u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E60u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E64u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E88u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E90u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5EACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5EC0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5EDCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5EE0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5EE8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F04u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F14u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F20u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F34u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F40u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F48u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F64u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F74u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F88u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F98u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5FA8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5FB4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5FBCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5FC4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5FC8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5FECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5FF4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6010u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6024u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6040u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6044u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E604Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6064u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6074u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6088u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6098u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E60A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E60A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E60C8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E60D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E60ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6100u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E611Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6120u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6128u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6140u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6174u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6188u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E619Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E61A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E61C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E61CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E61E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E61FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6218u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E621Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6224u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E623Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E624Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E625Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E626Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E627Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6280u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E62A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E62ACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E62C8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E62DCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E62F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E62FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6304u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6308u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6324u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E635Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6378u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6394u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E63A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E63B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E63C8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E63D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E63ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6400u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6408u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6420u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6430u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6440u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6450u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6458u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6460u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6468u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6480u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E649Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E64ACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E64B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6508u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E651Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6524u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E652Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6534u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E653Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6574u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E657Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6598u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E65CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E65E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6604u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6614u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6618u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E663Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6644u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6660u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6674u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6690u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6694u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E669Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E66B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E66ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6700u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6724u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6734u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6738u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E675Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6764u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6780u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6794u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E67B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E67B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E67BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E67D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E67E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E67FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E680Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E681Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6830u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6848u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6858u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6868u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6870u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6880u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6890u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6894u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E68A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E68A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E68C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E68D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E68DCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E68E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E68F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E68F4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6900u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6918u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6978u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E69B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E69CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E69E4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E69F4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6A00u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6A0Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6A14u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6A18u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6A24u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6A3Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6AA0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6AE0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6AF4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B08u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B10u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B28u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B38u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B40u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B48u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B64u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B84u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B8Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6BE8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6BF0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C0Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C1Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C30u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C90u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C98u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6CB0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6CC0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6CCCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6CD8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6CE0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6CF0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6CF8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D14u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D24u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D30u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D44u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D50u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D58u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D70u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D80u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D8Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D98u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6DA4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6DACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6DC4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6DD4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6DE0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6DECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6DF8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E00u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E18u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E30u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E38u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E40u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E4Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E68u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E70u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E88u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E90u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6EA0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6EB0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6EC0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6EE4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6EECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6EFCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F04u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F0Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F1Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F2Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F30u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F3Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F50u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F60u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F6Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F8Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F94u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6FB4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6FCCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6FDCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7030u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7044u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E704Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7064u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E706Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7088u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7098u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E70ACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E70E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E70E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7100u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7110u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7120u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7130u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E713Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7148u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7158u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7160u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7178u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7188u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E71A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E71C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E71C8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E71E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E71E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E71F4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E71FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7208u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7220u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7228u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7244u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7270u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E727Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7280u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E72C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E72C8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E72E4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E733Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7344u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7360u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7370u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E739Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E73A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E73B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E73BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E73D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E73E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E740Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7424u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7434u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7444u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7450u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7458u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7464u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7468u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E748Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7494u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E74B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E74C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E74E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E74E4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E74ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7504u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7538u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7548u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7554u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7560u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7564u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7588u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7590u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E75ACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E75C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E75DCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E75E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E75E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7604u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7614u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7630u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7654u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7660u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E766Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7674u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7678u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E768Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E76B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E76B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E76D4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E76E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7704u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7708u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7710u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7728u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7744u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E775Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7784u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7788u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7798u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E77B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E77C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E77D4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E77ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E781Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E782Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7838u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7844u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7854u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E785Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7878u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7880u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E789Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E78B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E78CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E78D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E78D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E78F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7908u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E791Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7924u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E792Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7930u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7954u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E795Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7978u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E798Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E79A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E79ACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E79B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E79D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E79E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E79ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A00u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A08u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A1Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A24u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A3Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A48u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A54u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A60u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A68u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A84u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A94u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7AA4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7AC0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7B04u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7B10u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7B18u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7B38u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7B98u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7B9Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7BA4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7BACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7BB0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7BD4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7BDCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7BF8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C0Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C28u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C2Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C34u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C4Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C5Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C64u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C6Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C84u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7CB8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7CE4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7CECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7CFCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7D20u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7D28u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7D44u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7D58u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7D74u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7D78u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7D80u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7D98u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7DA8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7DBCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7DE4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7DECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7DFCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E20u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E28u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E44u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E58u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E74u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E78u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E80u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E9Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7EACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7EB8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7EC8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7ED8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7EE0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F00u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F08u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F14u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F20u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F44u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F4Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F64u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F74u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F84u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F88u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F94u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F9Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7FA8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7FACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7FC8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7FCCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7FF0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7FF8u, &recomp_unit_0056, "recomp_unit_0056");
}
} // namespace psprecomp
