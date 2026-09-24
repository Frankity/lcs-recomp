#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0092[4094] = {
    1, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 13, 0, 14, 0, 0, 0, 15,
    0, 0, 16, 0, 17, 0, 0, 0, 18, 0, 0, 19, 0, 20, 0, 0, 0, 21, 0, 0, 22, 0, 23, 0, 0, 0, 24, 0, 0, 25, 0, 26,
    0, 0, 0, 27, 0, 0, 28, 0, 29, 0, 0, 0, 30, 0, 0, 31, 0, 32, 0, 0, 0, 33, 0, 0, 34, 0, 35, 0, 0, 0, 36, 0,
    0, 37, 0, 38, 0, 0, 39, 0, 40, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0,
    0, 45, 0, 0, 0, 46, 0, 0, 47, 0, 48, 0, 49, 0, 0, 0, 50, 0, 0, 51, 0, 52, 0, 0, 0, 53, 0, 0, 54, 0, 55, 0,
    0, 0, 56, 0, 0, 57, 0, 58, 0, 0, 0, 59, 0, 0, 60, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 64, 0, 0, 0, 65, 0,
    0, 66, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 70, 0, 0, 0, 71, 0, 0, 72, 0, 73, 0, 0, 0, 74, 0, 0, 75, 0, 76,
    0, 0, 0, 77, 0, 0, 78, 0, 79, 0, 0, 0, 80, 0, 0, 81, 0, 82, 0, 0, 83, 0, 84, 85, 0, 0, 0, 0, 86, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0,
    88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 0, 92, 0, 93, 0, 94, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0,
    0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 101, 0, 102, 0, 0, 103, 0, 0,
    0, 0, 0, 104, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 109, 0, 110, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 114, 0, 115, 116, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0,
    0, 0, 0, 0, 119, 0, 0, 120, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126,
    0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 137,
    0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 142, 0, 143, 0, 144, 0, 0, 145, 0, 146, 0, 147, 0, 148, 149, 0,
    150, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 155, 0, 156, 0, 0, 157, 0, 158, 0, 159, 0, 0, 0,
    160, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0,
    167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 170, 0, 0, 0, 171, 172, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0,
    0, 175, 0, 0, 0, 176, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0,
    0, 0, 181, 182, 0, 183, 0, 0, 0, 0, 184, 0, 185, 0, 0, 186, 0, 0, 0, 187, 0, 188, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0,
    192, 0, 193, 0, 194, 195, 0, 196, 0, 197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 204, 0, 0, 205,
    0, 206, 207, 0, 0, 0, 0, 208, 0, 0, 209, 0, 210, 211, 0, 0, 0, 212, 0, 0, 213, 0, 214, 215, 0, 0, 0, 216, 0, 0, 0, 217,
    0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 222, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0,
    226, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 231, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234,
    0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 237, 0, 238, 0, 0, 0, 239, 0, 240, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0,
    244, 0, 0, 0, 0, 245, 0, 0, 246, 0, 247, 0, 0, 0, 248, 0, 249, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 253, 0,
    0, 0, 0, 254, 0, 0, 255, 0, 256, 0, 0, 0, 257, 0, 258, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 262, 0, 0, 0,
    0, 263, 0, 0, 264, 0, 265, 0, 0, 0, 266, 0, 267, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 272,
    0, 0, 273, 0, 274, 0, 0, 0, 275, 0, 276, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0,
    282, 0, 283, 0, 284, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 289, 290, 0, 0, 0, 0, 0, 291, 0,
    0, 0, 292, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 295, 0, 296, 0, 0, 0, 297, 0, 298, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0,
    301, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 304, 0, 305, 0, 0, 0, 306, 0, 307, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0,
    0, 311, 0, 0, 0, 0, 312, 0, 0, 313, 0, 314, 0, 0, 0, 315, 0, 316, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 320,
    0, 0, 0, 0, 321, 0, 0, 322, 0, 323, 0, 0, 0, 324, 0, 325, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 329, 0, 0,
    0, 0, 330, 0, 0, 331, 0, 332, 0, 0, 0, 333, 0, 334, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0,
    339, 0, 0, 340, 0, 341, 0, 0, 0, 342, 0, 343, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 348, 0,
    0, 349, 0, 350, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0,
    355, 0, 0, 356, 0, 0, 357, 0, 358, 0, 0, 359, 0, 0, 360, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 363, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0,
    0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 371, 0, 372, 0, 0, 0, 0, 0,
    0, 0, 373, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0,
    380, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 387, 0, 0,
    0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 391, 0, 0, 0, 0, 0, 392, 393, 0, 394, 0, 0, 0,
    0, 0, 395, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 400, 0, 0, 0, 0, 401,
    0, 0, 0, 402, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 406, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 409, 0, 410, 0, 0,
    0, 0, 411, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 415, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0,
    418, 0, 0, 419, 0, 0, 420, 0, 0, 421, 0, 0, 0, 422, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 425, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 426, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 428, 0, 429, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0,
    0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 439, 0, 0, 0, 0, 440, 0, 441,
    0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 444, 0, 0, 0, 0, 0, 445, 0, 446, 0, 0, 0, 0, 0, 447, 448, 0, 0,
    0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 0, 453, 0,
    0, 454, 0, 0, 0, 455, 0, 0, 456, 0, 457, 0, 458, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0,
    0, 0, 461, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0,
    0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0,
    470, 0, 0, 471, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0,
    0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 476, 477, 0, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 480, 0, 0, 0, 481, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 484, 0, 0, 0, 485, 0, 486, 0, 0,
    0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 490, 0, 491, 0, 0, 0, 0, 0, 0, 492,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 496, 0, 497, 0, 0, 0, 498, 0, 499, 0, 0,
    500, 501, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 505, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 508, 0,
    0, 0, 0, 0, 0, 509, 0, 510, 0, 0, 0, 0, 0, 0, 511, 0, 512, 513, 0, 0, 0, 514, 0, 0, 515, 0, 0, 516, 0, 517, 0, 0,
    0, 0, 0, 0, 518, 0, 0, 519, 0, 0, 520, 0, 521, 0, 522, 0, 0, 0, 0, 0, 523, 0, 0, 524, 0, 0, 525, 0, 526, 0, 0, 0,
    527, 0, 0, 0, 0, 528, 0, 0, 0, 529, 0, 0, 0, 0, 0, 530, 531, 0, 0, 0, 0, 0, 532, 0, 533, 0, 534, 0, 0, 0, 0, 0,
    535, 0, 0, 536, 0, 0, 537, 0, 538, 0, 539, 0, 540, 0, 0, 0, 0, 0, 0, 541, 0, 0, 542, 0, 0, 543, 0, 544, 0, 545, 0, 0,
    0, 0, 0, 546, 0, 0, 547, 0, 0, 548, 0, 549, 0, 0, 550, 0, 0, 0, 0, 551, 0, 0, 0, 552, 0, 0, 0, 0, 553, 554, 0, 0,
    0, 0, 555, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 558, 0, 0, 0, 0, 0, 559, 0, 0, 560, 0, 0, 561, 0, 562, 0, 0,
    563, 0, 0, 0, 0, 564, 0, 0, 0, 565, 0, 0, 0, 0, 566, 567, 0, 0, 0, 0, 568, 0, 569, 0, 0, 570, 0, 0, 0, 0, 571, 0,
    0, 0, 572, 0, 0, 0, 0, 573, 574, 0, 0, 0, 0, 575, 0, 0, 576, 0, 577, 0, 0, 0, 0, 0, 578, 0, 0, 579, 0, 0, 580, 0,
    581, 0, 0, 582, 0, 583, 0, 0, 0, 0, 0, 584, 0, 0, 585, 0, 0, 586, 0, 587, 0, 0, 588, 0, 0, 0, 0, 589, 0, 0, 0, 590,
    0, 0, 0, 0, 591, 592, 0, 0, 0, 0, 593, 0, 594, 0, 0, 595, 0, 0, 0, 0, 596, 0, 0, 0, 597, 0, 0, 0, 0, 598, 599, 0,
    0, 0, 0, 600, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0,
    603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 605, 0, 0, 0, 0, 606, 0, 0, 0, 0, 607, 0, 0, 0, 0,
    608, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 611, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0,
    615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 617, 0, 0, 0, 0, 618, 0, 0, 0, 0, 619, 0, 0, 0, 0,
    620, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 623, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 626, 0, 0, 627, 0, 628, 0, 0, 0, 0, 629, 0, 0, 630, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0,
    632, 0, 0, 0, 0, 633, 0, 0, 0, 634, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 637, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 641, 0, 0, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 649, 0, 0,
    0, 0, 0, 0, 650, 0, 0, 0, 651, 0, 0, 0, 0, 652, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0,
    656, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 659, 0, 0, 0, 660, 0, 661, 0, 0, 0, 0,
    0, 662, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664,
    0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 667, 0, 0, 0, 0, 668, 0, 0, 0, 0, 669, 0, 0, 0,
    0, 670, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 672, 0, 0, 673, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 675, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 677, 678, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 680, 0, 0, 681, 0, 682, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 684,
    0, 0, 0, 0, 0, 685, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 688, 0, 689,
    0, 690, 0, 0, 0, 0, 0, 691, 692, 0, 693, 0, 0, 0, 0, 0, 694, 0, 0, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    696, 0, 0, 0, 0, 0, 0, 0, 697, 0, 698, 0, 699, 0, 0, 0, 0, 0, 700, 701, 0, 702, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0,
    704, 0, 0, 0, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0,
    0, 0, 708, 0, 0, 0, 0, 709, 0, 0, 0, 0, 710, 0, 711, 0, 0, 0, 0, 712, 0, 0, 0, 713, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 716, 0, 0, 0, 0, 717, 0, 0, 718, 0, 0,
    0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 721, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0,
    0, 723, 0, 0, 0, 0, 0, 724, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 731, 0, 0, 0, 0, 0, 0, 0, 732,
    0, 0, 0, 0, 0, 0, 733, 0, 734, 0, 0, 0, 0, 735, 0, 736, 0, 0, 737, 0, 0, 738, 0, 0, 0, 0, 0, 0, 0, 0, 0, 739,
    0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 742, 0, 743, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 744, 0, 745, 0, 746, 0, 747, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 751, 0, 0, 0, 0, 752, 0, 753, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 754, 0, 755, 756, 0, 757, 0, 0, 0,
    0, 0, 758, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0, 0, 0, 760, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 761, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 0, 763, 764, 0, 765, 0, 0, 766, 0,
    0, 0, 767, 0, 768, 0, 769, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 770, 771, 0, 772, 0, 0, 773, 0, 0, 0, 774, 0, 775, 0, 776,
    0, 0, 777, 0, 778, 0, 779, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 780, 0, 0, 781, 0, 0, 0, 782, 0, 783,
};
void recomp_unit_0092_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08974000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0092[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08974000;
    case 2u: goto L_08974004;
    case 3u: goto L_08974018;
    case 4u: goto L_08974034;
    case 5u: goto L_0897403C;
    case 6u: goto L_08974044;
    case 7u: goto L_08974054;
    case 8u: goto L_0897407C;
    case 9u: goto L_089740AC;
    case 10u: goto L_089740B8;
    case 11u: goto L_089740C8;
    case 12u: goto L_089740D8;
    case 13u: goto L_089740E4;
    case 14u: goto L_089740EC;
    case 15u: goto L_089740FC;
    case 16u: goto L_08974108;
    case 17u: goto L_08974110;
    case 18u: goto L_08974120;
    case 19u: goto L_0897412C;
    case 20u: goto L_08974134;
    case 21u: goto L_08974144;
    case 22u: goto L_08974150;
    case 23u: goto L_08974158;
    case 24u: goto L_08974168;
    case 25u: goto L_08974174;
    case 26u: goto L_0897417C;
    case 27u: goto L_0897418C;
    case 28u: goto L_08974198;
    case 29u: goto L_089741A0;
    case 30u: goto L_089741B0;
    case 31u: goto L_089741BC;
    case 32u: goto L_089741C4;
    case 33u: goto L_089741D4;
    case 34u: goto L_089741E0;
    case 35u: goto L_089741E8;
    case 36u: goto L_089741F8;
    case 37u: goto L_08974204;
    case 38u: goto L_0897420C;
    case 39u: goto L_08974218;
    case 40u: goto L_08974220;
    case 41u: goto L_08974224;
    case 42u: goto L_08974230;
    case 43u: goto L_08974268;
    case 44u: goto L_08974274;
    case 45u: goto L_08974284;
    case 46u: goto L_08974294;
    case 47u: goto L_089742A0;
    case 48u: goto L_089742A8;
    case 49u: goto L_089742B0;
    case 50u: goto L_089742C0;
    case 51u: goto L_089742CC;
    case 52u: goto L_089742D4;
    case 53u: goto L_089742E4;
    case 54u: goto L_089742F0;
    case 55u: goto L_089742F8;
    case 56u: goto L_08974308;
    case 57u: goto L_08974314;
    case 58u: goto L_0897431C;
    case 59u: goto L_0897432C;
    case 60u: goto L_08974338;
    case 61u: goto L_08974340;
    case 62u: goto L_08974350;
    case 63u: goto L_08974360;
    case 64u: goto L_08974368;
    case 65u: goto L_08974378;
    case 66u: goto L_08974384;
    case 67u: goto L_0897438C;
    case 68u: goto L_0897439C;
    case 69u: goto L_089743AC;
    case 70u: goto L_089743B4;
    case 71u: goto L_089743C4;
    case 72u: goto L_089743D0;
    case 73u: goto L_089743D8;
    case 74u: goto L_089743E8;
    case 75u: goto L_089743F4;
    case 76u: goto L_089743FC;
    case 77u: goto L_0897440C;
    case 78u: goto L_08974418;
    case 79u: goto L_08974420;
    case 80u: goto L_08974430;
    case 81u: goto L_0897443C;
    case 82u: goto L_08974444;
    case 83u: goto L_08974450;
    case 84u: goto L_08974458;
    case 85u: goto L_0897445C;
    case 86u: goto L_08974470;
    case 87u: goto L_089744E4;
    case 88u: goto L_08974500;
    case 89u: goto L_0897451C;
    case 90u: goto L_08974528;
    case 91u: goto L_08974534;
    case 92u: goto L_08974544;
    case 93u: goto L_0897454C;
    case 94u: goto L_08974554;
    case 95u: goto L_0897455C;
    case 96u: goto L_08974570;
    case 97u: goto L_08974588;
    case 98u: goto L_0897459C;
    case 99u: goto L_089745C4;
    case 100u: goto L_089745D0;
    case 101u: goto L_089745E0;
    case 102u: goto L_089745E8;
    case 103u: goto L_089745F4;
    case 104u: goto L_0897460C;
    case 105u: goto L_08974610;
    case 106u: goto L_0897463C;
    case 107u: goto L_08974654;
    case 108u: goto L_08974660;
    case 109u: goto L_08974670;
    case 110u: goto L_08974678;
    case 111u: goto L_089746F0;
    case 112u: goto L_08974734;
    case 113u: goto L_0897474C;
    case 114u: goto L_08974754;
    case 115u: goto L_0897475C;
    case 116u: goto L_08974760;
    case 117u: goto L_089747E4;
    case 118u: goto L_089747F8;
    case 119u: goto L_08974810;
    case 120u: goto L_0897481C;
    case 121u: goto L_08974820;
    case 122u: goto L_089748B4;
    case 123u: goto L_089748C0;
    case 124u: goto L_089748D4;
    case 125u: goto L_089748E8;
    case 126u: goto L_089748FC;
    case 127u: goto L_08974904;
    case 128u: goto L_08974910;
    case 129u: goto L_08974930;
    case 130u: goto L_08974964;
    case 131u: goto L_08974990;
    case 132u: goto L_089749AC;
    case 133u: goto L_089749B8;
    case 134u: goto L_089749D0;
    case 135u: goto L_089749DC;
    case 136u: goto L_089749E8;
    case 137u: goto L_089749FC;
    case 138u: goto L_08974A04;
    case 139u: goto L_08974A10;
    case 140u: goto L_08974A28;
    case 141u: goto L_08974A38;
    case 142u: goto L_08974A40;
    case 143u: goto L_08974A48;
    case 144u: goto L_08974A50;
    case 145u: goto L_08974A5C;
    case 146u: goto L_08974A64;
    case 147u: goto L_08974A6C;
    case 148u: goto L_08974A74;
    case 149u: goto L_08974A78;
    case 150u: goto L_08974A80;
    case 151u: goto L_08974A88;
    case 152u: goto L_08974A98;
    case 153u: goto L_08974ABC;
    case 154u: goto L_08974AC4;
    case 155u: goto L_08974ACC;
    case 156u: goto L_08974AD4;
    case 157u: goto L_08974AE0;
    case 158u: goto L_08974AE8;
    case 159u: goto L_08974AF0;
    case 160u: goto L_08974B00;
    case 161u: goto L_08974B10;
    case 162u: goto L_08974B1C;
    case 163u: goto L_08974B30;
    case 164u: goto L_08974B3C;
    case 165u: goto L_08974B54;
    case 166u: goto L_08974B74;
    case 167u: goto L_08974B80;
    case 168u: goto L_08974BA8;
    case 169u: goto L_08974BB8;
    case 170u: goto L_08974BC0;
    case 171u: goto L_08974BD0;
    case 172u: goto L_08974BD4;
    case 173u: goto L_08974BE8;
    case 174u: goto L_08974BF8;
    case 175u: goto L_08974C04;
    case 176u: goto L_08974C14;
    case 177u: goto L_08974C18;
    case 178u: goto L_08974C2C;
    case 179u: goto L_08974C54;
    case 180u: goto L_08974C68;
    case 181u: goto L_08974C88;
    case 182u: goto L_08974C8C;
    case 183u: goto L_08974C94;
    case 184u: goto L_08974CA8;
    case 185u: goto L_08974CB0;
    case 186u: goto L_08974CBC;
    case 187u: goto L_08974CCC;
    case 188u: goto L_08974CD4;
    case 189u: goto L_08974CD8;
    case 190u: goto L_08974CE8;
    case 191u: goto L_08974CF8;
    case 192u: goto L_08974D00;
    case 193u: goto L_08974D08;
    case 194u: goto L_08974D10;
    case 195u: goto L_08974D14;
    case 196u: goto L_08974D1C;
    case 197u: goto L_08974D24;
    case 198u: goto L_08974D2C;
    case 199u: goto L_08974D34;
    case 200u: goto L_08974D3C;
    case 201u: goto L_08974D44;
    case 202u: goto L_08974D54;
    case 203u: goto L_08974D5C;
    case 204u: goto L_08974D70;
    case 205u: goto L_08974D7C;
    case 206u: goto L_08974D84;
    case 207u: goto L_08974D88;
    case 208u: goto L_08974D9C;
    case 209u: goto L_08974DA8;
    case 210u: goto L_08974DB0;
    case 211u: goto L_08974DB4;
    case 212u: goto L_08974DC4;
    case 213u: goto L_08974DD0;
    case 214u: goto L_08974DD8;
    case 215u: goto L_08974DDC;
    case 216u: goto L_08974DEC;
    case 217u: goto L_08974DFC;
    case 218u: goto L_08974E08;
    case 219u: goto L_08974E18;
    case 220u: goto L_08974E30;
    case 221u: goto L_08974E40;
    case 222u: goto L_08974E48;
    case 223u: goto L_08974E4C;
    case 224u: goto L_08974E64;
    case 225u: goto L_08974E74;
    case 226u: goto L_08974E80;
    case 227u: goto L_08974E94;
    case 228u: goto L_08974EA0;
    case 229u: goto L_08974EB8;
    case 230u: goto L_08974EC8;
    case 231u: goto L_08974ED0;
    case 232u: goto L_08974ED4;
    case 233u: goto L_08974EEC;
    case 234u: goto L_08974EFC;
    case 235u: goto L_08974F08;
    case 236u: goto L_08974F1C;
    case 237u: goto L_08974F28;
    case 238u: goto L_08974F30;
    case 239u: goto L_08974F40;
    case 240u: goto L_08974F48;
    case 241u: goto L_08974F4C;
    case 242u: goto L_08974F64;
    case 243u: goto L_08974F74;
    case 244u: goto L_08974F80;
    case 245u: goto L_08974F94;
    case 246u: goto L_08974FA0;
    case 247u: goto L_08974FA8;
    case 248u: goto L_08974FB8;
    case 249u: goto L_08974FC0;
    case 250u: goto L_08974FC4;
    case 251u: goto L_08974FDC;
    case 252u: goto L_08974FEC;
    case 253u: goto L_08974FF8;
    case 254u: goto L_0897500C;
    case 255u: goto L_08975018;
    case 256u: goto L_08975020;
    case 257u: goto L_08975030;
    case 258u: goto L_08975038;
    case 259u: goto L_0897503C;
    case 260u: goto L_08975054;
    case 261u: goto L_08975064;
    case 262u: goto L_08975070;
    case 263u: goto L_08975084;
    case 264u: goto L_08975090;
    case 265u: goto L_08975098;
    case 266u: goto L_089750A8;
    case 267u: goto L_089750B0;
    case 268u: goto L_089750B4;
    case 269u: goto L_089750CC;
    case 270u: goto L_089750DC;
    case 271u: goto L_089750E8;
    case 272u: goto L_089750FC;
    case 273u: goto L_08975108;
    case 274u: goto L_08975110;
    case 275u: goto L_08975120;
    case 276u: goto L_08975128;
    case 277u: goto L_0897512C;
    case 278u: goto L_08975144;
    case 279u: goto L_08975154;
    case 280u: goto L_08975160;
    case 281u: goto L_08975174;
    case 282u: goto L_08975180;
    case 283u: goto L_08975188;
    case 284u: goto L_08975190;
    case 285u: goto L_0897519C;
    case 286u: goto L_089751AC;
    case 287u: goto L_089751C4;
    case 288u: goto L_089751D4;
    case 289u: goto L_089751DC;
    case 290u: goto L_089751E0;
    case 291u: goto L_089751F8;
    case 292u: goto L_08975208;
    case 293u: goto L_08975214;
    case 294u: goto L_08975228;
    case 295u: goto L_08975234;
    case 296u: goto L_0897523C;
    case 297u: goto L_0897524C;
    case 298u: goto L_08975254;
    case 299u: goto L_08975258;
    case 300u: goto L_08975270;
    case 301u: goto L_08975280;
    case 302u: goto L_0897528C;
    case 303u: goto L_089752A0;
    case 304u: goto L_089752AC;
    case 305u: goto L_089752B4;
    case 306u: goto L_089752C4;
    case 307u: goto L_089752CC;
    case 308u: goto L_089752D0;
    case 309u: goto L_089752E8;
    case 310u: goto L_089752F8;
    case 311u: goto L_08975304;
    case 312u: goto L_08975318;
    case 313u: goto L_08975324;
    case 314u: goto L_0897532C;
    case 315u: goto L_0897533C;
    case 316u: goto L_08975344;
    case 317u: goto L_08975348;
    case 318u: goto L_08975360;
    case 319u: goto L_08975370;
    case 320u: goto L_0897537C;
    case 321u: goto L_08975390;
    case 322u: goto L_0897539C;
    case 323u: goto L_089753A4;
    case 324u: goto L_089753B4;
    case 325u: goto L_089753BC;
    case 326u: goto L_089753C0;
    case 327u: goto L_089753D8;
    case 328u: goto L_089753E8;
    case 329u: goto L_089753F4;
    case 330u: goto L_08975408;
    case 331u: goto L_08975414;
    case 332u: goto L_0897541C;
    case 333u: goto L_0897542C;
    case 334u: goto L_08975434;
    case 335u: goto L_08975438;
    case 336u: goto L_08975450;
    case 337u: goto L_08975460;
    case 338u: goto L_0897546C;
    case 339u: goto L_08975480;
    case 340u: goto L_0897548C;
    case 341u: goto L_08975494;
    case 342u: goto L_089754A4;
    case 343u: goto L_089754AC;
    case 344u: goto L_089754B0;
    case 345u: goto L_089754C8;
    case 346u: goto L_089754D8;
    case 347u: goto L_089754E4;
    case 348u: goto L_089754F8;
    case 349u: goto L_08975504;
    case 350u: goto L_0897550C;
    case 351u: goto L_08975514;
    case 352u: goto L_0897552C;
    case 353u: goto L_08975558;
    case 354u: goto L_08975570;
    case 355u: goto L_08975580;
    case 356u: goto L_0897558C;
    case 357u: goto L_08975598;
    case 358u: goto L_089755A0;
    case 359u: goto L_089755AC;
    case 360u: goto L_089755B8;
    case 361u: goto L_089755C4;
    case 362u: goto L_089755DC;
    case 363u: goto L_089755E4;
    case 364u: goto L_08975624;
    case 365u: goto L_0897564C;
    case 366u: goto L_08975670;
    case 367u: goto L_08975694;
    case 368u: goto L_089756C8;
    case 369u: goto L_089756DC;
    case 370u: goto L_08975758;
    case 371u: goto L_08975760;
    case 372u: goto L_08975768;
    case 373u: goto L_08975788;
    case 374u: goto L_0897578C;
    case 375u: goto L_089757B4;
    case 376u: goto L_089757BC;
    case 377u: goto L_08975840;
    case 378u: goto L_08975868;
    case 379u: goto L_08975878;
    case 380u: goto L_08975880;
    case 381u: goto L_0897588C;
    case 382u: goto L_089758AC;
    case 383u: goto L_089758D8;
    case 384u: goto L_08975914;
    case 385u: goto L_0897593C;
    case 386u: goto L_08975968;
    case 387u: goto L_08975974;
    case 388u: goto L_08975988;
    case 389u: goto L_089759A8;
    case 390u: goto L_089759C0;
    case 391u: goto L_089759CC;
    case 392u: goto L_089759E4;
    case 393u: goto L_089759E8;
    case 394u: goto L_089759F0;
    case 395u: goto L_08975A08;
    case 396u: goto L_08975A0C;
    case 397u: goto L_08975A20;
    case 398u: goto L_08975A48;
    case 399u: goto L_08975A5C;
    case 400u: goto L_08975A68;
    case 401u: goto L_08975A7C;
    case 402u: goto L_08975A8C;
    case 403u: goto L_08975A90;
    case 404u: goto L_08975AA4;
    case 405u: goto L_08975AB8;
    case 406u: goto L_08975AC0;
    case 407u: goto L_08975AD0;
    case 408u: goto L_08975AE0;
    case 409u: goto L_08975AEC;
    case 410u: goto L_08975AF4;
    case 411u: goto L_08975B08;
    case 412u: goto L_08975B0C;
    case 413u: goto L_08975B34;
    case 414u: goto L_08975B64;
    case 415u: goto L_08975B68;
    case 416u: goto L_08975BA8;
    case 417u: goto L_08975BF8;
    case 418u: goto L_08975C00;
    case 419u: goto L_08975C0C;
    case 420u: goto L_08975C18;
    case 421u: goto L_08975C24;
    case 422u: goto L_08975C34;
    case 423u: goto L_08975C40;
    case 424u: goto L_08975C64;
    case 425u: goto L_08975C6C;
    case 426u: goto L_08975C98;
    case 427u: goto L_08975CA4;
    case 428u: goto L_08975CC4;
    case 429u: goto L_08975CCC;
    case 430u: goto L_08975CD8;
    case 431u: goto L_08975D04;
    case 432u: goto L_08975D34;
    case 433u: goto L_08975DA8;
    case 434u: goto L_08975DC8;
    case 435u: goto L_08975DF0;
    case 436u: goto L_08975E14;
    case 437u: goto L_08975E3C;
    case 438u: goto L_08975E54;
    case 439u: goto L_08975E60;
    case 440u: goto L_08975E74;
    case 441u: goto L_08975E7C;
    case 442u: goto L_08975E98;
    case 443u: goto L_08975EB0;
    case 444u: goto L_08975EB8;
    case 445u: goto L_08975ED0;
    case 446u: goto L_08975ED8;
    case 447u: goto L_08975EF0;
    case 448u: goto L_08975EF4;
    case 449u: goto L_08975F08;
    case 450u: goto L_08975F48;
    case 451u: goto L_08975F54;
    case 452u: goto L_08975F64;
    case 453u: goto L_08975F78;
    case 454u: goto L_08975F84;
    case 455u: goto L_08975F94;
    case 456u: goto L_08975FA0;
    case 457u: goto L_08975FA8;
    case 458u: goto L_08975FB0;
    case 459u: goto L_08975FC4;
    case 460u: goto L_08975FE8;
    case 461u: goto L_08976008;
    case 462u: goto L_0897600C;
    case 463u: goto L_08976040;
    case 464u: goto L_089760BC;
    case 465u: goto L_089760F0;
    case 466u: goto L_0897610C;
    case 467u: goto L_08976134;
    case 468u: goto L_0897613C;
    case 469u: goto L_08976164;
    case 470u: goto L_08976180;
    case 471u: goto L_0897618C;
    case 472u: goto L_089761A0;
    case 473u: goto L_089761F8;
    case 474u: goto L_08976204;
    case 475u: goto L_08976218;
    case 476u: goto L_08976228;
    case 477u: goto L_0897622C;
    case 478u: goto L_08976240;
    case 479u: goto L_08976254;
    case 480u: goto L_0897625C;
    case 481u: goto L_0897626C;
    case 482u: goto L_089762A4;
    case 483u: goto L_089762C8;
    case 484u: goto L_089762DC;
    case 485u: goto L_089762EC;
    case 486u: goto L_089762F4;
    case 487u: goto L_08976308;
    case 488u: goto L_0897632C;
    case 489u: goto L_0897634C;
    case 490u: goto L_08976358;
    case 491u: goto L_08976360;
    case 492u: goto L_0897637C;
    case 493u: goto L_089763C8;
    case 494u: goto L_089763F8;
    case 495u: goto L_089764CC;
    case 496u: goto L_089764D4;
    case 497u: goto L_089764DC;
    case 498u: goto L_089764EC;
    case 499u: goto L_089764F4;
    case 500u: goto L_08976500;
    case 501u: goto L_08976504;
    case 502u: goto L_08976514;
    case 503u: goto L_08976524;
    case 504u: goto L_08976544;
    case 505u: goto L_08976598;
    case 506u: goto L_089765A0;
    case 507u: goto L_089765F0;
    case 508u: goto L_089765F8;
    case 509u: goto L_08976614;
    case 510u: goto L_0897661C;
    case 511u: goto L_08976638;
    case 512u: goto L_08976640;
    case 513u: goto L_08976644;
    case 514u: goto L_08976654;
    case 515u: goto L_08976660;
    case 516u: goto L_0897666C;
    case 517u: goto L_08976674;
    case 518u: goto L_08976690;
    case 519u: goto L_0897669C;
    case 520u: goto L_089766A8;
    case 521u: goto L_089766B0;
    case 522u: goto L_089766B8;
    case 523u: goto L_089766D0;
    case 524u: goto L_089766DC;
    case 525u: goto L_089766E8;
    case 526u: goto L_089766F0;
    case 527u: goto L_08976700;
    case 528u: goto L_08976714;
    case 529u: goto L_08976724;
    case 530u: goto L_0897673C;
    case 531u: goto L_08976740;
    case 532u: goto L_08976758;
    case 533u: goto L_08976760;
    case 534u: goto L_08976768;
    case 535u: goto L_08976780;
    case 536u: goto L_0897678C;
    case 537u: goto L_08976798;
    case 538u: goto L_089767A0;
    case 539u: goto L_089767A8;
    case 540u: goto L_089767B0;
    case 541u: goto L_089767CC;
    case 542u: goto L_089767D8;
    case 543u: goto L_089767E4;
    case 544u: goto L_089767EC;
    case 545u: goto L_089767F4;
    case 546u: goto L_0897680C;
    case 547u: goto L_08976818;
    case 548u: goto L_08976824;
    case 549u: goto L_0897682C;
    case 550u: goto L_08976838;
    case 551u: goto L_0897684C;
    case 552u: goto L_0897685C;
    case 553u: goto L_08976870;
    case 554u: goto L_08976874;
    case 555u: goto L_08976888;
    case 556u: goto L_08976890;
    case 557u: goto L_089768B4;
    case 558u: goto L_089768BC;
    case 559u: goto L_089768D4;
    case 560u: goto L_089768E0;
    case 561u: goto L_089768EC;
    case 562u: goto L_089768F4;
    case 563u: goto L_08976900;
    case 564u: goto L_08976914;
    case 565u: goto L_08976924;
    case 566u: goto L_08976938;
    case 567u: goto L_0897693C;
    case 568u: goto L_08976950;
    case 569u: goto L_08976958;
    case 570u: goto L_08976964;
    case 571u: goto L_08976978;
    case 572u: goto L_08976988;
    case 573u: goto L_0897699C;
    case 574u: goto L_089769A0;
    case 575u: goto L_089769B4;
    case 576u: goto L_089769C0;
    case 577u: goto L_089769C8;
    case 578u: goto L_089769E0;
    case 579u: goto L_089769EC;
    case 580u: goto L_089769F8;
    case 581u: goto L_08976A00;
    case 582u: goto L_08976A0C;
    case 583u: goto L_08976A14;
    case 584u: goto L_08976A2C;
    case 585u: goto L_08976A38;
    case 586u: goto L_08976A44;
    case 587u: goto L_08976A4C;
    case 588u: goto L_08976A58;
    case 589u: goto L_08976A6C;
    case 590u: goto L_08976A7C;
    case 591u: goto L_08976A90;
    case 592u: goto L_08976A94;
    case 593u: goto L_08976AA8;
    case 594u: goto L_08976AB0;
    case 595u: goto L_08976ABC;
    case 596u: goto L_08976AD0;
    case 597u: goto L_08976AE0;
    case 598u: goto L_08976AF4;
    case 599u: goto L_08976AF8;
    case 600u: goto L_08976B0C;
    case 601u: goto L_08976B14;
    case 602u: goto L_08976B78;
    case 603u: goto L_08976B80;
    case 604u: goto L_08976BB0;
    case 605u: goto L_08976BC4;
    case 606u: goto L_08976BD8;
    case 607u: goto L_08976BEC;
    case 608u: goto L_08976C00;
    case 609u: goto L_08976C14;
    case 610u: goto L_08976C30;
    case 611u: goto L_08976C40;
    case 612u: goto L_08976C54;
    case 613u: goto L_08976C8C;
    case 614u: goto L_08976CF0;
    case 615u: goto L_08976D00;
    case 616u: goto L_08976D30;
    case 617u: goto L_08976D44;
    case 618u: goto L_08976D58;
    case 619u: goto L_08976D6C;
    case 620u: goto L_08976D80;
    case 621u: goto L_08976D94;
    case 622u: goto L_08976DB0;
    case 623u: goto L_08976DC0;
    case 624u: goto L_08976DD4;
    case 625u: goto L_08976E0C;
    case 626u: goto L_08976E98;
    case 627u: goto L_08976EA4;
    case 628u: goto L_08976EAC;
    case 629u: goto L_08976EC0;
    case 630u: goto L_08976ECC;
    case 631u: goto L_08976EE0;
    case 632u: goto L_08976F00;
    case 633u: goto L_08976F14;
    case 634u: goto L_08976F24;
    case 635u: goto L_08976F38;
    case 636u: goto L_08976FEC;
    case 637u: goto L_08976FF4;
    case 638u: goto L_08977028;
    case 639u: goto L_0897704C;
    case 640u: goto L_08977054;
    case 641u: goto L_08977088;
    case 642u: goto L_08977098;
    case 643u: goto L_089770C8;
    case 644u: goto L_089770FC;
    case 645u: goto L_0897712C;
    case 646u: goto L_089771A4;
    case 647u: goto L_089771B4;
    case 648u: goto L_089771E0;
    case 649u: goto L_089771F4;
    case 650u: goto L_08977210;
    case 651u: goto L_08977220;
    case 652u: goto L_08977234;
    case 653u: goto L_0897723C;
    case 654u: goto L_08977284;
    case 655u: goto L_089772F0;
    case 656u: goto L_08977300;
    case 657u: goto L_08977304;
    case 658u: goto L_08977348;
    case 659u: goto L_08977354;
    case 660u: goto L_08977364;
    case 661u: goto L_0897736C;
    case 662u: goto L_08977384;
    case 663u: goto L_089773A0;
    case 664u: goto L_089773FC;
    case 665u: goto L_08977404;
    case 666u: goto L_08977434;
    case 667u: goto L_08977448;
    case 668u: goto L_0897745C;
    case 669u: goto L_08977470;
    case 670u: goto L_08977484;
    case 671u: goto L_08977498;
    case 672u: goto L_089774B0;
    case 673u: goto L_089774BC;
    case 674u: goto L_089774D0;
    case 675u: goto L_08977504;
    case 676u: goto L_08977558;
    case 677u: goto L_08977568;
    case 678u: goto L_0897756C;
    case 679u: goto L_089775AC;
    case 680u: goto L_089775B8;
    case 681u: goto L_089775C4;
    case 682u: goto L_089775CC;
    case 683u: goto L_089775E4;
    case 684u: goto L_089775FC;
    case 685u: goto L_08977614;
    case 686u: goto L_08977624;
    case 687u: goto L_08977654;
    case 688u: goto L_08977674;
    case 689u: goto L_0897767C;
    case 690u: goto L_08977684;
    case 691u: goto L_0897769C;
    case 692u: goto L_089776A0;
    case 693u: goto L_089776A8;
    case 694u: goto L_089776C0;
    case 695u: goto L_089776D0;
    case 696u: goto L_08977700;
    case 697u: goto L_08977720;
    case 698u: goto L_08977728;
    case 699u: goto L_08977730;
    case 700u: goto L_08977748;
    case 701u: goto L_0897774C;
    case 702u: goto L_08977754;
    case 703u: goto L_0897776C;
    case 704u: goto L_08977780;
    case 705u: goto L_089777A8;
    case 706u: goto L_089777C8;
    case 707u: goto L_089777E8;
    case 708u: goto L_08977808;
    case 709u: goto L_0897781C;
    case 710u: goto L_08977830;
    case 711u: goto L_08977838;
    case 712u: goto L_0897784C;
    case 713u: goto L_0897785C;
    case 714u: goto L_0897789C;
    case 715u: goto L_089778C0;
    case 716u: goto L_089778D4;
    case 717u: goto L_089778E8;
    case 718u: goto L_089778F4;
    case 719u: goto L_08977908;
    case 720u: goto L_089779A4;
    case 721u: goto L_089779B0;
    case 722u: goto L_089779EC;
    case 723u: goto L_08977A04;
    case 724u: goto L_08977A1C;
    case 725u: goto L_08977AA8;
    case 726u: goto L_08977AB8;
    case 727u: goto L_08977B48;
    case 728u: goto L_08977B88;
    case 729u: goto L_08977BA8;
    case 730u: goto L_08977BC4;
    case 731u: goto L_08977BDC;
    case 732u: goto L_08977BFC;
    case 733u: goto L_08977C18;
    case 734u: goto L_08977C20;
    case 735u: goto L_08977C34;
    case 736u: goto L_08977C3C;
    case 737u: goto L_08977C48;
    case 738u: goto L_08977C54;
    case 739u: goto L_08977C7C;
    case 740u: goto L_08977C84;
    case 741u: goto L_08977CB0;
    case 742u: goto L_08977CC4;
    case 743u: goto L_08977CCC;
    case 744u: goto L_08977D08;
    case 745u: goto L_08977D10;
    case 746u: goto L_08977D18;
    case 747u: goto L_08977D20;
    case 748u: goto L_08977D28;
    case 749u: goto L_08977D50;
    case 750u: goto L_08977D58;
    case 751u: goto L_08977D84;
    case 752u: goto L_08977D98;
    case 753u: goto L_08977DA0;
    case 754u: goto L_08977DDC;
    case 755u: goto L_08977DE4;
    case 756u: goto L_08977DE8;
    case 757u: goto L_08977DF0;
    case 758u: goto L_08977E08;
    case 759u: goto L_08977E1C;
    case 760u: goto L_08977E40;
    case 761u: goto L_08977EA8;
    case 762u: goto L_08977ED4;
    case 763u: goto L_08977EE0;
    case 764u: goto L_08977EE4;
    case 765u: goto L_08977EEC;
    case 766u: goto L_08977EF8;
    case 767u: goto L_08977F08;
    case 768u: goto L_08977F10;
    case 769u: goto L_08977F18;
    case 770u: goto L_08977F44;
    case 771u: goto L_08977F48;
    case 772u: goto L_08977F50;
    case 773u: goto L_08977F5C;
    case 774u: goto L_08977F6C;
    case 775u: goto L_08977F74;
    case 776u: goto L_08977F7C;
    case 777u: goto L_08977F88;
    case 778u: goto L_08977F90;
    case 779u: goto L_08977F98;
    case 780u: goto L_08977FD0;
    case 781u: goto L_08977FDC;
    case 782u: goto L_08977FEC;
    case 783u: goto L_08977FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08974000:
    ctx.gpr[2] = (0u | 0u);
    goto L_08974004;
L_08974004:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974018:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08974044;
      }
      goto L_08974034;
    }
