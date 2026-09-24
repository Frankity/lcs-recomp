#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0031[4096] = {
    1, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 11, 0, 0, 0, 0, 12, 0, 0,
    0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 17, 0, 0, 18, 0, 0, 0, 19, 0, 20, 0, 0,
    0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0,
    0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 35,
    0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 41, 0,
    42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0,
    0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50,
    51, 0, 52, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 55, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0,
    59, 0, 60, 0, 61, 0, 62, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 67, 0, 0, 0,
    0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0,
    0, 0, 84, 0, 85, 86, 0, 87, 0, 88, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 91, 92, 0, 93, 0, 0, 0, 94, 95, 0, 96,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 102,
    0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 113, 0, 0, 0,
    0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0,
    0, 0, 0, 0, 125, 0, 0, 126, 0, 127, 0, 0, 128, 0, 129, 0, 130, 0, 131, 0, 132, 0, 133, 0, 134, 0, 135, 0, 136, 0, 0, 137,
    0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 144,
    0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 150, 151, 0, 0, 152, 0, 153, 0, 0,
    154, 0, 155, 0, 156, 0, 157, 0, 158, 0, 0, 159, 160, 0, 161, 0, 0, 162, 163, 0, 164, 0, 165, 0, 166, 0, 167, 0, 0, 0, 168, 0,
    0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 174, 0, 0,
    175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 181, 0, 182, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 186, 187, 0, 188, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 191, 0, 0,
    192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 199, 0, 200, 0, 201,
    0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 208, 0, 0, 0, 0, 0,
    0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0,
    0, 0, 0, 0, 214, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0,
    0, 0, 0, 0, 220, 0, 221, 222, 0, 0, 223, 0, 0, 0, 224, 0, 0, 225, 0, 226, 0, 227, 0, 228, 0, 229, 0, 0, 230, 231, 0, 232,
    0, 0, 233, 234, 0, 235, 0, 236, 0, 237, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 0,
    242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 245, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 249,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 257, 258, 0,
    259, 0, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 266, 0,
    0, 0, 0, 0, 267, 0, 268, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0,
    0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280,
    0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 283, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286,
    0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 289, 290, 0, 0, 291, 0, 0, 0, 292, 0, 0, 293, 0, 294, 0, 295, 0,
    296, 0, 297, 0, 0, 298, 299, 0, 300, 0, 0, 301, 302, 0, 303, 0, 304, 0, 305, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0,
    0, 308, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 312, 313, 0, 0, 314, 0, 315, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 320, 0, 321, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 323, 0, 0, 324, 0, 325, 326, 0, 327, 0, 0, 0, 0, 328, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 334, 0, 0, 0, 0, 0, 335, 0, 336, 0, 337, 0, 0, 0, 0, 0, 0, 338,
    0, 0, 339, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0,
    0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 351,
    0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 357,
    358, 0, 0, 359, 0, 0, 0, 360, 0, 0, 361, 0, 362, 0, 363, 0, 364, 0, 365, 0, 0, 366, 367, 0, 368, 0, 0, 369, 370, 0, 371, 0,
    372, 0, 373, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0,
    0, 0, 0, 0, 0, 0, 380, 381, 0, 0, 382, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 385, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 386, 0, 0, 0, 387, 0, 388, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 392, 393, 0, 394, 0, 0, 0, 0, 0,
    395, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 399, 0, 400, 0, 0, 401, 0, 0, 0, 402,
    0, 0, 0, 403, 0, 404, 0, 0, 0, 405, 0, 406, 0, 0, 0, 0, 0, 407, 0, 408, 0, 409, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0,
    411, 0, 0, 412, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 415, 0, 416, 0, 0, 417, 0, 418, 0, 419, 0, 420, 0, 421, 0, 422, 0,
    423, 0, 424, 0, 425, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0,
    431, 0, 0, 0, 0, 432, 0, 433, 0, 434, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 439,
    440, 0, 0, 441, 0, 442, 0, 0, 443, 0, 444, 0, 445, 0, 446, 0, 447, 0, 0, 448, 449, 0, 450, 0, 0, 451, 452, 0, 453, 0, 454, 0,
    455, 0, 456, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0,
    0, 0, 0, 0, 462, 463, 0, 0, 464, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 467, 0, 0, 0, 0, 0, 0, 0,
    0, 468, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0,
    0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    473, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0,
    0, 0, 477, 0, 0, 478, 0, 0, 0, 0, 0, 0, 479, 0, 480, 0, 0, 0, 481, 0, 482, 0, 0, 0, 483, 484, 0, 485, 0, 0, 486, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 488, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0,
    0, 491, 0, 492, 0, 0, 0, 493, 0, 494, 0, 0, 0, 495, 0, 496, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 499, 0, 0, 0,
    0, 0, 0, 500, 0, 0, 0, 501, 0, 502, 0, 503, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 506, 0, 0, 0, 0, 0, 0, 507, 0, 0, 508, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 511, 0, 0, 0, 512, 0, 0, 0, 0, 513, 0, 0, 0, 0, 514, 0, 0, 515, 516, 0,
    0, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 520, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0,
    0, 523, 0, 0, 0, 524, 525, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 528,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 530, 0, 531, 0, 0, 0, 0, 0, 532, 0, 0, 533, 0, 534, 0, 535, 0, 536,
    0, 537, 0, 0, 0, 0, 538, 0, 539, 0, 540, 0, 0, 541, 0, 542, 543, 0, 0, 0, 0, 544, 0, 0, 545, 0, 546, 0, 0, 0, 547, 0,
    0, 0, 0, 548, 0, 549, 0, 550, 0, 551, 0, 0, 0, 0, 0, 0, 552, 0, 553, 0, 0, 554, 0, 555, 0, 556, 0, 557, 0, 558, 0, 559,
    0, 560, 561, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 564, 0, 0, 565, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0,
    568, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 571, 0, 572, 0, 573, 0, 574, 0, 0, 0, 575, 0, 576, 0, 577, 0,
    0, 578, 0, 0, 579, 0, 580, 0, 0, 581, 0, 0, 0, 0, 0, 582, 583, 0, 0, 0, 0, 584, 0, 0, 585, 0, 586, 0, 587, 0, 0, 588,
    0, 0, 589, 0, 590, 0, 0, 591, 0, 0, 0, 0, 0, 0, 592, 0, 593, 0, 0, 0, 0, 594, 0, 595, 0, 596, 0, 597, 0, 0, 598, 0,
    0, 599, 0, 600, 0, 0, 601, 0, 0, 0, 0, 0, 602, 603, 0, 604, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 610, 0, 0,
    0, 611, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 614, 0, 0, 0, 0, 0, 615, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 620, 0, 621, 0, 0, 0, 622, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 624, 0, 0, 0, 625, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 627, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 630, 0, 631, 0, 632, 0,
    0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 635, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 638, 0, 0,
    639, 0, 0, 0, 640, 0, 0, 641, 0, 642, 0, 0, 643, 0, 644, 645, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 647, 0, 648, 0, 0, 0,
    0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 651, 0, 0, 652, 0, 0,
    0, 653, 0, 0, 0, 0, 654, 0, 0, 0, 655, 0, 656, 0, 0, 0, 657, 0, 658, 0, 0, 0, 659, 0, 660, 0, 661, 0, 0, 0, 662, 0,
    663, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 666, 0, 0,
    0, 0, 0, 0, 667, 0, 668, 0, 669, 0, 0, 0, 0, 0, 0, 670, 0, 0, 671, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 673, 0, 0,
    0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 676, 0, 677, 0, 678, 0, 0, 679, 0, 0, 680, 0, 681, 0, 0, 0, 682,
    0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 685, 0, 0, 0, 0, 0, 686, 0, 687, 0, 688, 0, 0, 689,
    0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 692, 0, 693, 0, 0, 694, 0, 695, 0, 0, 0, 0, 0, 0,
    0, 696, 0, 0, 0, 697, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 700, 0, 0, 0, 701, 0, 0, 0,
    0, 0, 0, 702, 0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 0, 709, 0, 0,
    0, 0, 0, 0, 0, 710, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 0, 0, 712, 0, 0, 713, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 0, 0, 716, 0, 717, 0, 0, 0, 0, 0, 0, 0, 0, 0, 718, 0,
    0, 0, 0, 0, 719, 0, 0, 720, 0, 0, 0, 0, 0, 721, 0, 0, 0, 722, 0, 0, 0, 0, 723, 0, 0, 0, 724, 0, 0, 725, 0, 0,
    726, 0, 0, 0, 0, 0, 727, 0, 0, 0, 728, 0, 0, 0, 729, 0, 730, 0, 0, 0, 0, 731, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    732, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 736, 0, 0, 0, 0,
    0, 737, 0, 0, 0, 738, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 0, 740, 0, 741, 0, 0, 0, 0, 742, 0, 743, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 744, 0, 0, 745, 0, 0, 0, 0, 0, 746, 0, 747, 0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 0,
    0, 0, 0, 749, 0, 0, 750, 0, 0, 0, 0, 751, 0, 0, 0, 0, 752, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 753, 0, 0, 0,
    754, 0, 0, 0, 755, 0, 0, 0, 756, 0, 0, 0, 0, 0, 757, 0, 758, 0, 0, 0, 759, 0, 760, 0, 0, 761, 0, 762, 763, 0, 0, 0,
    0, 0, 764, 0, 0, 0, 0, 0, 765, 0, 0, 0, 766, 0, 767, 0, 0, 0, 0, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 769,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 770, 0, 0, 0, 0, 0, 0, 771, 0, 0, 772, 0, 0, 773, 0, 0, 0, 0,
    774, 0, 0, 0, 0, 775, 0, 0, 0, 0, 0, 0, 776, 0, 0, 0, 777, 0, 0, 0, 778, 0, 0, 0, 779, 0, 0, 0, 780, 0, 781, 0,
    782, 0, 0, 783, 784, 0, 0, 0, 0, 785, 0, 0, 0, 0, 0, 0, 0, 786, 0, 0, 0, 787, 0, 788, 0, 0, 0, 789, 0, 0, 790, 0,
    0, 0, 0, 0, 0, 791, 0, 0, 0, 792, 0, 793, 0, 794, 0, 795, 0, 796, 0, 0, 0, 0, 797, 0, 798, 0, 799, 0, 0, 0, 0, 800,
    0, 0, 0, 0, 801, 0, 802, 0, 803, 0, 0, 804, 0, 0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 806, 0, 0, 807, 0,
    808, 0, 0, 809, 0, 0, 0, 810, 0, 811, 0, 0, 812, 0, 813, 0, 814, 0, 0, 815, 0, 0, 0, 0, 0, 816, 0, 817, 0, 0, 818, 0,
    0, 0, 0, 819, 0, 820, 0, 0, 821, 0, 0, 0, 0, 0, 822, 0, 823, 0, 0, 824, 0, 0, 0, 0, 0, 825, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 826, 0, 0, 827, 0, 0, 0, 828, 0, 0, 0, 0, 829, 0, 0, 0, 0, 0, 830, 0, 0, 831, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 832, 0, 0, 0, 833, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 834, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 835, 0, 0, 0, 0, 0, 0, 0, 0, 0, 836, 0, 0, 0, 0, 0, 0, 0, 0, 0, 837, 0, 838, 0, 0, 839, 0, 0, 840, 0,
    0, 0, 0, 0, 841, 0, 0, 0, 0, 0, 842, 0, 0, 0, 0, 0, 0, 843, 0, 0, 0, 844, 0, 845, 0, 846, 0, 847, 0, 848, 0, 849,
};
void recomp_unit_0031_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08880000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0031[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08880000;
    case 2u: goto L_08880008;
    case 3u: goto L_08880010;
    case 4u: goto L_08880038;
    case 5u: goto L_08880040;
    case 6u: goto L_08880060;
    case 7u: goto L_08880070;
    case 8u: goto L_08880098;
    case 9u: goto L_088800CC;
    case 10u: goto L_088800D8;
    case 11u: goto L_088800E0;
    case 12u: goto L_088800F4;
    case 13u: goto L_08880108;
    case 14u: goto L_08880120;
    case 15u: goto L_08880140;
    case 16u: goto L_08880148;
    case 17u: goto L_08880150;
    case 18u: goto L_0888015C;
    case 19u: goto L_0888016C;
    case 20u: goto L_08880174;
    case 21u: goto L_08880184;
    case 22u: goto L_0888018C;
    case 23u: goto L_088801A8;
    case 24u: goto L_088801BC;
    case 25u: goto L_088801D0;
    case 26u: goto L_088801E4;
    case 27u: goto L_088801F8;
    case 28u: goto L_0888020C;
    case 29u: goto L_08880220;
    case 30u: goto L_08880228;
    case 31u: goto L_0888023C;
    case 32u: goto L_08880250;
    case 33u: goto L_08880264;
    case 34u: goto L_08880278;
    case 35u: goto L_0888027C;
    case 36u: goto L_088802A0;
    case 37u: goto L_088802A8;
    case 38u: goto L_088802C0;
    case 39u: goto L_088802D4;
    case 40u: goto L_088802F4;
    case 41u: goto L_088802F8;
    case 42u: goto L_08880300;
    case 43u: goto L_08880308;
    case 44u: goto L_08880330;
    case 45u: goto L_08880338;
    case 46u: goto L_08880358;
    case 47u: goto L_08880368;
    case 48u: goto L_08880388;
    case 49u: goto L_088803F4;
    case 50u: goto L_088803FC;
    case 51u: goto L_08880400;
    case 52u: goto L_08880408;
    case 53u: goto L_0888041C;
    case 54u: goto L_08880424;
    case 55u: goto L_08880438;
    case 56u: goto L_0888043C;
    case 57u: goto L_08880460;
    case 58u: goto L_08880478;
    case 59u: goto L_08880480;
    case 60u: goto L_08880488;
    case 61u: goto L_08880490;
    case 62u: goto L_08880498;
    case 63u: goto L_088804A0;
    case 64u: goto L_088804AC;
    case 65u: goto L_088804DC;
    case 66u: goto L_088804E4;
    case 67u: goto L_088804F0;
    case 68u: goto L_08880510;
    case 69u: goto L_08880524;
    case 70u: goto L_08880618;
    case 71u: goto L_08880638;
    case 72u: goto L_088806A4;
    case 73u: goto L_088806AC;
    case 74u: goto L_088806E0;
    case 75u: goto L_08880720;
    case 76u: goto L_08880730;
    case 77u: goto L_08880754;
    case 78u: goto L_0888075C;
    case 79u: goto L_08880790;
    case 80u: goto L_088807BC;
    case 81u: goto L_088807D0;
    case 82u: goto L_088807D8;
    case 83u: goto L_088807F0;
    case 84u: goto L_08880808;
    case 85u: goto L_08880810;
    case 86u: goto L_08880814;
    case 87u: goto L_0888081C;
    case 88u: goto L_08880824;
    case 89u: goto L_0888083C;
    case 90u: goto L_08880844;
    case 91u: goto L_08880854;
    case 92u: goto L_08880858;
    case 93u: goto L_08880860;
    case 94u: goto L_08880870;
    case 95u: goto L_08880874;
    case 96u: goto L_0888087C;
    case 97u: goto L_088808A4;
    case 98u: goto L_088808AC;
    case 99u: goto L_088808C4;
    case 100u: goto L_088808D8;
    case 101u: goto L_088808F8;
    case 102u: goto L_088808FC;
    case 103u: goto L_08880904;
    case 104u: goto L_0888090C;
    case 105u: goto L_08880950;
    case 106u: goto L_08880958;
    case 107u: goto L_08880990;
    case 108u: goto L_088809A0;
    case 109u: goto L_088809A8;
    case 110u: goto L_088809EC;
    case 111u: goto L_08880A5C;
    case 112u: goto L_08880A68;
    case 113u: goto L_08880A70;
    case 114u: goto L_08880A88;
    case 115u: goto L_08880AA0;
    case 116u: goto L_08880AD8;
    case 117u: goto L_08880B0C;
    case 118u: goto L_08880B24;
    case 119u: goto L_08880B2C;
    case 120u: goto L_08880B34;
    case 121u: goto L_08880B54;
    case 122u: goto L_08880B60;
    case 123u: goto L_08880B6C;
    case 124u: goto L_08880B78;
    case 125u: goto L_08880B90;
    case 126u: goto L_08880B9C;
    case 127u: goto L_08880BA4;
    case 128u: goto L_08880BB0;
    case 129u: goto L_08880BB8;
    case 130u: goto L_08880BC0;
    case 131u: goto L_08880BC8;
    case 132u: goto L_08880BD0;
    case 133u: goto L_08880BD8;
    case 134u: goto L_08880BE0;
    case 135u: goto L_08880BE8;
    case 136u: goto L_08880BF0;
    case 137u: goto L_08880BFC;
    case 138u: goto L_08880C10;
    case 139u: goto L_08880C24;
    case 140u: goto L_08880C38;
    case 141u: goto L_08880C4C;
    case 142u: goto L_08880C60;
    case 143u: goto L_08880C74;
    case 144u: goto L_08880C7C;
    case 145u: goto L_08880C84;
    case 146u: goto L_08880C98;
    case 147u: goto L_08880CAC;
    case 148u: goto L_08880CC0;
    case 149u: goto L_08880CD4;
    case 150u: goto L_08880CDC;
    case 151u: goto L_08880CE0;
    case 152u: goto L_08880CEC;
    case 153u: goto L_08880CF4;
    case 154u: goto L_08880D00;
    case 155u: goto L_08880D08;
    case 156u: goto L_08880D10;
    case 157u: goto L_08880D18;
    case 158u: goto L_08880D20;
    case 159u: goto L_08880D2C;
    case 160u: goto L_08880D30;
    case 161u: goto L_08880D38;
    case 162u: goto L_08880D44;
    case 163u: goto L_08880D48;
    case 164u: goto L_08880D50;
    case 165u: goto L_08880D58;
    case 166u: goto L_08880D60;
    case 167u: goto L_08880D68;
    case 168u: goto L_08880D78;
    case 169u: goto L_08880D9C;
    case 170u: goto L_08880DA4;
    case 171u: goto L_08880DBC;
    case 172u: goto L_08880DD0;
    case 173u: goto L_08880DF0;
    case 174u: goto L_08880DF4;
    case 175u: goto L_08880E00;
    case 176u: goto L_08880E0C;
    case 177u: goto L_08880E28;
    case 178u: goto L_08880E30;
    case 179u: goto L_08880E50;
    case 180u: goto L_08880E60;
    case 181u: goto L_08880E6C;
    case 182u: goto L_08880E74;
    case 183u: goto L_08880EBC;
    case 184u: goto L_08880F24;
    case 185u: goto L_08880F30;
    case 186u: goto L_08880F38;
    case 187u: goto L_08880F3C;
    case 188u: goto L_08880F44;
    case 189u: goto L_08880F58;
    case 190u: goto L_08880F60;
    case 191u: goto L_08880F74;
    case 192u: goto L_08880F80;
    case 193u: goto L_08880F90;
    case 194u: goto L_08880FA8;
    case 195u: goto L_08880FB4;
    case 196u: goto L_08880FC0;
    case 197u: goto L_08880FD0;
    case 198u: goto L_08880FD8;
    case 199u: goto L_08880FEC;
    case 200u: goto L_08880FF4;
    case 201u: goto L_08880FFC;
    case 202u: goto L_08881018;
    case 203u: goto L_08881024;
    case 204u: goto L_08881030;
    case 205u: goto L_0888103C;
    case 206u: goto L_08881054;
    case 207u: goto L_08881060;
    case 208u: goto L_08881068;
    case 209u: goto L_08881084;
    case 210u: goto L_088810A0;
    case 211u: goto L_088810BC;
    case 212u: goto L_088810D8;
    case 213u: goto L_088810F4;
    case 214u: goto L_08881110;
    case 215u: goto L_08881118;
    case 216u: goto L_08881120;
    case 217u: goto L_0888113C;
    case 218u: goto L_08881158;
    case 219u: goto L_08881174;
    case 220u: goto L_08881190;
    case 221u: goto L_08881198;
    case 222u: goto L_0888119C;
    case 223u: goto L_088811A8;
    case 224u: goto L_088811B8;
    case 225u: goto L_088811C4;
    case 226u: goto L_088811CC;
    case 227u: goto L_088811D4;
    case 228u: goto L_088811DC;
    case 229u: goto L_088811E4;
    case 230u: goto L_088811F0;
    case 231u: goto L_088811F4;
    case 232u: goto L_088811FC;
    case 233u: goto L_08881208;
    case 234u: goto L_0888120C;
    case 235u: goto L_08881214;
    case 236u: goto L_0888121C;
    case 237u: goto L_08881224;
    case 238u: goto L_0888122C;
    case 239u: goto L_0888123C;
    case 240u: goto L_08881260;
    case 241u: goto L_08881268;
    case 242u: goto L_08881280;
    case 243u: goto L_08881294;
    case 244u: goto L_088812B4;
    case 245u: goto L_088812B8;
    case 246u: goto L_088812C4;
    case 247u: goto L_088812CC;
    case 248u: goto L_088812F4;
    case 249u: goto L_088812FC;
    case 250u: goto L_08881324;
    case 251u: goto L_08881334;
    case 252u: goto L_0888133C;
    case 253u: goto L_08881344;
    case 254u: goto L_08881380;
    case 255u: goto L_088813E0;
    case 256u: goto L_088813EC;
    case 257u: goto L_088813F4;
    case 258u: goto L_088813F8;
    case 259u: goto L_08881400;
    case 260u: goto L_08881414;
    case 261u: goto L_0888141C;
    case 262u: goto L_08881430;
    case 263u: goto L_08881440;
    case 264u: goto L_08881460;
    case 265u: goto L_08881470;
    case 266u: goto L_08881478;
    case 267u: goto L_08881490;
    case 268u: goto L_08881498;
    case 269u: goto L_088814A0;
    case 270u: goto L_088814BC;
    case 271u: goto L_088814C8;
    case 272u: goto L_088814D4;
    case 273u: goto L_088814E0;
    case 274u: goto L_088814F8;
    case 275u: goto L_08881504;
    case 276u: goto L_0888150C;
    case 277u: goto L_08881528;
    case 278u: goto L_08881544;
    case 279u: goto L_08881560;
    case 280u: goto L_0888157C;
    case 281u: goto L_08881598;
    case 282u: goto L_088815B4;
    case 283u: goto L_088815BC;
    case 284u: goto L_088815C4;
    case 285u: goto L_088815E0;
    case 286u: goto L_088815FC;
    case 287u: goto L_08881618;
    case 288u: goto L_08881634;
    case 289u: goto L_0888163C;
    case 290u: goto L_08881640;
    case 291u: goto L_0888164C;
    case 292u: goto L_0888165C;
    case 293u: goto L_08881668;
    case 294u: goto L_08881670;
    case 295u: goto L_08881678;
    case 296u: goto L_08881680;
    case 297u: goto L_08881688;
    case 298u: goto L_08881694;
    case 299u: goto L_08881698;
    case 300u: goto L_088816A0;
    case 301u: goto L_088816AC;
    case 302u: goto L_088816B0;
    case 303u: goto L_088816B8;
    case 304u: goto L_088816C0;
    case 305u: goto L_088816C8;
    case 306u: goto L_088816D0;
    case 307u: goto L_088816E0;
    case 308u: goto L_08881704;
    case 309u: goto L_0888170C;
    case 310u: goto L_08881724;
    case 311u: goto L_08881738;
    case 312u: goto L_08881758;
    case 313u: goto L_0888175C;
    case 314u: goto L_08881768;
    case 315u: goto L_08881770;
    case 316u: goto L_08881798;
    case 317u: goto L_088817A0;
    case 318u: goto L_088817C8;
    case 319u: goto L_088817D8;
    case 320u: goto L_088817E0;
    case 321u: goto L_088817E8;
    case 322u: goto L_08881824;
    case 323u: goto L_08881884;
    case 324u: goto L_08881890;
    case 325u: goto L_08881898;
    case 326u: goto L_0888189C;
    case 327u: goto L_088818A4;
    case 328u: goto L_088818B8;
    case 329u: goto L_088818C0;
    case 330u: goto L_088818D4;
    case 331u: goto L_08881904;
    case 332u: goto L_08881920;
    case 333u: goto L_08881930;
    case 334u: goto L_08881938;
    case 335u: goto L_08881950;
    case 336u: goto L_08881958;
    case 337u: goto L_08881960;
    case 338u: goto L_0888197C;
    case 339u: goto L_08881988;
    case 340u: goto L_08881994;
    case 341u: goto L_088819A0;
    case 342u: goto L_088819B8;
    case 343u: goto L_088819C4;
    case 344u: goto L_088819CC;
    case 345u: goto L_088819E8;
    case 346u: goto L_08881A04;
    case 347u: goto L_08881A20;
    case 348u: goto L_08881A3C;
    case 349u: goto L_08881A58;
    case 350u: goto L_08881A74;
    case 351u: goto L_08881A7C;
    case 352u: goto L_08881A84;
    case 353u: goto L_08881AA0;
    case 354u: goto L_08881ABC;
    case 355u: goto L_08881AD8;
    case 356u: goto L_08881AF4;
    case 357u: goto L_08881AFC;
    case 358u: goto L_08881B00;
    case 359u: goto L_08881B0C;
    case 360u: goto L_08881B1C;
    case 361u: goto L_08881B28;
    case 362u: goto L_08881B30;
    case 363u: goto L_08881B38;
    case 364u: goto L_08881B40;
    case 365u: goto L_08881B48;
    case 366u: goto L_08881B54;
    case 367u: goto L_08881B58;
    case 368u: goto L_08881B60;
    case 369u: goto L_08881B6C;
    case 370u: goto L_08881B70;
    case 371u: goto L_08881B78;
    case 372u: goto L_08881B80;
    case 373u: goto L_08881B88;
    case 374u: goto L_08881B90;
    case 375u: goto L_08881BA0;
    case 376u: goto L_08881BC4;
    case 377u: goto L_08881BCC;
    case 378u: goto L_08881BE4;
    case 379u: goto L_08881BF8;
    case 380u: goto L_08881C18;
    case 381u: goto L_08881C1C;
    case 382u: goto L_08881C28;
    case 383u: goto L_08881C30;
    case 384u: goto L_08881C58;
    case 385u: goto L_08881C60;
    case 386u: goto L_08881C88;
    case 387u: goto L_08881C98;
    case 388u: goto L_08881CA0;
    case 389u: goto L_08881CA8;
    case 390u: goto L_08881CE4;
    case 391u: goto L_08881D54;
    case 392u: goto L_08881D5C;
    case 393u: goto L_08881D60;
    case 394u: goto L_08881D68;
    case 395u: goto L_08881D80;
    case 396u: goto L_08881D88;
    case 397u: goto L_08881DA0;
    case 398u: goto L_08881DB8;
    case 399u: goto L_08881DD8;
    case 400u: goto L_08881DE0;
    case 401u: goto L_08881DEC;
    case 402u: goto L_08881DFC;
    case 403u: goto L_08881E0C;
    case 404u: goto L_08881E14;
    case 405u: goto L_08881E24;
    case 406u: goto L_08881E2C;
    case 407u: goto L_08881E44;
    case 408u: goto L_08881E4C;
    case 409u: goto L_08881E54;
    case 410u: goto L_08881E74;
    case 411u: goto L_08881E80;
    case 412u: goto L_08881E8C;
    case 413u: goto L_08881E98;
    case 414u: goto L_08881EB0;
    case 415u: goto L_08881EBC;
    case 416u: goto L_08881EC4;
    case 417u: goto L_08881ED0;
    case 418u: goto L_08881ED8;
    case 419u: goto L_08881EE0;
    case 420u: goto L_08881EE8;
    case 421u: goto L_08881EF0;
    case 422u: goto L_08881EF8;
    case 423u: goto L_08881F00;
    case 424u: goto L_08881F08;
    case 425u: goto L_08881F10;
    case 426u: goto L_08881F1C;
    case 427u: goto L_08881F30;
    case 428u: goto L_08881F44;
    case 429u: goto L_08881F58;
    case 430u: goto L_08881F6C;
    case 431u: goto L_08881F80;
    case 432u: goto L_08881F94;
    case 433u: goto L_08881F9C;
    case 434u: goto L_08881FA4;
    case 435u: goto L_08881FB8;
    case 436u: goto L_08881FCC;
    case 437u: goto L_08881FE0;
    case 438u: goto L_08881FF4;
    case 439u: goto L_08881FFC;
    case 440u: goto L_08882000;
    case 441u: goto L_0888200C;
    case 442u: goto L_08882014;
    case 443u: goto L_08882020;
    case 444u: goto L_08882028;
    case 445u: goto L_08882030;
    case 446u: goto L_08882038;
    case 447u: goto L_08882040;
    case 448u: goto L_0888204C;
    case 449u: goto L_08882050;
    case 450u: goto L_08882058;
    case 451u: goto L_08882064;
    case 452u: goto L_08882068;
    case 453u: goto L_08882070;
    case 454u: goto L_08882078;
    case 455u: goto L_08882080;
    case 456u: goto L_08882088;
    case 457u: goto L_08882098;
    case 458u: goto L_088820BC;
    case 459u: goto L_088820C4;
    case 460u: goto L_088820DC;
    case 461u: goto L_088820F0;
    case 462u: goto L_08882110;
    case 463u: goto L_08882114;
    case 464u: goto L_08882120;
    case 465u: goto L_0888212C;
    case 466u: goto L_08882158;
    case 467u: goto L_08882160;
    case 468u: goto L_08882184;
    case 469u: goto L_08882194;
    case 470u: goto L_088821DC;
    case 471u: goto L_08882278;
    case 472u: goto L_08882284;
    case 473u: goto L_08882300;
    case 474u: goto L_08882320;
    case 475u: goto L_0888234C;
    case 476u: goto L_08882374;
    case 477u: goto L_08882388;
    case 478u: goto L_08882394;
    case 479u: goto L_088823B0;
    case 480u: goto L_088823B8;
    case 481u: goto L_088823C8;
    case 482u: goto L_088823D0;
    case 483u: goto L_088823E0;
    case 484u: goto L_088823E4;
    case 485u: goto L_088823EC;
    case 486u: goto L_088823F8;
    case 487u: goto L_0888242C;
    case 488u: goto L_0888243C;
    case 489u: goto L_08882448;
    case 490u: goto L_08882468;
    case 491u: goto L_08882484;
    case 492u: goto L_0888248C;
    case 493u: goto L_0888249C;
    case 494u: goto L_088824A4;
    case 495u: goto L_088824B4;
    case 496u: goto L_088824BC;
    case 497u: goto L_088824D8;
    case 498u: goto L_088824E8;
    case 499u: goto L_088824F0;
    case 500u: goto L_0888250C;
    case 501u: goto L_0888251C;
    case 502u: goto L_08882524;
    case 503u: goto L_0888252C;
    case 504u: goto L_0888254C;
    case 505u: goto L_088825C8;
    case 506u: goto L_088825CC;
    case 507u: goto L_088825E8;
    case 508u: goto L_088825F4;
    case 509u: goto L_08882624;
    case 510u: goto L_088826A4;
    case 511u: goto L_088826B0;
    case 512u: goto L_088826C0;
    case 513u: goto L_088826D4;
    case 514u: goto L_088826E8;
    case 515u: goto L_088826F4;
    case 516u: goto L_088826F8;
    case 517u: goto L_0888270C;
    case 518u: goto L_0888271C;
    case 519u: goto L_08882738;
    case 520u: goto L_0888274C;
    case 521u: goto L_08882754;
    case 522u: goto L_08882778;
    case 523u: goto L_08882784;
    case 524u: goto L_08882794;
    case 525u: goto L_08882798;
    case 526u: goto L_088827B8;
    case 527u: goto L_088827F4;
    case 528u: goto L_088827FC;
    case 529u: goto L_08882834;
    case 530u: goto L_08882838;
    case 531u: goto L_08882840;
    case 532u: goto L_08882858;
    case 533u: goto L_08882864;
    case 534u: goto L_0888286C;
    case 535u: goto L_08882874;
    case 536u: goto L_0888287C;
    case 537u: goto L_08882884;
    case 538u: goto L_08882898;
    case 539u: goto L_088828A0;
    case 540u: goto L_088828A8;
    case 541u: goto L_088828B4;
    case 542u: goto L_088828BC;
    case 543u: goto L_088828C0;
    case 544u: goto L_088828D4;
    case 545u: goto L_088828E0;
    case 546u: goto L_088828E8;
    case 547u: goto L_088828F8;
    case 548u: goto L_0888290C;
    case 549u: goto L_08882914;
    case 550u: goto L_0888291C;
    case 551u: goto L_08882924;
    case 552u: goto L_08882940;
    case 553u: goto L_08882948;
    case 554u: goto L_08882954;
    case 555u: goto L_0888295C;
    case 556u: goto L_08882964;
    case 557u: goto L_0888296C;
    case 558u: goto L_08882974;
    case 559u: goto L_0888297C;
    case 560u: goto L_08882984;
    case 561u: goto L_08882988;
    case 562u: goto L_0888299C;
    case 563u: goto L_088829D0;
    case 564u: goto L_08882A18;
    case 565u: goto L_08882A24;
    case 566u: goto L_08882A28;
    case 567u: goto L_08882A68;
    case 568u: goto L_08882A80;
    case 569u: goto L_08882A94;
    case 570u: goto L_08882AB4;
    case 571u: goto L_08882AC0;
    case 572u: goto L_08882AC8;
    case 573u: goto L_08882AD0;
    case 574u: goto L_08882AD8;
    case 575u: goto L_08882AE8;
    case 576u: goto L_08882AF0;
    case 577u: goto L_08882AF8;
    case 578u: goto L_08882B04;
    case 579u: goto L_08882B10;
    case 580u: goto L_08882B18;
    case 581u: goto L_08882B24;
    case 582u: goto L_08882B3C;
    case 583u: goto L_08882B40;
    case 584u: goto L_08882B54;
    case 585u: goto L_08882B60;
    case 586u: goto L_08882B68;
    case 587u: goto L_08882B70;
    case 588u: goto L_08882B7C;
    case 589u: goto L_08882B88;
    case 590u: goto L_08882B90;
    case 591u: goto L_08882B9C;
    case 592u: goto L_08882BB8;
    case 593u: goto L_08882BC0;
    case 594u: goto L_08882BD4;
    case 595u: goto L_08882BDC;
    case 596u: goto L_08882BE4;
    case 597u: goto L_08882BEC;
    case 598u: goto L_08882BF8;
    case 599u: goto L_08882C04;
    case 600u: goto L_08882C0C;
    case 601u: goto L_08882C18;
    case 602u: goto L_08882C30;
    case 603u: goto L_08882C34;
    case 604u: goto L_08882C3C;
    case 605u: goto L_08882C5C;
    case 606u: goto L_08882C90;
    case 607u: goto L_08882D08;
    case 608u: goto L_08882D38;
    case 609u: goto L_08882D5C;
    case 610u: goto L_08882D74;
    case 611u: goto L_08882D84;
    case 612u: goto L_08882D90;
    case 613u: goto L_08882DB4;
    case 614u: goto L_08882DBC;
    case 615u: goto L_08882DD4;
    case 616u: goto L_08882DE0;
    case 617u: goto L_08882E18;
    case 618u: goto L_08882E2C;
    case 619u: goto L_08882E44;
    case 620u: goto L_08882E58;
    case 621u: goto L_08882E60;
    case 622u: goto L_08882E70;
    case 623u: goto L_08882EA8;
    case 624u: goto L_08882EBC;
    case 625u: goto L_08882ECC;
    case 626u: goto L_08882ED8;
    case 627u: goto L_08882F18;
    case 628u: goto L_08882F24;
    case 629u: goto L_08882F60;
    case 630u: goto L_08882F68;
    case 631u: goto L_08882F70;
    case 632u: goto L_08882F78;
    case 633u: goto L_08882F8C;
    case 634u: goto L_08882FB0;
    case 635u: goto L_08882FB8;
    case 636u: goto L_08882FC0;
    case 637u: goto L_08882FF0;
    case 638u: goto L_08882FF4;
    case 639u: goto L_08883000;
    case 640u: goto L_08883010;
    case 641u: goto L_0888301C;
    case 642u: goto L_08883024;
    case 643u: goto L_08883030;
    case 644u: goto L_08883038;
    case 645u: goto L_0888303C;
    case 646u: goto L_0888305C;
    case 647u: goto L_08883068;
    case 648u: goto L_08883070;
    case 649u: goto L_08883094;
    case 650u: goto L_088830E4;
    case 651u: goto L_088830E8;
    case 652u: goto L_088830F4;
    case 653u: goto L_08883104;
    case 654u: goto L_08883118;
    case 655u: goto L_08883128;
    case 656u: goto L_08883130;
    case 657u: goto L_08883140;
    case 658u: goto L_08883148;
    case 659u: goto L_08883158;
    case 660u: goto L_08883160;
    case 661u: goto L_08883168;
    case 662u: goto L_08883178;
    case 663u: goto L_08883180;
    case 664u: goto L_088831B0;
    case 665u: goto L_088831DC;
    case 666u: goto L_088831F4;
    case 667u: goto L_08883210;
    case 668u: goto L_08883218;
    case 669u: goto L_08883220;
    case 670u: goto L_0888323C;
    case 671u: goto L_08883248;
    case 672u: goto L_08883264;
    case 673u: goto L_08883274;
    case 674u: goto L_08883288;
    case 675u: goto L_088832B0;
    case 676u: goto L_088832BC;
    case 677u: goto L_088832C4;
    case 678u: goto L_088832CC;
    case 679u: goto L_088832D8;
    case 680u: goto L_088832E4;
    case 681u: goto L_088832EC;
    case 682u: goto L_088832FC;
    case 683u: goto L_08883318;
    case 684u: goto L_0888333C;
    case 685u: goto L_08883348;
    case 686u: goto L_08883360;
    case 687u: goto L_08883368;
    case 688u: goto L_08883370;
    case 689u: goto L_0888337C;
    case 690u: goto L_08883398;
    case 691u: goto L_088833B8;
    case 692u: goto L_088833C8;
    case 693u: goto L_088833D0;
    case 694u: goto L_088833DC;
    case 695u: goto L_088833E4;
    case 696u: goto L_08883404;
    case 697u: goto L_08883414;
    case 698u: goto L_08883420;
    case 699u: goto L_0888344C;
    case 700u: goto L_08883460;
    case 701u: goto L_08883470;
    case 702u: goto L_0888348C;
    case 703u: goto L_088834B0;
    case 704u: goto L_088834B8;
    case 705u: goto L_088834F0;
    case 706u: goto L_0888351C;
    case 707u: goto L_08883538;
    case 708u: goto L_08883568;
    case 709u: goto L_08883574;
    case 710u: goto L_08883594;
    case 711u: goto L_088835A0;
    case 712u: goto L_088835C8;
    case 713u: goto L_088835D4;
    case 714u: goto L_088835E4;
    case 715u: goto L_08883624;
    case 716u: goto L_08883648;
    case 717u: goto L_08883650;
    case 718u: goto L_08883678;
    case 719u: goto L_08883690;
    case 720u: goto L_0888369C;
    case 721u: goto L_088836B4;
    case 722u: goto L_088836C4;
    case 723u: goto L_088836D8;
    case 724u: goto L_088836E8;
    case 725u: goto L_088836F4;
    case 726u: goto L_08883700;
    case 727u: goto L_08883718;
    case 728u: goto L_08883728;
    case 729u: goto L_08883738;
    case 730u: goto L_08883740;
    case 731u: goto L_08883754;
    case 732u: goto L_08883780;
    case 733u: goto L_08883798;
    case 734u: goto L_088837B4;
    case 735u: goto L_088837D8;
    case 736u: goto L_088837EC;
    case 737u: goto L_08883804;
    case 738u: goto L_08883814;
    case 739u: goto L_08883824;
    case 740u: goto L_08883844;
    case 741u: goto L_0888384C;
    case 742u: goto L_08883860;
    case 743u: goto L_08883868;
    case 744u: goto L_088838A4;
    case 745u: goto L_088838B0;
    case 746u: goto L_088838C8;
    case 747u: goto L_088838D0;
    case 748u: goto L_088838E8;
    case 749u: goto L_0888390C;
    case 750u: goto L_08883918;
    case 751u: goto L_0888392C;
    case 752u: goto L_08883940;
    case 753u: goto L_08883970;
    case 754u: goto L_08883980;
    case 755u: goto L_08883990;
    case 756u: goto L_088839A0;
    case 757u: goto L_088839B8;
    case 758u: goto L_088839C0;
    case 759u: goto L_088839D0;
    case 760u: goto L_088839D8;
    case 761u: goto L_088839E4;
    case 762u: goto L_088839EC;
    case 763u: goto L_088839F0;
    case 764u: goto L_08883A08;
    case 765u: goto L_08883A20;
    case 766u: goto L_08883A30;
    case 767u: goto L_08883A38;
    case 768u: goto L_08883A5C;
    case 769u: goto L_08883A7C;
    case 770u: goto L_08883AB8;
    case 771u: goto L_08883AD4;
    case 772u: goto L_08883AE0;
    case 773u: goto L_08883AEC;
    case 774u: goto L_08883B00;
    case 775u: goto L_08883B14;
    case 776u: goto L_08883B30;
    case 777u: goto L_08883B40;
    case 778u: goto L_08883B50;
    case 779u: goto L_08883B60;
    case 780u: goto L_08883B70;
    case 781u: goto L_08883B78;
    case 782u: goto L_08883B80;
    case 783u: goto L_08883B8C;
    case 784u: goto L_08883B90;
    case 785u: goto L_08883BA4;
    case 786u: goto L_08883BC4;
    case 787u: goto L_08883BD4;
    case 788u: goto L_08883BDC;
    case 789u: goto L_08883BEC;
    case 790u: goto L_08883BF8;
    case 791u: goto L_08883C14;
    case 792u: goto L_08883C24;
    case 793u: goto L_08883C2C;
    case 794u: goto L_08883C34;
    case 795u: goto L_08883C3C;
    case 796u: goto L_08883C44;
    case 797u: goto L_08883C58;
    case 798u: goto L_08883C60;
    case 799u: goto L_08883C68;
    case 800u: goto L_08883C7C;
    case 801u: goto L_08883C90;
    case 802u: goto L_08883C98;
    case 803u: goto L_08883CA0;
    case 804u: goto L_08883CAC;
    case 805u: goto L_08883CC0;
    case 806u: goto L_08883CEC;
    case 807u: goto L_08883CF8;
    case 808u: goto L_08883D00;
    case 809u: goto L_08883D0C;
    case 810u: goto L_08883D1C;
    case 811u: goto L_08883D24;
    case 812u: goto L_08883D30;
    case 813u: goto L_08883D38;
    case 814u: goto L_08883D40;
    case 815u: goto L_08883D4C;
    case 816u: goto L_08883D64;
    case 817u: goto L_08883D6C;
    case 818u: goto L_08883D78;
    case 819u: goto L_08883D8C;
    case 820u: goto L_08883D94;
    case 821u: goto L_08883DA0;
    case 822u: goto L_08883DB8;
    case 823u: goto L_08883DC0;
    case 824u: goto L_08883DCC;
    case 825u: goto L_08883DE4;
    case 826u: goto L_08883E14;
    case 827u: goto L_08883E20;
    case 828u: goto L_08883E30;
    case 829u: goto L_08883E44;
    case 830u: goto L_08883E5C;
    case 831u: goto L_08883E68;
    case 832u: goto L_08883E94;
    case 833u: goto L_08883EA4;
    case 834u: goto L_08883EDC;
    case 835u: goto L_08883F08;
    case 836u: goto L_08883F30;
    case 837u: goto L_08883F58;
    case 838u: goto L_08883F60;
    case 839u: goto L_08883F6C;
    case 840u: goto L_08883F78;
    case 841u: goto L_08883F90;
    case 842u: goto L_08883FA8;
    case 843u: goto L_08883FC4;
    case 844u: goto L_08883FD4;
    case 845u: goto L_08883FDC;
    case 846u: goto L_08883FE4;
    case 847u: goto L_08883FEC;
    case 848u: goto L_08883FF4;
    case 849u: goto L_08883FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08880000:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880060;
      }
      goto L_08880008;
    }