L_08974034:
    ctx.gpr[31] = (0x0897403Cu);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0B7A4u;
    return;
L_0897403C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08974044;
L_08974044:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974054:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[8]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897407C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(6));
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x089740ACu);
    ctx.gpr[10] = (0u | 1u);
    ctx.pc = 0x08B0B79Cu;
    return;
L_089740AC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08974220;
      }
      goto L_089740B8;
    }
L_089740B8:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1801));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08974218;
      }
      goto L_089740C8;
    }
L_089740C8:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1809));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089740EC;
      }
      goto L_089740D8;
    }
L_089740D8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089740E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27036));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 633u, 0x08973F5Cu>(ctx, &aot_mem) && ctx.pc == 0x089740E4u) goto L_089740E4;
    return;
L_089740E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974218;
      }
      goto L_089740EC;
    }
L_089740EC:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1810));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08974110;
      }
      goto L_089740FC;
    }
L_089740FC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08974108u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26984));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 633u, 0x08973F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08974108u) goto L_08974108;
    return;
L_08974108:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974218;
      }
      goto L_08974110;
    }
L_08974110:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1793));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08974134;
      }
      goto L_08974120;
    }
L_08974120:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x0897412Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26928));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 633u, 0x08973F5Cu>(ctx, &aot_mem) && ctx.pc == 0x0897412Cu) goto L_0897412C;
    return;
L_0897412C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974218;
      }
      goto L_08974134;
    }
L_08974134:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1799));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08974158;
      }
      goto L_08974144;
    }
L_08974144:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08974150u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26872));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 633u, 0x08973F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08974150u) goto L_08974150;
    return;
L_08974150:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974218;
      }
      goto L_08974158;
    }
L_08974158:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1800));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897417C;
      }
      goto L_08974168;
    }
L_08974168:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08974174u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26816));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 633u, 0x08973F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08974174u) goto L_08974174;
    return;
L_08974174:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974218;
      }
      goto L_0897417C;
    }
L_0897417C:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1813));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089741A0;
      }
      goto L_0897418C;
    }
L_0897418C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08974198u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26760));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 633u, 0x08973F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08974198u) goto L_08974198;
    return;
L_08974198:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974218;
      }
      goto L_089741A0;
    }
L_089741A0:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089741C4;
      }
      goto L_089741B0;
    }
L_089741B0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089741BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26712));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 633u, 0x08973F5Cu>(ctx, &aot_mem) && ctx.pc == 0x089741BCu) goto L_089741BC;
    return;
L_089741BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974218;
      }
      goto L_089741C4;
    }
L_089741C4:
    ctx.gpr[5] = (32832u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1798));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089741E8;
      }
      goto L_089741D4;
    }
L_089741D4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089741E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26668));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 633u, 0x08973F5Cu>(ctx, &aot_mem) && ctx.pc == 0x089741E0u) goto L_089741E0;
    return;
L_089741E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974218;
      }
      goto L_089741E8;
    }
L_089741E8:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1817));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897420C;
      }
      goto L_089741F8;
    }
L_089741F8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08974204u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26612));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 633u, 0x08973F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08974204u) goto L_08974204;
    return;
L_08974204:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974218;
      }
      goto L_0897420C;
    }
L_0897420C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08974218u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26556));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 633u, 0x08973F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08974218u) goto L_08974218;
    return;
L_08974218:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08974224;
      }
      goto L_08974220;
    }
L_08974220:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08974224;
L_08974224:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974230:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08974268u);
    ctx.gpr[10] = (0u | 1u);
    ctx.pc = 0x08B0B794u;
    return;
L_08974268:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08974458;
      }
      goto L_08974274;
    }
L_08974274:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1801));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089742A8;
      }
      goto L_08974284;
    }
L_08974284:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1809));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089742B0;
      }
      goto L_08974294;
    }
L_08974294:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089742A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26520));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 633u, 0x08973F5Cu>(ctx, &aot_mem) && ctx.pc == 0x089742A0u) goto L_089742A0;
    return;
L_089742A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974450;
      }
      goto L_089742A8;
    }
L_089742A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0897445C;
      }
      goto L_089742B0;
    }
L_089742B0:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1810));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089742D4;
      }
      goto L_089742C0;
    }
L_089742C0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089742CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26472));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 633u, 0x08973F5Cu>(ctx, &aot_mem) && ctx.pc == 0x089742CCu) goto L_089742CC;
    return;
L_089742CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974450;
      }
      goto L_089742D4;
    }
L_089742D4:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1793));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089742F8;
      }
      goto L_089742E4;
    }
L_089742E4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089742F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26420));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 633u, 0x08973F5Cu>(ctx, &aot_mem) && ctx.pc == 0x089742F0u) goto L_089742F0;
    return;
L_089742F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974450;
      }
      goto L_089742F8;
    }
L_089742F8:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1799));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897431C;
      }
      goto L_08974308;
    }
L_08974308:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08974314u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26364));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 633u, 0x08973F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08974314u) goto L_08974314;
    return;
L_08974314:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974450;
      }
      goto L_0897431C;
    }
L_0897431C:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1794));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08974340;
      }
      goto L_0897432C;
    }
L_0897432C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08974338u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26312));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 633u, 0x08973F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08974338u) goto L_08974338;
    return;
L_08974338:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974450;
      }
      goto L_08974340;
    }
L_08974340:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1795));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08974368;
      }
      goto L_08974350;
    }
L_08974350:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.gpr[31] = (0x08974360u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26264));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 633u, 0x08973F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08974360u) goto L_08974360;
    return;
L_08974360:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974450;
      }
      goto L_08974368;
    }
L_08974368:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1797));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897438C;
      }
      goto L_08974378;
    }
L_08974378:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08974384u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26208));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 633u, 0x08973F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08974384u) goto L_08974384;
    return;
L_08974384:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974450;
      }
      goto L_0897438C;
    }
L_0897438C:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089743B4;
      }
      goto L_0897439C;
    }
L_0897439C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089743ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26156));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 633u, 0x08973F5Cu>(ctx, &aot_mem) && ctx.pc == 0x089743ACu) goto L_089743AC;
    return;
L_089743AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974450;
      }
      goto L_089743B4;
    }
L_089743B4:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1800));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089743D8;
      }
      goto L_089743C4;
    }