L_08880008:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880040;
      }
      goto L_08880010;
    }
L_08880010:
    ctx.fpr[16] = ctx.fpr[17] + ctx.fpr[0];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[31] = (0x08880038u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x08880038u) goto L_08880038;
    return;
L_08880038:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08880060;
      }
      goto L_08880040;
    }
L_08880040:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[31] = (0x08880060u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x08880060u) goto L_08880060;
    return;
L_08880060:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7276)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880070;
      }
      goto L_08880070;
    }
L_08880070:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08880098:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[18] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (0u | 1263u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088800D8;
      }
      goto L_088800CC;
    }
L_088800CC:
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088800E0;
      }
      goto L_088800D8;
    }
L_088800D8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_088800E0;
L_088800E0:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088800F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 618u, 0x0887B8B4u>(ctx, &aot_mem) && ctx.pc == 0x088800F4u) goto L_088800F4;
    return;
L_088800F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08880108u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x08880108u) goto L_08880108;
    return;
L_08880108:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08880150;
      }
      goto L_08880120;
    }
L_08880120:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[17] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08880148;
      }
      goto L_08880140;
    }
L_08880140:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    goto L_08880148;
L_08880148:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_0888015C;
      }
      goto L_08880150;
    }
L_08880150:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    goto L_0888015C;
L_0888015C:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880174;
      }
      goto L_0888016C;
    }