L_089743C4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089743D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26112));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 633u, 0x08973F5Cu>(ctx, &aot_mem) && ctx.pc == 0x089743D0u) goto L_089743D0;
    return;
L_089743D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974450;
      }
      goto L_089743D8;
    }
L_089743D8:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1813));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089743FC;
      }
      goto L_089743E8;
    }
L_089743E8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089743F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26060));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 633u, 0x08973F5Cu>(ctx, &aot_mem) && ctx.pc == 0x089743F4u) goto L_089743F4;
    return;
L_089743F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974450;
      }
      goto L_089743FC;
    }
L_089743FC:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08974420;
      }
      goto L_0897440C;
    }
L_0897440C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08974418u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26016));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 633u, 0x08973F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08974418u) goto L_08974418;
    return;
L_08974418:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974450;
      }
      goto L_08974420;
    }
L_08974420:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1817));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08974444;
      }
      goto L_08974430;
    }
L_08974430:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x0897443Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25976));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 633u, 0x08973F5Cu>(ctx, &aot_mem) && ctx.pc == 0x0897443Cu) goto L_0897443C;
    return;
L_0897443C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974450;
      }
      goto L_08974444;
    }
L_08974444:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08974450u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25924));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 633u, 0x08973F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08974450u) goto L_08974450;
    return;
L_08974450:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897445C;
      }
      goto L_08974458;
    }
L_08974458:
    ctx.gpr[2] = (0u | 1u);
    goto L_0897445C;
L_0897445C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974470:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[6]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[6]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[6]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089744E4:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974500:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0897455C;
      }
      goto L_0897451C;
    }
L_0897451C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_0897454C;
      }
      goto L_08974528;
    }
L_08974528:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08974534u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 139u, 0x089C8BB0u>(ctx, &aot_mem) && ctx.pc == 0x08974534u) goto L_08974534;
    return;
L_08974534:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08974544u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08974544u) goto L_08974544;
    return;
L_08974544:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_0897454C;
L_0897454C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897455C;
      }
      goto L_08974554;
    }
L_08974554:
    ctx.gpr[31] = (0x0897455Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x0897455Cu) goto L_0897455C;
    return;
L_0897455C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974570:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08974588u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x089866B8u>(ctx, &aot_mem) && ctx.pc == 0x08974588u) goto L_08974588;
    return;
L_08974588:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897459C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089745E8;
      }
      goto L_089745C4;
    }
L_089745C4:
    ctx.gpr[4] = (ctx.gpr[4] | 3u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08974610;
      }
      goto L_089745D0;
    }
L_089745D0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[31] = (0x089745E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x089745E0u) goto L_089745E0;
    return;
L_089745E0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08974610;
      }
      goto L_089745E8;
    }
L_089745E8:
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08974610;
      }
      goto L_089745F4;
    }
L_089745F4:
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0897460Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x0897460Cu) goto L_0897460C;
    return;
L_0897460C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08974610;
L_08974610:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0897463Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 131u, 0x089C8AE0u>(ctx, &aot_mem) && ctx.pc == 0x0897463Cu) goto L_0897463C;
    return;
L_0897463C:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974654:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08974670;
      }
      goto L_08974660;
    }
L_08974660:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[6] | 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08974670;
L_08974670:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974678:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[6]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vf2h(64u, 0u, 2u);
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[6]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
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
L_089746F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08974754;
      }
      goto L_08974734;
    }
L_08974734:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0897475C;
      }
      goto L_0897474C;
    }
L_0897474C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08974760;
      }
      goto L_08974754;
    }
L_08974754:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974930;
      }
      goto L_0897475C;
    }
L_0897475C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08974760;
L_08974760:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(6)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08974930;
      }
      goto L_089747E4;
    }
L_089747E4:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (0u | 16u);
    ctx.gpr[20] = (0u | 10u);
    goto L_089747F8;
L_089747F8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_0897481C;
    }
    goto L_08974810;
L_08974810:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08974820;
      }
      goto L_0897481C;
    }
L_0897481C:
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[20]);
    goto L_08974820;
L_08974820:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(6)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<4u, 0u, 1u, 4u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<4u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08974904;
      }
      goto L_089748B4;
    }
L_089748B4:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x089748C0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_08974678;
L_089748C0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x089748D4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_08974678;
L_089748D4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x089748E8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_08974678;
L_089748E8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(6));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x089748FCu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_08974678;
L_089748FC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08974904;
L_08974904:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08974910u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    goto L_08974470;
L_08974910:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_089747F8;
      }
      goto L_08974930;
    }
L_08974930:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974964:
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
L_08974990:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089749ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26464));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 715u, 0x08AA3578u>(ctx, &aot_mem) && ctx.pc == 0x089749ACu) goto L_089749AC;
    return;
L_089749AC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089749B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089749D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26464));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x089749D0u) goto L_089749D0;
    return;
L_089749D0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089749DC:
    ctx.gpr[4] = (2228u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-26911)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089749E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089749FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25888));
    goto L_08974964;
L_089749FC:
    ctx.gpr[31] = (0x08974A04u);
    // nop
    goto L_08974A10;
L_08974A04:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974A10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08974A28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25848));
    goto L_08974964;
L_08974A28:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08974A48;
    }
    goto L_08974A38;
L_08974A38:
    ctx.gpr[31] = (0x08974A40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x08974A40u) goto L_08974A40;
    return;
L_08974A40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08974A48;
L_08974A48:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974A64;
      }
      goto L_08974A50;
    }
L_08974A50:
    ctx.gpr[5] = (2228u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-26911), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08974A6C;
      }
      goto L_08974A5C;
    }
L_08974A5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974A78;
      }
      goto L_08974A64;
    }
L_08974A64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974A88;
      }
      goto L_08974A6C;
    }
L_08974A6C:
    ctx.gpr[31] = (0x08974A74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x08974A74u) goto L_08974A74;
    return;
L_08974A74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    goto L_08974A78;
L_08974A78:
    ctx.gpr[31] = (0x08974A80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 779u, 0x0883BF78u>(ctx, &aot_mem) && ctx.pc == 0x08974A80u) goto L_08974A80;
    return;
L_08974A80:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-26912), static_cast<std::uint8_t>(0u));
    goto L_08974A88;
L_08974A88:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974A98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-21280)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_08974ACC;
    }
    goto L_08974ABC;
L_08974ABC:
    ctx.gpr[31] = (0x08974AC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x08974AC4u) goto L_08974AC4;
    return;
L_08974AC4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_08974ACC;
L_08974ACC:
    ctx.gpr[31] = (0x08974AD4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B498u>(ctx, &aot_mem) && ctx.pc == 0x08974AD4u) goto L_08974AD4;
    return;
L_08974AD4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-21280)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_08974AF0;
      }
      goto L_08974AE0;
    }
L_08974AE0:
    ctx.gpr[31] = (0x08974AE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x08974AE8u) goto L_08974AE8;
    return;
L_08974AE8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[4] = (2226u << 16u);
    goto L_08974AF0;
L_08974AF0:
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25836));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08974B00u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08974B00u) goto L_08974B00;
    return;
L_08974B00:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08974B10u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08974B10u) goto L_08974B10;
    return;
L_08974B10:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08974B1Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 781u, 0x0883BFA4u>(ctx, &aot_mem) && ctx.pc == 0x08974B1Cu) goto L_08974B1C;
    return;
L_08974B1C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08974B3C;
      }
      goto L_08974B30;
    }
L_08974B30:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08974B3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08974B3Cu) goto L_08974B3C;
    return;
L_08974B3C:
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
L_08974B54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[31] = (0x08974B74u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08974B74u) goto L_08974B74;
    return;
L_08974B74:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08974BA8;
      }
      goto L_08974B80;
    }
L_08974B80:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9756));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9740));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2199u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18920));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08974BA8;
L_08974BA8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08974BD0;
      }
      goto L_08974BB8;
    }
L_08974BB8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08974BD4;
      }
      goto L_08974BC0;
    }
L_08974BC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08974BD0;
L_08974BD0:
    ctx.gpr[4] = (2233u << 16u);
    goto L_08974BD4;
L_08974BD4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26464));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(304)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08974C2C;
      }
      goto L_08974BE8;
    }
L_08974BE8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26464));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(304)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (2233u << 16u);
        goto L_08974C18;
    }
    goto L_08974BF8;
L_08974BF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08974C14;
      }
      goto L_08974C04;
    }
L_08974C04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08974C14;
L_08974C14:
    ctx.gpr[4] = (2233u << 16u);
    goto L_08974C18;
L_08974C18:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26464));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(304)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(304), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08974C54;
      }
      goto L_08974C2C;
    }
L_08974C2C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26464));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(304)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(300));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08974C54u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 151u, 0x08B00A6Cu>(ctx, &aot_mem) && ctx.pc == 0x08974C54u) goto L_08974C54;
    return;
L_08974C54:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26464));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(297)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08974C8C;
    }
    goto L_08974C68;
L_08974C68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08974C88u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08974C88u) goto L_08974C88;
    return;
L_08974C88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08974C8C;
L_08974C8C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974CB0;
      }
      goto L_08974C94;
    }
L_08974C94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08974CB0;
      }
      goto L_08974CA8;
    }
L_08974CA8:
    ctx.gpr[31] = (0x08974CB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08974CB0u) goto L_08974CB0;
    return;
L_08974CB0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08974CBCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25820));
    goto L_08974964;
L_08974CBC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08974CD8;
      }
      goto L_08974CCC;
    }
L_08974CCC:
    ctx.gpr[31] = (0x08974CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x08974CD4u) goto L_08974CD4;
    return;
L_08974CD4:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08974CD8;
L_08974CD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08974D00;
      }
      goto L_08974CE8;
    }
L_08974CE8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21280)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974D08;
      }
      goto L_08974CF8;
    }
L_08974CF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_08974D14;
      }
      goto L_08974D00;
    }
L_08974D00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08975514;
      }
      goto L_08974D08;
    }
L_08974D08:
    ctx.gpr[31] = (0x08974D10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x08974D10u) goto L_08974D10;
    return;
L_08974D10:
    ctx.gpr[16] = (2230u << 16u);
    goto L_08974D14;
L_08974D14:
    ctx.gpr[31] = (0x08974D1Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 770u, 0x0883BED8u>(ctx, &aot_mem) && ctx.pc == 0x08974D1Cu) goto L_08974D1C;
    return;
L_08974D1C:
    ctx.gpr[31] = (0x08974D24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 55u, 0x08AD0420u>(ctx, &aot_mem) && ctx.pc == 0x08974D24u) goto L_08974D24;
    return;
L_08974D24:
    ctx.gpr[31] = (0x08974D2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 144u, 0x08AD4FD4u>(ctx, &aot_mem) && ctx.pc == 0x08974D2Cu) goto L_08974D2C;
    return;
L_08974D2C:
    ctx.gpr[31] = (0x08974D34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 159u, 0x0892D910u>(ctx, &aot_mem) && ctx.pc == 0x08974D34u) goto L_08974D34;
    return;
L_08974D34:
    ctx.gpr[31] = (0x08974D3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 18u, 0x089981FCu>(ctx, &aot_mem) && ctx.pc == 0x08974D3Cu) goto L_08974D3C;
    return;
L_08974D3C:
    ctx.gpr[31] = (0x08974D44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 303u, 0x089192FCu>(ctx, &aot_mem) && ctx.pc == 0x08974D44u) goto L_08974D44;
    return;
L_08974D44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[16] = (2226u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-25808));
      if (branch_taken) {
          goto L_08974D5C;
      }
      goto L_08974D54;
    }
L_08974D54:
    ctx.gpr[31] = (0x08974D5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x08974D5Cu) goto L_08974D5C;
    return;
L_08974D5C:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08974D70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BCB0u>(ctx, &aot_mem) && ctx.pc == 0x08974D70u) goto L_08974D70;
    return;
L_08974D70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-21280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_08974D88;
      }
      goto L_08974D7C;
    }
L_08974D7C:
    ctx.gpr[31] = (0x08974D84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x08974D84u) goto L_08974D84;
    return;
L_08974D84:
    ctx.gpr[16] = (2230u << 16u);
    goto L_08974D88;
L_08974D88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08974D9Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25664));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BCB0u>(ctx, &aot_mem) && ctx.pc == 0x08974D9Cu) goto L_08974D9C;
    return;
L_08974D9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_08974DB4;
      }
      goto L_08974DA8;
    }
L_08974DA8:
    ctx.gpr[31] = (0x08974DB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x08974DB0u) goto L_08974DB0;
    return;
L_08974DB0:
    ctx.gpr[16] = (2230u << 16u);
    goto L_08974DB4;
L_08974DB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[31] = (0x08974DC4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B580u>(ctx, &aot_mem) && ctx.pc == 0x08974DC4u) goto L_08974DC4;
    return;
L_08974DC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08974DDC;
      }
      goto L_08974DD0;
    }
L_08974DD0:
    ctx.gpr[31] = (0x08974DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x08974DD8u) goto L_08974DD8;
    return;
L_08974DD8:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08974DDC;
L_08974DDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    ctx.gpr[31] = (0x08974DECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 25u, 0x0890C210u>(ctx, &aot_mem) && ctx.pc == 0x08974DECu) goto L_08974DEC;
    return;
L_08974DEC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-28720)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975190;
      }
      goto L_08974DFC;
    }
L_08974DFC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08974E08u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 86u, 0x088A84B4u>(ctx, &aot_mem) && ctx.pc == 0x08974E08u) goto L_08974E08;
    return;
L_08974E08:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975188;
      }
      goto L_08974E18;
    }
L_08974E18:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-25024)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974E30:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_08974E4C;
      }
      goto L_08974E40;
    }
L_08974E40:
    ctx.gpr[31] = (0x08974E48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x08974E48u) goto L_08974E48;
    return;
L_08974E48:
    ctx.gpr[4] = (2226u << 16u);
    goto L_08974E4C;
L_08974E4C:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25652));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08974E64u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-21280)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08974E64u) goto L_08974E64;
    return;
L_08974E64:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08974E74u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08974E74u) goto L_08974E74;
    return;
L_08974E74:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08974E80u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 784u, 0x0883BFCCu>(ctx, &aot_mem) && ctx.pc == 0x08974E80u) goto L_08974E80;
    return;
L_08974E80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08974EA0;
      }
      goto L_08974E94;
    }
L_08974E94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08974EA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08974EA0u) goto L_08974EA0;
    return;
L_08974EA0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-26912), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2228u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-26911), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08975514;
      }
      goto L_08974EB8;
    }
L_08974EB8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_08974ED4;
      }
      goto L_08974EC8;
    }
L_08974EC8:
    ctx.gpr[31] = (0x08974ED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x08974ED0u) goto L_08974ED0;
    return;
L_08974ED0:
    ctx.gpr[4] = (2226u << 16u);
    goto L_08974ED4;
L_08974ED4:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25616));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08974EECu);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-21280)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08974EECu) goto L_08974EEC;
    return;
L_08974EEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08974EFCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08974EFCu) goto L_08974EFC;
    return;
L_08974EFC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08974F08u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 784u, 0x0883BFCCu>(ctx, &aot_mem) && ctx.pc == 0x08974F08u) goto L_08974F08;
    return;
L_08974F08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08974F28;
      }
      goto L_08974F1C;
    }
L_08974F1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08974F28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08974F28u) goto L_08974F28;
    return;
L_08974F28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974EA0;
      }
      goto L_08974F30;
    }
L_08974F30:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_08974F4C;
      }
      goto L_08974F40;
    }
L_08974F40:
    ctx.gpr[31] = (0x08974F48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x08974F48u) goto L_08974F48;
    return;
L_08974F48:
    ctx.gpr[4] = (2226u << 16u);
    goto L_08974F4C;
L_08974F4C:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25580));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08974F64u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-21280)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08974F64u) goto L_08974F64;
    return;
L_08974F64:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08974F74u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08974F74u) goto L_08974F74;
    return;