L_0888016C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08880174;
L_08880174:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888018C;
      }
      goto L_08880184;
    }
L_08880184:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_0888018C;
L_0888018C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880228;
      }
      goto L_088801A8;
    }
L_088801A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888027C;
      }
      goto L_088801BC;
    }
L_088801BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888027C;
      }
      goto L_088801D0;
    }
L_088801D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888027C;
      }
      goto L_088801E4;
    }
L_088801E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888027C;
      }
      goto L_088801F8;
    }
L_088801F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888027C;
      }
      goto L_0888020C;
    }
L_0888020C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888027C;
      }
      goto L_08880220;
    }
L_08880220:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0888027C;
      }
      goto L_08880228;
    }
L_08880228:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888027C;
      }
      goto L_0888023C;
    }
L_0888023C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888027C;
      }
      goto L_08880250;
    }
L_08880250:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888027C;
      }
      goto L_08880264;
    }
L_08880264:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888027C;
      }
      goto L_08880278;
    }
L_08880278:
    ctx.gpr[4] = (0u | 1u);
    goto L_0888027C;
L_0888027C:
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
          goto L_088802A8;
      }
      goto L_088802A0;
    }
L_088802A0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088802F8;
      }
      goto L_088802A8;
    }
L_088802A8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_088802D4;
      }
      goto L_088802C0;
    }
L_088802C0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088802F8;
      }
      goto L_088802D4;
    }
L_088802D4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088802F8;
      }
      goto L_088802F4;
    }
L_088802F4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088802F8;
L_088802F8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880358;
      }
      goto L_08880300;
    }
L_08880300:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880338;
      }
      goto L_08880308;
    }
L_08880308:
    ctx.fpr[16] = ctx.fpr[17] + ctx.fpr[0];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[31] = (0x08880330u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x08880330u) goto L_08880330;
    return;
L_08880330:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08880358;
      }
      goto L_08880338;
    }
L_08880338:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[31] = (0x08880358u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x08880358u) goto L_08880358;
    return;
L_08880358:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7276)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880368;
      }
      goto L_08880368;
    }
L_08880368:
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
L_08880388:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(-696));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[20]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-690));
    ctx.gpr[20] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[22]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    ctx.gpr[22] = (ctx.gpr[21] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    ctx.gpr[19] = (ctx.gpr[20] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088803FC;
      }
      goto L_088803F4;
    }
L_088803F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08880400;
      }
      goto L_088803FC;
    }
L_088803FC:
    ctx.gpr[18] = (0u | 0u);
    goto L_08880400;
L_08880400:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880424;
      }
      goto L_08880408;
    }
L_08880408:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[31] = (0x0888041Cu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0888041Cu) goto L_0888041C;
    return;
L_0888041C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-2992)));
      if (branch_taken) {
          goto L_0888043C;
      }
      goto L_08880424;
    }
L_08880424:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x08880438u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08880438u) goto L_08880438;
    return;
L_08880438:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-2992)));
    goto L_0888043C;
L_0888043C:
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[20] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088804A0;
      }
      goto L_08880460;
    }
L_08880460:
    ctx.gpr[21] = (ctx.gpr[21] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[21]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-536)));
    jump_target = ctx.gpr[1];
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08880478:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088804A0;
      }
      goto L_08880480;
    }
L_08880480:
    ctx.gpr[31] = (0x08880488u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 104u, 0x0887C830u>(ctx, &aot_mem) && ctx.pc == 0x08880488u) goto L_08880488;
    return;
L_08880488:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08880498;
      }
      goto L_08880490;
    }
L_08880490:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[17] = (0u | 1u);
    goto L_08880498;
L_08880498:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088804A0;
      }
      goto L_088804A0;
    }
L_088804A0:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088804F0;
      }
      goto L_088804AC;
    }
L_088804AC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[22] = ctx.fpr[12] - ctx.fpr[30];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[24] = ctx.fpr[28] - ctx.fpr[26];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[28];
      if (branch_taken) {
          goto L_088804E4;
      }
      goto L_088804DC;
    }
L_088804DC:
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_088804E4;
L_088804E4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08880510;
      }
      goto L_088804F0;
    }
L_088804F0:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[30];
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[28];
    ctx.fpr[24] = ctx.fpr[28] - ctx.fpr[26];
    goto L_08880510;
L_08880510:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08880524u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x08880524u) goto L_08880524;
    return;
L_08880524:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[13];
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
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[15];
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[28] - ctx.fpr[19];
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
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[30];
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[26] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = ctx.fpr[18] - ctx.fpr[30];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = ctx.fpr[17] - ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[16] + ctx.fpr[12];
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0888087C;
      }
      goto L_08880618;
    }
L_08880618:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08880638u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 299u, 0x089D62A8u>(ctx, &aot_mem) && ctx.pc == 0x08880638u) goto L_08880638;
    return;
L_08880638:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[23] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[30];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088806AC;
      }
      goto L_088806A4;
    }
L_088806A4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_088806E0;
      }
      goto L_088806AC;
    }
L_088806AC:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088806E0;
L_088806E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
      if (branch_taken) {
          goto L_08880814;
      }
      goto L_08880720;
    }
L_08880720:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880814;
      }
      goto L_08880730;
    }
L_08880730:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888075C;
      }
      goto L_08880754;
    }
L_08880754:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08880790;
      }
      goto L_0888075C;
    }
L_0888075C:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08880790;
L_08880790:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880814;
      }
      goto L_088807BC;
    }
L_088807BC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880814;
      }
      goto L_088807D0;
    }
L_088807D0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880810;
      }
      goto L_088807D8;
    }
L_088807D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880814;
      }
      goto L_088807F0;
    }
L_088807F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880814;
      }
      goto L_08880808;
    }
L_08880808:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08880814;
      }
      goto L_08880810;
    }
L_08880810:
    ctx.gpr[4] = (0u | 1u);
    goto L_08880814;
L_08880814:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888087C;
      }
      goto L_0888081C;
    }
L_0888081C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888087C;
      }
      goto L_08880824;
    }
L_08880824:
    ctx.gpr[21] = (ctx.gpr[21] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[21]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-488)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888083C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_0888087C;
      }
      goto L_08880844;
    }
L_08880844:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08880858;
      }
      goto L_08880854;
    }
L_08880854:
    ctx.gpr[23] = (0u | 1u);
    goto L_08880858;
L_08880858:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888087C;
      }
      goto L_08880860;
    }
L_08880860:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880874;
      }
      goto L_08880870;
    }
L_08880870:
    ctx.gpr[23] = (0u | 1u);
    goto L_08880874;
L_08880874:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888087C;
      }
      goto L_0888087C;
    }
L_0888087C:
    ctx.gpr[4] = (0u < ctx.gpr[23] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[23] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[23] = (0u < ctx.gpr[23] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
      if (branch_taken) {
          goto L_088808AC;
      }
      goto L_088808A4;
    }
L_088808A4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[23]));
      if (branch_taken) {
          goto L_088808FC;
      }
      goto L_088808AC;
    }
L_088808AC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_088808D8;
      }
      goto L_088808C4;
    }
L_088808C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[23] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088808FC;
      }
      goto L_088808D8;
    }
L_088808D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[23] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088808FC;
      }
      goto L_088808F8;
    }
L_088808F8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088808FC;
L_088808FC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880990;
      }
      goto L_08880904;
    }
L_08880904:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880958;
      }
      goto L_0888090C;
    }
L_0888090C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08880950u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 718u, 0x0887BEACu>(ctx, &aot_mem) && ctx.pc == 0x08880950u) goto L_08880950;
    return;
L_08880950:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08880990;
      }
      goto L_08880958;
    }
L_08880958:
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08880990u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 718u, 0x0887BEACu>(ctx, &aot_mem) && ctx.pc == 0x08880990u) goto L_08880990;
    return;
L_08880990:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7276)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088809A8;
      }
      goto L_088809A0;
    }
L_088809A0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088809A8;
      }
      goto L_088809A8;
    }
L_088809A8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088809EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(-640));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[22]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4656));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[20] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08880A68;
      }
      goto L_08880A5C;
    }
L_08880A5C:
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08880A70;
      }
      goto L_08880A68;
    }
L_08880A68:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08880A70;
L_08880A70:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[7]);
    ctx.gpr[31] = (0x08880A88u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 618u, 0x0887B8B4u>(ctx, &aot_mem) && ctx.pc == 0x08880A88u) goto L_08880A88;
    return;
L_08880A88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08880AD8;
      }
      goto L_08880AA0;
    }
L_08880AA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[26] = ctx.fpr[24] - ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = ctx.fpr[20] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[30] = ctx.fpr[28] - ctx.fpr[14];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[24] = ctx.fpr[12] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[13] + ctx.fpr[20];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = ctx.fpr[14] + ctx.fpr[28];
      if (branch_taken) {
          goto L_08880B0C;
      }
      goto L_08880AD8;
    }
L_08880AD8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[26] = ctx.fpr[24] - ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = ctx.fpr[20] - ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[30] = ctx.fpr[14] - ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[24] = ctx.fpr[12] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[13] + ctx.fpr[20];
    ctx.fpr[28] = ctx.fpr[28] + ctx.fpr[14];
    goto L_08880B0C;
L_08880B0C:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[30] = (2229u << 16u);
    goto L_08880B24;
L_08880B24:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_08880D78;
    }
    goto L_08880B2C;
L_08880B2C:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_08880D78;
    }
    goto L_08880B34;
L_08880B34:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[17] << 3u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08880D68;
      }
      goto L_08880B54;
    }
L_08880B54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x08880B60u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08880B60u) goto L_08880B60;
    return;
L_08880B60:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880D60;
      }
      goto L_08880B6C;
    }
L_08880B6C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880B90;
      }
      goto L_08880B78;
    }
L_08880B78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08880B9C;
      }
      goto L_08880B90;
    }
L_08880B90:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    goto L_08880B9C;
L_08880B9C:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880BE8;
      }
      goto L_08880BA4;
    }
L_08880BA4:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08880BC8;
      }
      goto L_08880BB0;
    }
L_08880BB0:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08880BC8;
      }
      goto L_08880BB8;
    }
L_08880BB8:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08880BC8;
      }
      goto L_08880BC0;
    }
L_08880BC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08880BE8;
      }
      goto L_08880BC8;
    }
L_08880BC8:
    ctx.gpr[31] = (0x08880BD0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 90u, 0x0887C768u>(ctx, &aot_mem) && ctx.pc == 0x08880BD0u) goto L_08880BD0;
    return;
L_08880BD0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_08880BE0;
      }
      goto L_08880BD8;
    }
L_08880BD8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[22] = (0u | 1u);
    goto L_08880BE0;
L_08880BE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08880BE8;
      }
      goto L_08880BE8;
    }
L_08880BE8:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_08880D68;
      }
      goto L_08880BF0;
    }
L_08880BF0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880C84;
      }
      goto L_08880BFC;
    }
L_08880BFC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880C7C;
      }
      goto L_08880C10;
    }
L_08880C10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880C7C;
      }
      goto L_08880C24;
    }
L_08880C24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880C7C;
      }
      goto L_08880C38;
    }
L_08880C38:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880C7C;
      }
      goto L_08880C4C;
    }
L_08880C4C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880C7C;
      }
      goto L_08880C60;
    }
L_08880C60:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880C7C;
      }
      goto L_08880C74;
    }
L_08880C74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08880CE0;
      }
      goto L_08880C7C;
    }
L_08880C7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08880CE0;
      }
      goto L_08880C84;
    }
L_08880C84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880CDC;
      }
      goto L_08880C98;
    }
L_08880C98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880CDC;
      }
      goto L_08880CAC;
    }
L_08880CAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880CDC;
      }
      goto L_08880CC0;
    }
L_08880CC0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880CDC;
      }
      goto L_08880CD4;
    }
L_08880CD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08880CE0;
      }
      goto L_08880CDC;
    }
L_08880CDC:
    ctx.gpr[5] = (0u | 0u);
    goto L_08880CE0;
L_08880CE0:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08880D50;
      }
      goto L_08880CEC;
    }
L_08880CEC:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880D50;
      }
      goto L_08880CF4;
    }
L_08880CF4:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08880D20;
      }
      goto L_08880D00;
    }
L_08880D00:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08880D38;
      }
      goto L_08880D08;
    }
L_08880D08:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08880D20;
      }
      goto L_08880D10;
    }
L_08880D10:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08880D38;
      }
      goto L_08880D18;
    }
L_08880D18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08880D50;
      }
      goto L_08880D20;
    }
L_08880D20:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08880D30;
      }
      goto L_08880D2C;
    }
L_08880D2C:
    ctx.gpr[5] = (0u | 1u);
    goto L_08880D30;
L_08880D30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08880D50;
      }
      goto L_08880D38;
    }
L_08880D38:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880D48;
      }
      goto L_08880D44;
    }
L_08880D44:
    ctx.gpr[5] = (0u | 1u);
    goto L_08880D48;
L_08880D48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08880D50;
      }
      goto L_08880D50;
    }
L_08880D50:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08880D68;
      }
      goto L_08880D58;
    }
L_08880D58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08880D68;
      }
      goto L_08880D60;
    }
L_08880D60:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_08880D68;
L_08880D68:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_08880B24;
      }
      goto L_08880D78;
    }
L_08880D78:
    ctx.gpr[5] = (0u < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (0u < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_08880DA4;
      }
      goto L_08880D9C;
    }
L_08880D9C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08880DF4;
      }
      goto L_08880DA4;
    }
L_08880DA4:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_08880DD0;
      }
      goto L_08880DBC;
    }
L_08880DBC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[18] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08880DF4;
      }
      goto L_08880DD0;
    }
L_08880DD0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(525)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[18] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880DF4;
      }
      goto L_08880DF0;
    }
L_08880DF0:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08880DF4;
L_08880DF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880E50;
      }
      goto L_08880E00;
    }
L_08880E00:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880E30;
      }
      goto L_08880E0C;
    }
L_08880E0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08880E28u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x08880E28u) goto L_08880E28;
    return;
L_08880E28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08880E50;
      }
      goto L_08880E30;
    }
L_08880E30:
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08880E50u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x08880E50u) goto L_08880E50;
    return;
L_08880E50:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7276)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880E74;
      }
      goto L_08880E60;
    }
L_08880E60:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880E74;
      }
      goto L_08880E6C;
    }
L_08880E6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08880E74;
      }
      goto L_08880E74;
    }
L_08880E74:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08880EBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[8] = (2269u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4656));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[30]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[8]);
    ctx.gpr[30] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 646 ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[23] = (2229u << 16u);
      if (branch_taken) {
          goto L_08880F38;
      }
      goto L_08880F24;
    }
L_08880F24:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 649 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880F38;
      }
      goto L_08880F30;
    }
L_08880F30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08880F3C;
      }
      goto L_08880F38;
    }
L_08880F38:
    ctx.gpr[22] = (0u | 1u);
    goto L_08880F3C;
L_08880F3C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880F60;
      }
      goto L_08880F44;
    }
L_08880F44:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08880F58u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08880F58u) goto L_08880F58;
    return;
L_08880F58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08880F74;
      }
      goto L_08880F60;
    }
L_08880F60:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08880F74u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08880F74u) goto L_08880F74;
    return;
L_08880F74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x08880F80u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08880F80u) goto L_08880F80;
    return;
L_08880F80:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880FA8;
      }
      goto L_08880F90;
    }
L_08880F90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08880FB4;
      }
      goto L_08880FA8;
    }
L_08880FA8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    goto L_08880FB4;
L_08880FB4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08880FD0;
      }
      goto L_08880FC0;
    }
L_08880FC0:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08880FD8;
      }
      goto L_08880FD0;
    }
L_08880FD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_08880FD8;
L_08880FD8:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08880FEC;
L_08880FEC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888123C;
      }
      goto L_08880FF4;
    }
L_08880FF4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888123C;
      }
      goto L_08880FFC;
    }
L_08880FFC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[17] << 3u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888122C;
      }
      goto L_08881018;
    }
L_08881018:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x08881024u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08881024u) goto L_08881024;
    return;
L_08881024:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881224;
      }
      goto L_08881030;
    }
L_08881030:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881054;
      }
      goto L_0888103C;
    }
L_0888103C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08881060;
      }
      goto L_08881054;
    }
L_08881054:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    goto L_08881060;
L_08881060:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881120;
      }
      goto L_08881068;
    }
L_08881068:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881118;
      }
      goto L_08881084;
    }
L_08881084:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881118;
      }
      goto L_088810A0;
    }
L_088810A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881118;
      }
      goto L_088810BC;
    }
L_088810BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881118;
      }
      goto L_088810D8;
    }
L_088810D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881118;
      }
      goto L_088810F4;
    }
L_088810F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881118;
      }
      goto L_08881110;
    }
L_08881110:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0888119C;
      }
      goto L_08881118;
    }
L_08881118:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0888119C;
      }
      goto L_08881120;
    }
L_08881120:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881198;
      }
      goto L_0888113C;
    }
L_0888113C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881198;
      }
      goto L_08881158;
    }
L_08881158:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881198;
      }
      goto L_08881174;
    }
L_08881174:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881198;
      }
      goto L_08881190;
    }
L_08881190:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0888119C;
      }
      goto L_08881198;
    }