L_08974F74:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08974F80u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 784u, 0x0883BFCCu>(ctx, &aot_mem) && ctx.pc == 0x08974F80u) goto L_08974F80;
    return;
L_08974F80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08974FA0;
      }
      goto L_08974F94;
    }
L_08974F94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08974FA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08974FA0u) goto L_08974FA0;
    return;
L_08974FA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974EA0;
      }
      goto L_08974FA8;
    }
L_08974FA8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_08974FC4;
      }
      goto L_08974FB8;
    }
L_08974FB8:
    ctx.gpr[31] = (0x08974FC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x08974FC0u) goto L_08974FC0;
    return;
L_08974FC0:
    ctx.gpr[4] = (2226u << 16u);
    goto L_08974FC4;
L_08974FC4:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25540));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08974FDCu);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-21280)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08974FDCu) goto L_08974FDC;
    return;
L_08974FDC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08974FECu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08974FECu) goto L_08974FEC;
    return;
L_08974FEC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08974FF8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 784u, 0x0883BFCCu>(ctx, &aot_mem) && ctx.pc == 0x08974FF8u) goto L_08974FF8;
    return;
L_08974FF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08975018;
      }
      goto L_0897500C;
    }
L_0897500C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08975018u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08975018u) goto L_08975018;
    return;
L_08975018:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974EA0;
      }
      goto L_08975020;
    }
L_08975020:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_0897503C;
      }
      goto L_08975030;
    }
L_08975030:
    ctx.gpr[31] = (0x08975038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x08975038u) goto L_08975038;
    return;
L_08975038:
    ctx.gpr[4] = (2226u << 16u);
    goto L_0897503C;
L_0897503C:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25500));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08975054u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-21280)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08975054u) goto L_08975054;
    return;
L_08975054:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08975064u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08975064u) goto L_08975064;
    return;
L_08975064:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08975070u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 784u, 0x0883BFCCu>(ctx, &aot_mem) && ctx.pc == 0x08975070u) goto L_08975070;
    return;
L_08975070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08975090;
      }
      goto L_08975084;
    }
L_08975084:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08975090u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08975090u) goto L_08975090;
    return;
L_08975090:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974EA0;
      }
      goto L_08975098;
    }
L_08975098:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_089750B4;
      }
      goto L_089750A8;
    }
L_089750A8:
    ctx.gpr[31] = (0x089750B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x089750B0u) goto L_089750B0;
    return;
L_089750B0:
    ctx.gpr[4] = (2226u << 16u);
    goto L_089750B4;
L_089750B4:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25472));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089750CCu);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-21280)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x089750CCu) goto L_089750CC;
    return;
L_089750CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089750DCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x089750DCu) goto L_089750DC;
    return;
L_089750DC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089750E8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 784u, 0x0883BFCCu>(ctx, &aot_mem) && ctx.pc == 0x089750E8u) goto L_089750E8;
    return;
L_089750E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08975108;
      }
      goto L_089750FC;
    }
L_089750FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08975108u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08975108u) goto L_08975108;
    return;
L_08975108:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974EA0;
      }
      goto L_08975110;
    }
L_08975110:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_0897512C;
      }
      goto L_08975120;
    }
L_08975120:
    ctx.gpr[31] = (0x08975128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x08975128u) goto L_08975128;
    return;
L_08975128:
    ctx.gpr[4] = (2226u << 16u);
    goto L_0897512C;
L_0897512C:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25436));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08975144u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-21280)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08975144u) goto L_08975144;
    return;
L_08975144:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08975154u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08975154u) goto L_08975154;
    return;
L_08975154:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08975160u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 784u, 0x0883BFCCu>(ctx, &aot_mem) && ctx.pc == 0x08975160u) goto L_08975160;
    return;
L_08975160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08975180;
      }
      goto L_08975174;
    }
L_08975174:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08975180u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08975180u) goto L_08975180;
    return;
L_08975180:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974EA0;
      }
      goto L_08975188;
    }
L_08975188:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974EA0;
      }
      goto L_08975190;
    }
L_08975190:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x0897519Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 86u, 0x088A84B4u>(ctx, &aot_mem) && ctx.pc == 0x0897519Cu) goto L_0897519C;
    return;
L_0897519C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897550C;
      }
      goto L_089751AC;
    }
L_089751AC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-24992)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089751C4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_089751E0;
      }
      goto L_089751D4;
    }
L_089751D4:
    ctx.gpr[31] = (0x089751DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x089751DCu) goto L_089751DC;
    return;
L_089751DC:
    ctx.gpr[4] = (2226u << 16u);
    goto L_089751E0;
L_089751E0:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25400));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089751F8u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-21280)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x089751F8u) goto L_089751F8;
    return;
L_089751F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08975208u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08975208u) goto L_08975208;
    return;
L_08975208:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08975214u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 784u, 0x0883BFCCu>(ctx, &aot_mem) && ctx.pc == 0x08975214u) goto L_08975214;
    return;
L_08975214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08975234;
      }
      goto L_08975228;
    }
L_08975228:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08975234u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08975234u) goto L_08975234;
    return;
L_08975234:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974EA0;
      }
      goto L_0897523C;
    }
L_0897523C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_08975258;
      }
      goto L_0897524C;
    }
L_0897524C:
    ctx.gpr[31] = (0x08975254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x08975254u) goto L_08975254;
    return;
L_08975254:
    ctx.gpr[4] = (2226u << 16u);
    goto L_08975258;
L_08975258:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25348));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08975270u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-21280)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08975270u) goto L_08975270;
    return;
L_08975270:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08975280u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08975280u) goto L_08975280;
    return;
L_08975280:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0897528Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 784u, 0x0883BFCCu>(ctx, &aot_mem) && ctx.pc == 0x0897528Cu) goto L_0897528C;
    return;
L_0897528C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089752AC;
      }
      goto L_089752A0;
    }
L_089752A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x089752ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x089752ACu) goto L_089752AC;
    return;
L_089752AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974EA0;
      }
      goto L_089752B4;
    }
L_089752B4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_089752D0;
      }
      goto L_089752C4;
    }
L_089752C4:
    ctx.gpr[31] = (0x089752CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x089752CCu) goto L_089752CC;
    return;
L_089752CC:
    ctx.gpr[4] = (2226u << 16u);
    goto L_089752D0;
L_089752D0:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25296));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089752E8u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-21280)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x089752E8u) goto L_089752E8;
    return;
L_089752E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089752F8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x089752F8u) goto L_089752F8;
    return;
L_089752F8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08975304u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 784u, 0x0883BFCCu>(ctx, &aot_mem) && ctx.pc == 0x08975304u) goto L_08975304;
    return;
L_08975304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08975324;
      }
      goto L_08975318;
    }
L_08975318:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08975324u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08975324u) goto L_08975324;
    return;
L_08975324:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974EA0;
      }
      goto L_0897532C;
    }
L_0897532C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_08975348;
      }
      goto L_0897533C;
    }
L_0897533C:
    ctx.gpr[31] = (0x08975344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x08975344u) goto L_08975344;
    return;
L_08975344:
    ctx.gpr[4] = (2226u << 16u);
    goto L_08975348;
L_08975348:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25240));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08975360u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-21280)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08975360u) goto L_08975360;
    return;
L_08975360:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08975370u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08975370u) goto L_08975370;
    return;
L_08975370:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0897537Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 784u, 0x0883BFCCu>(ctx, &aot_mem) && ctx.pc == 0x0897537Cu) goto L_0897537C;
    return;
L_0897537C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_0897539C;
      }
      goto L_08975390;
    }
L_08975390:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x0897539Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x0897539Cu) goto L_0897539C;
    return;
L_0897539C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974EA0;
      }
      goto L_089753A4;
    }
L_089753A4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_089753C0;
      }
      goto L_089753B4;
    }
L_089753B4:
    ctx.gpr[31] = (0x089753BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x089753BCu) goto L_089753BC;
    return;
L_089753BC:
    ctx.gpr[4] = (2226u << 16u);
    goto L_089753C0;
L_089753C0:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25184));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089753D8u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-21280)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x089753D8u) goto L_089753D8;
    return;
L_089753D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089753E8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x089753E8u) goto L_089753E8;
    return;
L_089753E8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089753F4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 784u, 0x0883BFCCu>(ctx, &aot_mem) && ctx.pc == 0x089753F4u) goto L_089753F4;
    return;
L_089753F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08975414;
      }
      goto L_08975408;
    }
L_08975408:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08975414u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08975414u) goto L_08975414;
    return;
L_08975414:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974EA0;
      }
      goto L_0897541C;
    }
L_0897541C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_08975438;
      }
      goto L_0897542C;
    }
L_0897542C:
    ctx.gpr[31] = (0x08975434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x08975434u) goto L_08975434;
    return;
L_08975434:
    ctx.gpr[4] = (2226u << 16u);
    goto L_08975438;
L_08975438:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25136));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08975450u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-21280)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08975450u) goto L_08975450;
    return;
L_08975450:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08975460u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08975460u) goto L_08975460;
    return;
L_08975460:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0897546Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 784u, 0x0883BFCCu>(ctx, &aot_mem) && ctx.pc == 0x0897546Cu) goto L_0897546C;
    return;
L_0897546C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_0897548C;
      }
      goto L_08975480;
    }
L_08975480:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x0897548Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x0897548Cu) goto L_0897548C;
    return;
L_0897548C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974EA0;
      }
      goto L_08975494;
    }
L_08975494:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_089754B0;
      }
      goto L_089754A4;
    }
L_089754A4:
    ctx.gpr[31] = (0x089754ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x089754ACu) goto L_089754AC;
    return;
L_089754AC:
    ctx.gpr[4] = (2226u << 16u);
    goto L_089754B0;
L_089754B0:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25084));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089754C8u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-21280)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x089754C8u) goto L_089754C8;
    return;
L_089754C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089754D8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x089754D8u) goto L_089754D8;
    return;
L_089754D8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089754E4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 784u, 0x0883BFCCu>(ctx, &aot_mem) && ctx.pc == 0x089754E4u) goto L_089754E4;
    return;
L_089754E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08975504;
      }
      goto L_089754F8;
    }
L_089754F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08975504u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08975504u) goto L_08975504;
    return;
L_08975504:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974EA0;
      }
      goto L_0897550C;
    }
L_0897550C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974EA0;
      }
      goto L_08975514;
    }
L_08975514:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897552C:
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
L_08975558:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[7] = (16128u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] & 7u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 56u);
      if (branch_taken) {
          goto L_08975598;
      }
      goto L_08975570;
    }
L_08975570:
    ctx.gpr[4] = (ctx.gpr[5] >> 3u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_0897558C;
      }
      goto L_08975580;
    }
L_08975580:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_0897558C;
L_0897558C:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[12] - ctx.fpr[0];
      if (branch_taken) {
          goto L_089755DC;
      }
      goto L_08975598;
    }
L_08975598:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10)));
        goto L_089755C4;
    }
    goto L_089755A0;
L_089755A0:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_089755B8;
      }
      goto L_089755AC;
    }
L_089755AC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_089755B8;
L_089755B8:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[12] - ctx.fpr[0];
      if (branch_taken) {
          goto L_089755DC;
      }
      goto L_089755C4;
    }
L_089755C4:
    ctx.gpr[5] = (17056u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[0] = ctx.fpr[13] / ctx.fpr[14];
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[12];
    goto L_089755DC;
L_089755DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089755E4:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[13] = ctx.fpr[16] - ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = ctx.fpr[13] / ctx.fpr[15];
    ctx.gpr[6] = (16968u << 16u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08975624;
    }
    goto L_08975624;
L_08975624:
    ctx.fpr[17] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[15];
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[14];
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
        goto L_0897564C;
    }
    goto L_0897564C;
L_0897564C:
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[12];
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[6] = (0u | 99u);
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 99 ? 1u : 0u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
        goto L_08975670;
    }
    goto L_08975670;
L_08975670:
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[8] = (0u | 99u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < 99 ? 1u : 0u);
    if (ctx.gpr[10] != 0u) {
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
        goto L_08975694;
    }
    goto L_08975694;
L_08975694:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089756C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975760;
      }
      goto L_089756DC;
    }
L_089756DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[16] - ctx.fpr[13];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = ctx.fpr[17] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[18] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08975768;
      }
      goto L_08975758;
    }
L_08975758:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089757B4;
      }
      goto L_08975760;
    }
L_08975760:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089757B4;
      }
      goto L_08975768;
    }
L_08975768:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089757B4;
      }
      goto L_08975788;
    }
L_08975788:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    goto L_0897578C;
L_0897578C:
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
      if (branch_taken) {
          goto L_0897578C;
      }
      goto L_089757B4;
    }
L_089757B4:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089757BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    ctx.gpr[3] = (ctx.gpr[7] & 255u);
    ctx.gpr[2] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[3]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[23]);
    ctx.gpr[11] = (ctx.gpr[9] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[30]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[16] = (ctx.gpr[6] & 255u);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    ctx.gpr[30] = (ctx.gpr[10] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08975880;
      }
      goto L_08975840;
    }
L_08975840:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (ctx.gpr[11] | 0u);
    ctx.gpr[31] = (0x08975868u);
    ctx.gpr[10] = (ctx.gpr[30] | 0u);
    goto L_089757BC;
L_08975868:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08975880;
      }
      goto L_08975878;
    }
L_08975878:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08975B68;
      }
      goto L_08975880;
    }
L_08975880:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x0897588Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 136u, 0x089FD404u>(ctx, &aot_mem) && ctx.pc == 0x0897588Cu) goto L_0897588C;
    return;
L_0897588C:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089758ACu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_089755E4;
L_089758AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
      if (branch_taken) {
          goto L_08975B64;
      }
      goto L_089758D8;
    }
L_089758D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55051u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[6]);
    goto L_08975914;
L_08975914:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08975B34;
      }
      goto L_0897593C;
    }
L_0897593C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1200));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
    goto L_08975968;
L_08975968:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(10292)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
        goto L_08975B0C;
    }
    goto L_08975974;
L_08975974:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10300)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08975B08;
      }
      goto L_08975988;
    }
L_08975988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(10292)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(114)));
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[6] = (ctx.gpr[16] << 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_089759C0;
      }
      goto L_089759A8;
    }
L_089759A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[5] = (ctx.gpr[5] & 32u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975AF4;
      }
      goto L_089759C0;
    }
L_089759C0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(113)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
        goto L_089759E8;
    }
    goto L_089759CC;
L_089759CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[5] = (ctx.gpr[5] & 64u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975AF4;
      }
      goto L_089759E4;
    }
L_089759E4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    goto L_089759E8;
L_089759E8:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08975A0C;
    }
    goto L_089759F0;
L_089759F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975AF4;
      }
      goto L_08975A08;
    }
L_08975A08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08975A0C;
L_08975A0C:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08975AF4;
      }
      goto L_08975A20;
    }
L_08975A20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08975A48u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x08927554u>(ctx, &aot_mem) && ctx.pc == 0x08975A48u) goto L_08975A48;
    return;
L_08975A48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
        goto L_08975A68;
    }
    goto L_08975A5C;
L_08975A5C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08975A68;
      }
      goto L_08975A68;
    }
L_08975A68:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        goto L_08975A8C;
    }
    goto L_08975A7C;
L_08975A7C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
      if (branch_taken) {
          goto L_08975A90;
      }
      goto L_08975A8C;
    }
L_08975A8C:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08975A90;
L_08975A90:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
        goto L_08975AB8;
    }
    goto L_08975AA4;
L_08975AA4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
      if (branch_taken) {
          goto L_08975AC0;
      }
      goto L_08975AB8;
    }
L_08975AB8:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08975AC0;
L_08975AC0:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08975AF4;
      }
      goto L_08975AD0;
    }
L_08975AD0:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08975AEC;
      }
      goto L_08975AE0;
    }
L_08975AE0:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08975AF4;
      }
      goto L_08975AEC;
    }
L_08975AEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08975B68;
      }
      goto L_08975AF4;
    }