L_08881198:
    ctx.gpr[5] = (0u | 0u);
    goto L_0888119C;
L_0888119C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08881214;
      }
      goto L_088811A8;
    }
L_088811A8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 647 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 648 ? 1u : 0u);
      if (branch_taken) {
          goto L_088811CC;
      }
      goto L_088811B8;
    }
L_088811B8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 646 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08881214;
      }
      goto L_088811C4;
    }
L_088811C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08881214;
      }
      goto L_088811CC;
    }
L_088811CC:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 649 ? 1u : 0u);
      if (branch_taken) {
          goto L_088811E4;
      }
      goto L_088811D4;
    }
L_088811D4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088811FC;
      }
      goto L_088811DC;
    }
L_088811DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08881214;
      }
      goto L_088811E4;
    }
L_088811E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088811F4;
      }
      goto L_088811F0;
    }
L_088811F0:
    ctx.gpr[5] = (0u | 1u);
    goto L_088811F4;
L_088811F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08881214;
      }
      goto L_088811FC;
    }
L_088811FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888120C;
      }
      goto L_08881208;
    }
L_08881208:
    ctx.gpr[5] = (0u | 1u);
    goto L_0888120C;
L_0888120C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08881214;
      }
      goto L_08881214;
    }
L_08881214:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888122C;
      }
      goto L_0888121C;
    }
L_0888121C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0888122C;
      }
      goto L_08881224;
    }
L_08881224:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_0888122C;
L_0888122C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_08880FEC;
      }
      goto L_0888123C;
    }
L_0888123C:
    ctx.gpr[4] = (0u < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_08881268;
      }
      goto L_08881260;
    }
L_08881260:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_088812B8;
      }
      goto L_08881268;
    }
L_08881268:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08881294;
      }
      goto L_08881280;
    }
L_08881280:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088812B8;
      }
      goto L_08881294;
    }
L_08881294:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088812B8;
      }
      goto L_088812B4;
    }
L_088812B4:
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088812B8;
L_088812B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881324;
      }
      goto L_088812C4;
    }
L_088812C4:
    if (ctx.gpr[22] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
        goto L_088812FC;
    }
    goto L_088812CC;
L_088812CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[22];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.gpr[31] = (0x088812F4u);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x088812F4u) goto L_088812F4;
    return;
L_088812F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08881324;
      }
      goto L_088812FC;
    }
L_088812FC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[20];
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[22];
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.gpr[31] = (0x08881324u);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x08881324u) goto L_08881324;
    return;
L_08881324:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7276)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881344;
      }
      goto L_08881334;
    }
L_08881334:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881344;
      }
      goto L_0888133C;
    }
L_0888133C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08881344;
      }
      goto L_08881344;
    }
L_08881344:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08881380:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[8] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[30]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4656));
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[30] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 649 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088813F4;
      }
      goto L_088813E0;
    }
L_088813E0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 652 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088813F4;
      }
      goto L_088813EC;
    }
L_088813EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_088813F8;
      }
      goto L_088813F4;
    }
L_088813F4:
    ctx.gpr[23] = (0u | 1u);
    goto L_088813F8;
L_088813F8:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888141C;
      }
      goto L_08881400;
    }
L_08881400:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08881414u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08881414u) goto L_08881414;
    return;
L_08881414:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08881430;
      }
      goto L_0888141C;
    }
L_0888141C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08881430u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08881430u) goto L_08881430;
    return;
L_08881430:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x08881440u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08881440u) goto L_08881440;
    return;
L_08881440:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881470;
      }
      goto L_08881460;
    }
L_08881460:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08881478;
      }
      goto L_08881470;
    }
L_08881470:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_08881478;
L_08881478:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[21] = (2229u << 16u);
    goto L_08881490;
L_08881490:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088816E0;
      }
      goto L_08881498;
    }
L_08881498:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088816E0;
      }
      goto L_088814A0;
    }
L_088814A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[17] << 3u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088816D0;
      }
      goto L_088814BC;
    }
L_088814BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x088814C8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x088814C8u) goto L_088814C8;
    return;
L_088814C8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088816C8;
      }
      goto L_088814D4;
    }
L_088814D4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088814F8;
      }
      goto L_088814E0;
    }
L_088814E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08881504;
      }
      goto L_088814F8;
    }
L_088814F8:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    goto L_08881504;
L_08881504:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088815C4;
      }
      goto L_0888150C;
    }
L_0888150C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088815BC;
      }
      goto L_08881528;
    }
L_08881528:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088815BC;
      }
      goto L_08881544;
    }
L_08881544:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088815BC;
      }
      goto L_08881560;
    }
L_08881560:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088815BC;
      }
      goto L_0888157C;
    }
L_0888157C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088815BC;
      }
      goto L_08881598;
    }
L_08881598:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088815BC;
      }
      goto L_088815B4;
    }
L_088815B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08881640;
      }
      goto L_088815BC;
    }
L_088815BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08881640;
      }
      goto L_088815C4;
    }
L_088815C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888163C;
      }
      goto L_088815E0;
    }
L_088815E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888163C;
      }
      goto L_088815FC;
    }
L_088815FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888163C;
      }
      goto L_08881618;
    }
L_08881618:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888163C;
      }
      goto L_08881634;
    }
L_08881634:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08881640;
      }
      goto L_0888163C;
    }
L_0888163C:
    ctx.gpr[5] = (0u | 0u);
    goto L_08881640;
L_08881640:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088816B8;
      }
      goto L_0888164C;
    }
L_0888164C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 650 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 651 ? 1u : 0u);
      if (branch_taken) {
          goto L_08881670;
      }
      goto L_0888165C;
    }
L_0888165C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 649 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088816B8;
      }
      goto L_08881668;
    }
L_08881668:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088816B8;
      }
      goto L_08881670;
    }
L_08881670:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 652 ? 1u : 0u);
      if (branch_taken) {
          goto L_08881688;
      }
      goto L_08881678;
    }
L_08881678:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088816A0;
      }
      goto L_08881680;
    }
L_08881680:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088816B8;
      }
      goto L_08881688;
    }
L_08881688:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08881698;
      }
      goto L_08881694;
    }
L_08881694:
    ctx.gpr[5] = (0u | 1u);
    goto L_08881698;
L_08881698:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088816B8;
      }
      goto L_088816A0;
    }
L_088816A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088816B0;
      }
      goto L_088816AC;
    }
L_088816AC:
    ctx.gpr[5] = (0u | 1u);
    goto L_088816B0;
L_088816B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088816B8;
      }
      goto L_088816B8;
    }
L_088816B8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088816D0;
      }
      goto L_088816C0;
    }
L_088816C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088816D0;
      }
      goto L_088816C8;
    }
L_088816C8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_088816D0;
L_088816D0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_08881490;
      }
      goto L_088816E0;
    }
L_088816E0:
    ctx.gpr[4] = (0u < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_0888170C;
      }
      goto L_08881704;
    }
L_08881704:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_0888175C;
      }
      goto L_0888170C;
    }
L_0888170C:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08881738;
      }
      goto L_08881724;
    }
L_08881724:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0888175C;
      }
      goto L_08881738;
    }
L_08881738:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888175C;
      }
      goto L_08881758;
    }
L_08881758:
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0888175C;
L_0888175C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088817C8;
      }
      goto L_08881768;
    }
L_08881768:
    if (ctx.gpr[23] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
        goto L_088817A0;
    }
    goto L_08881770;
L_08881770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[22];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.gpr[31] = (0x08881798u);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x08881798u) goto L_08881798;
    return;
L_08881798:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088817C8;
      }
      goto L_088817A0;
    }
L_088817A0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[20];
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[22];
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.gpr[31] = (0x088817C8u);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x088817C8u) goto L_088817C8;
    return;
L_088817C8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7276)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088817E8;
      }
      goto L_088817D8;
    }
L_088817D8:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088817E8;
      }
      goto L_088817E0;
    }
L_088817E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088817E8;
      }
      goto L_088817E8;
    }
L_088817E8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08881824:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[8] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[30]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4656));
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[30] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 652 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08881898;
      }
      goto L_08881884;
    }
L_08881884:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 655 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881898;
      }
      goto L_08881890;
    }
L_08881890:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_0888189C;
      }
      goto L_08881898;
    }
L_08881898:
    ctx.gpr[23] = (0u | 1u);
    goto L_0888189C;
L_0888189C:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088818C0;
      }
      goto L_088818A4;
    }
L_088818A4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x088818B8u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088818B8u) goto L_088818B8;
    return;
L_088818B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088818D4;
      }
      goto L_088818C0;
    }
L_088818C0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x088818D4u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088818D4u) goto L_088818D4;
    return;
L_088818D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08881904u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 299u, 0x089D62A8u>(ctx, &aot_mem) && ctx.pc == 0x08881904u) goto L_08881904;
    return;
L_08881904:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881930;
      }
      goto L_08881920;
    }
L_08881920:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08881938;
      }
      goto L_08881930;
    }
L_08881930:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    goto L_08881938;
L_08881938:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[21] = (2229u << 16u);
    goto L_08881950;
L_08881950:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881BA0;
      }
      goto L_08881958;
    }
L_08881958:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881BA0;
      }
      goto L_08881960;
    }
L_08881960:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[17] << 3u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08881B90;
      }
      goto L_0888197C;
    }
L_0888197C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x08881988u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08881988u) goto L_08881988;
    return;
L_08881988:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881B88;
      }
      goto L_08881994;
    }
L_08881994:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088819B8;
      }
      goto L_088819A0;
    }
L_088819A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088819C4;
      }
      goto L_088819B8;
    }
L_088819B8:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    goto L_088819C4;
L_088819C4:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881A84;
      }
      goto L_088819CC;
    }
L_088819CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881A7C;
      }
      goto L_088819E8;
    }
L_088819E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881A7C;
      }
      goto L_08881A04;
    }
L_08881A04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881A7C;
      }
      goto L_08881A20;
    }
L_08881A20:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881A7C;
      }
      goto L_08881A3C;
    }
L_08881A3C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881A7C;
      }
      goto L_08881A58;
    }
L_08881A58:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881A7C;
      }
      goto L_08881A74;
    }
L_08881A74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08881B00;
      }
      goto L_08881A7C;
    }
L_08881A7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08881B00;
      }
      goto L_08881A84;
    }
L_08881A84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881AFC;
      }
      goto L_08881AA0;
    }
L_08881AA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881AFC;
      }
      goto L_08881ABC;
    }
L_08881ABC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881AFC;
      }
      goto L_08881AD8;
    }
L_08881AD8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881AFC;
      }
      goto L_08881AF4;
    }
L_08881AF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08881B00;
      }
      goto L_08881AFC;
    }
L_08881AFC:
    ctx.gpr[5] = (0u | 0u);
    goto L_08881B00;
L_08881B00:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08881B78;
      }
      goto L_08881B0C;
    }
L_08881B0C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 653 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 654 ? 1u : 0u);
      if (branch_taken) {
          goto L_08881B30;
      }
      goto L_08881B1C;
    }
L_08881B1C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 652 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08881B78;
      }
      goto L_08881B28;
    }
L_08881B28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08881B78;
      }
      goto L_08881B30;
    }
L_08881B30:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 655 ? 1u : 0u);
      if (branch_taken) {
          goto L_08881B48;
      }
      goto L_08881B38;
    }
L_08881B38:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08881B60;
      }
      goto L_08881B40;
    }
L_08881B40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08881B78;
      }
      goto L_08881B48;
    }
L_08881B48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08881B58;
      }
      goto L_08881B54;
    }
L_08881B54:
    ctx.gpr[5] = (0u | 1u);
    goto L_08881B58;
L_08881B58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08881B78;
      }
      goto L_08881B60;
    }
L_08881B60:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881B70;
      }
      goto L_08881B6C;
    }
L_08881B6C:
    ctx.gpr[5] = (0u | 1u);
    goto L_08881B70;
L_08881B70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08881B78;
      }
      goto L_08881B78;
    }
L_08881B78:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08881B90;
      }
      goto L_08881B80;
    }
L_08881B80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08881B90;
      }
      goto L_08881B88;
    }
L_08881B88:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_08881B90;
L_08881B90:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_08881950;
      }
      goto L_08881BA0;
    }
L_08881BA0:
    ctx.gpr[4] = (0u < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_08881BCC;
      }
      goto L_08881BC4;
    }
L_08881BC4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08881C1C;
      }
      goto L_08881BCC;
    }
L_08881BCC:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08881BF8;
      }
      goto L_08881BE4;
    }
L_08881BE4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08881C1C;
      }
      goto L_08881BF8;
    }
L_08881BF8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881C1C;
      }
      goto L_08881C18;
    }
L_08881C18:
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08881C1C;
L_08881C1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881C88;
      }
      goto L_08881C28;
    }
L_08881C28:
    if (ctx.gpr[23] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
        goto L_08881C60;
    }
    goto L_08881C30;
L_08881C30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[22];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.gpr[31] = (0x08881C58u);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x08881C58u) goto L_08881C58;
    return;
L_08881C58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08881C88;
      }
      goto L_08881C60;
    }
L_08881C60:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[20];
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[22];
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.gpr[31] = (0x08881C88u);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x08881C88u) goto L_08881C88;
    return;
L_08881C88:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7276)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881CA8;
      }
      goto L_08881C98;
    }
L_08881C98:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881CA8;
      }
      goto L_08881CA0;
    }
L_08881CA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08881CA8;
      }
      goto L_08881CA8;
    }
L_08881CA8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08881CE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(-655));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[16]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[22]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4656));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[20] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08881D5C;
      }
      goto L_08881D54;
    }
L_08881D54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08881D60;
      }
      goto L_08881D5C;
    }
L_08881D5C:
    ctx.gpr[17] = (0u | 1u);
    goto L_08881D60;
L_08881D60:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881D88;
      }
      goto L_08881D68;
    }
L_08881D68:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x08881D80u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08881D80u) goto L_08881D80;
    return;
L_08881D80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08881DA0;
      }
      goto L_08881D88;
    }
L_08881D88:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08881DA0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08881DA0u) goto L_08881DA0;
    return;
L_08881DA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08881DEC;
      }
      goto L_08881DB8;
    }
L_08881DB8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08881DE0;
      }
      goto L_08881DD8;
    }
L_08881DD8:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08881DE0;
L_08881DE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08881DFC;
      }
      goto L_08881DEC;
    }
L_08881DEC:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    goto L_08881DFC;
L_08881DFC:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881E14;
      }
      goto L_08881E0C;
    }
L_08881E0C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08881E14;
L_08881E14:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881E2C;
      }
      goto L_08881E24;
    }
L_08881E24:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08881E2C;
L_08881E2C:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[30] = (2229u << 16u);
    goto L_08881E44;
L_08881E44:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_08882098;
    }
    goto L_08881E4C;
L_08881E4C:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_08882098;
    }
    goto L_08881E54;
L_08881E54:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[17] << 3u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08882088;
      }
      goto L_08881E74;
    }
L_08881E74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x08881E80u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08881E80u) goto L_08881E80;
    return;
L_08881E80:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882080;
      }
      goto L_08881E8C;
    }
L_08881E8C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881EB0;
      }
      goto L_08881E98;
    }
L_08881E98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08881EBC;
      }
      goto L_08881EB0;
    }
L_08881EB0:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    goto L_08881EBC;
L_08881EBC:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881F08;
      }
      goto L_08881EC4;
    }
L_08881EC4:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08881EE8;
      }
      goto L_08881ED0;
    }
L_08881ED0:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08881EE8;
      }
      goto L_08881ED8;
    }
L_08881ED8:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08881EE8;
      }
      goto L_08881EE0;
    }
L_08881EE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08881F08;
      }
      goto L_08881EE8;
    }
L_08881EE8:
    ctx.gpr[31] = (0x08881EF0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 90u, 0x0887C768u>(ctx, &aot_mem) && ctx.pc == 0x08881EF0u) goto L_08881EF0;
    return;
L_08881EF0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_08881F00;
      }
      goto L_08881EF8;
    }
L_08881EF8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[22] = (0u | 1u);
    goto L_08881F00;
L_08881F00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08881F08;
      }
      goto L_08881F08;
    }
L_08881F08:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_08882088;
      }
      goto L_08881F10;
    }
L_08881F10:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881FA4;
      }
      goto L_08881F1C;
    }
L_08881F1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881F9C;
      }
      goto L_08881F30;
    }
L_08881F30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881F9C;
      }
      goto L_08881F44;
    }
L_08881F44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881F9C;
      }
      goto L_08881F58;
    }
L_08881F58:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881F9C;
      }
      goto L_08881F6C;
    }
L_08881F6C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881F9C;
      }
      goto L_08881F80;
    }
L_08881F80:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881F9C;
      }
      goto L_08881F94;
    }
L_08881F94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08882000;
      }
      goto L_08881F9C;
    }
L_08881F9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08882000;
      }
      goto L_08881FA4;
    }
L_08881FA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881FFC;
      }
      goto L_08881FB8;
    }
L_08881FB8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881FFC;
      }
      goto L_08881FCC;
    }
L_08881FCC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881FFC;
      }
      goto L_08881FE0;
    }
L_08881FE0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881FFC;
      }
      goto L_08881FF4;
    }
L_08881FF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08882000;
      }
      goto L_08881FFC;
    }
L_08881FFC:
    ctx.gpr[5] = (0u | 0u);
    goto L_08882000;
L_08882000:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08882070;
      }
      goto L_0888200C;
    }
L_0888200C:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882070;
      }
      goto L_08882014;
    }
L_08882014:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08882040;
      }
      goto L_08882020;
    }
L_08882020:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08882058;
      }
      goto L_08882028;
    }
L_08882028:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08882040;
      }
      goto L_08882030;
    }
L_08882030:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08882058;
      }
      goto L_08882038;
    }
L_08882038:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08882070;
      }
      goto L_08882040;
    }
L_08882040:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08882050;
      }
      goto L_0888204C;
    }
L_0888204C:
    ctx.gpr[5] = (0u | 1u);
    goto L_08882050;
L_08882050:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08882070;
      }
      goto L_08882058;
    }
L_08882058:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882068;
      }
      goto L_08882064;
    }
L_08882064:
    ctx.gpr[5] = (0u | 1u);
    goto L_08882068;
L_08882068:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08882070;
      }
      goto L_08882070;
    }
L_08882070:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08882088;
      }
      goto L_08882078;
    }
L_08882078:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08882088;
      }
      goto L_08882080;
    }
L_08882080:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_08882088;
L_08882088:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_08881E44;
      }
      goto L_08882098;
    }
L_08882098:
    ctx.gpr[5] = (0u < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (0u < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_088820C4;
      }
      goto L_088820BC;
    }
L_088820BC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08882114;
      }
      goto L_088820C4;
    }
L_088820C4:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_088820F0;
      }
      goto L_088820DC;
    }
L_088820DC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[18] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08882114;
      }
      goto L_088820F0;
    }
L_088820F0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(525)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[18] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882114;
      }
      goto L_08882110;
    }
L_08882110:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08882114;
L_08882114:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882184;
      }
      goto L_08882120;
    }
L_08882120:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882160;
      }
      goto L_0888212C;
    }
L_0888212C:
    ctx.fpr[16] = ctx.fpr[24] + ctx.fpr[30];
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08882158u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x08882158u) goto L_08882158;
    return;
L_08882158:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08882184;
      }
      goto L_08882160;
    }
L_08882160:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08882184u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x08882184u) goto L_08882184;
    return;
L_08882184:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7276)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882194;
      }
      goto L_08882194;
    }
L_08882194:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088821DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[7] = ((ctx.gpr[7] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (0u | 3u);
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-7272)));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[8] = (2269u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4656));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(14056));
    ctx.gpr[30] = (2229u << 16u);
    ctx.gpr[23] = (2229u << 16u);
    ctx.gpr[10] = (2269u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(15016));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[10]);
      if (branch_taken) {
          goto L_08882284;
      }
      goto L_08882278;
    }
L_08882278:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08882278;
      }
      goto L_08882284;
    }
L_08882284:
    ctx.gpr[9] = (ctx.gpr[22] << 2u);
    ctx.gpr[10] = (0u - ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] << 3u);
    ctx.gpr[11] = (ctx.gpr[4] | 0u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[9] << 4u);
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(1720));
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[4] + static_cast<std::uint32_t>(280));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[5] = (0u | 83u);
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[9] + static_cast<std::uint32_t>(-8));
    ctx.gpr[9] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (0u | 67u);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (0u | 82u);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (0u | 1720u);
    ctx.gpr[9] = (ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08882320;
      }
      goto L_08882300;
    }
L_08882300:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08882300;
      }
      goto L_08882320;
    }
L_08882320:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7308)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7268)));
    ctx.gpr[16] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    goto L_0888234C;
L_0888234C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0888234C;
      }
      goto L_08882374;
    }
L_08882374:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7304)));
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_08882388;
L_08882388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088823EC;
      }
      goto L_08882394;
    }
L_08882394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(160));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088823B0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088823B0u) goto L_088823B0;
    return;
L_088823B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088823D0;
      }
      goto L_088823B8;
    }
L_088823B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-15304)));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x088823C8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 495u, 0x08AFE0F0u>(ctx, &aot_mem) && ctx.pc == 0x088823C8u) goto L_088823C8;
    return;
L_088823C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088823E4;
      }
      goto L_088823D0;
    }
L_088823D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-15308)));
    ctx.gpr[18] = (0u | 2u);
    ctx.gpr[31] = (0x088823E0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 496u, 0x08AFE10Cu>(ctx, &aot_mem) && ctx.pc == 0x088823E0u) goto L_088823E0;
    return;
L_088823E0:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_088823E4;
L_088823E4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088823F8;
      }
      goto L_088823EC;
    }
L_088823EC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_088823F8;
L_088823F8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(80) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08882388;
      }
      goto L_0888242C;
    }
L_0888242C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[21] = (2229u << 16u);
    ctx.gpr[20] = (2229u << 16u);
    goto L_0888243C;
L_0888243C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882524;
      }
      goto L_08882448;
    }
L_08882448:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 2u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_088824BC;
    }
    goto L_08882468;
L_08882468:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(160));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08882484u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08882484u) goto L_08882484;
    return;
L_08882484:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088824A4;
      }
      goto L_0888248C;
    }
L_0888248C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-15304)));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x0888249Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 495u, 0x08AFE0F0u>(ctx, &aot_mem) && ctx.pc == 0x0888249Cu) goto L_0888249C;
    return;
L_0888249C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888252C;
      }
      goto L_088824A4;
    }
L_088824A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-15308)));
    ctx.gpr[18] = (0u | 2u);
    ctx.gpr[31] = (0x088824B4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 496u, 0x08AFE10Cu>(ctx, &aot_mem) && ctx.pc == 0x088824B4u) goto L_088824B4;
    return;
L_088824B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888252C;
      }
      goto L_088824BC;
    }
L_088824BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 8u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_088824F0;
    }
    goto L_088824D8;
L_088824D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-15300)));
    ctx.gpr[18] = (0u | 3u);
    ctx.gpr[31] = (0x088824E8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 494u, 0x08AFE0D4u>(ctx, &aot_mem) && ctx.pc == 0x088824E8u) goto L_088824E8;
    return;
L_088824E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888252C;
      }
      goto L_088824F0;
    }
L_088824F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 10u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888252C;
      }
      goto L_0888250C;
    }
L_0888250C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-15296)));
    ctx.gpr[18] = (0u | 4u);
    ctx.gpr[31] = (0x0888251Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 497u, 0x08AFE128u>(ctx, &aot_mem) && ctx.pc == 0x0888251Cu) goto L_0888251C;
    return;
L_0888251C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888252C;
      }
      goto L_08882524;
    }
L_08882524:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0888252C;
L_0888252C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[19] < static_cast<std::uint32_t>(52) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888243C;
      }
      goto L_0888254C;
    }
L_0888254C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7264)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7263)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7260)));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7284)));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-7280))))));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-7278))))));
    ctx.gpr[16] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7272)));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088825F4;
      }
      goto L_088825C8;
    }
L_088825C8:
    ctx.gpr[4] = (0u | 0u);
    goto L_088825CC;
L_088825CC:
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(540) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088825CC;
      }
      goto L_088825E8;
    }
L_088825E8:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_088825C8;
      }
      goto L_088825F4;
    }
L_088825F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882624:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 16u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[31]);
    ctx.gpr[31] = (0x088826A4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 270u, 0x088C1B24u>(ctx, &aot_mem) && ctx.pc == 0x088826A4u) goto L_088826A4;
    return;
L_088826A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0888299C;
      }
      goto L_088826B0;
    }
L_088826B0:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 3u);
      if (branch_taken) {
          goto L_0888270C;
      }
      goto L_088826C0;
    }
L_088826C0:
    ctx.gpr[5] = (ctx.gpr[8] << 2u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088826F8;
      }
      goto L_088826D4;
    }
L_088826D4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(68)));
    ctx.gpr[9] = (ctx.gpr[9] & 14u);
    ctx.gpr[9] = (ctx.gpr[9] >> 1u);
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088826F8;
      }
      goto L_088826E8;
    }
L_088826E8:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088826F8;
      }
      goto L_088826F4;
    }
L_088826F4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), 0u);
    goto L_088826F8;
L_088826F8:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088826C0;
      }
      goto L_0888270C;
    }
L_0888270C:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (16256u << 16u);
      if (branch_taken) {
          goto L_0888299C;
      }
      goto L_0888271C;
    }
L_0888271C:
    ctx.gpr[22] = (2230u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[30] = (2225u << 16u);
    ctx.gpr[23] = (2225u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4576));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-1740));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1676));
    goto L_08882738;
L_08882738:
    ctx.gpr[5] = (ctx.gpr[21] << 2u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08882988;
      }
      goto L_0888274C;
    }
L_0888274C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882988;
      }
      goto L_08882754;
    }
L_08882754:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11604)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
      if (branch_taken) {
          goto L_08882784;
      }
      goto L_08882778;
    }
L_08882778:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08882784;
L_08882784:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(54))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[5] = (ctx.gpr[7] << 2u);
      if (branch_taken) {
          goto L_088827FC;
      }
      goto L_08882794;
    }
L_08882794:
    ctx.gpr[5] = (0u | 0u);
    goto L_08882798;
L_08882798:
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08882798;
      }
      goto L_088827B8;
    }
L_088827B8:
    ctx.gpr[5] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[31] = (0x088827F4u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 331u, 0x088CE988u>(ctx, &aot_mem) && ctx.pc == 0x088827F4u) goto L_088827F4;
    return;
L_088827F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08882838;
      }
      goto L_088827FC;
    }
L_088827FC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08882834u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 331u, 0x088CE988u>(ctx, &aot_mem) && ctx.pc == 0x08882834u) goto L_08882834;
    return;
L_08882834:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08882838;
L_08882838:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08882984;
      }
      goto L_08882840;
    }
L_08882840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
        goto L_0888286C;
    }
    goto L_08882858;
L_08882858:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08882984;
      }
      goto L_08882864;
    }
L_08882864:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888287C;
      }
      goto L_0888286C;
    }
L_0888286C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08882948;
      }
      goto L_08882874;
    }
L_08882874:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08882984;
      }
      goto L_0888287C;
    }
L_0888287C:
    ctx.gpr[31] = (0x08882884u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08882884u) goto L_08882884;
    return;
L_08882884:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08882940;
      }
      goto L_08882898;
    }
L_08882898:
    ctx.gpr[31] = (0x088828A0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 541u, 0x0889EB14u>(ctx, &aot_mem) && ctx.pc == 0x088828A0u) goto L_088828A0;
    return;
L_088828A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882940;
      }
      goto L_088828A8;
    }
L_088828A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088828C0;
      }
      goto L_088828B4;
    }
L_088828B4:
    ctx.gpr[31] = (0x088828BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 296u, 0x08A9D7E4u>(ctx, &aot_mem) && ctx.pc == 0x088828BCu) goto L_088828BC;
    return;
L_088828BC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(504), 0u);
    goto L_088828C0;
L_088828C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(544)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0888290C;
      }
      goto L_088828D4;
    }
L_088828D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088828F8;
      }
      goto L_088828E0;
    }
L_088828E0:
    ctx.gpr[31] = (0x088828E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 296u, 0x08A9D7E4u>(ctx, &aot_mem) && ctx.pc == 0x088828E8u) goto L_088828E8;
    return;
L_088828E8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(508), 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(540)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(540), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088828F8;
L_088828F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(544)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088828D4;
      }
      goto L_0888290C;
    }
L_0888290C:
    ctx.gpr[31] = (0x08882914u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 210u, 0x089ED530u>(ctx, &aot_mem) && ctx.pc == 0x08882914u) goto L_08882914;
    return;
L_08882914:
    ctx.gpr[31] = (0x0888291Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x0888291Cu) goto L_0888291C;
    return;
L_0888291C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882940;
      }
      goto L_08882924;
    }
L_08882924:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08882940u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08882940u) goto L_08882940;
    return;
L_08882940:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08882984;
      }
      goto L_08882948;
    }
L_08882948:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08882954u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x08882954u) goto L_08882954;
    return;
L_08882954:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888297C;
      }
      goto L_0888295C;
    }
L_0888295C:
    ctx.gpr[31] = (0x08882964u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 697u, 0x089A2E7Cu>(ctx, &aot_mem) && ctx.pc == 0x08882964u) goto L_08882964;
    return;
L_08882964:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888297C;
      }
      goto L_0888296C;
    }
L_0888296C:
    ctx.gpr[31] = (0x08882974u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 296u, 0x08A9D7E4u>(ctx, &aot_mem) && ctx.pc == 0x08882974u) goto L_08882974;
    return;
L_08882974:
    ctx.gpr[31] = (0x0888297Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x0888297Cu) goto L_0888297C;
    return;
L_0888297C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08882984;
      }
      goto L_08882984;
    }
L_08882984:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    goto L_08882988;
L_08882988:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08882738;
      }
      goto L_0888299C;
    }
L_0888299C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088829D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-384));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[30]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7304)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882A24;
      }
      goto L_08882A18;
    }
L_08882A18:
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7304), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08882A28;
      }
      goto L_08882A24;
    }
L_08882A24:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7304), 0u);
    goto L_08882A28;
L_08882A28:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (0u | 64u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x08882A68u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 158u, 0x088C0F80u>(ctx, &aot_mem) && ctx.pc == 0x08882A68u) goto L_08882A68;
    return;
L_08882A68:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (2269u << 16u);
      if (branch_taken) {
          goto L_08882C5C;
      }
      goto L_08882A80;
    }
L_08882A80:
    ctx.gpr[23] = (0u | 2u);
    ctx.gpr[22] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[29]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4656));
    ctx.gpr[20] = (2229u << 16u);
    goto L_08882A94;
L_08882A94:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
        goto L_08882AC8;
    }
    goto L_08882AB4;
L_08882AB4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08882C3C;
      }
      goto L_08882AC0;
    }
L_08882AC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08882AD8;
      }
      goto L_08882AC8;
    }
L_08882AC8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08882BDC;
      }
      goto L_08882AD0;
    }
L_08882AD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08882C3C;
      }
      goto L_08882AD8;
    }
L_08882AD8:
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882B40;
      }
      goto L_08882AE8;
    }
L_08882AE8:
    ctx.gpr[31] = (0x08882AF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x08882AF0u) goto L_08882AF0;
    return;
L_08882AF0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08882B40;
      }
      goto L_08882AF8;
    }
L_08882AF8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08882B40;
      }
      goto L_08882B04;
    }