L_08975AF4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10300)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08975988;
      }
      goto L_08975B08;
    }
L_08975B08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    goto L_08975B0C;
L_08975B0C:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1200));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1200));
      if (branch_taken) {
          goto L_08975968;
      }
      goto L_08975B34;
    }
L_08975B34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08975914;
      }
      goto L_08975B64;
    }
L_08975B64:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    goto L_08975B68;
L_08975B68:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08975BA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[22]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    ctx.gpr[20] = (ctx.gpr[8] & 255u);
    ctx.gpr[21] = (ctx.gpr[10] & 255u);
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) > 0;
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08975C0C;
      }
      goto L_08975BF8;
    }
L_08975BF8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08975C24;
      }
      goto L_08975C00;
    }
L_08975C00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08975C24;
      }
      goto L_08975C0C;
    }
L_08975C0C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975C24;
      }
      goto L_08975C18;
    }
L_08975C18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08975C24;
      }
      goto L_08975C24;
    }
L_08975C24:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[8] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_08975C64;
      }
      goto L_08975C34;
    }
L_08975C34:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    goto L_08975C40;
L_08975C40:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[9] = (ctx.gpr[9] & ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08975C40;
      }
      goto L_08975C64;
    }
L_08975C64:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08975CD8;
      }
      goto L_08975C6C;
    }
L_08975C6C:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[31] = (0x08975C98u);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    goto L_089757BC;
L_08975C98:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_08975CC4;
      }
      goto L_08975CA4;
    }
L_08975CA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08975CCC;
      }
      goto L_08975CC4;
    }
L_08975CC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08975D04;
      }
      goto L_08975CCC;
    }
L_08975CCC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) > 0;
    // nop
      if (branch_taken) {
          goto L_08975C6C;
      }
      goto L_08975CD8;
    }
L_08975CD8:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[31] = (0x08975D04u);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    goto L_089757BC;
L_08975D04:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08975D34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[30]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[22] = (ctx.gpr[9] & 255u);
    ctx.gpr[21] = (ctx.gpr[10] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[20] = (ctx.gpr[11] & 255u);
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[23] = (ctx.gpr[7] | 0u);
    ctx.gpr[30] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[31]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08975DA8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 136u, 0x089FD404u>(ctx, &aot_mem) && ctx.pc == 0x08975DA8u) goto L_08975DA8;
    return;
L_08975DA8:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08975DC8u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    goto L_089755E4;
L_08975DC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
      if (branch_taken) {
          goto L_08976008;
      }
      goto L_08975DF0;
    }
L_08975DF0:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[7] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    goto L_08975E14;
L_08975E14:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(1200));
      if (branch_taken) {
          goto L_08975FE8;
      }
      goto L_08975E3C;
    }
L_08975E3C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[11] = (ctx.lo);
    ctx.gpr[11] = (ctx.gpr[16] + ctx.gpr[11]);
    ctx.gpr[3] = (ctx.gpr[11] + ctx.gpr[5]);
    ctx.gpr[11] = (ctx.gpr[3] + ctx.gpr[6]);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    goto L_08975E54;
L_08975E54:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(10292)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975FC4;
      }
      goto L_08975E60;
    }
L_08975E60:
    ctx.gpr[12] = (aot_mem.aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(10300)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[12]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[15] = (ctx.gpr[17] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08975FC4;
      }
      goto L_08975E74;
    }
L_08975E74:
    ctx.gpr[12] = (0u | 0u);
    ctx.gpr[15] = (ctx.gpr[30] + ctx.gpr[15]);
    goto L_08975E7C;
L_08975E7C:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(10292)));
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[12]);
    ctx.gpr[13] = (aot_mem.aot_load16(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (ctx.gpr[13] << 4u);
    ctx.gpr[24] = (ctx.gpr[13] << 2u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[24]);
      if (branch_taken) {
          goto L_08975EB0;
      }
      goto L_08975E98;
    }
L_08975E98:
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[14]);
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[24] = (ctx.gpr[24] & 32u);
    { const bool branch_taken = ctx.gpr[24] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975FB0;
      }
      goto L_08975EB0;
    }
L_08975EB0:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975ED0;
      }
      goto L_08975EB8;
    }
L_08975EB8:
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[14]);
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[24] = (ctx.gpr[24] & 64u);
    { const bool branch_taken = ctx.gpr[24] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975FB0;
      }
      goto L_08975ED0;
    }
L_08975ED0:
    if (ctx.gpr[20] == 0u) {
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08975EF4;
    }
    goto L_08975ED8;
L_08975ED8:
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[14]);
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[24] = (ctx.gpr[24] & 4u);
    { const bool branch_taken = ctx.gpr[24] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975FB0;
      }
      goto L_08975EF0;
    }
L_08975EF0:
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08975EF4;
L_08975EF4:
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[14]);
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[24] = (ctx.gpr[24] & 1u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[24];
    // nop
      if (branch_taken) {
          goto L_08975FB0;
      }
      goto L_08975F08;
    }
L_08975F08:
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (ctx.gpr[24] + ctx.gpr[14]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(8)));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
        goto L_08975F54;
    }
    goto L_08975F48;
L_08975F48:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08975F54;
      }
      goto L_08975F54;
    }
L_08975F54:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08975FA0;
      }
      goto L_08975F64;
    }
L_08975F64:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
        goto L_08975F84;
    }
    goto L_08975F78;
L_08975F78:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08975F84;
      }
      goto L_08975F84;
    }
L_08975F84:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08975FA0;
      }
      goto L_08975F94;
    }
L_08975F94:
    aot_mem.aot_store16(ctx.gpr[15] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(2));
    goto L_08975FA0;
L_08975FA0:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08975FB0;
      }
      goto L_08975FA8;
    }
L_08975FA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0897600C;
      }
      goto L_08975FB0;
    }
L_08975FB0:
    ctx.gpr[13] = (aot_mem.aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(10300)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08975E7C;
      }
      goto L_08975FC4;
    }
L_08975FC4:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1200));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1200));
      if (branch_taken) {
          goto L_08975E54;
      }
      goto L_08975FE8;
    }
L_08975FE8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08975E14;
      }
      goto L_08976008;
    }
L_08976008:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_0897600C;
L_0897600C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
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
L_08976040:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[21] << 2u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[19]);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[21]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[31]);
    ctx.gpr[5] = (17948u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x089760BCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 136u, 0x089FD404u>(ctx, &aot_mem) && ctx.pc == 0x089760BCu) goto L_089760BC;
    return;
L_089760BC:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (49568u << 16u);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089760F0;
L_089760F0:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0897610Cu);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    goto L_089755E4;
L_0897610C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897634C;
      }
      goto L_08976134;
    }
L_08976134:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    goto L_0897613C;
L_0897613C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(1200));
      if (branch_taken) {
          goto L_0897632C;
      }
      goto L_08976164;
    }
L_08976164:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[19] + ctx.gpr[7]);
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[22]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[21]);
    goto L_08976180;
L_08976180:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(10292)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976308;
      }
      goto L_0897618C;
    }
L_0897618C:
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(10300)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08976308;
      }
      goto L_089761A0;
    }
L_089761A0:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(10292)));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[11] << 4u);
    ctx.gpr[12] = (ctx.gpr[11] << 2u);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[12]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
        goto L_08976204;
    }
    goto L_089761F8;
L_089761F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08976204;
      }
      goto L_08976204;
    }
L_08976204:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        goto L_08976228;
    }
    goto L_08976218;
L_08976218:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
      if (branch_taken) {
          goto L_0897622C;
      }
      goto L_08976228;
    }
L_08976228:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0897622C;
L_0897622C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
        goto L_08976254;
    }
    goto L_08976240;
L_08976240:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
      if (branch_taken) {
          goto L_0897625C;
      }
      goto L_08976254;
    }
L_08976254:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0897625C;
L_0897625C:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089762F4;
      }
      goto L_0897626C;
    }
L_0897626C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[17] + ctx.fpr[18];
    ctx.fpr[15] = std::sqrt(ctx.fpr[15]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[20])) && ctx.fpr[15] == ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
        goto L_089762C8;
    }
    goto L_089762A4;
L_089762A4:
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[22];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
      if (branch_taken) {
          goto L_089762DC;
      }
      goto L_089762C8;
    }
L_089762C8:
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[22];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_089762DC;
L_089762DC:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089762F4;
      }
      goto L_089762EC;
    }
L_089762EC:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (ctx.gpr[11] | 0u);
    goto L_089762F4;
L_089762F4:
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(10300)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089761A0;
      }
      goto L_08976308;
    }
L_08976308:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1200));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1200));
      if (branch_taken) {
          goto L_08976180;
      }
      goto L_0897632C;
    }
L_0897632C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0897613C;
      }
      goto L_0897634C;
    }
L_0897634C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08976360;
      }
      goto L_08976358;
    }
L_08976358:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897637C;
      }
      goto L_08976360;
    }
L_08976360:
    ctx.gpr[4] = (18371u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20352u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089760F0;
      }
      goto L_0897637C;
    }
L_0897637C:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089763C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089764D4;
      }
      goto L_089763F8;
    }
L_089763F8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & 16383u);
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[8] = (ctx.gpr[7] << 4u);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
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
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (17204u << 16u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[0])) && ctx.fpr[13] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089764DC;
      }
      goto L_089764CC;
    }
L_089764CC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089764F4;
      }
      goto L_089764D4;
    }
L_089764D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976514;
      }
      goto L_089764DC;
    }
L_089764DC:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[0])) && ctx.fpr[12] == ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089764F4;
    }
    goto L_089764EC;
L_089764EC:
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_08976504;
      }
      goto L_089764F4;
    }
L_089764F4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08976500u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x08976500u) goto L_08976500;
    return;
L_08976500:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08976504;
L_08976504:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = ctx.fpr[20] / ctx.fpr[0];
    goto L_08976514;
L_08976514:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976524:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] & 255u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_089765A0;
      }
      goto L_08976544;
    }
L_08976544:
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    ctx.gpr[3] = (ctx.gpr[6] | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[9] = (2277u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-15328));
    ctx.gpr[10] = (2230u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-6476));
    ctx.gpr[5] = (17194u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[31] = (0x08976598u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_08977E40;
L_08976598:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089765F0;
      }
      goto L_089765A0;
    }
L_089765A0:
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    ctx.gpr[3] = (ctx.gpr[6] | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[10] = (2230u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-6474));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[31] = (0x089765F0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_08977E40;
L_089765F0:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897661C;
      }
      goto L_089765F8;
    }
L_089765F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976640;
      }
      goto L_08976614;
    }
L_08976614:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08976644;
      }
      goto L_0897661C;
    }
L_0897661C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976640;
      }
      goto L_08976638;
    }
L_08976638:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08976644;
      }
      goto L_08976640;
    }
L_08976640:
    ctx.gpr[2] = (0u | 0u);
    goto L_08976644;
L_08976644:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976654:
    ctx.gpr[4] = (16256u << 16u);
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976660:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
      if (branch_taken) {
          goto L_08976674;
      }
      goto L_0897666C;
    }
L_0897666C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_089766A8;
      }
      goto L_08976674;
    }
L_08976674:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < 512 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[8] << 4u);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[4] = (2228u << 16u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26868)));
      if (branch_taken) {
          goto L_0897669C;
      }
      goto L_08976690;
    }
L_08976690:
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(50));
      if (branch_taken) {
          goto L_089766A8;
      }
      goto L_0897669C;
    }
L_0897669C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-10240));
    goto L_089766A8;
L_089766A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < 512 ? 1u : 0u);
      if (branch_taken) {
          goto L_089766B8;
      }
      goto L_089766B0;
    }
L_089766B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_089766E8;
      }
      goto L_089766B8;
    }
L_089766B8:
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26868)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_089766DC;
      }
      goto L_089766D0;
    }
L_089766D0:
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(50));
      if (branch_taken) {
          goto L_089766E8;
      }
      goto L_089766DC;
    }
L_089766DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-10240));
    goto L_089766E8;
L_089766E8:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[4] = (2228u << 16u);
      if (branch_taken) {
          goto L_08976700;
      }
      goto L_089766F0;
    }
L_089766F0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
      if (branch_taken) {
          goto L_08976758;
      }
      goto L_08976700;
    }
L_08976700:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(50));
    ctx.gpr[10] = (ctx.gpr[9] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[6] = (0u | 20u);
      if (branch_taken) {
          goto L_0897673C;
      }
      goto L_08976714;
    }
L_08976714:
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(10290));
    ctx.gpr[10] = (ctx.gpr[9] < ctx.gpr[10] ? 1u : 0u);
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08976740;
    }
    goto L_08976724;
L_08976724:
    ctx.gpr[4] = (ctx.gpr[9] - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
      if (branch_taken) {
          goto L_08976758;
      }
      goto L_0897673C;
    }
L_0897673C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08976740;
L_08976740:
    ctx.gpr[4] = (ctx.gpr[9] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(512));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    goto L_08976758;
L_08976758:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
      if (branch_taken) {
          goto L_08976768;
      }
      goto L_08976760;
    }
L_08976760:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08976798;
      }
      goto L_08976768;
    }
L_08976768:
    ctx.gpr[9] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 512 ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26868)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_0897678C;
      }
      goto L_08976780;
    }
L_08976780:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(50));
      if (branch_taken) {
          goto L_08976798;
      }
      goto L_0897678C;
    }
L_0897678C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10240));
    goto L_08976798;
L_08976798:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976888;
      }
      goto L_089767A0;
    }
L_089767A0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_089767B0;
      }
      goto L_089767A8;
    }
L_089767A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089767E4;
      }
      goto L_089767B0;
    }
L_089767B0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 512 ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26868)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_089767D8;
      }
      goto L_089767CC;
    }
L_089767CC:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(50));
      if (branch_taken) {
          goto L_089767E4;
      }
      goto L_089767D8;
    }
L_089767D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-10240));
    goto L_089767E4;
L_089767E4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < 512 ? 1u : 0u);
      if (branch_taken) {
          goto L_089767F4;
      }
      goto L_089767EC;
    }
L_089767EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08976824;
      }
      goto L_089767F4;
    }
L_089767F4:
    ctx.gpr[4] = (ctx.gpr[8] << 4u);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[4] = (2228u << 16u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26868)));
      if (branch_taken) {
          goto L_08976818;
      }
      goto L_0897680C;
    }
L_0897680C:
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(50));
      if (branch_taken) {
          goto L_08976824;
      }
      goto L_08976818;
    }
L_08976818:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-10240));
    goto L_08976824;
L_08976824:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (2228u << 16u);
      if (branch_taken) {
          goto L_08976838;
      }
      goto L_0897682C;
    }
L_0897682C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08976888;
      }
      goto L_08976838;
    }
L_08976838:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(50));
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[6] = (0u | 20u);
      if (branch_taken) {
          goto L_08976870;
      }
      goto L_0897684C;
    }
L_0897684C:
    ctx.gpr[9] = (ctx.gpr[4] + static_cast<std::uint32_t>(10290));
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[9] ? 1u : 0u);
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08976874;
    }
    goto L_0897685C;
L_0897685C:
    ctx.gpr[4] = (ctx.gpr[8] - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08976888;
      }
      goto L_08976870;
    }
L_08976870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08976874;
L_08976874:
    ctx.gpr[4] = (ctx.gpr[8] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(512));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08976888;
L_08976888:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976890:
    ctx.gpr[7] = (ctx.gpr[6] & 511u);
    ctx.gpr[8] = (ctx.gpr[7] << 4u);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(50));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) >= 0;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[10]) < 512 ? 1u : 0u);
      if (branch_taken) {
          goto L_089768BC;
      }
      goto L_089768B4;
    }
L_089768B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_089768EC;
      }
      goto L_089768BC;
    }
L_089768BC:
    ctx.gpr[7] = (ctx.gpr[10] << 4u);
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[10]);
    ctx.gpr[7] = (2228u << 16u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26868)));
      if (branch_taken) {
          goto L_089768E0;
      }
      goto L_089768D4;
    }