L_08882B04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08882B40;
      }
      goto L_08882B10;
    }
L_08882B10:
    ctx.gpr[31] = (0x08882B18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 58u, 0x0887C554u>(ctx, &aot_mem) && ctx.pc == 0x08882B18u) goto L_08882B18;
    return;
L_08882B18:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08882B40;
      }
      goto L_08882B24;
    }
L_08882B24:
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-15316)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x08882B3Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 493u, 0x08AFE0A8u>(ctx, &aot_mem) && ctx.pc == 0x08882B3Cu) goto L_08882B3C;
    return;
L_08882B3C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08882B40;
L_08882B40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(544)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08882BD4;
      }
      goto L_08882B54;
    }
L_08882B54:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882BC0;
      }
      goto L_08882B60;
    }
L_08882B60:
    ctx.gpr[31] = (0x08882B68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x08882B68u) goto L_08882B68;
    return;
L_08882B68:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08882BC0;
      }
      goto L_08882B70;
    }
L_08882B70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08882BC0;
      }
      goto L_08882B7C;
    }
L_08882B7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08882BC0;
      }
      goto L_08882B88;
    }
L_08882B88:
    ctx.gpr[31] = (0x08882B90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 58u, 0x0887C554u>(ctx, &aot_mem) && ctx.pc == 0x08882B90u) goto L_08882B90;
    return;
L_08882B90:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08882BC0;
      }
      goto L_08882B9C;
    }
L_08882B9C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-15316)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x08882BB8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 493u, 0x08AFE0A8u>(ctx, &aot_mem) && ctx.pc == 0x08882BB8u) goto L_08882BB8;
    return;
L_08882BB8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    goto L_08882BC0;
L_08882BC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(544)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08882B54;
      }
      goto L_08882BD4;
    }
L_08882BD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
      if (branch_taken) {
          goto L_08882C3C;
      }
      goto L_08882BDC;
    }
L_08882BDC:
    ctx.gpr[31] = (0x08882BE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x08882BE4u) goto L_08882BE4;
    return;
L_08882BE4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08882C34;
      }
      goto L_08882BEC;
    }
L_08882BEC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08882C34;
      }
      goto L_08882BF8;
    }
L_08882BF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08882C34;
      }
      goto L_08882C04;
    }
L_08882C04:
    ctx.gpr[31] = (0x08882C0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 58u, 0x0887C554u>(ctx, &aot_mem) && ctx.pc == 0x08882C0Cu) goto L_08882C0C;
    return;
L_08882C0C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08882C34;
      }
      goto L_08882C18;
    }
L_08882C18:
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-15316)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x08882C30u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 493u, 0x08AFE0A8u>(ctx, &aot_mem) && ctx.pc == 0x08882C30u) goto L_08882C30;
    return;
L_08882C30:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08882C34;
L_08882C34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
      if (branch_taken) {
          goto L_08882C3C;
      }
      goto L_08882C3C;
    }
L_08882C3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08882A94;
      }
      goto L_08882C5C;
    }
L_08882C5C:
    ctx.gpr[2] = (ctx.gpr[30] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882C90:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15380)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(15376)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[11] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(15384), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(15392), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(15388), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(15396), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(15400), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882D08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08882DBC;
      }
      goto L_08882D38;
    }
L_08882D38:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-4));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 63u);
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08882DBC;
      }
      goto L_08882D5C;
    }
L_08882D5C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] >> 24u);
    ctx.gpr[7] = (ctx.gpr[9] >> 15u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] & 511u);
      if (branch_taken) {
          goto L_08882DBC;
      }
      goto L_08882D74;
    }
L_08882D74:
    ctx.gpr[10] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08882DBC;
      }
      goto L_08882D84;
    }
L_08882D84:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882DB4;
      }
      goto L_08882D90;
    }
L_08882D90:
    ctx.gpr[5] = (ctx.gpr[6] << 15u);
    ctx.gpr[4] = (65280u << 16u);
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32767));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-32768));
    ctx.gpr[4] = (ctx.gpr[9] & ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08882DB4;
L_08882DB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08882DD4;
      }
      goto L_08882DBC;
    }
L_08882DBC:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x08882DD4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 80u, 0x08884588u>(ctx, &aot_mem) && ctx.pc == 0x08882DD4u) goto L_08882DD4;
    return;
L_08882DD4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882DE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[7] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 20u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08882E18u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 82u, 0x088845C0u>(ctx, &aot_mem) && ctx.pc == 0x08882E18u) goto L_08882E18;
    return;
L_08882E18:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08882E2Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08883288;
L_08882E2C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882E44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08882E58u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 80u, 0x08884588u>(ctx, &aot_mem) && ctx.pc == 0x08882E58u) goto L_08882E58;
    return;
L_08882E58:
    ctx.gpr[31] = (0x08882E60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08882DE0;
L_08882E60:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882E70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] << 2u);
    ctx.gpr[17] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08882EA8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 228u, 0x08AECB64u>(ctx, &aot_mem) && ctx.pc == 0x08882EA8u) goto L_08882EA8;
    return;
L_08882EA8:
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08882ED8;
    }
    goto L_08882EBC;
L_08882EBC:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08882ECCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-440));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 559u, 0x08AAED60u>(ctx, &aot_mem) && ctx.pc == 0x08882ECCu) goto L_08882ECC;
    return;
L_08882ECC:
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08882ED8;
L_08882ED8:
    ctx.gpr[6] = (65280u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(63));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
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
L_08882F18:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882F24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] >> 6u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08882F68;
      }
      goto L_08882F60;
    }
L_08882F60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08882F70;
      }
      goto L_08882F68;
    }
L_08882F68:
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08882F70;
L_08882F70:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882F78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08882FB8;
      }
      goto L_08882F8C;
    }
L_08882F8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24352));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882FB8;
      }
      goto L_08882FB0;
    }
L_08882FB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08882FB8;
      }
      goto L_08882FB8;
    }
L_08882FB8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882FC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[20];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08883038;
      }
      goto L_08882FF0;
    }
L_08882FF0:
    ctx.gpr[19] = (0u | 24u);
    goto L_08882FF4;
L_08882FF4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08883000u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08882F78;
L_08883000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] & 63u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    ctx.gpr[4] = (ctx.gpr[4] >> 6u);
      if (branch_taken) {
          goto L_0888301C;
      }
      goto L_08883010;
    }
L_08883010:
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08883024;
      }
      goto L_0888301C;
    }
L_0888301C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0888303C;
      }
      goto L_08883024;
    }
L_08883024:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08883030u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08882F24;
L_08883030:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08882FF4;
      }
      goto L_08883038;
    }
L_08883038:
    ctx.gpr[2] = (0u | 0u);
    goto L_0888303C;
L_0888303C:
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
L_0888305C:
    ctx.gpr[7] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08883070;
      }
      goto L_08883068;
    }
L_08883068:
    ctx.gpr[5] = (ctx.gpr[6] >> 15u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    goto L_08883070;
L_08883070:
    ctx.gpr[7] = (256u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    ctx.gpr[7] = (65280u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883094:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[30] = (ctx.gpr[7] | 0u);
    ctx.gpr[23] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[22] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[20];
    ctx.gpr[21] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08883180;
      }
      goto L_088830E4;
    }
L_088830E4:
    ctx.gpr[19] = (0u | 24u);
    goto L_088830E8;
L_088830E8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088830F4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08882F24;
L_088830F4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08883104u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08882F78;
L_08883104:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] & 63u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08883130;
      }
      goto L_08883118;
    }
L_08883118:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08883128u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    goto L_08882E70;
L_08883128:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08883178;
      }
      goto L_08883130;
    }
L_08883130:
    ctx.gpr[5] = (ctx.gpr[5] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08883160;
      }
      goto L_08883140;
    }
L_08883140:
    ctx.gpr[31] = (0x08883148u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    goto L_0888305C;
L_08883148:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08883158u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08882E70;
L_08883158:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08883178;
      }
      goto L_08883160;
    }
L_08883160:
    ctx.gpr[31] = (0x08883168u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_0888305C;
L_08883168:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08883178u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    goto L_08882E70;
L_08883178:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[20];
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088830E8;
      }
      goto L_08883180;
    }
L_08883180:
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
L_088831B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[6] = (ctx.gpr[10] | 0u);
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x088831DCu);
    ctx.gpr[9] = (0u | 255u);
    goto L_08883094;
L_088831DC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088831F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08883220;
      }
      goto L_08883210;
    }
L_08883210:
    ctx.gpr[31] = (0x08883218u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_08883248;
L_08883218:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888323C;
      }
      goto L_08883220;
    }
L_08883220:
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[10] | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
    ctx.gpr[31] = (0x0888323Cu);
    ctx.gpr[9] = (0u | 255u);
    goto L_08883094;
L_0888323C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883248:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08883264u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    goto L_08882F18;
L_08883264:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08883274u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08883288;
L_08883274:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883288:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[19];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088832C4;
      }
      goto L_088832B0;
    }
L_088832B0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088832CC;
      }
      goto L_088832BC;
    }
L_088832BC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088832FC;
      }
      goto L_088832C4;
    }
L_088832C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088832FC;
      }
      goto L_088832CC;
    }
L_088832CC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088832D8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08882F24;
L_088832D8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088832EC;
      }
      goto L_088832E4;
    }
L_088832E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088832CC;
      }
      goto L_088832EC;
    }
L_088832EC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088832FCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08882E70;
L_088832FC:
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
L_08883318:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(71)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08883370;
      }
      goto L_0888333C;
    }
L_0888333C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08883368;
      }
      goto L_08883348;
    }
L_08883348:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08883360u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-412));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 559u, 0x08AAED60u>(ctx, &aot_mem) && ctx.pc == 0x08883360u) goto L_08883360;
    return;
L_08883360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08883368;
L_08883368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08883370;
L_08883370:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888337C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08883398u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08883318;
L_08883398:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088833B8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 250 ? 1u : 0u);
      if (branch_taken) {
          goto L_088833DC;
      }
      goto L_088833C8;
    }
L_088833C8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088833DC;
      }
      goto L_088833D0;
    }
L_088833D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    goto L_088833DC;
L_088833DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088833E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (0u | 11u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08883414;
      }
      goto L_08883404;
    }
L_08883404:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08883414u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_088833B8;
L_08883414:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883420:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888344Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 58u, 0x089283CCu>(ctx, &aot_mem) && ctx.pc == 0x0888344Cu) goto L_0888344C;
    return;
L_0888344C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08883470;
      }
      goto L_08883460;
    }
L_08883460:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0888351C;
      }
      goto L_08883470;
    }
L_08883470:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
        goto L_088834B8;
    }
    goto L_0888348C;
L_0888348C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (4u << 16u);
    ctx.gpr[9] = (2225u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(40));
    ctx.gpr[7] = (0u | 8u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x088834B0u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-376));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 320u, 0x0894DDD0u>(ctx, &aot_mem) && ctx.pc == 0x088834B0u) goto L_088834B0;
    return;
L_088834B0:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    goto L_088834B8;
L_088834B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x088834F0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 69u, 0x08928474u>(ctx, &aot_mem) && ctx.pc == 0x088834F0u) goto L_088834F0;
    return;
L_088834F0:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0888351C;
      }
      goto L_0888351C;
    }
L_0888351C:
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
L_08883538:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08883568u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08883420;
L_08883568:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883574:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08883594u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    goto L_08883420;
L_08883594:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088835A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x088835C8u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    goto L_08883420;
L_088835C8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088835D4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08883648;
      }
      goto L_088835E4;
    }
L_088835E4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-32705));
    ctx.gpr[10] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[10] << 6u);
    ctx.gpr[9] = (ctx.gpr[9] & 32704u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[6] = (0u | 11u);
      if (branch_taken) {
          goto L_08883648;
      }
      goto L_08883624;
    }
L_08883624:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] >> 24u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08883648;
L_08883648:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883650:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08883740;
      }
      goto L_08883678;
    }
L_08883678:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-328)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883690:
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08883740;
      }
      goto L_0888369C;
    }
L_0888369C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088836B4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 80u, 0x08884588u>(ctx, &aot_mem) && ctx.pc == 0x088836B4u) goto L_088836B4;
    return;
L_088836B4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08883740;
      }
      goto L_088836C4;
    }
L_088836C4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x088836D8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 82u, 0x088845C0u>(ctx, &aot_mem) && ctx.pc == 0x088836D8u) goto L_088836D8;
    return;
L_088836D8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08883740;
      }
      goto L_088836E8;
    }
L_088836E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088836F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088833B8;
L_088836F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08883700u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088833B8;
L_08883700:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[31] = (0x08883718u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 80u, 0x08884588u>(ctx, &aot_mem) && ctx.pc == 0x08883718u) goto L_08883718;
    return;
L_08883718:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08883740;
      }
      goto L_08883728;
    }
L_08883728:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08883738u);
    ctx.gpr[6] = (0u | 1u);
    goto L_088835D4;
L_08883738:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08883740;
      }
      goto L_08883740;
    }
L_08883740:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883754:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08883780u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    goto L_08882F18;
L_08883780:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08883798u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 80u, 0x08884588u>(ctx, &aot_mem) && ctx.pc == 0x08883798u) goto L_08883798;
    return;
L_08883798:
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
L_088837B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x088837D8u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08883650;
L_088837D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088838D0;
      }
      goto L_088837EC;
    }
L_088837EC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-296)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883804:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08883814u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08882D08;
L_08883814:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088838D0;
      }
      goto L_08883824;
    }
L_08883824:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] ^ 2u);
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08883844u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 80u, 0x08884588u>(ctx, &aot_mem) && ctx.pc == 0x08883844u) goto L_08883844;
    return;
L_08883844:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08883814;
      }
      goto L_0888384C;
    }
L_0888384C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08883860u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 82u, 0x088845C0u>(ctx, &aot_mem) && ctx.pc == 0x08883860u) goto L_08883860;
    return;
L_08883860:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08883814;
      }
      goto L_08883868;
    }
L_08883868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[16] << 24u);
    ctx.gpr[6] = (65280u << 16u);
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08883814;
      }
      goto L_088838A4;
    }
L_088838A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088838C8;
      }
      goto L_088838B0;
    }
L_088838B0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088838C8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 80u, 0x08884588u>(ctx, &aot_mem) && ctx.pc == 0x088838C8u) goto L_088838C8;
    return;
L_088838C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08883814;
      }
      goto L_088838D0;
    }
L_088838D0:
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
L_088838E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[7] = (0u | 11u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0888392C;
      }
      goto L_0888390C;
    }
L_0888390C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08883918u);
    ctx.gpr[5] = (0u | 1u);
    goto L_0888337C;
L_08883918:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0888392Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_088837B4;
L_0888392C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883940:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x08883970u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088837B4;
L_08883970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08883990;
      }
      goto L_08883980;
    }
L_08883980:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x08883990u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08883288;
L_08883990:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08883A7C;
      }
      goto L_088839A0;
    }
L_088839A0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088839B8u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08882FC0;
L_088839B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088839D8;
      }
      goto L_088839C0;
    }
L_088839C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088839D0u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08882FC0;
L_088839D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08883A30;
      }
      goto L_088839D8;
    }
L_088839D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088839F0;
      }
      goto L_088839E4;
    }
L_088839E4:
    ctx.gpr[31] = (0x088839ECu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08882DE0;
L_088839EC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_088839F0;
L_088839F0:
    ctx.gpr[21] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08883A08u);
    ctx.gpr[7] = (0u | 1u);
    goto L_08883754;
L_08883A08:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08883A20u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08883754;
L_08883A20:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08883A30u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_08883248;
L_08883A30:
    ctx.gpr[31] = (0x08883A38u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08882F18;
L_08883A38:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08883A5Cu);
    ctx.gpr[10] = (ctx.gpr[20] | 0u);
    goto L_08883094;
L_08883A5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[31] = (0x08883A7Cu);
    ctx.gpr[10] = (ctx.gpr[19] | 0u);
    goto L_08883094;
L_08883A7C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[4] = (0u | 11u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883AB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08883AD4u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08883650;
L_08883AD4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08883AE0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_088833E4;
L_08883AE0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08883AECu);
    ctx.gpr[5] = (0u | 1u);
    goto L_0888337C;
L_08883AEC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08883B00u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08883940;
L_08883B00:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883B14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08883B30u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08883650;
L_08883B30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08883B80;
      }
      goto L_08883B40;
    }
L_08883B40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08883B78;
      }
      goto L_08883B50;
    }
L_08883B50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08883B80;
      }
      goto L_08883B60;
    }
L_08883B60:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08883B70u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_08883940;
L_08883B70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08883B90;
      }
      goto L_08883B78;
    }
L_08883B78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08883B90;
      }
      goto L_08883B80;
    }
L_08883B80:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08883B8Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08883AB8;
L_08883B8C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08883B90;
L_08883B90:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883BA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08883BDC;
      }
      goto L_08883BC4;
    }
L_08883BC4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08883BD4u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08883B14;
L_08883BD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08883BEC;
      }
      goto L_08883BDC;
    }
L_08883BDC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08883BECu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08883650;
L_08883BEC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883BF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08883C14u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08883BA4;
L_08883C14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_08883C34;
      }
      goto L_08883C24;
    }
L_08883C24:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08883CA0;
      }
      goto L_08883C2C;
    }
L_08883C2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08883C44;
      }
      goto L_08883C34;
    }
L_08883C34:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08883C7C;
      }
      goto L_08883C3C;
    }
L_08883C3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08883CA0;
      }
      goto L_08883C44;
    }
L_08883C44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(250));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 512 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08883C60;
      }
      goto L_08883C58;
    }
L_08883C58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08883CA0;
      }
      goto L_08883C60;
    }
L_08883C60:
    ctx.gpr[31] = (0x08883C68u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088835A0;
L_08883C68:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(250));
      if (branch_taken) {
          goto L_08883CAC;
      }
      goto L_08883C7C;
    }
L_08883C7C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(250));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 512 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08883C98;
      }
      goto L_08883C90;
    }
L_08883C90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08883CA0;
      }
      goto L_08883C98;
    }
L_08883C98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08883CAC;
      }
      goto L_08883CA0;
    }
L_08883CA0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08883CACu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08883B14;
L_08883CAC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883CC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08883D24;
      }
      goto L_08883CEC;
    }
L_08883CEC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_08883DC0;
      }
      goto L_08883CF8;
    }
L_08883CF8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08883D40;
      }
      goto L_08883D00;
    }
L_08883D00:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08883D0Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_088833E4;
L_08883D0C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08883D1Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08883940;
L_08883D1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08883DCC;
      }
      goto L_08883D24;
    }
L_08883D24:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
      if (branch_taken) {
          goto L_08883D6C;
      }
      goto L_08883D30;
    }
L_08883D30:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08883D94;
      }
      goto L_08883D38;
    }
L_08883D38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08883DC0;
      }
      goto L_08883D40;
    }
L_08883D40:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08883D4Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08883B14;
L_08883D4C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08883D64u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 80u, 0x08884588u>(ctx, &aot_mem) && ctx.pc == 0x08883D64u) goto L_08883D64;
    return;
L_08883D64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08883DC0;
      }
      goto L_08883D6C;
    }
L_08883D6C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08883D78u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08883B14;
L_08883D78:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[31] = (0x08883D8Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 82u, 0x088845C0u>(ctx, &aot_mem) && ctx.pc == 0x08883D8Cu) goto L_08883D8C;
    return;
L_08883D8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08883DC0;
      }
      goto L_08883D94;
    }
L_08883D94:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08883DA0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08883BF8;
L_08883DA0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x08883DB8u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 80u, 0x08884588u>(ctx, &aot_mem) && ctx.pc == 0x08883DB8u) goto L_08883DB8;
    return;
L_08883DB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08883DC0;
      }
      goto L_08883DC0;
    }
L_08883DC0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08883DCCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_088833E4;
L_08883DCC:
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
L_08883DE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x08883E14u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08883B14;
L_08883E14:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08883E20u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_088833E4;
L_08883E20:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08883E30u);
    ctx.gpr[5] = (0u | 2u);
    goto L_0888337C;
L_08883E30:
    ctx.gpr[20] = (0u | 11u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08883E44u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08883BF8;
L_08883E44:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08883E5Cu);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 80u, 0x08884588u>(ctx, &aot_mem) && ctx.pc == 0x08883E5Cu) goto L_08883E5C;
    return;
L_08883E5C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08883E68u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_088833E4;
L_08883E68:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883E94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08883EA4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_08882F78;
L_08883EA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] >> 24u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] << 24u);
    ctx.gpr[6] = (65280u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883EDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[8] = (0u | 10u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08883F60;
      }
      goto L_08883F08;
    }
L_08883F08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[6] = (ctx.gpr[4] & 63u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08883F60;
      }
      goto L_08883F30;
    }
L_08883F30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[4] >> 15u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] & 511u);
    ctx.gpr[8] = (ctx.gpr[16] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 24u);
    ctx.gpr[31] = (0x08883F58u);
    ctx.gpr[6] = (0u | 255u);
    goto L_08882E44;
L_08883F58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08883F90;
      }
      goto L_08883F60;
    }
L_08883F60:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08883F6Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_088838E8;
L_08883F6C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08883F78u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_088833E4;
L_08883F78:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 24u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08883F90u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08882E44;
L_08883F90:
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
L_08883FA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08883FC4u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08883650;
L_08883FC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 1u, 0x08884004u>(ctx, &aot_mem); return;
      }
      goto L_08883FD4;
    }
L_08883FD4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_08883FEC;
      }
      goto L_08883FDC;
    }
L_08883FDC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08883FF4;
      }
      goto L_08883FE4;
    }
L_08883FE4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 3u, 0x08884018u>(ctx, &aot_mem); return;
      }
      goto L_08883FEC;
    }
L_08883FEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 5u, 0x0888402Cu>(ctx, &aot_mem); return;
      }
      goto L_08883FF4;
    }
L_08883FF4:
    ctx.gpr[31] = (0x08883FFCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08882DE0;
L_08883FFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 5u, 0x0888402Cu>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 1u, 0x08884004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0031(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0031_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_31(Runtime &runtime) {
    runtime.register_generated_unit(31u, 0x08880000u, 16384u, &recomp_unit_0031, &recomp_unit_0031_entry);
    runtime.register_function(0x08880000u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880008u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880010u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880038u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880040u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880060u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880070u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880098u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088800CCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088800D8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088800E0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088800F4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880108u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880120u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880140u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880148u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880150u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888015Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888016Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880174u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880184u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888018Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088801A8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088801BCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088801D0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088801E4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088801F8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888020Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880220u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880228u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888023Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880250u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880264u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880278u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888027Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088802A0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088802A8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088802C0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088802D4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088802F4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088802F8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880300u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880308u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880330u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880338u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880358u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880368u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880388u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088803F4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088803FCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880400u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880408u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888041Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880424u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880438u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888043Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880460u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880478u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880480u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880488u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880490u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880498u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088804A0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088804ACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088804DCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088804E4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088804F0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880510u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880524u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880618u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880638u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088806A4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088806ACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088806E0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880720u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880730u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880754u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888075Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880790u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088807BCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088807D0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088807D8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088807F0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880808u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880810u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880814u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888081Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880824u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888083Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880844u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880854u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880858u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880860u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880870u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880874u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888087Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088808A4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088808ACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088808C4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088808D8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088808F8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088808FCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880904u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888090Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880950u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880958u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880990u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088809A0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088809A8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088809ECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880A5Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880A68u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880A70u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880A88u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880AA0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880AD8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880B0Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880B24u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880B2Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880B34u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880B54u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880B60u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880B6Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880B78u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880B90u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880B9Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880BA4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880BB0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880BB8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880BC0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880BC8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880BD0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880BD8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880BE0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880BE8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880BF0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880BFCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880C10u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880C24u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880C38u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880C4Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880C60u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880C74u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880C7Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880C84u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880C98u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880CACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880CC0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880CD4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880CDCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880CE0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880CECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880CF4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D00u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D08u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D10u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D18u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D20u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D2Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D30u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D38u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D44u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D48u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D50u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D58u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D60u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D68u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D78u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D9Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880DA4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880DBCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880DD0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880DF0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880DF4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880E00u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880E0Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880E28u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880E30u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880E50u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880E60u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880E6Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880E74u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880EBCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880F24u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880F30u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880F38u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880F3Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880F44u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880F58u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880F60u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880F74u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880F80u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880F90u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880FA8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880FB4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880FC0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880FD0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880FD8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880FECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880FF4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880FFCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881018u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881024u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881030u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888103Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881054u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881060u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881068u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881084u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088810A0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088810BCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088810D8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088810F4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881110u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881118u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881120u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888113Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881158u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881174u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881190u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881198u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888119Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088811A8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088811B8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088811C4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088811CCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088811D4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088811DCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088811E4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088811F0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088811F4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088811FCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881208u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888120Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881214u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888121Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881224u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888122Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888123Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881260u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881268u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881280u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881294u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088812B4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088812B8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088812C4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088812CCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088812F4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088812FCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881324u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881334u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888133Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881344u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881380u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088813E0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088813ECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088813F4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088813F8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881400u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881414u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888141Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881430u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881440u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881460u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881470u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881478u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881490u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881498u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088814A0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088814BCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088814C8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088814D4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088814E0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088814F8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881504u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888150Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881528u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881544u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881560u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888157Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881598u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088815B4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088815BCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088815C4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088815E0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088815FCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881618u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881634u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888163Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881640u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888164Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888165Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881668u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881670u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881678u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881680u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881688u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881694u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881698u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088816A0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088816ACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088816B0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088816B8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088816C0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088816C8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088816D0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088816E0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881704u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888170Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881724u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881738u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881758u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888175Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881768u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881770u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881798u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088817A0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088817C8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088817D8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088817E0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088817E8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881824u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881884u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881890u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881898u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888189Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088818A4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088818B8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088818C0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088818D4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881904u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881920u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881930u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881938u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881950u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881958u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881960u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888197Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881988u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881994u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088819A0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088819B8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088819C4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088819CCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088819E8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881A04u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881A20u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881A3Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881A58u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881A74u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881A7Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881A84u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881AA0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881ABCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881AD8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881AF4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881AFCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B00u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B0Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B1Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B28u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B30u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B38u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B40u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B48u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B54u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B58u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B60u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B6Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B70u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B78u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B80u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B88u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B90u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881BA0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881BC4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881BCCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881BE4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881BF8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881C18u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881C1Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881C28u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881C30u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881C58u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881C60u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881C88u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881C98u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881CA0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881CA8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881CE4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881D54u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881D5Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881D60u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881D68u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881D80u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881D88u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881DA0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881DB8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881DD8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881DE0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881DECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881DFCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881E0Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881E14u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881E24u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881E2Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881E44u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881E4Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881E54u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881E74u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881E80u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881E8Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881E98u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881EB0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881EBCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881EC4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881ED0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881ED8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881EE0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881EE8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881EF0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881EF8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881F00u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881F08u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881F10u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881F1Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881F30u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881F44u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881F58u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881F6Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881F80u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881F94u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881F9Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881FA4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881FB8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881FCCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881FE0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881FF4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881FFCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882000u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888200Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882014u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882020u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882028u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882030u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882038u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882040u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888204Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882050u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882058u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882064u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882068u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882070u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882078u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882080u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882088u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882098u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088820BCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088820C4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088820DCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088820F0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882110u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882114u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882120u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888212Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882158u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882160u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882184u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882194u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088821DCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882278u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882284u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882300u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882320u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888234Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882374u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882388u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882394u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088823B0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088823B8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088823C8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088823D0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088823E0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088823E4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088823ECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088823F8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888242Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888243Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882448u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882468u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882484u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888248Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888249Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088824A4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088824B4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088824BCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088824D8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088824E8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088824F0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888250Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888251Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882524u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888252Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888254Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088825C8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088825CCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088825E8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088825F4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882624u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088826A4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088826B0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088826C0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088826D4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088826E8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088826F4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088826F8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888270Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888271Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882738u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888274Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882754u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882778u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882784u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882794u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882798u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088827B8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088827F4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088827FCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882834u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882838u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882840u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882858u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882864u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888286Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882874u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888287Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882884u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882898u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088828A0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088828A8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088828B4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088828BCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088828C0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088828D4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088828E0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088828E8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088828F8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888290Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882914u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888291Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882924u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882940u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882948u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882954u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888295Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882964u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888296Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882974u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888297Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882984u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882988u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888299Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088829D0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882A18u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882A24u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882A28u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882A68u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882A80u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882A94u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882AB4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882AC0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882AC8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882AD0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882AD8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882AE8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882AF0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882AF8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B04u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B10u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B18u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B24u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B3Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B40u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B54u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B60u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B68u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B70u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B7Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B88u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B90u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B9Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882BB8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882BC0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882BD4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882BDCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882BE4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882BECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882BF8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882C04u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882C0Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882C18u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882C30u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882C34u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882C3Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882C5Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882C90u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882D08u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882D38u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882D5Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882D74u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882D84u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882D90u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882DB4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882DBCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882DD4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882DE0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882E18u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882E2Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882E44u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882E58u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882E60u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882E70u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882EA8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882EBCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882ECCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882ED8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882F18u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882F24u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882F60u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882F68u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882F70u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882F78u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882F8Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882FB0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882FB8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882FC0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882FF0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882FF4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883000u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883010u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888301Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883024u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883030u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883038u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888303Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888305Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883068u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883070u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883094u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088830E4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088830E8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088830F4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883104u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883118u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883128u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883130u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883140u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883148u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883158u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883160u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883168u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883178u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883180u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088831B0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088831DCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088831F4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883210u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883218u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883220u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888323Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883248u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883264u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883274u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883288u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088832B0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088832BCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088832C4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088832CCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088832D8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088832E4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088832ECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088832FCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883318u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888333Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883348u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883360u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883368u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883370u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888337Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883398u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088833B8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088833C8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088833D0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088833DCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088833E4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883404u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883414u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883420u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888344Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883460u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883470u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888348Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088834B0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088834B8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088834F0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888351Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883538u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883568u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883574u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883594u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088835A0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088835C8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088835D4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088835E4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883624u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883648u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883650u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883678u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883690u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888369Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088836B4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088836C4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088836D8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088836E8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088836F4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883700u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883718u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883728u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883738u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883740u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883754u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883780u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883798u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088837B4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088837D8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088837ECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883804u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883814u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883824u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883844u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888384Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883860u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883868u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088838A4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088838B0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088838C8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088838D0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088838E8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888390Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883918u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888392Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883940u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883970u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883980u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883990u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088839A0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088839B8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088839C0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088839D0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088839D8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088839E4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088839ECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088839F0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883A08u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883A20u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883A30u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883A38u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883A5Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883A7Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883AB8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883AD4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883AE0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883AECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883B00u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883B14u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883B30u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883B40u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883B50u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883B60u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883B70u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883B78u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883B80u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883B8Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883B90u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883BA4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883BC4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883BD4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883BDCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883BECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883BF8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883C14u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883C24u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883C2Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883C34u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883C3Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883C44u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883C58u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883C60u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883C68u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883C7Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883C90u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883C98u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883CA0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883CACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883CC0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883CECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883CF8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D00u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D0Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D1Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D24u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D30u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D38u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D40u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D4Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D64u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D6Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D78u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D8Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D94u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883DA0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883DB8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883DC0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883DCCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883DE4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883E14u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883E20u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883E30u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883E44u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883E5Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883E68u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883E94u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883EA4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883EDCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883F08u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883F30u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883F58u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883F60u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883F6Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883F78u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883F90u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883FA8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883FC4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883FD4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883FDCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883FE4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883FECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883FF4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883FFCu, &recomp_unit_0031, "recomp_unit_0031");
}
} // namespace psprecomp