L_089768D4:
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[10]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(50));
      if (branch_taken) {
          goto L_089768EC;
      }
      goto L_089768E0;
    }
L_089768E0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-10240));
    goto L_089768EC;
L_089768EC:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[7] = (2228u << 16u);
      if (branch_taken) {
          goto L_08976900;
      }
      goto L_089768F4;
    }
L_089768F4:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_08976950;
      }
      goto L_08976900;
    }
L_08976900:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(50));
    ctx.gpr[11] = (ctx.gpr[10] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[8] = (0u | 20u);
      if (branch_taken) {
          goto L_08976938;
      }
      goto L_08976914;
    }
L_08976914:
    ctx.gpr[11] = (ctx.gpr[7] + static_cast<std::uint32_t>(10290));
    ctx.gpr[11] = (ctx.gpr[10] < ctx.gpr[11] ? 1u : 0u);
    if (ctx.gpr[11] == 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
        goto L_0897693C;
    }
    goto L_08976924;
L_08976924:
    ctx.gpr[7] = (ctx.gpr[10] - ctx.gpr[9]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_08976950;
      }
      goto L_08976938;
    }
L_08976938:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_0897693C;
L_0897693C:
    ctx.gpr[7] = (ctx.gpr[10] - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(512));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    goto L_08976950;
L_08976950:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (2228u << 16u);
      if (branch_taken) {
          goto L_08976964;
      }
      goto L_08976958;
    }
L_08976958:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_089769B4;
      }
      goto L_08976964;
    }
L_08976964:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(50));
    ctx.gpr[10] = (ctx.gpr[4] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (0u | 20u);
      if (branch_taken) {
          goto L_0897699C;
      }
      goto L_08976978;
    }
L_08976978:
    ctx.gpr[10] = (ctx.gpr[7] + static_cast<std::uint32_t>(10290));
    ctx.gpr[10] = (ctx.gpr[4] < ctx.gpr[10] ? 1u : 0u);
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
        goto L_089769A0;
    }
    goto L_08976988;
L_08976988:
    ctx.gpr[7] = (ctx.gpr[4] - ctx.gpr[9]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_089769B4;
      }
      goto L_0897699C;
    }
L_0897699C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_089769A0;
L_089769A0:
    ctx.gpr[7] = (ctx.gpr[4] - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(512));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    goto L_089769B4;
L_089769B4:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 512 ? 1u : 0u);
      if (branch_taken) {
          goto L_089769C8;
      }
      goto L_089769C0;
    }
L_089769C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_089769F8;
      }
      goto L_089769C8;
    }
L_089769C8:
    ctx.gpr[10] = (ctx.gpr[8] << 4u);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26868)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (ctx.gpr[10] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_089769EC;
      }
      goto L_089769E0;
    }
L_089769E0:
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(50));
      if (branch_taken) {
          goto L_089769F8;
      }
      goto L_089769EC;
    }
L_089769EC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-10240));
    goto L_089769F8;
L_089769F8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976AA8;
      }
      goto L_08976A00;
    }
L_08976A00:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) >= 0;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[10]) < 512 ? 1u : 0u);
      if (branch_taken) {
          goto L_08976A14;
      }
      goto L_08976A0C;
    }
L_08976A0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08976A44;
      }
      goto L_08976A14;
    }
L_08976A14:
    ctx.gpr[9] = (ctx.gpr[10] << 4u);
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26868)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_08976A38;
      }
      goto L_08976A2C;
    }
L_08976A2C:
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[10]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(50));
      if (branch_taken) {
          goto L_08976A44;
      }
      goto L_08976A38;
    }
L_08976A38:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-10240));
    goto L_08976A44;
L_08976A44:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[7] = (2228u << 16u);
      if (branch_taken) {
          goto L_08976A58;
      }
      goto L_08976A4C;
    }
L_08976A4C:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_08976AA8;
      }
      goto L_08976A58;
    }
L_08976A58:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(50));
    ctx.gpr[11] = (ctx.gpr[5] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[8] = (0u | 20u);
      if (branch_taken) {
          goto L_08976A90;
      }
      goto L_08976A6C;
    }
L_08976A6C:
    ctx.gpr[11] = (ctx.gpr[7] + static_cast<std::uint32_t>(10290));
    ctx.gpr[11] = (ctx.gpr[5] < ctx.gpr[11] ? 1u : 0u);
    if (ctx.gpr[11] == 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
        goto L_08976A94;
    }
    goto L_08976A7C;
L_08976A7C:
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[9]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_08976AA8;
      }
      goto L_08976A90;
    }
L_08976A90:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_08976A94;
L_08976A94:
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(512));
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    goto L_08976AA8;
L_08976AA8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[7] = (2228u << 16u);
      if (branch_taken) {
          goto L_08976ABC;
      }
      goto L_08976AB0;
    }
L_08976AB0:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_08976B0C;
      }
      goto L_08976ABC;
    }
L_08976ABC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(50));
    ctx.gpr[10] = (ctx.gpr[5] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (0u | 20u);
      if (branch_taken) {
          goto L_08976AF4;
      }
      goto L_08976AD0;
    }
L_08976AD0:
    ctx.gpr[10] = (ctx.gpr[7] + static_cast<std::uint32_t>(10290));
    ctx.gpr[10] = (ctx.gpr[5] < ctx.gpr[10] ? 1u : 0u);
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
        goto L_08976AF8;
    }
    goto L_08976AE0;
L_08976AE0:
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[9]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_08976B0C;
      }
      goto L_08976AF4;
    }
L_08976AF4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_08976AF8;
L_08976AF8:
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(512));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    goto L_08976B0C;
L_08976B0C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[6]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976B14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
      if (branch_taken) {
          goto L_08976C54;
      }
      goto L_08976B78;
    }
L_08976B78:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (0u | 0u);
    goto L_08976B80;
L_08976B80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976C40;
      }
      goto L_08976BB0;
    }
L_08976BB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976C40;
      }
      goto L_08976BC4;
    }
L_08976BC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976C40;
      }
      goto L_08976BD8;
    }
L_08976BD8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976C40;
      }
      goto L_08976BEC;
    }
L_08976BEC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976C40;
      }
      goto L_08976C00;
    }
L_08976C00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976C40;
      }
      goto L_08976C14;
    }
L_08976C14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (ctx.gpr[4] >> 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08976C40;
      }
      goto L_08976C30;
    }
L_08976C30:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08976C40u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_08977284;
L_08976C40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08976B80;
      }
      goto L_08976C54;
    }
L_08976C54:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976C8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[20] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
      if (branch_taken) {
          goto L_08976DD4;
      }
      goto L_08976CF0;
    }
L_08976CF0:
    ctx.gpr[18] = (ctx.gpr[19] << 4u);
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    goto L_08976D00;
L_08976D00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976DC0;
      }
      goto L_08976D30;
    }
L_08976D30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976DC0;
      }
      goto L_08976D44;
    }
L_08976D44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976DC0;
      }
      goto L_08976D58;
    }
L_08976D58:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976DC0;
      }
      goto L_08976D6C;
    }
L_08976D6C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976DC0;
      }
      goto L_08976D80;
    }
L_08976D80:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976DC0;
      }
      goto L_08976D94;
    }
L_08976D94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (ctx.gpr[4] >> 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08976DC0;
      }
      goto L_08976DB0;
    }
L_08976DB0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08976DC0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_08977284;
L_08976DC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08976D00;
      }
      goto L_08976DD4;
    }
L_08976DD4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976E0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[6]);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[0] = ctx.fpr[15] - ctx.fpr[12];
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[16]);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[17]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
      if (branch_taken) {
          goto L_08976EA4;
      }
      goto L_08976E98;
    }
L_08976E98:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08976EAC;
      }
      goto L_08976EA4;
    }
L_08976EA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    goto L_08976EAC;
L_08976EAC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[19] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
      if (branch_taken) {
          goto L_08976ECC;
      }
      goto L_08976EC0;
    }
L_08976EC0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08976ECC;
L_08976ECC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[13] = ctx.fpr[28] - ctx.fpr[2];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08976EE0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x08976EE0u) goto L_08976EE0;
    return;
L_08976EE0:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = ctx.fpr[0] + ctx.fpr[26];
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
      if (branch_taken) {
          goto L_08976F14;
      }
      goto L_08976F00;
    }
L_08976F00:
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976F00;
      }
      goto L_08976F14;
    }
L_08976F14:
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976F38;
      }
      goto L_08976F24;
    }
L_08976F24:
    ctx.fpr[26] = ctx.fpr[26] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976F24;
      }
      goto L_08976F38;
    }
L_08976F38:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = ctx.fpr[28] - ctx.fpr[13];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[26] = std::sqrt(ctx.fpr[12]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976FF4;
      }
      goto L_08976FEC;
    }
L_08976FEC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08977028;
      }
      goto L_08976FF4;
    }
L_08976FF4:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08977028;
L_08977028:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08977054;
      }
      goto L_0897704C;
    }
L_0897704C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08977088;
      }
      goto L_08977054;
    }
L_08977054:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08977088;
L_08977088:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0897723C;
      }
      goto L_08977098;
    }
L_08977098:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[16] = (ctx.gpr[4] << 4u);
    ctx.gpr[19] = (ctx.gpr[19] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[20] = (ctx.gpr[19] & 255u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_089770C8;
L_089770C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08977220;
      }
      goto L_089770FC;
    }
L_089770FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08977220;
      }
      goto L_0897712C;
    }
L_0897712C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[22] = ctx.fpr[12] - ctx.fpr[22];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08977220;
      }
      goto L_089771A4;
    }
L_089771A4:
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08977220;
      }
      goto L_089771B4;
    }
L_089771B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08977220;
      }
      goto L_089771E0;
    }
L_089771E0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08977220;
      }
      goto L_089771F4;
    }
L_089771F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (ctx.gpr[4] >> 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08977220;
      }
      goto L_08977210;
    }
L_08977210:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08977220u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_08977284;
L_08977220:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_089770C8;
      }
      goto L_08977234;
    }
L_08977234:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_0897723C;
L_0897723C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977284:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[7] = (ctx.gpr[19] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977384;
      }
      goto L_089772F0;
    }
L_089772F0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977384;
      }
      goto L_08977300;
    }
L_08977300:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12))))));
    goto L_08977304;
L_08977304:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 16383u);
    ctx.gpr[7] = (ctx.gpr[6] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[7] << 4u);
    ctx.gpr[8] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[8] = (ctx.gpr[6] & 32u);
    ctx.gpr[8] = (ctx.gpr[8] >> 5u);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[19];
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
      if (branch_taken) {
          goto L_0897736C;
      }
      goto L_08977348;
    }
L_08977348:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897736C;
      }
      goto L_08977354;
    }
L_08977354:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08977364u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08977284;
L_08977364:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[18]);
    goto L_0897736C;
L_0897736C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12))))));
        goto L_08977304;
    }
    goto L_08977384;
L_08977384:
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
L_089773A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
      if (branch_taken) {
          goto L_089774D0;
      }
      goto L_089773FC;
    }
L_089773FC:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (0u | 0u);
    goto L_08977404;
L_08977404:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089774BC;
      }
      goto L_08977434;
    }
L_08977434:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089774BC;
      }
      goto L_08977448;
    }
L_08977448:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089774BC;
      }
      goto L_0897745C;
    }
L_0897745C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089774BC;
      }
      goto L_08977470;
    }
L_08977470:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089774BC;
      }
      goto L_08977484;
    }
L_08977484:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089774BC;
      }
      goto L_08977498;
    }
L_08977498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089774BC;
      }
      goto L_089774B0;
    }
L_089774B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089774BCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08977504;
L_089774BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08977404;
      }
      goto L_089774D0;
    }
L_089774D0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977504:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089775E4;
      }
      goto L_08977558;
    }
L_08977558:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089775E4;
      }
      goto L_08977568;
    }
L_08977568:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12))))));
    goto L_0897756C;
L_0897756C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 16383u);
    ctx.gpr[7] = (ctx.gpr[6] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[7] << 4u);
    ctx.gpr[8] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[8] = (ctx.gpr[6] & 64u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
      if (branch_taken) {
          goto L_089775CC;
      }
      goto L_089775AC;
    }
L_089775AC:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089775CC;
      }
      goto L_089775B8;
    }
L_089775B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089775C4u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    goto L_08977504;
L_089775C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[18]);
    goto L_089775CC;
L_089775CC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12))))));
        goto L_0897756C;
    }
    goto L_089775E4;
L_089775E4:
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
L_089775FC:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 15u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897769C;
      }
      goto L_08977614;
    }
L_08977614:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (ctx.gpr[5] + ctx.gpr[9]);
    goto L_08977624;
L_08977624:
    ctx.gpr[11] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[11] = (ctx.gpr[4] + ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[11] & 16383u);
    ctx.gpr[11] = (ctx.gpr[11] << 16u);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 16u));
    ctx.gpr[2] = (ctx.gpr[11] << 4u);
    ctx.gpr[11] = (ctx.gpr[11] << 2u);
    ctx.gpr[11] = (ctx.gpr[2] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[7] + ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08977684;
      }
      goto L_08977654;
    }
L_08977654:
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897767C;
      }
      goto L_08977674;
    }
L_08977674:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089776A0;
      }
      goto L_0897767C;
    }
L_0897767C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089776A0;
      }
      goto L_08977684;
    }
L_08977684:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] << 16u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 16u));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[10] = (ctx.gpr[5] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08977624;
      }
      goto L_0897769C;
    }
L_0897769C:
    ctx.gpr[2] = (0u | 0u);
    goto L_089776A0;
L_089776A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089776A8:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 15u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977748;
      }
      goto L_089776C0;
    }
L_089776C0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (ctx.gpr[5] + ctx.gpr[9]);
    goto L_089776D0;
L_089776D0:
    ctx.gpr[11] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[11] = (ctx.gpr[4] + ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[11] & 16383u);
    ctx.gpr[11] = (ctx.gpr[11] << 16u);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 16u));
    ctx.gpr[2] = (ctx.gpr[11] << 4u);
    ctx.gpr[11] = (ctx.gpr[11] << 2u);
    ctx.gpr[11] = (ctx.gpr[2] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[7] + ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08977730;
      }
      goto L_08977700;
    }
L_08977700:
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977728;
      }
      goto L_08977720;
    }
L_08977720:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0897774C;
      }
      goto L_08977728;
    }
L_08977728:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897774C;
      }
      goto L_08977730;
    }
L_08977730:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] << 16u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 16u));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[10] = (ctx.gpr[5] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_089776D0;
      }
      goto L_08977748;
    }
L_08977748:
    ctx.gpr[2] = (0u | 0u);
    goto L_0897774C;
L_0897774C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977754:
    ctx.gpr[8] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[8] & 1u);
      if (branch_taken) {
          goto L_08977830;
      }
      goto L_0897776C;
    }
L_0897776C:
    ctx.gpr[9] = (15872u << 16u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-5));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08977780;
L_08977780:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[8]);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[17] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897781C;
      }
      goto L_089777A8;
    }
L_089777A8:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897781C;
      }
      goto L_089777C8;
    }
L_089777C8:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(2))))));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[17] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897781C;
      }
      goto L_089777E8;
    }
L_089777E8:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(2))))));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897781C;
      }
      goto L_08977808;
    }
L_08977808:
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[8]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(9))))));
    ctx.gpr[10] = (ctx.gpr[10] & ctx.gpr[7]);
    ctx.gpr[10] = (ctx.gpr[10] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[10]));
    goto L_0897781C;
L_0897781C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08977780;
      }
      goto L_08977830;
    }
L_08977830:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977838:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089778E8;
      }
      goto L_0897784C;
    }
L_0897784C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089778E8;
      }
      goto L_0897785C;
    }
L_0897785C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[8] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(14)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089778D4;
      }
      goto L_0897789C;
    }
L_0897789C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[8] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08977908;
      }
      goto L_089778C0;
    }
L_089778C0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977AA8;
      }
      goto L_089778D4;
    }
L_089778D4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977AA8;
      }
      goto L_089778E8;
    }
L_089778E8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089778F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24960));
    goto L_0897552C;
L_089778F4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08977AA8;
      }
      goto L_08977908;
    }
L_08977908:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[8] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & 16383u);
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[8] = (ctx.gpr[7] << 4u);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (16256u << 16u);
      if (branch_taken) {
          goto L_089779B0;
      }
      goto L_089779A4;
    }
L_089779A4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089779EC;
      }
      goto L_089779B0;
    }
L_089779B0:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089779EC;
L_089779EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08977A1C;
      }
      goto L_08977A04;
    }
L_08977A04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08977A1C;
L_08977A1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(14)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977AA8;
      }
      goto L_08977AA8;
    }
L_08977AA8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977AB8:
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] & 15u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-7));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(14)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (ctx.lo);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[7] = (15357u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 62390u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 4u));
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(14)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977B48:
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[11] = (ctx.gpr[6] & 15u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(14)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(14)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 4u));
    ctx.gpr[3] = (15357u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    ctx.gpr[3] = (ctx.gpr[3] | 62390u);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-7));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7));
      if (branch_taken) {
          goto L_08977BA8;
      }
      goto L_08977B88;
    }
L_08977B88:
    ctx.gpr[9] = (ctx.gpr[10] & 255u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[9] = (ctx.lo);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
      if (branch_taken) {
          goto L_08977BC4;
      }
      goto L_08977BA8;
    }
L_08977BA8:
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[9] = (ctx.lo);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_08977BC4;
L_08977BC4:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(14)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(14)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08977BFC;
      }
      goto L_08977BDC;
    }
L_08977BDC:
    ctx.gpr[4] = (ctx.gpr[10] & 255u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08977C18;
      }
      goto L_08977BFC;
    }
L_08977BFC:
    ctx.gpr[4] = (ctx.gpr[9] & 255u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    goto L_08977C18;
L_08977C18:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977C20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 48u);
      if (branch_taken) {
          goto L_08977C3C;
      }
      goto L_08977C34;
    }
L_08977C34:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08977DE4;
      }
      goto L_08977C3C;
    }
L_08977C3C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977D08;
      }
      goto L_08977C48;
    }
L_08977C48:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(356)));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[8] = (2228u << 16u);
      if (branch_taken) {
          goto L_08977D08;
      }
      goto L_08977C54;
    }
L_08977C54:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[5] = (ctx.gpr[10] << 4u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[10] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    goto L_08977C7C;
L_08977C7C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977CC4;
      }
      goto L_08977C84;
    }
L_08977C84:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[9]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[3] + ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] & 16383u);
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08977CC4;
      }
      goto L_08977CB0;
    }
L_08977CB0:
    ctx.gpr[5] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[5] << 16u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 16u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08977C7C;
      }
      goto L_08977CC4;
    }
L_08977CC4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977D08;
      }
      goto L_08977CCC;
    }
L_08977CCC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(9))))));
    ctx.gpr[5] = (ctx.gpr[5] & 3u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08977D18;
      }
      goto L_08977D08;
    }
L_08977D08:
    if (ctx.gpr[10] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(360)));
        goto L_08977D20;
    }
    goto L_08977D10;
L_08977D10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977DE4;
      }
      goto L_08977D18;
    }
L_08977D18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08977DE8;
      }
      goto L_08977D20;
    }
L_08977D20:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[8] = (2228u << 16u);
      if (branch_taken) {
          goto L_08977DE4;
      }
      goto L_08977D28;
    }
L_08977D28:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[5] = (ctx.gpr[10] << 4u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[10] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    goto L_08977D50;
L_08977D50:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977D98;
      }
      goto L_08977D58;
    }
L_08977D58:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] & 16383u);
    ctx.gpr[10] = (ctx.gpr[10] << 16u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 16u));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08977D98;
      }
      goto L_08977D84;
    }
L_08977D84:
    ctx.gpr[5] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[5] << 16u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 16u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08977D50;
      }
      goto L_08977D98;
    }
L_08977D98:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977DE4;
      }
      goto L_08977DA0;
    }
L_08977DA0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9))))));
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977DE4;
      }
      goto L_08977DDC;
    }
L_08977DDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08977DE8;
      }
      goto L_08977DE4;
    }
L_08977DE4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08977DE8;
L_08977DE8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977DF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08977E08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08977E08u) goto L_08977E08;
    return;
L_08977E08:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 31u));
    ctx.gpr[31] = (0x08977E1Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08977E1Cu) goto L_08977E1C;
    return;
L_08977E1C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977E40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (ctx.gpr[11] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[21] = (ctx.gpr[10] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[9]);
      if (branch_taken) {
          goto L_08977EE0;
      }
      goto L_08977EA8;
    }
L_08977EA8:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08977ED4u);
    ctx.gpr[10] = (0u | 0u);
    goto L_089757BC;
L_08977ED4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977EE4;
      }
      goto L_08977EE0;
    }
L_08977EE0:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08977EE4;
L_08977EE4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08977F10;
      }
      goto L_08977EEC;
    }
L_08977EEC:
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977F08;
      }
      goto L_08977EF8;
    }
L_08977EF8:
    ctx.gpr[4] = (18371u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20480u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08977F08;
L_08977F08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 42u, 0x08978420u>(ctx, &aot_mem); return;
      }
      goto L_08977F10;
    }
L_08977F10:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08977F48;
      }
      goto L_08977F18;
    }
L_08977F18:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08977F44u);
    ctx.gpr[10] = (0u | 0u);
    goto L_089757BC;
L_08977F44:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_08977F48;
L_08977F48:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08977F74;
      }
      goto L_08977F50;
    }
L_08977F50:
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977F6C;
      }
      goto L_08977F5C;
    }
L_08977F5C:
    ctx.gpr[4] = (18371u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20480u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08977F6C;
L_08977F6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 42u, 0x08978420u>(ctx, &aot_mem); return;
      }
      goto L_08977F74;
    }
L_08977F74:
    if (ctx.gpr[16] != ctx.gpr[17]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
        goto L_08977F98;
    }
    goto L_08977F7C;
L_08977F7C:
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977F90;
      }
      goto L_08977F88;
    }
L_08977F88:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08977F90;
L_08977F90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 42u, 0x08978420u>(ctx, &aot_mem); return;
      }
      goto L_08977F98;
    }
L_08977F98:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[17] << 4u);
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(15)));
    ctx.gpr[6] = (ctx.gpr[16] << 4u);
    ctx.gpr[7] = (ctx.gpr[16] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(15)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08977FF4;
      }
      goto L_08977FD0;
    }
L_08977FD0:
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977FEC;
      }
      goto L_08977FDC;
    }
L_08977FDC:
    ctx.gpr[4] = (18371u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20480u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08977FEC;
L_08977FEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 42u, 0x08978420u>(ctx, &aot_mem); return;
      }
      goto L_08977FF4;
    }
L_08977FF4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (2231u << 16u);
    ctx.pc = 0x08978000u; return;
}

void recomp_unit_0092(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0092_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_92(Runtime &runtime) {
    runtime.register_generated_unit(92u, 0x08974000u, 16384u, &recomp_unit_0092, &recomp_unit_0092_entry);
    runtime.register_function(0x08974000u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974004u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974018u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974034u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897403Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974044u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974054u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897407Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089740ACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089740B8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089740C8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089740D8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089740E4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089740ECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089740FCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974108u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974110u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974120u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897412Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974134u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974144u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974150u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974158u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974168u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974174u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897417Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897418Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974198u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089741A0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089741B0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089741BCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089741C4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089741D4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089741E0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089741E8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089741F8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974204u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897420Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974218u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974220u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974224u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974230u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974268u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974274u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974284u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974294u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089742A0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089742A8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089742B0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089742C0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089742CCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089742D4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089742E4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089742F0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089742F8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974308u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974314u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897431Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897432Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974338u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974340u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974350u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974360u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974368u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974378u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974384u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897438Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897439Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089743ACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089743B4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089743C4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089743D0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089743D8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089743E8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089743F4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089743FCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897440Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974418u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974420u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974430u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897443Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974444u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974450u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974458u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897445Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974470u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089744E4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974500u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897451Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974528u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974534u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974544u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897454Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974554u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897455Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974570u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974588u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897459Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089745C4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089745D0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089745E0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089745E8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089745F4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897460Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974610u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897463Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974654u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974660u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974670u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974678u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089746F0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974734u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897474Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974754u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897475Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974760u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089747E4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089747F8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974810u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897481Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974820u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089748B4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089748C0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089748D4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089748E8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089748FCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974904u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974910u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974930u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974964u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974990u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089749ACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089749B8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089749D0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089749DCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089749E8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089749FCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974A04u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974A10u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974A28u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974A38u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974A40u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974A48u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974A50u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974A5Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974A64u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974A6Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974A74u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974A78u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974A80u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974A88u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974A98u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974ABCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974AC4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974ACCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974AD4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974AE0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974AE8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974AF0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974B00u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974B10u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974B1Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974B30u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974B3Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974B54u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974B74u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974B80u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974BA8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974BB8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974BC0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974BD0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974BD4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974BE8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974BF8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974C04u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974C14u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974C18u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974C2Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974C54u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974C68u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974C88u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974C8Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974C94u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974CA8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974CB0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974CBCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974CCCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974CD4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974CD8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974CE8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974CF8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D00u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D08u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D10u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D14u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D1Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D24u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D2Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D34u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D3Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D44u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D54u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D5Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D70u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D7Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D84u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D88u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D9Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974DA8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974DB0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974DB4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974DC4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974DD0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974DD8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974DDCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974DECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974DFCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974E08u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974E18u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974E30u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974E40u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974E48u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974E4Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974E64u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974E74u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974E80u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974E94u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974EA0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974EB8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974EC8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974ED0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974ED4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974EECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974EFCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974F08u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974F1Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974F28u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974F30u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974F40u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974F48u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974F4Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974F64u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974F74u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974F80u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974F94u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974FA0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974FA8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974FB8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974FC0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974FC4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974FDCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974FECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974FF8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897500Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975018u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975020u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975030u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975038u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897503Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975054u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975064u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975070u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975084u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975090u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975098u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089750A8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089750B0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089750B4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089750CCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089750DCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089750E8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089750FCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975108u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975110u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975120u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975128u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897512Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975144u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975154u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975160u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975174u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975180u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975188u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975190u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897519Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089751ACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089751C4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089751D4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089751DCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089751E0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089751F8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975208u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975214u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975228u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975234u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897523Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897524Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975254u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975258u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975270u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975280u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897528Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089752A0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089752ACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089752B4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089752C4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089752CCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089752D0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089752E8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089752F8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975304u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975318u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975324u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897532Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897533Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975344u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975348u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975360u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975370u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897537Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975390u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897539Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089753A4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089753B4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089753BCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089753C0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089753D8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089753E8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089753F4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975408u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975414u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897541Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897542Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975434u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975438u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975450u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975460u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897546Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975480u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897548Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975494u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089754A4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089754ACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089754B0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089754C8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089754D8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089754E4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089754F8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975504u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897550Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975514u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897552Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975558u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975570u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975580u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897558Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975598u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089755A0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089755ACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089755B8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089755C4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089755DCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089755E4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975624u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897564Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975670u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975694u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089756C8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089756DCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975758u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975760u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975768u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975788u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897578Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089757B4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089757BCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975840u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975868u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975878u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975880u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897588Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089758ACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089758D8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975914u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897593Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975968u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975974u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975988u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089759A8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089759C0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089759CCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089759E4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089759E8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089759F0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975A08u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975A0Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975A20u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975A48u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975A5Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975A68u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975A7Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975A8Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975A90u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975AA4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975AB8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975AC0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975AD0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975AE0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975AECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975AF4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975B08u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975B0Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975B34u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975B64u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975B68u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975BA8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975BF8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975C00u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975C0Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975C18u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975C24u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975C34u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975C40u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975C64u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975C6Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975C98u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975CA4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975CC4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975CCCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975CD8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975D04u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975D34u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975DA8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975DC8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975DF0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975E14u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975E3Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975E54u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975E60u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975E74u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975E7Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975E98u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975EB0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975EB8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975ED0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975ED8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975EF0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975EF4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975F08u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975F48u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975F54u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975F64u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975F78u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975F84u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975F94u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975FA0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975FA8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975FB0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975FC4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975FE8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976008u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897600Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976040u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089760BCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089760F0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897610Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976134u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897613Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976164u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976180u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897618Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089761A0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089761F8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976204u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976218u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976228u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897622Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976240u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976254u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897625Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897626Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089762A4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089762C8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089762DCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089762ECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089762F4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976308u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897632Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897634Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976358u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976360u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897637Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089763C8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089763F8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089764CCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089764D4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089764DCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089764ECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089764F4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976500u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976504u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976514u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976524u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976544u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976598u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089765A0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089765F0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089765F8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976614u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897661Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976638u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976640u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976644u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976654u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976660u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897666Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976674u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976690u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897669Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089766A8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089766B0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089766B8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089766D0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089766DCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089766E8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089766F0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976700u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976714u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976724u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897673Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976740u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976758u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976760u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976768u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976780u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897678Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976798u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089767A0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089767A8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089767B0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089767CCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089767D8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089767E4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089767ECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089767F4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897680Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976818u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976824u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897682Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976838u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897684Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897685Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976870u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976874u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976888u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976890u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089768B4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089768BCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089768D4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089768E0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089768ECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089768F4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976900u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976914u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976924u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976938u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897693Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976950u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976958u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976964u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976978u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976988u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897699Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089769A0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089769B4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089769C0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089769C8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089769E0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089769ECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089769F8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976A00u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976A0Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976A14u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976A2Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976A38u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976A44u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976A4Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976A58u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976A6Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976A7Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976A90u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976A94u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976AA8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976AB0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976ABCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976AD0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976AE0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976AF4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976AF8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976B0Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976B14u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976B78u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976B80u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976BB0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976BC4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976BD8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976BECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976C00u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976C14u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976C30u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976C40u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976C54u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976C8Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976CF0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976D00u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976D30u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976D44u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976D58u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976D6Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976D80u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976D94u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976DB0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976DC0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976DD4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976E0Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976E98u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976EA4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976EACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976EC0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976ECCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976EE0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976F00u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976F14u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976F24u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976F38u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976FECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976FF4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977028u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897704Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977054u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977088u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977098u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089770C8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089770FCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897712Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089771A4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089771B4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089771E0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089771F4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977210u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977220u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977234u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897723Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977284u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089772F0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977300u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977304u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977348u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977354u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977364u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897736Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977384u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089773A0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089773FCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977404u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977434u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977448u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897745Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977470u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977484u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977498u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089774B0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089774BCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089774D0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977504u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977558u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977568u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897756Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089775ACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089775B8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089775C4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089775CCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089775E4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089775FCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977614u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977624u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977654u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977674u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897767Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977684u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897769Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089776A0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089776A8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089776C0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089776D0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977700u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977720u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977728u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977730u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977748u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897774Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977754u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897776Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977780u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089777A8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089777C8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089777E8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977808u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897781Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977830u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977838u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897784Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897785Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897789Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089778C0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089778D4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089778E8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089778F4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977908u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089779A4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089779B0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089779ECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977A04u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977A1Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977AA8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977AB8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977B48u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977B88u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977BA8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977BC4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977BDCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977BFCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977C18u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977C20u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977C34u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977C3Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977C48u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977C54u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977C7Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977C84u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977CB0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977CC4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977CCCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977D08u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977D10u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977D18u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977D20u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977D28u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977D50u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977D58u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977D84u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977D98u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977DA0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977DDCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977DE4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977DE8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977DF0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977E08u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977E1Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977E40u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977EA8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977ED4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977EE0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977EE4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977EECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977EF8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977F08u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977F10u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977F18u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977F44u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977F48u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977F50u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977F5Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977F6Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977F74u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977F7Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977F88u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977F90u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977F98u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977FD0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977FDCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977FECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977FF4u, &recomp_unit_0092, "recomp_unit_0092");
}
} // namespace psprecomp
