#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0197[3724] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 11, 0, 0, 12,
    0, 0, 0, 0, 0, 0, 13, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 17, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0,
    21, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0,
    0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 32, 0, 33, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0,
    0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0,
    0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 49, 0, 50, 0, 0, 51, 52, 0, 0,
    53, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 57, 0, 58, 0, 0, 0, 0, 59, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 63, 0, 0,
    0, 0, 0, 64, 0, 0, 0, 65, 0, 66, 0, 0, 67, 0, 0, 0, 68, 69, 0, 0, 70, 0, 0, 71, 0, 72, 0, 0, 73, 0, 0, 0,
    0, 74, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 80, 81, 0, 0, 0, 82, 0, 0, 83, 0,
    84, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0,
    91, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 94, 95, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 99, 0, 0, 100, 0, 101, 0, 0, 102,
    103, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108,
    0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 111, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0,
    0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 120, 0, 0,
    121, 122, 0, 0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 128, 0,
    129, 0, 130, 0, 131, 0, 132, 0, 133, 0, 134, 0, 135, 0, 136, 0, 137, 0, 138, 0, 139, 0, 140, 0, 141, 0, 142, 0, 143, 0, 144, 0,
    145, 0, 146, 0, 147, 0, 148, 0, 149, 0, 150, 0, 151, 0, 152, 0, 153, 0, 154, 0, 155, 0, 156, 0, 157, 0, 158, 0, 159, 0, 160, 0,
    161, 0, 162, 0, 163, 0, 164, 0, 165, 0, 166, 0, 167, 0, 168, 0, 169, 0, 170, 0, 171, 0, 172, 0, 173, 0, 174, 0, 175, 0, 176, 0,
    177, 0, 178, 0, 179, 0, 180, 0, 181, 0, 182, 0, 183, 0, 184, 0, 185, 0, 186, 0, 187, 0, 188, 0, 189, 0, 190, 0, 191, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 192, 193, 0, 0, 0, 194, 0, 195, 0, 0, 196, 0, 0, 197, 0, 0, 198, 0, 0, 0, 199, 0, 0, 200, 0, 0,
    201, 0, 0, 0, 202, 0, 0, 203, 0, 204, 0, 0, 205, 0, 206, 0, 207, 0, 0, 208, 209, 0, 0, 210, 0, 0, 211, 0, 0, 212, 0, 0,
    213, 0, 0, 214, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 218, 0, 219, 0, 220, 0, 221, 0, 222, 0, 223, 0, 0, 224, 0, 0, 0, 225,
    0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 234,
    0, 0, 235, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 238, 0, 239, 0, 0, 0, 240, 0, 241, 242, 0, 0, 0, 243, 0, 244, 0, 245, 0,
    0, 0, 246, 0, 0, 0, 247, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0,
    0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 259, 0, 260, 0, 261, 0, 262, 0,
    263, 0, 264, 0, 265, 0, 266, 0, 267, 0, 268, 0, 269, 0, 270, 0, 271, 0, 272, 0, 273, 0, 274, 0, 275, 0, 276, 0, 277, 0, 278, 0,
    279, 0, 280, 0, 281, 0, 282, 0, 283, 0, 284, 0, 285, 0, 286, 0, 287, 0, 288, 0, 289, 0, 290, 0, 291, 0, 292, 0, 293, 0, 294, 0,
    295, 0, 296, 0, 297, 0, 298, 0, 299, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0,
    304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 313,
    0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 320, 0, 0, 0, 0, 321,
    0, 0, 322, 0, 0, 0, 323, 0, 324, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 328, 0, 0, 329, 0, 0, 0, 0, 330, 0,
    0, 0, 331, 0, 332, 0, 0, 333, 0, 0, 334, 0, 0, 0, 335, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 339, 0, 0, 0, 0,
    0, 0, 0, 340, 0, 0, 0, 341, 0, 342, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0,
    346, 0, 0, 0, 347, 0, 348, 0, 0, 0, 349, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 354, 0,
    0, 355, 0, 0, 0, 356, 0, 357, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 360, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0,
    364, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0,
    371, 0, 0, 0, 372, 0, 373, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 376, 0, 377, 0, 0, 378, 0, 379, 0, 0, 0, 380, 0, 381, 0,
    0, 0, 382, 0, 0, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 387, 0, 0, 388, 0, 0, 0, 389, 0, 0, 390, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 394, 0, 395, 0,
    396, 0, 0, 0, 397, 0, 398, 0, 399, 0, 400, 0, 0, 401, 0, 402, 403, 0, 404, 405, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0,
    408, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0,
    415, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422,
    0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 429, 0, 0,
    0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0,
    0, 437, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 443, 0, 444, 0,
    445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 450, 0, 0, 451, 0, 452, 0, 0, 0, 0,
    0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 456, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 459, 460, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0,
    0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 471, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 481, 0, 482, 0, 0, 483, 484, 485, 0,
    486, 0, 0, 487, 0, 0, 0, 488, 0, 0, 0, 489, 0, 0, 0, 490, 0, 491, 0, 492, 0, 0, 493, 0, 494, 0, 0, 495, 496, 0, 497, 498,
    0, 499, 0, 500, 0, 0, 501, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 506, 0, 507, 0, 0, 0, 508, 0, 509, 0, 510, 0, 511, 0, 512, 0, 513, 0, 514, 0, 0, 515, 0, 0, 516, 0, 517, 0,
    518, 519, 0, 520, 0, 521, 0, 522, 0, 523, 0, 0, 524, 0, 525, 0, 0, 526, 0, 527, 0, 528, 0, 0, 529, 0, 0, 530, 0, 531, 0, 0,
    532, 0, 533, 0, 0, 534, 0, 535, 0, 0, 536, 0, 537, 0, 538, 0, 0, 539, 0, 0, 540, 541, 0, 542, 0, 543, 0, 0, 544, 0, 0, 545,
    0, 0, 546, 0, 0, 0, 547, 0, 0, 548, 0, 0, 0, 549, 0, 550, 0, 551, 0, 552, 0, 553, 0, 554, 0, 555, 556, 0, 557, 558, 559, 0,
    560, 0, 561, 0, 562, 0, 563, 0, 0, 564, 0, 0, 565, 0, 566, 0, 567, 568, 0, 569, 0, 570, 0, 0, 571, 0, 572, 0, 573, 0, 574, 0,
    575, 0, 0, 576, 0, 577, 578, 0, 0, 0, 579, 0, 580, 0, 581, 0, 582, 0, 583, 0, 0, 584, 0, 585, 586, 0, 587, 588, 0, 589, 590, 0,
    0, 591, 0, 0, 592, 0, 593, 0, 0, 594, 0, 0, 595, 0, 0, 596, 0, 0, 597, 0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 600, 0, 601,
    0, 0, 602, 603, 0, 604, 0, 0, 0, 0, 605, 606, 607, 608, 0, 609, 0, 0, 610, 0, 611, 0, 612, 0, 613, 614, 615, 0, 616, 0, 617, 0,
    618, 0, 619, 0, 620, 0, 621, 0, 622, 0, 623, 0, 624, 0, 625, 0, 626, 0, 627, 0, 628, 0, 629, 0, 630, 0, 631, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 632, 0, 0, 0, 633, 0, 0, 634, 0, 635, 0, 0, 0, 0, 0, 0, 0, 636, 0, 637, 0, 0, 0, 0, 638, 0, 0, 0,
    0, 0, 0, 0, 0, 639, 0, 640, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 642, 0, 643, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0,
    645, 0, 646, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 649, 0, 0, 650, 0, 0, 0, 0, 0, 651, 0, 0, 0,
    0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 655, 0, 656, 0, 0, 657, 0, 658, 0, 0, 0, 0,
    659, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 661, 662, 0, 0, 0, 0, 663, 664, 0, 0, 0, 665, 0, 0, 0, 666, 0, 667, 0, 0,
    0, 668, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    672, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 675, 0, 0, 0, 0, 676, 677, 0, 0, 0, 678, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0, 681,
    0, 0, 0, 682, 0, 0, 0, 683, 0, 0, 684, 685, 0, 0, 0, 686, 687, 0, 688, 0, 689, 0, 690, 0, 0, 0, 691, 0, 0, 692, 693, 0,
    0, 0, 694, 695, 0, 696, 0, 0, 697, 0, 0, 698, 0, 0, 699, 0, 700, 0, 0, 0, 0, 0, 701, 0, 0, 0, 0, 702, 703, 0, 0, 0,
    704, 0, 0, 0, 705, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 708, 0,
    0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 710, 0, 0, 711, 0, 0, 712, 0, 0, 713, 0, 714, 0, 715, 0, 0, 716, 0, 717, 0, 0, 0,
    718, 0, 719, 0, 720, 0, 0, 721, 0, 0, 722, 0, 723, 0, 0, 0, 724, 0, 0, 0, 725, 0, 0, 726, 0, 0, 727, 0, 728, 0, 0, 0,
    729, 0, 0, 730, 0, 0, 731, 0, 732, 0, 0, 733, 0, 0, 734, 0, 0, 0, 735, 0, 736, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 739, 0, 740, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 743, 744, 0, 745, 0, 746,
    0, 747, 0, 748, 0, 749, 0, 750, 0, 751, 0, 752, 0, 753, 0, 754, 0, 755, 0, 756, 0, 757, 0, 758, 0, 759, 0, 760, 0, 761, 0, 762,
    0, 763, 0, 764, 0, 765, 0, 766, 0, 767, 0, 0, 0, 768, 0, 0, 0, 0, 0, 769, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 770, 0,
    0, 0, 0, 0, 0, 0, 0, 771, 0, 772, 0, 773,
};
void recomp_unit_0197_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B18000u;
        entry_id = (entry_delta < 14896u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0197[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B18000;
    case 2u: goto L_08B18024;
    case 3u: goto L_08B18040;
    case 4u: goto L_08B18064;
    case 5u: goto L_08B18098;
    case 6u: goto L_08B180A4;
    case 7u: goto L_08B180C0;
    case 8u: goto L_08B180C4;
    case 9u: goto L_08B180D0;
    case 10u: goto L_08B180EC;
    case 11u: goto L_08B180F0;
    case 12u: goto L_08B180FC;
    case 13u: goto L_08B18118;
    case 14u: goto L_08B1811C;
    case 15u: goto L_08B18128;
    case 16u: goto L_08B18144;
    case 17u: goto L_08B18148;
    case 18u: goto L_08B18154;
    case 19u: goto L_08B1816C;
    case 20u: goto L_08B18174;
    case 21u: goto L_08B18180;
    case 22u: goto L_08B18198;
    case 23u: goto L_08B181A0;
    case 24u: goto L_08B181AC;
    case 25u: goto L_08B181CC;
    case 26u: goto L_08B181D8;
    case 27u: goto L_08B181F8;
    case 28u: goto L_08B18208;
    case 29u: goto L_08B18218;
    case 30u: goto L_08B18234;
    case 31u: goto L_08B18248;
    case 32u: goto L_08B1824C;
    case 33u: goto L_08B18254;
    case 34u: goto L_08B18264;
    case 35u: goto L_08B1826C;
    case 36u: goto L_08B18284;
    case 37u: goto L_08B18294;
    case 38u: goto L_08B18300;
    case 39u: goto L_08B18308;
    case 40u: goto L_08B1832C;
    case 41u: goto L_08B1833C;
    case 42u: goto L_08B1834C;
    case 43u: goto L_08B18368;
    case 44u: goto L_08B18378;
    case 45u: goto L_08B18384;
    case 46u: goto L_08B1839C;
    case 47u: goto L_08B183C0;
    case 48u: goto L_08B183C8;
    case 49u: goto L_08B183DC;
    case 50u: goto L_08B183E4;
    case 51u: goto L_08B183F0;
    case 52u: goto L_08B183F4;
    case 53u: goto L_08B18400;
    case 54u: goto L_08B18404;
    case 55u: goto L_08B18918;
    case 56u: goto L_08B18920;
    case 57u: goto L_08B18928;
    case 58u: goto L_08B18930;
    case 59u: goto L_08B18944;
    case 60u: goto L_08B18948;
    case 61u: goto L_08B18958;
    case 62u: goto L_08B18968;
    case 63u: goto L_08B18974;
    case 64u: goto L_08B1898C;
    case 65u: goto L_08B1899C;
    case 66u: goto L_08B189A4;
    case 67u: goto L_08B189B0;
    case 68u: goto L_08B189C0;
    case 69u: goto L_08B189C4;
    case 70u: goto L_08B189D0;
    case 71u: goto L_08B189DC;
    case 72u: goto L_08B189E4;
    case 73u: goto L_08B189F0;
    case 74u: goto L_08B18A04;
    case 75u: goto L_08B18A10;
    case 76u: goto L_08B18A20;
    case 77u: goto L_08B18A34;
    case 78u: goto L_08B18A40;
    case 79u: goto L_08B18A4C;
    case 80u: goto L_08B18A58;
    case 81u: goto L_08B18A5C;
    case 82u: goto L_08B18A6C;
    case 83u: goto L_08B18A78;
    case 84u: goto L_08B18A80;
    case 85u: goto L_08B18A8C;
    case 86u: goto L_08B18A94;
    case 87u: goto L_08B18AAC;
    case 88u: goto L_08B18AC4;
    case 89u: goto L_08B18ADC;
    case 90u: goto L_08B18AE8;
    case 91u: goto L_08B18B00;
    case 92u: goto L_08B18B14;
    case 93u: goto L_08B18B20;
    case 94u: goto L_08B18B2C;
    case 95u: goto L_08B18B30;
    case 96u: goto L_08B18B38;
    case 97u: goto L_08B18B44;
    case 98u: goto L_08B18B50;
    case 99u: goto L_08B18B5C;
    case 100u: goto L_08B18B68;
    case 101u: goto L_08B18B70;
    case 102u: goto L_08B18B7C;
    case 103u: goto L_08B18B80;
    case 104u: goto L_08B18B90;
    case 105u: goto L_08B18BA4;
    case 106u: goto L_08B18BC0;
    case 107u: goto L_08B18BE0;
    case 108u: goto L_08B18BFC;
    case 109u: goto L_08B18C1C;
    case 110u: goto L_08B18C3C;
    case 111u: goto L_08B18C40;
    case 112u: goto L_08B18C50;
    case 113u: goto L_08B18C60;
    case 114u: goto L_08B18C74;
    case 115u: goto L_08B18C90;
    case 116u: goto L_08B18CAC;
    case 117u: goto L_08B18CD4;
    case 118u: goto L_08B18CE0;
    case 119u: goto L_08B18CEC;
    case 120u: goto L_08B18CF4;
    case 121u: goto L_08B18D00;
    case 122u: goto L_08B18D04;
    case 123u: goto L_08B18D10;
    case 124u: goto L_08B18D1C;
    case 125u: goto L_08B18D28;
    case 126u: goto L_08B18D60;
    case 127u: goto L_08B18D70;
    case 128u: goto L_08B18D78;
    case 129u: goto L_08B18D80;
    case 130u: goto L_08B18D88;
    case 131u: goto L_08B18D90;
    case 132u: goto L_08B18D98;
    case 133u: goto L_08B18DA0;
    case 134u: goto L_08B18DA8;
    case 135u: goto L_08B18DB0;
    case 136u: goto L_08B18DB8;
    case 137u: goto L_08B18DC0;
    case 138u: goto L_08B18DC8;
    case 139u: goto L_08B18DD0;
    case 140u: goto L_08B18DD8;
    case 141u: goto L_08B18DE0;
    case 142u: goto L_08B18DE8;
    case 143u: goto L_08B18DF0;
    case 144u: goto L_08B18DF8;
    case 145u: goto L_08B18E00;
    case 146u: goto L_08B18E08;
    case 147u: goto L_08B18E10;
    case 148u: goto L_08B18E18;
    case 149u: goto L_08B18E20;
    case 150u: goto L_08B18E28;
    case 151u: goto L_08B18E30;
    case 152u: goto L_08B18E38;
    case 153u: goto L_08B18E40;
    case 154u: goto L_08B18E48;
    case 155u: goto L_08B18E50;
    case 156u: goto L_08B18E58;
    case 157u: goto L_08B18E60;
    case 158u: goto L_08B18E68;
    case 159u: goto L_08B18E70;
    case 160u: goto L_08B18E78;
    case 161u: goto L_08B18E80;
    case 162u: goto L_08B18E88;
    case 163u: goto L_08B18E90;
    case 164u: goto L_08B18E98;
    case 165u: goto L_08B18EA0;
    case 166u: goto L_08B18EA8;
    case 167u: goto L_08B18EB0;
    case 168u: goto L_08B18EB8;
    case 169u: goto L_08B18EC0;
    case 170u: goto L_08B18EC8;
    case 171u: goto L_08B18ED0;
    case 172u: goto L_08B18ED8;
    case 173u: goto L_08B18EE0;
    case 174u: goto L_08B18EE8;
    case 175u: goto L_08B18EF0;
    case 176u: goto L_08B18EF8;
    case 177u: goto L_08B18F00;
    case 178u: goto L_08B18F08;
    case 179u: goto L_08B18F10;
    case 180u: goto L_08B18F18;
    case 181u: goto L_08B18F20;
    case 182u: goto L_08B18F28;
    case 183u: goto L_08B18F30;
    case 184u: goto L_08B18F38;
    case 185u: goto L_08B18F40;
    case 186u: goto L_08B18F48;
    case 187u: goto L_08B18F50;
    case 188u: goto L_08B18F58;
    case 189u: goto L_08B18F60;
    case 190u: goto L_08B18F68;
    case 191u: goto L_08B18F70;
    case 192u: goto L_08B18F98;
    case 193u: goto L_08B18F9C;
    case 194u: goto L_08B18FAC;
    case 195u: goto L_08B18FB4;
    case 196u: goto L_08B18FC0;
    case 197u: goto L_08B18FCC;
    case 198u: goto L_08B18FD8;
    case 199u: goto L_08B18FE8;
    case 200u: goto L_08B18FF4;
    case 201u: goto L_08B19000;
    case 202u: goto L_08B19010;
    case 203u: goto L_08B1901C;
    case 204u: goto L_08B19024;
    case 205u: goto L_08B19030;
    case 206u: goto L_08B19038;
    case 207u: goto L_08B19040;
    case 208u: goto L_08B1904C;
    case 209u: goto L_08B19050;
    case 210u: goto L_08B1905C;
    case 211u: goto L_08B19068;
    case 212u: goto L_08B19074;
    case 213u: goto L_08B19080;
    case 214u: goto L_08B1908C;
    case 215u: goto L_08B19094;
    case 216u: goto L_08B190A0;
    case 217u: goto L_08B190AC;
    case 218u: goto L_08B190B8;
    case 219u: goto L_08B190C0;
    case 220u: goto L_08B190C8;
    case 221u: goto L_08B190D0;
    case 222u: goto L_08B190D8;
    case 223u: goto L_08B190E0;
    case 224u: goto L_08B190EC;
    case 225u: goto L_08B190FC;
    case 226u: goto L_08B1910C;
    case 227u: goto L_08B1911C;
    case 228u: goto L_08B1912C;
    case 229u: goto L_08B19138;
    case 230u: goto L_08B19144;
    case 231u: goto L_08B19150;
    case 232u: goto L_08B19160;
    case 233u: goto L_08B19170;
    case 234u: goto L_08B1917C;
    case 235u: goto L_08B19188;
    case 236u: goto L_08B19198;
    case 237u: goto L_08B191A4;
    case 238u: goto L_08B191B4;
    case 239u: goto L_08B191BC;
    case 240u: goto L_08B191CC;
    case 241u: goto L_08B191D4;
    case 242u: goto L_08B191D8;
    case 243u: goto L_08B191E8;
    case 244u: goto L_08B191F0;
    case 245u: goto L_08B191F8;
    case 246u: goto L_08B19208;
    case 247u: goto L_08B19218;
    case 248u: goto L_08B19224;
    case 249u: goto L_08B19230;
    case 250u: goto L_08B1923C;
    case 251u: goto L_08B19248;
    case 252u: goto L_08B19254;
    case 253u: goto L_08B19260;
    case 254u: goto L_08B1926C;
    case 255u: goto L_08B19278;
    case 256u: goto L_08B19290;
    case 257u: goto L_08B192D0;
    case 258u: goto L_08B192D8;
    case 259u: goto L_08B192E0;
    case 260u: goto L_08B192E8;
    case 261u: goto L_08B192F0;
    case 262u: goto L_08B192F8;
    case 263u: goto L_08B19300;
    case 264u: goto L_08B19308;
    case 265u: goto L_08B19310;
    case 266u: goto L_08B19318;
    case 267u: goto L_08B19320;
    case 268u: goto L_08B19328;
    case 269u: goto L_08B19330;
    case 270u: goto L_08B19338;
    case 271u: goto L_08B19340;
    case 272u: goto L_08B19348;
    case 273u: goto L_08B19350;
    case 274u: goto L_08B19358;
    case 275u: goto L_08B19360;
    case 276u: goto L_08B19368;
    case 277u: goto L_08B19370;
    case 278u: goto L_08B19378;
    case 279u: goto L_08B19380;
    case 280u: goto L_08B19388;
    case 281u: goto L_08B19390;
    case 282u: goto L_08B19398;
    case 283u: goto L_08B193A0;
    case 284u: goto L_08B193A8;
    case 285u: goto L_08B193B0;
    case 286u: goto L_08B193B8;
    case 287u: goto L_08B193C0;
    case 288u: goto L_08B193C8;
    case 289u: goto L_08B193D0;
    case 290u: goto L_08B193D8;
    case 291u: goto L_08B193E0;
    case 292u: goto L_08B193E8;
    case 293u: goto L_08B193F0;
    case 294u: goto L_08B193F8;
    case 295u: goto L_08B19400;
    case 296u: goto L_08B19408;
    case 297u: goto L_08B19410;
    case 298u: goto L_08B19418;
    case 299u: goto L_08B19420;
    case 300u: goto L_08B19428;
    case 301u: goto L_08B19430;
    case 302u: goto L_08B19558;
    case 303u: goto L_08B19568;
    case 304u: goto L_08B19580;
    case 305u: goto L_08B19598;
    case 306u: goto L_08B195C8;
    case 307u: goto L_08B195E0;
    case 308u: goto L_08B19628;
    case 309u: goto L_08B19630;
    case 310u: goto L_08B19648;
    case 311u: goto L_08B19664;
    case 312u: goto L_08B19674;
    case 313u: goto L_08B1967C;
    case 314u: goto L_08B1968C;
    case 315u: goto L_08B19698;
    case 316u: goto L_08B196A8;
    case 317u: goto L_08B196B0;
    case 318u: goto L_08B196D0;
    case 319u: goto L_08B196E0;
    case 320u: goto L_08B196E8;
    case 321u: goto L_08B196FC;
    case 322u: goto L_08B19708;
    case 323u: goto L_08B19718;
    case 324u: goto L_08B19720;
    case 325u: goto L_08B1972C;
    case 326u: goto L_08B19740;
    case 327u: goto L_08B19750;
    case 328u: goto L_08B19758;
    case 329u: goto L_08B19764;
    case 330u: goto L_08B19778;
    case 331u: goto L_08B19788;
    case 332u: goto L_08B19790;
    case 333u: goto L_08B1979C;
    case 334u: goto L_08B197A8;
    case 335u: goto L_08B197B8;
    case 336u: goto L_08B197C0;
    case 337u: goto L_08B197D4;
    case 338u: goto L_08B197E4;
    case 339u: goto L_08B197EC;
    case 340u: goto L_08B1980C;
    case 341u: goto L_08B1981C;
    case 342u: goto L_08B19824;
    case 343u: goto L_08B19844;
    case 344u: goto L_08B19868;
    case 345u: goto L_08B19878;
    case 346u: goto L_08B19880;
    case 347u: goto L_08B19890;
    case 348u: goto L_08B19898;
    case 349u: goto L_08B198A8;
    case 350u: goto L_08B198B0;
    case 351u: goto L_08B198CC;
    case 352u: goto L_08B198DC;
    case 353u: goto L_08B198E4;
    case 354u: goto L_08B198F8;
    case 355u: goto L_08B19904;
    case 356u: goto L_08B19914;
    case 357u: goto L_08B1991C;
    case 358u: goto L_08B19928;
    case 359u: goto L_08B19938;
    case 360u: goto L_08B19948;
    case 361u: goto L_08B19950;
    case 362u: goto L_08B19968;
    case 363u: goto L_08B19978;
    case 364u: goto L_08B19980;
    case 365u: goto L_08B199A0;
    case 366u: goto L_08B199B0;
    case 367u: goto L_08B199B8;
    case 368u: goto L_08B199D4;
    case 369u: goto L_08B199E4;
    case 370u: goto L_08B199EC;
    case 371u: goto L_08B19A00;
    case 372u: goto L_08B19A10;
    case 373u: goto L_08B19A18;
    case 374u: goto L_08B19A24;
    case 375u: goto L_08B19A34;
    case 376u: goto L_08B19A44;
    case 377u: goto L_08B19A4C;
    case 378u: goto L_08B19A58;
    case 379u: goto L_08B19A60;
    case 380u: goto L_08B19A70;
    case 381u: goto L_08B19A78;
    case 382u: goto L_08B19A88;
    case 383u: goto L_08B19A98;
    case 384u: goto L_08B19AA0;
    case 385u: goto L_08B19ABC;
    case 386u: goto L_08B19AE0;
    case 387u: goto L_08B19B08;
    case 388u: goto L_08B19B14;
    case 389u: goto L_08B19B24;
    case 390u: goto L_08B19B30;
    case 391u: goto L_08B19B3C;
    case 392u: goto L_08B19B54;
    case 393u: goto L_08B19B68;
    case 394u: goto L_08B19B70;
    case 395u: goto L_08B19B78;
    case 396u: goto L_08B19B80;
    case 397u: goto L_08B19B90;
    case 398u: goto L_08B19B98;
    case 399u: goto L_08B19BA0;
    case 400u: goto L_08B19BA8;
    case 401u: goto L_08B19BB4;
    case 402u: goto L_08B19BBC;
    case 403u: goto L_08B19BC0;
    case 404u: goto L_08B19BC8;
    case 405u: goto L_08B19BCC;
    case 406u: goto L_08B19BDC;
    case 407u: goto L_08B19BF0;
    case 408u: goto L_08B19C00;
    case 409u: goto L_08B19C14;
    case 410u: goto L_08B19C24;
    case 411u: goto L_08B19C3C;
    case 412u: goto L_08B19C4C;
    case 413u: goto L_08B19C64;
    case 414u: goto L_08B19C74;
    case 415u: goto L_08B19C80;
    case 416u: goto L_08B19C90;
    case 417u: goto L_08B19CA4;
    case 418u: goto L_08B19CB4;
    case 419u: goto L_08B19CC8;
    case 420u: goto L_08B19CD4;
    case 421u: goto L_08B19CEC;
    case 422u: goto L_08B19CFC;
    case 423u: goto L_08B19D08;
    case 424u: goto L_08B19D20;
    case 425u: goto L_08B19D30;
    case 426u: goto L_08B19D3C;
    case 427u: goto L_08B19D54;
    case 428u: goto L_08B19D68;
    case 429u: goto L_08B19D74;
    case 430u: goto L_08B19D8C;
    case 431u: goto L_08B19DA0;
    case 432u: goto L_08B19DAC;
    case 433u: goto L_08B19DC4;
    case 434u: goto L_08B19DD0;
    case 435u: goto L_08B19DDC;
    case 436u: goto L_08B19DF4;
    case 437u: goto L_08B19E04;
    case 438u: goto L_08B19E10;
    case 439u: goto L_08B19E28;
    case 440u: goto L_08B19E80;
    case 441u: goto L_08B19EAC;
    case 442u: goto L_08B19EE8;
    case 443u: goto L_08B19EF0;
    case 444u: goto L_08B19EF8;
    case 445u: goto L_08B19F00;
    case 446u: goto L_08B19F10;
    case 447u: goto L_08B19F38;
    case 448u: goto L_08B19F6C;
    case 449u: goto L_08B1A050;
    case 450u: goto L_08B1A058;
    case 451u: goto L_08B1A064;
    case 452u: goto L_08B1A06C;
    case 453u: goto L_08B1A08C;
    case 454u: goto L_08B1A09C;
    case 455u: goto L_08B1A0C4;
    case 456u: goto L_08B1A0D0;
    case 457u: goto L_08B1A0DC;
    case 458u: goto L_08B1A290;
    case 459u: goto L_08B1A2A8;
    case 460u: goto L_08B1A2AC;
    case 461u: goto L_08B1A2D0;
    case 462u: goto L_08B1A2EC;
    case 463u: goto L_08B1A304;
    case 464u: goto L_08B1A318;
    case 465u: goto L_08B1A32C;
    case 466u: goto L_08B1A364;
    case 467u: goto L_08B1A374;
    case 468u: goto L_08B1A3B8;
    case 469u: goto L_08B1A3F4;
    case 470u: goto L_08B1A424;
    case 471u: goto L_08B1A444;
    case 472u: goto L_08B1A44C;
    case 473u: goto L_08B1A484;
    case 474u: goto L_08B1A4C0;
    case 475u: goto L_08B1A504;
    case 476u: goto L_08B1A53C;
    case 477u: goto L_08B1A558;
    case 478u: goto L_08B1A570;
    case 479u: goto L_08B1A5A4;
    case 480u: goto L_08B1A5D0;
    case 481u: goto L_08B1A5DC;
    case 482u: goto L_08B1A5E4;
    case 483u: goto L_08B1A5F0;
    case 484u: goto L_08B1A5F4;
    case 485u: goto L_08B1A5F8;
    case 486u: goto L_08B1A600;
    case 487u: goto L_08B1A60C;
    case 488u: goto L_08B1A61C;
    case 489u: goto L_08B1A62C;
    case 490u: goto L_08B1A63C;
    case 491u: goto L_08B1A644;
    case 492u: goto L_08B1A64C;
    case 493u: goto L_08B1A658;
    case 494u: goto L_08B1A660;
    case 495u: goto L_08B1A66C;
    case 496u: goto L_08B1A670;
    case 497u: goto L_08B1A678;
    case 498u: goto L_08B1A67C;
    case 499u: goto L_08B1A684;
    case 500u: goto L_08B1A68C;
    case 501u: goto L_08B1A698;
    case 502u: goto L_08B1A6A8;
    case 503u: goto L_08B1A6B8;
    case 504u: goto L_08B1A6CC;
    case 505u: goto L_08B1A6D4;
    case 506u: goto L_08B1A710;
    case 507u: goto L_08B1A718;
    case 508u: goto L_08B1A728;
    case 509u: goto L_08B1A730;
    case 510u: goto L_08B1A738;
    case 511u: goto L_08B1A740;
    case 512u: goto L_08B1A748;
    case 513u: goto L_08B1A750;
    case 514u: goto L_08B1A758;
    case 515u: goto L_08B1A764;
    case 516u: goto L_08B1A770;
    case 517u: goto L_08B1A778;
    case 518u: goto L_08B1A780;
    case 519u: goto L_08B1A784;
    case 520u: goto L_08B1A78C;
    case 521u: goto L_08B1A794;
    case 522u: goto L_08B1A79C;
    case 523u: goto L_08B1A7A4;
    case 524u: goto L_08B1A7B0;
    case 525u: goto L_08B1A7B8;
    case 526u: goto L_08B1A7C4;
    case 527u: goto L_08B1A7CC;
    case 528u: goto L_08B1A7D4;
    case 529u: goto L_08B1A7E0;
    case 530u: goto L_08B1A7EC;
    case 531u: goto L_08B1A7F4;
    case 532u: goto L_08B1A800;
    case 533u: goto L_08B1A808;
    case 534u: goto L_08B1A814;
    case 535u: goto L_08B1A81C;
    case 536u: goto L_08B1A828;
    case 537u: goto L_08B1A830;
    case 538u: goto L_08B1A838;
    case 539u: goto L_08B1A844;
    case 540u: goto L_08B1A850;
    case 541u: goto L_08B1A854;
    case 542u: goto L_08B1A85C;
    case 543u: goto L_08B1A864;
    case 544u: goto L_08B1A870;
    case 545u: goto L_08B1A87C;
    case 546u: goto L_08B1A888;
    case 547u: goto L_08B1A898;
    case 548u: goto L_08B1A8A4;
    case 549u: goto L_08B1A8B4;
    case 550u: goto L_08B1A8BC;
    case 551u: goto L_08B1A8C4;
    case 552u: goto L_08B1A8CC;
    case 553u: goto L_08B1A8D4;
    case 554u: goto L_08B1A8DC;
    case 555u: goto L_08B1A8E4;
    case 556u: goto L_08B1A8E8;
    case 557u: goto L_08B1A8F0;
    case 558u: goto L_08B1A8F4;
    case 559u: goto L_08B1A8F8;
    case 560u: goto L_08B1A900;
    case 561u: goto L_08B1A908;
    case 562u: goto L_08B1A910;
    case 563u: goto L_08B1A918;
    case 564u: goto L_08B1A924;
    case 565u: goto L_08B1A930;
    case 566u: goto L_08B1A938;
    case 567u: goto L_08B1A940;
    case 568u: goto L_08B1A944;
    case 569u: goto L_08B1A94C;
    case 570u: goto L_08B1A954;
    case 571u: goto L_08B1A960;
    case 572u: goto L_08B1A968;
    case 573u: goto L_08B1A970;
    case 574u: goto L_08B1A978;
    case 575u: goto L_08B1A980;
    case 576u: goto L_08B1A98C;
    case 577u: goto L_08B1A994;
    case 578u: goto L_08B1A998;
    case 579u: goto L_08B1A9A8;
    case 580u: goto L_08B1A9B0;
    case 581u: goto L_08B1A9B8;
    case 582u: goto L_08B1A9C0;
    case 583u: goto L_08B1A9C8;
    case 584u: goto L_08B1A9D4;
    case 585u: goto L_08B1A9DC;
    case 586u: goto L_08B1A9E0;
    case 587u: goto L_08B1A9E8;
    case 588u: goto L_08B1A9EC;
    case 589u: goto L_08B1A9F4;
    case 590u: goto L_08B1A9F8;
    case 591u: goto L_08B1AA04;
    case 592u: goto L_08B1AA10;
    case 593u: goto L_08B1AA18;
    case 594u: goto L_08B1AA24;
    case 595u: goto L_08B1AA30;
    case 596u: goto L_08B1AA3C;
    case 597u: goto L_08B1AA48;
    case 598u: goto L_08B1AA54;
    case 599u: goto L_08B1AA64;
    case 600u: goto L_08B1AA74;
    case 601u: goto L_08B1AA7C;
    case 602u: goto L_08B1AA88;
    case 603u: goto L_08B1AA8C;
    case 604u: goto L_08B1AA94;
    case 605u: goto L_08B1AAA8;
    case 606u: goto L_08B1AAAC;
    case 607u: goto L_08B1AAB0;
    case 608u: goto L_08B1AAB4;
    case 609u: goto L_08B1AABC;
    case 610u: goto L_08B1AAC8;
    case 611u: goto L_08B1AAD0;
    case 612u: goto L_08B1AAD8;
    case 613u: goto L_08B1AAE0;
    case 614u: goto L_08B1AAE4;
    case 615u: goto L_08B1AAE8;
    case 616u: goto L_08B1AAF0;
    case 617u: goto L_08B1AAF8;
    case 618u: goto L_08B1AB00;
    case 619u: goto L_08B1AB08;
    case 620u: goto L_08B1AB10;
    case 621u: goto L_08B1AB18;
    case 622u: goto L_08B1AB20;
    case 623u: goto L_08B1AB28;
    case 624u: goto L_08B1AB30;
    case 625u: goto L_08B1AB38;
    case 626u: goto L_08B1AB40;
    case 627u: goto L_08B1AB48;
    case 628u: goto L_08B1AB50;
    case 629u: goto L_08B1AB58;
    case 630u: goto L_08B1AB60;
    case 631u: goto L_08B1AB68;
    case 632u: goto L_08B1AB90;
    case 633u: goto L_08B1ABA0;
    case 634u: goto L_08B1ABAC;
    case 635u: goto L_08B1ABB4;
    case 636u: goto L_08B1ABD4;
    case 637u: goto L_08B1ABDC;
    case 638u: goto L_08B1ABF0;
    case 639u: goto L_08B1AC14;
    case 640u: goto L_08B1AC1C;
    case 641u: goto L_08B1AC30;
    case 642u: goto L_08B1AC4C;
    case 643u: goto L_08B1AC54;
    case 644u: goto L_08B1AC68;
    case 645u: goto L_08B1AC80;
    case 646u: goto L_08B1AC88;
    case 647u: goto L_08B1AC9C;
    case 648u: goto L_08B1ACB8;
    case 649u: goto L_08B1ACCC;
    case 650u: goto L_08B1ACD8;
    case 651u: goto L_08B1ACF0;
    case 652u: goto L_08B1AD10;
    case 653u: goto L_08B1AEE4;
    case 654u: goto L_08B1B040;
    case 655u: goto L_08B1B050;
    case 656u: goto L_08B1B058;
    case 657u: goto L_08B1B064;
    case 658u: goto L_08B1B06C;
    case 659u: goto L_08B1B080;
    case 660u: goto L_08B1B09C;
    case 661u: goto L_08B1B0B0;
    case 662u: goto L_08B1B0B4;
    case 663u: goto L_08B1B0C8;
    case 664u: goto L_08B1B0CC;
    case 665u: goto L_08B1B0DC;
    case 666u: goto L_08B1B0EC;
    case 667u: goto L_08B1B0F4;
    case 668u: goto L_08B1B104;
    case 669u: goto L_08B1B11C;
    case 670u: goto L_08B1B134;
    case 671u: goto L_08B1B154;
    case 672u: goto L_08B1B180;
    case 673u: goto L_08B1B1A0;
    case 674u: goto L_08B1B1E8;
    case 675u: goto L_08B1B210;
    case 676u: goto L_08B1B224;
    case 677u: goto L_08B1B228;
    case 678u: goto L_08B1B238;
    case 679u: goto L_08B1B24C;
    case 680u: goto L_08B1B264;
    case 681u: goto L_08B1B27C;
    case 682u: goto L_08B1B28C;
    case 683u: goto L_08B1B29C;
    case 684u: goto L_08B1B2A8;
    case 685u: goto L_08B1B2AC;
    case 686u: goto L_08B1B2BC;
    case 687u: goto L_08B1B2C0;
    case 688u: goto L_08B1B2C8;
    case 689u: goto L_08B1B2D0;
    case 690u: goto L_08B1B2D8;
    case 691u: goto L_08B1B2E8;
    case 692u: goto L_08B1B2F4;
    case 693u: goto L_08B1B2F8;
    case 694u: goto L_08B1B308;
    case 695u: goto L_08B1B30C;
    case 696u: goto L_08B1B314;
    case 697u: goto L_08B1B320;
    case 698u: goto L_08B1B32C;
    case 699u: goto L_08B1B338;
    case 700u: goto L_08B1B340;
    case 701u: goto L_08B1B358;
    case 702u: goto L_08B1B36C;
    case 703u: goto L_08B1B370;
    case 704u: goto L_08B1B380;
    case 705u: goto L_08B1B390;
    case 706u: goto L_08B1B398;
    case 707u: goto L_08B1B3D8;
    case 708u: goto L_08B1B3F8;
    case 709u: goto L_08B1B41C;
    case 710u: goto L_08B1B428;
    case 711u: goto L_08B1B434;
    case 712u: goto L_08B1B440;
    case 713u: goto L_08B1B44C;
    case 714u: goto L_08B1B454;
    case 715u: goto L_08B1B45C;
    case 716u: goto L_08B1B468;
    case 717u: goto L_08B1B470;
    case 718u: goto L_08B1B480;
    case 719u: goto L_08B1B488;
    case 720u: goto L_08B1B490;
    case 721u: goto L_08B1B49C;
    case 722u: goto L_08B1B4A8;
    case 723u: goto L_08B1B4B0;
    case 724u: goto L_08B1B4C0;
    case 725u: goto L_08B1B4D0;
    case 726u: goto L_08B1B4DC;
    case 727u: goto L_08B1B4E8;
    case 728u: goto L_08B1B4F0;
    case 729u: goto L_08B1B500;
    case 730u: goto L_08B1B50C;
    case 731u: goto L_08B1B518;
    case 732u: goto L_08B1B520;
    case 733u: goto L_08B1B52C;
    case 734u: goto L_08B1B538;
    case 735u: goto L_08B1B548;
    case 736u: goto L_08B1B550;
    case 737u: goto L_08B1B55C;
    case 738u: goto L_08B1B858;
    case 739u: goto L_08B1B898;
    case 740u: goto L_08B1B8A0;
    case 741u: goto L_08B1B8B8;
    case 742u: goto L_08B1B8DC;
    case 743u: goto L_08B1B8E8;
    case 744u: goto L_08B1B8EC;
    case 745u: goto L_08B1B8F4;
    case 746u: goto L_08B1B8FC;
    case 747u: goto L_08B1B904;
    case 748u: goto L_08B1B90C;
    case 749u: goto L_08B1B914;
    case 750u: goto L_08B1B91C;
    case 751u: goto L_08B1B924;
    case 752u: goto L_08B1B92C;
    case 753u: goto L_08B1B934;
    case 754u: goto L_08B1B93C;
    case 755u: goto L_08B1B944;
    case 756u: goto L_08B1B94C;
    case 757u: goto L_08B1B954;
    case 758u: goto L_08B1B95C;
    case 759u: goto L_08B1B964;
    case 760u: goto L_08B1B96C;
    case 761u: goto L_08B1B974;
    case 762u: goto L_08B1B97C;
    case 763u: goto L_08B1B984;
    case 764u: goto L_08B1B98C;
    case 765u: goto L_08B1B994;
    case 766u: goto L_08B1B99C;
    case 767u: goto L_08B1B9A4;
    case 768u: goto L_08B1B9B4;
    case 769u: goto L_08B1B9CC;
    case 770u: goto L_08B1B9F8;
    case 771u: goto L_08B1BA1C;
    case 772u: goto L_08B1BA24;
    case 773u: goto L_08B1BA2C;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B18000:
    rt.unsupported(0x08B18000u, 0x6E696D61u, "vfpu3 not lowered yet"); return;
L_08B18024:
    ctx.execute_vfpu_vcmp_ct<111u, 108u, 1u, 0u>();
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    rt.unsupported(0x08B1802Cu, 0x6E696D61u, "vfpu3 not lowered yet"); return;
L_08B18040:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<85u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<109u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<99u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    ctx.gpr[26] = (ctx.gpr[17] ^ 28001u);
    rt.unsupported(0x08B1804Cu, 0x75716341u, "unknown not lowered yet"); return;
L_08B18064:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<85u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<109u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<99u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    ctx.gpr[26] = (ctx.gpr[17] ^ 28001u);
    ctx.execute_vfpu_vscl_ct<82u, 101u, 108u, 1u>();
    rt.unsupported(0x08B18074u, 0x4C657361u, "unknown not lowered yet"); return;
L_08B18098:
    rt.unsupported(0x08B18098u, 0x43534944u, "unknown not lowered yet"); return;
L_08B180A4:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B180A8u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B180ACu, 0x4D2F5249u, "unknown not lowered yet"); return;
L_08B180C0:
    // nop
    goto L_08B180C4;
L_08B180C4:
    rt.unsupported(0x08B180C4u, 0x43534944u, "unknown not lowered yet"); return;
L_08B180D0:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B180D4u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B180D8u, 0x4D2F5249u, "unknown not lowered yet"); return;
L_08B180EC:
    // nop
    goto L_08B180F0;
L_08B180F0:
    rt.unsupported(0x08B180F0u, 0x43534944u, "unknown not lowered yet"); return;
L_08B180FC:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B18100u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B18104u, 0x4D2F5249u, "unknown not lowered yet"); return;
L_08B18118:
    // nop
    goto L_08B1811C;
L_08B1811C:
    rt.unsupported(0x08B1811Cu, 0x43534944u, "unknown not lowered yet"); return;
L_08B18128:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B1812Cu, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B18130u, 0x4D2F5249u, "unknown not lowered yet"); return;
L_08B18144:
    // nop
    goto L_08B18148;
L_08B18148:
    rt.unsupported(0x08B18148u, 0x43534944u, "unknown not lowered yet"); return;
L_08B18154:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B18158u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1815Cu, 0x4D2F5249u, "unknown not lowered yet"); return;
L_08B1816C:
    if (static_cast<std::int32_t>(ctx.gpr[18]) <= 0) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 295u, 0x08B2B228u>(ctx, &aot_mem); return;
    }
    goto L_08B18174;
L_08B18174:
    rt.unsupported(0x08B18174u, 0x43534944u, "unknown not lowered yet"); return;
L_08B18180:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B18184u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B18188u, 0x4D2F5249u, "unknown not lowered yet"); return;
L_08B18198:
    rt.unsupported(0x08B18198u, 0x474D492Eu, "cop1? not lowered yet"); return;
L_08B181A0:
    rt.unsupported(0x08B181A0u, 0x43534944u, "unknown not lowered yet"); return;
L_08B181AC:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B181B0u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B181B4u, 0x4D2F5249u, "unknown not lowered yet"); return;
L_08B181CC:
    rt.unsupported(0x08B181CCu, 0x43534944u, "unknown not lowered yet"); return;
L_08B181D8:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B181DCu, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B181E0u, 0x4D2F5249u, "unknown not lowered yet"); return;
L_08B181F8:
    rt.unsupported(0x08B181F8u, 0x45524C41u, "cop1? not lowered yet"); return;
L_08B18208:
    rt.unsupported(0x08B18208u, 0x45534552u, "cop1? not lowered yet"); return;
L_08B18218:
    rt.unsupported(0x08B18218u, 0x45524C41u, "cop1? not lowered yet"); return;
L_08B18234:
    rt.unsupported(0x08B18234u, 0x74696177u, "unknown not lowered yet"); return;
L_08B18248:
    rt.unsupported(0x08B18248u, 0x000A6B6Fu, "special? not lowered yet"); return;
L_08B1824C:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B18250u, 0x4D414552u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 987u, 0x08B23704u>(ctx, &aot_mem); return;
    }
    goto L_08B18254;
L_08B18254:
    rt.unsupported(0x08B18254u, 0x20474E49u, "unknown not lowered yet"); return;
L_08B18264:
    ctx.gpr[13] = (ctx.gpr[9] < static_cast<std::uint32_t>(26917) ? 1u : 0u);
    if (0u == 0u) (void)(0u);
    goto L_08B1826C;
L_08B1826C:
    rt.unsupported(0x08B1826Cu, 0x45524C41u, "cop1? not lowered yet"); return;
L_08B18284:
    ctx.execute_vfpu_compare3(114u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B18288u, 0x676E6976u, "vfpu1 not lowered yet"); return;
L_08B18294:
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    rt.unsupported(0x08B18298u, 0x6E696D61u, "vfpu3 not lowered yet"); return;
L_08B18300:
    ctx.gpr[5] = (ctx.gpr[1] & 25705u);
    rt.unsupported(0x08B18304u, 0x00006932u, "special? not lowered yet"); return;
L_08B18308:
    rt.unsupported(0x08B18308u, 0x736F6C63u, "unknown not lowered yet"); return;
L_08B1832C:
    rt.unsupported(0x08B1832Cu, 0x202A2A2Au, "unknown not lowered yet"); return;
L_08B1833C:
    rt.unsupported(0x08B1833Cu, 0x4C434948u, "unknown not lowered yet"); return;
L_08B1834C:
    rt.unsupported(0x08B1834Cu, 0x202A2A2Au, "unknown not lowered yet"); return;
L_08B18368:
    rt.unsupported(0x08B18368u, 0x202A2A2Au, "unknown not lowered yet"); return;
L_08B18378:
    rt.unsupported(0x08B18378u, 0x69252044u, "unknown not lowered yet"); return;
L_08B18384:
    rt.unsupported(0x08B18384u, 0x202A2A2Au, "unknown not lowered yet"); return;
L_08B1839C:
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(9766));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(9766));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(9766));
    ctx.execute_vfpu_vscl_ct<38u, 67u, 114u, 1u>();
    rt.unsupported(0x08B183ACu, 0x6E697461u, "vfpu3 not lowered yet"); return;
L_08B183C0:
    rt.unsupported(0x08B183C0u, 0x79616C70u, "unknown not lowered yet"); return;
L_08B183C8:
    ctx.execute_vfpu_vscl_ct<67u, 84u, 104u, 1u>();
    rt.unsupported(0x08B183CCu, 0x69726353u, "unknown not lowered yet"); return;
L_08B183DC:
    rt.unsupported(0x08B183DCu, 0x41544144u, "unknown not lowered yet"); return;
L_08B183E4:
    rt.unsupported(0x08B183E4u, 0x6E69616Du, "vfpu3 not lowered yet"); return;
L_08B183F0:
    rt.unsupported(0x08B183F0u, 0x00006272u, "special? not lowered yet"); return;
L_08B183F4:
    rt.unsupported(0x08B183F4u, 0x69726353u, "unknown not lowered yet"); return;
L_08B18400:
    // nop
    goto L_08B18404;
L_08B18404:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    rt.unsupported(0x08B18408u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08B18918:
    ctx.execute_vfpu_compare3(82u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B1891Cu, 0x00006576u, "special? not lowered yet"); return;
L_08B18920:
    rt.unsupported(0x08B18920u, 0x63675F5Fu, "vfpu0 not lowered yet"); return;
L_08B18928:
    if (ctx.gpr[27] == ctx.gpr[4]) {
    rt.unsupported(0x08B1892Cu, 0x74697270u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 231u, 0x08B31A30u>(ctx, &aot_mem); return;
    }
    goto L_08B18930;
L_08B18930:
    rt.unsupported(0x08B18930u, 0x696C4265u, "unknown not lowered yet"); return;
L_08B18944:
    // nop
    goto L_08B18948;
L_08B18948:
    rt.unsupported(0x08B18948u, 0x42646441u, "unknown not lowered yet"); return;
L_08B18958:
    rt.unsupported(0x08B18958u, 0x61647055u, "vfpu0 not lowered yet"); return;
L_08B18968:
    ctx.execute_vfpu_compare3(82u, 101u, 109u, 1u, 6u);
    ctx.execute_vfpu_vcmp_ct<101u, 66u, 1u, 6u>();
    rt.unsupported(0x08B18970u, 0x00007069u, "special? not lowered yet"); return;
L_08B18974:
    rt.unsupported(0x08B18974u, 0x4C646441u, "unknown not lowered yet"); return;
L_08B1898C:
    ctx.execute_vfpu_compare3(82u, 101u, 109u, 1u, 6u);
    ctx.execute_vfpu_compare3(118u, 101u, 76u, 1u, 6u);
    if (ctx.gpr[19] == ctx.gpr[12]) {
    rt.unsupported(0x08B18998u, 0x72616461u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 95u, 0x08B30F24u>(ctx, &aot_mem); return;
    }
    goto L_08B1899C;
L_08B1899C:
    rt.unsupported(0x08B1899Cu, 0x70696C42u, "unknown not lowered yet"); return;
L_08B189A4:
    rt.unsupported(0x08B189A4u, 0x42746553u, "unknown not lowered yet"); return;
L_08B189B0:
    ctx.execute_vfpu_compare3(108u, 101u, 70u, 1u, 6u);
    rt.unsupported(0x08B189B4u, 0x616C5072u, "vfpu0 not lowered yet"); return;
L_08B189C0:
    // nop
    goto L_08B189C4;
L_08B189C4:
    rt.unsupported(0x08B189C4u, 0x77617244u, "unknown not lowered yet"); return;
L_08B189D0:
    rt.unsupported(0x08B189D0u, 0x77617244u, "unknown not lowered yet"); return;
L_08B189DC:
    if (ctx.gpr[19] == ctx.gpr[20]) {
    rt.unsupported(0x08B189E0u, 0x72616461u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 268u, 0x08B31F2Cu>(ctx, &aot_mem); return;
    }
    goto L_08B189E4;
L_08B189E4:
    rt.unsupported(0x08B189E4u, 0x70696C42u, "unknown not lowered yet"); return;
L_08B189F0:
    rt.unsupported(0x08B189F0u, 0x776F6853u, "unknown not lowered yet"); return;
L_08B18A04:
    rt.unsupported(0x08B18A04u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18A10:
    rt.unsupported(0x08B18A10u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08B18A20:
    rt.unsupported(0x08B18A20u, 0x69686556u, "unknown not lowered yet"); return;
L_08B18A34:
    rt.unsupported(0x08B18A34u, 0x69686556u, "unknown not lowered yet"); return;
L_08B18A40:
    rt.unsupported(0x08B18A40u, 0x4D643365u, "unknown not lowered yet"); return;
L_08B18A4C:
    rt.unsupported(0x08B18A4Cu, 0x69686556u, "unknown not lowered yet"); return;
L_08B18A58:
    rt.unsupported(0x08B18A58u, 0x006E6F69u, "special? not lowered yet"); return;
L_08B18A5C:
    rt.unsupported(0x08B18A5Cu, 0x69686556u, "unknown not lowered yet"); return;
L_08B18A6C:
    rt.unsupported(0x08B18A6Cu, 0x69686556u, "unknown not lowered yet"); return;
L_08B18A78:
    rt.unsupported(0x08B18A78u, 0x68746C61u, "unknown not lowered yet"); return;
L_08B18A80:
    rt.unsupported(0x08B18A80u, 0x69686556u, "unknown not lowered yet"); return;
L_08B18A8C:
    rt.unsupported(0x08B18A8Cu, 0x69746973u, "unknown not lowered yet"); return;
L_08B18A94:
    rt.unsupported(0x08B18A94u, 0x69686556u, "unknown not lowered yet"); return;
L_08B18AAC:
    rt.unsupported(0x08B18AACu, 0x69686556u, "unknown not lowered yet"); return;
L_08B18AC4:
    rt.unsupported(0x08B18AC4u, 0x69686556u, "unknown not lowered yet"); return;
L_08B18ADC:
    rt.unsupported(0x08B18ADCu, 0x69686556u, "unknown not lowered yet"); return;
L_08B18AE8:
    rt.unsupported(0x08B18AE8u, 0x746E6563u, "unknown not lowered yet"); return;
L_08B18B00:
    rt.unsupported(0x08B18B00u, 0x69686556u, "unknown not lowered yet"); return;
L_08B18B14:
    rt.unsupported(0x08B18B14u, 0x69686556u, "unknown not lowered yet"); return;
L_08B18B20:
    ctx.execute_vfpu_vscl_ct<101u, 114u, 103u, 1u>();
    if (ctx.gpr[27] == ctx.gpr[25]) {
    rt.unsupported(0x08B18B28u, 0x00706F74u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 223u, 0x08B318E0u>(ctx, &aot_mem); return;
    }
    goto L_08B18B2C;
L_08B18B2C:
    rt.unsupported(0x08B18B2Cu, 0x69686556u, "unknown not lowered yet"); return;
L_08B18B30:
    if (ctx.gpr[27] == ctx.gpr[5]) {
    rt.unsupported(0x08B18B34u, 0x61437465u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 407u, 0x08B33CC0u>(ctx, &aot_mem); return;
    }
    goto L_08B18B38;
L_08B18B38:
    ctx.execute_vfpu_compare3(114u, 68u, 111u, 1u, 6u);
    rt.unsupported(0x08B18B3Cu, 0x636F4C72u, "vfpu0 not lowered yet"); return;
L_08B18B44:
    rt.unsupported(0x08B18B44u, 0x69686556u, "unknown not lowered yet"); return;
L_08B18B50:
    rt.unsupported(0x08B18B50u, 0x4E736572u, "unknown not lowered yet"); return;
L_08B18B5C:
    rt.unsupported(0x08B18B5Cu, 0x69686556u, "unknown not lowered yet"); return;
L_08B18B68:
    rt.unsupported(0x08B18B68u, 0x72756F6Cu, "unknown not lowered yet"); return;
L_08B18B70:
    rt.unsupported(0x08B18B70u, 0x69686556u, "unknown not lowered yet"); return;
L_08B18B7C:
    rt.unsupported(0x08B18B7Cu, 0x00000072u, "special? not lowered yet"); return;
L_08B18B80:
    ctx.execute_vfpu_vscl_ct<68u, 101u, 108u, 1u>();
    ctx.execute_vfpu_vscl_ct<116u, 101u, 86u, 1u>();
    ctx.execute_vfpu_vcmp_ct<105u, 99u, 1u, 8u>();
    (void)(0u | 0u);
    goto L_08B18B90;
L_08B18B90:
    ctx.execute_vfpu_vscl_ct<73u, 115u, 86u, 1u>();
    ctx.execute_vfpu_vcmp_ct<105u, 99u, 1u, 8u>();
    ctx.execute_vfpu_vscl_ct<101u, 87u, 114u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<107u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<99u, 1u>(vfpu_d); }
    // nop
    goto L_08B18BA4;
L_08B18BA4:
    rt.unsupported(0x08B18BA4u, 0x69686556u, "unknown not lowered yet"); return;
L_08B18BC0:
    rt.unsupported(0x08B18BC0u, 0x69686556u, "unknown not lowered yet"); return;
L_08B18BE0:
    rt.unsupported(0x08B18BE0u, 0x69686556u, "unknown not lowered yet"); return;
L_08B18BFC:
    rt.unsupported(0x08B18BFCu, 0x69686556u, "unknown not lowered yet"); return;
L_08B18C1C:
    rt.unsupported(0x08B18C1Cu, 0x69686556u, "unknown not lowered yet"); return;
L_08B18C3C:
    rt.unsupported(0x08B18C3Cu, 0x69686556u, "unknown not lowered yet"); return;
L_08B18C40:
    rt.unsupported(0x08B18C40u, 0x41656C63u, "unknown not lowered yet"); return;
L_08B18C50:
    rt.unsupported(0x08B18C50u, 0x696D694Cu, "unknown not lowered yet"); return;
L_08B18C60:
    rt.unsupported(0x08B18C60u, 0x696D694Cu, "unknown not lowered yet"); return;
L_08B18C74:
    rt.unsupported(0x08B18C74u, 0x69686556u, "unknown not lowered yet"); return;
L_08B18C90:
    rt.unsupported(0x08B18C90u, 0x69686556u, "unknown not lowered yet"); return;
L_08B18CAC:
    rt.unsupported(0x08B18CACu, 0x61766E49u, "vfpu0 not lowered yet"); return;
L_08B18CD4:
    rt.unsupported(0x08B18CD4u, 0x4D5E545Eu, "unknown not lowered yet"); return;
L_08B18CE0:
    rt.unsupported(0x08B18CE0u, 0x4C524143u, "unknown not lowered yet"); return;
L_08B18CEC:
    rt.unsupported(0x08B18CECu, 0x44454B43u, "unsupported CFC1 control register"); return;
    // nop
    goto L_08B18CF4;
L_08B18CF4:
    rt.unsupported(0x08B18CF4u, 0x4C524143u, "unknown not lowered yet"); return;
L_08B18D00:
    rt.unsupported(0x08B18D00u, 0x00004445u, "special? not lowered yet"); return;
L_08B18D04:
    rt.unsupported(0x08B18D04u, 0x4C524143u, "unknown not lowered yet"); return;
L_08B18D10:
    rt.unsupported(0x08B18D10u, 0x4F4C5F31u, "unknown not lowered yet"); return;
L_08B18D1C:
    rt.unsupported(0x08B18D1Cu, 0x4C524143u, "unknown not lowered yet"); return;
L_08B18D28:
    rt.unsupported(0x08B18D28u, 0x4F4C5F32u, "unknown not lowered yet"); return;
L_08B18D60:
    ctx.execute_vfpu_vminmax(67u, 68u, 117u, 1u, false);
    rt.unsupported(0x08B18D64u, 0x624F796Du, "vfpu0 not lowered yet"); return;
L_08B18D70:
    rt.unsupported(0x08B18D70u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18D78:
    rt.unsupported(0x08B18D78u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18D80:
    rt.unsupported(0x08B18D80u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18D88:
    rt.unsupported(0x08B18D88u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18D90:
    rt.unsupported(0x08B18D90u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18D98:
    rt.unsupported(0x08B18D98u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18DA0:
    rt.unsupported(0x08B18DA0u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18DA8:
    rt.unsupported(0x08B18DA8u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18DB0:
    rt.unsupported(0x08B18DB0u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18DB8:
    rt.unsupported(0x08B18DB8u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18DC0:
    rt.unsupported(0x08B18DC0u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18DC8:
    rt.unsupported(0x08B18DC8u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18DD0:
    rt.unsupported(0x08B18DD0u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18DD8:
    rt.unsupported(0x08B18DD8u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18DE0:
    rt.unsupported(0x08B18DE0u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18DE8:
    rt.unsupported(0x08B18DE8u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18DF0:
    rt.unsupported(0x08B18DF0u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18DF8:
    rt.unsupported(0x08B18DF8u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E00:
    rt.unsupported(0x08B18E00u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E08:
    rt.unsupported(0x08B18E08u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E10:
    rt.unsupported(0x08B18E10u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E18:
    rt.unsupported(0x08B18E18u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E20:
    rt.unsupported(0x08B18E20u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E28:
    rt.unsupported(0x08B18E28u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E30:
    rt.unsupported(0x08B18E30u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E38:
    rt.unsupported(0x08B18E38u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E40:
    rt.unsupported(0x08B18E40u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E48:
    rt.unsupported(0x08B18E48u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E50:
    rt.unsupported(0x08B18E50u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E58:
    rt.unsupported(0x08B18E58u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E60:
    rt.unsupported(0x08B18E60u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E68:
    rt.unsupported(0x08B18E68u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E70:
    rt.unsupported(0x08B18E70u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E78:
    rt.unsupported(0x08B18E78u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E80:
    rt.unsupported(0x08B18E80u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E88:
    rt.unsupported(0x08B18E88u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E90:
    rt.unsupported(0x08B18E90u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E98:
    rt.unsupported(0x08B18E98u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18EA0:
    rt.unsupported(0x08B18EA0u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18EA8:
    rt.unsupported(0x08B18EA8u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18EB0:
    rt.unsupported(0x08B18EB0u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18EB8:
    rt.unsupported(0x08B18EB8u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18EC0:
    rt.unsupported(0x08B18EC0u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18EC8:
    rt.unsupported(0x08B18EC8u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18ED0:
    rt.unsupported(0x08B18ED0u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18ED8:
    rt.unsupported(0x08B18ED8u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18EE0:
    rt.unsupported(0x08B18EE0u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18EE8:
    rt.unsupported(0x08B18EE8u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18EF0:
    rt.unsupported(0x08B18EF0u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18EF8:
    rt.unsupported(0x08B18EF8u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18F00:
    rt.unsupported(0x08B18F00u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18F08:
    rt.unsupported(0x08B18F08u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18F10:
    rt.unsupported(0x08B18F10u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18F18:
    rt.unsupported(0x08B18F18u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18F20:
    rt.unsupported(0x08B18F20u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18F28:
    rt.unsupported(0x08B18F28u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18F30:
    rt.unsupported(0x08B18F30u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18F38:
    rt.unsupported(0x08B18F38u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18F40:
    rt.unsupported(0x08B18F40u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18F48:
    rt.unsupported(0x08B18F48u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18F50:
    rt.unsupported(0x08B18F50u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18F58:
    rt.unsupported(0x08B18F58u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18F60:
    rt.unsupported(0x08B18F60u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18F68:
    rt.unsupported(0x08B18F68u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18F70:
    rt.unsupported(0x08B18F70u, 0x79646954u, "unknown not lowered yet"); return;
L_08B18F98:
    rt.unsupported(0x08B18F98u, 0x00647568u, "special? not lowered yet"); return;
L_08B18F9C:
    rt.unsupported(0x08B18F9Cu, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18FAC:
    ctx.execute_vfpu_compare3(97u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B18FB0u, 0x00000077u, "special? not lowered yet"); return;
L_08B18FB4:
    rt.unsupported(0x08B18FB4u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18FC0:
    rt.unsupported(0x08B18FC0u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18FCC:
    rt.unsupported(0x08B18FCCu, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18FD8:
    rt.unsupported(0x08B18FD8u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18FE8:
    rt.unsupported(0x08B18FE8u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18FF4:
    rt.unsupported(0x08B18FF4u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B19000:
    rt.unsupported(0x08B19000u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B19010:
    rt.unsupported(0x08B19010u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B1901C:
    ctx.execute_vfpu_vscl_ct<98u, 105u, 107u, 1u>();
    rt.unsupported(0x08B19020u, 0x00007372u, "special? not lowered yet"); return;
L_08B19024:
    rt.unsupported(0x08B19024u, 0x74616F62u, "unknown not lowered yet"); return;
L_08B19030:
    rt.unsupported(0x08B19030u, 0x62756C63u, "vfpu0 not lowered yet"); return;
L_08B19038:
    rt.unsupported(0x08B19038u, 0x61627563u, "vfpu0 not lowered yet"); return;
L_08B19040:
    ctx.execute_vfpu_vminmax(102u, 105u, 108u, 1u, false);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<116u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<117u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    rt.unsupported(0x08B19048u, 0x00006F69u, "special? not lowered yet"); return;
L_08B1904C:
    ctx.gpr[14] = (~(ctx.gpr[3] | ctx.gpr[14]));
    goto L_08B19050;
L_08B19050:
    rt.unsupported(0x08B19050u, 0x74696168u, "unknown not lowered yet"); return;
L_08B1905C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<114u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<104u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<119u, 97u, 114u, 1u>();
    // nop
    goto L_08B19068;
L_08B19068:
    rt.unsupported(0x08B19068u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B19074:
    rt.unsupported(0x08B19074u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B19080:
    rt.unsupported(0x08B19080u, 0x63656369u, "vfpu0 not lowered yet"); return;
L_08B1908C:
    rt.unsupported(0x08B1908Cu, 0x6261636Bu, "vfpu0 not lowered yet"); return;
L_08B19094:
    ctx.execute_vfpu_vscl_ct<108u, 111u, 118u, 1u>();
    rt.unsupported(0x08B19098u, 0x74736966u, "unknown not lowered yet"); return;
L_08B190A0:
    rt.unsupported(0x08B190A0u, 0x6E697270u, "vfpu3 not lowered yet"); return;
L_08B190AC:
    rt.unsupported(0x08B190ACu, 0x706F7270u, "unknown not lowered yet"); return;
L_08B190B8:
    if (static_cast<std::int32_t>(ctx.gpr[11]) <= 0) {
    ctx.gpr[14] = (ctx.gpr[3] + ctx.gpr[4]);
        (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 373u, 0x08B36608u>(ctx, &aot_mem); return;
    }
    goto L_08B190C0;
L_08B190C0:
    rt.unsupported(0x08B190C0u, 0x61727073u, "vfpu0 not lowered yet"); return;
L_08B190C8:
    rt.unsupported(0x08B190C8u, 0x69687374u, "unknown not lowered yet"); return;
L_08B190D0:
    ctx.execute_vfpu_vminmax(116u, 111u, 109u, 1u, false);
    rt.unsupported(0x08B190D4u, 0x00000079u, "special? not lowered yet"); return;
L_08B190D8:
    rt.unsupported(0x08B190D8u, 0x6E6F6870u, "vfpu3 not lowered yet"); return;
L_08B190E0:
    rt.unsupported(0x08B190E0u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B190EC:
    rt.unsupported(0x08B190ECu, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B190FC:
    rt.unsupported(0x08B190FCu, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B1910C:
    rt.unsupported(0x08B1910Cu, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B1911C:
    rt.unsupported(0x08B1911Cu, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B1912C:
    rt.unsupported(0x08B1912Cu, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B19138:
    rt.unsupported(0x08B19138u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B19144:
    rt.unsupported(0x08B19144u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B19150:
    rt.unsupported(0x08B19150u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B19160:
    rt.unsupported(0x08B19160u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B19170:
    rt.unsupported(0x08B19170u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B1917C:
    rt.unsupported(0x08B1917Cu, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B19188:
    rt.unsupported(0x08B19188u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B19198:
    rt.unsupported(0x08B19198u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B191A4:
    rt.unsupported(0x08B191A4u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B191B4:
    rt.unsupported(0x08B191B4u, 0x625F706Du, "vfpu0 not lowered yet"); return;
L_08B191BC:
    rt.unsupported(0x08B191BCu, 0x635F706Du, "vfpu0 not lowered yet"); return;
L_08B191CC:
    rt.unsupported(0x08B191CCu, 0x705F706Du, "unknown not lowered yet"); return;
L_08B191D4:
    rt.unsupported(0x08B191D4u, 0x00000072u, "special? not lowered yet"); return;
L_08B191D8:
    ctx.execute_vfpu_compare3(109u, 112u, 95u, 1u, 6u);
    rt.unsupported(0x08B191DCu, 0x63656A62u, "vfpu0 not lowered yet"); return;
L_08B191E8:
    rt.unsupported(0x08B191E8u, 0x635F706Du, "vfpu0 not lowered yet"); return;
L_08B191F0:
    rt.unsupported(0x08B191F0u, 0x745F706Du, "unknown not lowered yet"); return;
L_08B191F8:
    rt.unsupported(0x08B191F8u, 0x635F706Du, "vfpu0 not lowered yet"); return;
L_08B19208:
    rt.unsupported(0x08B19208u, 0x745F706Du, "unknown not lowered yet"); return;
L_08B19218:
    ctx.execute_vfpu_compare3(97u, 114u, 114u, 1u, 6u);
    ctx.gpr[16] = (ctx.gpr[1] & 24439u);
    // nop
    goto L_08B19224;
L_08B19224:
    ctx.execute_vfpu_compare3(97u, 114u, 114u, 1u, 6u);
    ctx.gpr[16] = (ctx.gpr[9] & 24439u);
    // nop
    goto L_08B19230;
L_08B19230:
    ctx.execute_vfpu_compare3(97u, 114u, 114u, 1u, 6u);
    ctx.gpr[16] = (ctx.gpr[17] & 24439u);
    // nop
    goto L_08B1923C;
L_08B1923C:
    ctx.execute_vfpu_compare3(97u, 114u, 114u, 1u, 6u);
    ctx.gpr[16] = (ctx.gpr[25] & 24439u);
    // nop
    goto L_08B19248;
L_08B19248:
    ctx.execute_vfpu_compare3(97u, 114u, 114u, 1u, 6u);
    ctx.gpr[16] = (ctx.gpr[1] | 24439u);
    // nop
    goto L_08B19254;
L_08B19254:
    ctx.execute_vfpu_compare3(97u, 114u, 114u, 1u, 6u);
    ctx.gpr[16] = (ctx.gpr[9] | 24439u);
    // nop
    goto L_08B19260;
L_08B19260:
    ctx.execute_vfpu_compare3(97u, 114u, 114u, 1u, 6u);
    ctx.gpr[16] = (ctx.gpr[17] | 24439u);
    // nop
    goto L_08B1926C;
L_08B1926C:
    ctx.execute_vfpu_compare3(97u, 114u, 114u, 1u, 6u);
    ctx.gpr[16] = (ctx.gpr[25] | 24439u);
    // nop
    goto L_08B19278;
L_08B19278:
    rt.unsupported(0x08B19278u, 0x20646441u, "unknown not lowered yet"); return;
L_08B19290:
    rt.unsupported(0x08B19290u, 0x4D646441u, "unknown not lowered yet"); return;
L_08B192D0:
    ctx.gpr[31] = (ctx.gpr[2] & 18252u);
    rt.unsupported(0x08B192D4u, 0x00000031u, "special? not lowered yet"); return;
L_08B192D8:
    ctx.gpr[31] = (ctx.gpr[2] & 18252u);
    rt.unsupported(0x08B192DCu, 0x00000032u, "special? not lowered yet"); return;
L_08B192E0:
    ctx.gpr[31] = (ctx.gpr[2] & 18252u);
    rt.unsupported(0x08B192E4u, 0x00000033u, "special? not lowered yet"); return;
L_08B192E8:
    ctx.gpr[31] = (ctx.gpr[2] & 18252u);
    rt.unsupported(0x08B192ECu, 0x00000034u, "special? not lowered yet"); return;
L_08B192F0:
    ctx.gpr[31] = (ctx.gpr[2] & 18252u);
    rt.unsupported(0x08B192F4u, 0x00000035u, "special? not lowered yet"); return;
L_08B192F8:
    ctx.gpr[31] = (ctx.gpr[2] & 18252u);
    rt.unsupported(0x08B192FCu, 0x00000036u, "special? not lowered yet"); return;
L_08B19300:
    ctx.gpr[31] = (ctx.gpr[2] & 18252u);
    rt.unsupported(0x08B19304u, 0x00000037u, "special? not lowered yet"); return;
L_08B19308:
    ctx.gpr[31] = (ctx.gpr[2] & 18252u);
    rt.unsupported(0x08B1930Cu, 0x00000038u, "special? not lowered yet"); return;
L_08B19310:
    ctx.gpr[31] = (ctx.gpr[2] & 18252u);
    rt.unsupported(0x08B19314u, 0x00000039u, "special? not lowered yet"); return;
L_08B19318:
    ctx.gpr[31] = (ctx.gpr[10] & 18252u);
    rt.unsupported(0x08B1931Cu, 0x00000030u, "special? not lowered yet"); return;
L_08B19320:
    ctx.gpr[31] = (ctx.gpr[10] & 18252u);
    rt.unsupported(0x08B19324u, 0x00000031u, "special? not lowered yet"); return;
L_08B19328:
    ctx.gpr[31] = (ctx.gpr[10] & 18252u);
    rt.unsupported(0x08B1932Cu, 0x00000032u, "special? not lowered yet"); return;
L_08B19330:
    ctx.gpr[31] = (ctx.gpr[10] & 18252u);
    rt.unsupported(0x08B19334u, 0x00000033u, "special? not lowered yet"); return;
L_08B19338:
    ctx.gpr[31] = (ctx.gpr[10] & 18252u);
    rt.unsupported(0x08B1933Cu, 0x00000034u, "special? not lowered yet"); return;
L_08B19340:
    ctx.gpr[31] = (ctx.gpr[10] & 18252u);
    rt.unsupported(0x08B19344u, 0x00000035u, "special? not lowered yet"); return;
L_08B19348:
    ctx.gpr[31] = (ctx.gpr[10] & 18252u);
    rt.unsupported(0x08B1934Cu, 0x00000036u, "special? not lowered yet"); return;
L_08B19350:
    ctx.gpr[31] = (ctx.gpr[10] & 18252u);
    rt.unsupported(0x08B19354u, 0x00000037u, "special? not lowered yet"); return;
L_08B19358:
    ctx.gpr[31] = (ctx.gpr[10] & 18252u);
    rt.unsupported(0x08B1935Cu, 0x00000038u, "special? not lowered yet"); return;
L_08B19360:
    ctx.gpr[31] = (ctx.gpr[10] & 18252u);
    rt.unsupported(0x08B19364u, 0x00000039u, "special? not lowered yet"); return;
L_08B19368:
    ctx.gpr[31] = (ctx.gpr[18] & 18252u);
    rt.unsupported(0x08B1936Cu, 0x00000030u, "special? not lowered yet"); return;
L_08B19370:
    ctx.gpr[31] = (ctx.gpr[18] & 18252u);
    rt.unsupported(0x08B19374u, 0x00000031u, "special? not lowered yet"); return;
L_08B19378:
    ctx.gpr[31] = (ctx.gpr[18] & 18252u);
    rt.unsupported(0x08B1937Cu, 0x00000032u, "special? not lowered yet"); return;
L_08B19380:
    ctx.gpr[31] = (ctx.gpr[18] & 18252u);
    rt.unsupported(0x08B19384u, 0x00000033u, "special? not lowered yet"); return;
L_08B19388:
    ctx.gpr[31] = (ctx.gpr[18] & 18252u);
    rt.unsupported(0x08B1938Cu, 0x00000034u, "special? not lowered yet"); return;
L_08B19390:
    ctx.gpr[31] = (ctx.gpr[18] & 18252u);
    rt.unsupported(0x08B19394u, 0x00000035u, "special? not lowered yet"); return;
L_08B19398:
    ctx.gpr[31] = (ctx.gpr[26] & 18252u);
    rt.unsupported(0x08B1939Cu, 0x00000035u, "special? not lowered yet"); return;
L_08B193A0:
    ctx.gpr[31] = (ctx.gpr[10] | 18252u);
    rt.unsupported(0x08B193A4u, 0x00000032u, "special? not lowered yet"); return;
L_08B193A8:
    ctx.gpr[31] = (ctx.gpr[10] | 18252u);
    rt.unsupported(0x08B193ACu, 0x00000031u, "special? not lowered yet"); return;
L_08B193B0:
    ctx.gpr[31] = (ctx.gpr[10] | 18252u);
    rt.unsupported(0x08B193B4u, 0x00000033u, "special? not lowered yet"); return;
L_08B193B8:
    ctx.gpr[31] = (ctx.gpr[26] & 18252u);
    rt.unsupported(0x08B193BCu, 0x00000036u, "special? not lowered yet"); return;
L_08B193C0:
    ctx.gpr[31] = (ctx.gpr[26] & 18252u);
    rt.unsupported(0x08B193C4u, 0x00000037u, "special? not lowered yet"); return;
L_08B193C8:
    ctx.gpr[31] = (ctx.gpr[26] & 18252u);
    rt.unsupported(0x08B193CCu, 0x00000038u, "special? not lowered yet"); return;
L_08B193D0:
    ctx.gpr[31] = (ctx.gpr[26] & 18252u);
    rt.unsupported(0x08B193D4u, 0x00000039u, "special? not lowered yet"); return;
L_08B193D8:
    ctx.gpr[31] = (ctx.gpr[2] | 18252u);
    rt.unsupported(0x08B193DCu, 0x00000030u, "special? not lowered yet"); return;
L_08B193E0:
    ctx.gpr[31] = (ctx.gpr[2] | 18252u);
    rt.unsupported(0x08B193E4u, 0x00000031u, "special? not lowered yet"); return;
L_08B193E8:
    ctx.gpr[31] = (ctx.gpr[2] | 18252u);
    rt.unsupported(0x08B193ECu, 0x00000032u, "special? not lowered yet"); return;
L_08B193F0:
    ctx.gpr[31] = (ctx.gpr[2] | 18252u);
    rt.unsupported(0x08B193F4u, 0x00000033u, "special? not lowered yet"); return;
L_08B193F8:
    ctx.gpr[31] = (ctx.gpr[2] | 18252u);
    rt.unsupported(0x08B193FCu, 0x00000034u, "special? not lowered yet"); return;
L_08B19400:
    ctx.gpr[31] = (ctx.gpr[2] | 18252u);
    rt.unsupported(0x08B19404u, 0x00000035u, "special? not lowered yet"); return;
L_08B19408:
    ctx.gpr[31] = (ctx.gpr[2] | 18252u);
    rt.unsupported(0x08B1940Cu, 0x00000036u, "special? not lowered yet"); return;
L_08B19410:
    ctx.gpr[31] = (ctx.gpr[2] | 18252u);
    rt.unsupported(0x08B19414u, 0x00000037u, "special? not lowered yet"); return;
L_08B19418:
    ctx.gpr[31] = (ctx.gpr[2] | 18252u);
    rt.unsupported(0x08B1941Cu, 0x00000038u, "special? not lowered yet"); return;
L_08B19420:
    ctx.gpr[31] = (ctx.gpr[2] | 18252u);
    rt.unsupported(0x08B19424u, 0x00000039u, "special? not lowered yet"); return;
L_08B19428:
    ctx.gpr[31] = (ctx.gpr[10] | 18252u);
    rt.unsupported(0x08B1942Cu, 0x00000030u, "special? not lowered yet"); return;
L_08B19430:
    ctx.gpr[31] = (ctx.gpr[10] | 18252u);
    rt.unsupported(0x08B19434u, 0x00000034u, "special? not lowered yet"); return;
L_08B19558:
    rt.unsupported(0x08B19558u, 0x74696E69u, "unknown not lowered yet"); return;
L_08B19568:
    rt.unsupported(0x08B19568u, 0x6E65706Fu, "vfpu3 not lowered yet"); return;
L_08B19580:
    rt.unsupported(0x08B19580u, 0x736F6C63u, "unknown not lowered yet"); return;
L_08B19598:
    rt.unsupported(0x08B19598u, 0x74746573u, "unknown not lowered yet"); return;
L_08B195C8:
    ctx.execute_vfpu_vminmax(97u, 110u, 105u, 1u, false);
    rt.unsupported(0x08B195CCu, 0x20732520u, "unknown not lowered yet"); return;
L_08B195E0:
    rt.unsupported(0x08B195E0u, 0x4170702Au, "unknown not lowered yet"); return;
L_08B19628:
    ctx.execute_vfpu_vcmp_ct<117u, 108u, 1u, 14u>();
    // nop
    goto L_08B19630;
L_08B19630:
    ctx.execute_vfpu_vscl_ct<67u, 69u, 108u, 1u>();
    rt.unsupported(0x08B19634u, 0x746E656Du, "unknown not lowered yet"); return;
L_08B19648:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B1964Cu, 0x706F2072u, "unknown not lowered yet"); return;
L_08B19664:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B19668u, 0x4353202Au, "unknown not lowered yet"); return;
L_08B19674:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B19678u, 0x4F484441u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 193u, 0x08B2ABB0u>(ctx, &aot_mem); return;
    }
    goto L_08B1967C;
L_08B1967C:
    rt.unsupported(0x08B1967Cu, 0x4E495F43u, "unknown not lowered yet"); return;
L_08B1968C:
    rt.unsupported(0x08B1968Cu, 0x63657220u, "vfpu0 not lowered yet"); return;
L_08B19698:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B1969Cu, 0x4353202Au, "unknown not lowered yet"); return;
L_08B196A8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B196ACu, 0x4F484441u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 198u, 0x08B2ABE4u>(ctx, &aot_mem); return;
    }
    goto L_08B196B0;
L_08B196B0:
    rt.unsupported(0x08B196B0u, 0x4F4E5F43u, "unknown not lowered yet"); return;
L_08B196D0:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B196D4u, 0x4353202Au, "unknown not lowered yet"); return;
L_08B196E0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B196E4u, 0x4F484441u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 201u, 0x08B2AC1Cu>(ctx, &aot_mem); return;
    }
    goto L_08B196E8;
L_08B196E8:
    rt.unsupported(0x08B196E8u, 0x4E495F43u, "unknown not lowered yet"); return;
L_08B196FC:
    rt.unsupported(0x08B196FCu, 0x72206E6Fu, "unknown not lowered yet"); return;
L_08B19708:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B1970Cu, 0x4353202Au, "unknown not lowered yet"); return;
L_08B19718:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B1971Cu, 0x4F484441u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 206u, 0x08B2AC54u>(ctx, &aot_mem); return;
    }
    goto L_08B19720;
L_08B19720:
    rt.unsupported(0x08B19720u, 0x4F535F43u, "unknown not lowered yet"); return;
L_08B1972C:
    rt.unsupported(0x08B1972Cu, 0x44455445u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B19730u, 0x206E6F20u, "unknown not lowered yet"); return;
L_08B19740:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B19744u, 0x4353202Au, "unknown not lowered yet"); return;
L_08B19750:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B19754u, 0x4F484441u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 211u, 0x08B2AC8Cu>(ctx, &aot_mem); return;
    }
    goto L_08B19758;
L_08B19758:
    rt.unsupported(0x08B19758u, 0x4F535F43u, "unknown not lowered yet"); return;
L_08B19764:
    rt.unsupported(0x08B19764u, 0x44455452u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B19768u, 0x206E6F20u, "unknown not lowered yet"); return;
L_08B19778:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B1977Cu, 0x4353202Au, "unknown not lowered yet"); return;
L_08B19788:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B1978Cu, 0x4F484441u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 216u, 0x08B2ACC4u>(ctx, &aot_mem); return;
    }
    goto L_08B19790;
L_08B19790:
    rt.unsupported(0x08B19790u, 0x49545F43u, "cop2/vfpu not lowered yet"); return;
L_08B1979C:
    rt.unsupported(0x08B1979Cu, 0x63657220u, "vfpu0 not lowered yet"); return;
L_08B197A8:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B197ACu, 0x4353202Au, "unknown not lowered yet"); return;
L_08B197B8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B197BCu, 0x45544E49u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 221u, 0x08B2ACF4u>(ctx, &aot_mem); return;
    }
    goto L_08B197C0;
L_08B197C0:
    rt.unsupported(0x08B197C0u, 0x4C414E52u, "unknown not lowered yet"); return;
L_08B197D4:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B197D8u, 0x4353202Au, "unknown not lowered yet"); return;
L_08B197E4:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B197E8u, 0x4F484441u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 224u, 0x08B2AD20u>(ctx, &aot_mem); return;
    }
    goto L_08B197EC;
L_08B197EC:
    rt.unsupported(0x08B197ECu, 0x4F4E5F43u, "unknown not lowered yet"); return;
L_08B1980C:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B19810u, 0x4353202Au, "unknown not lowered yet"); return;
L_08B1981C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B19820u, 0x4F484441u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 231u, 0x08B2AD58u>(ctx, &aot_mem); return;
    }
    goto L_08B19824;
L_08B19824:
    rt.unsupported(0x08B19824u, 0x48545F43u, "cop2/vfpu not lowered yet"); return;
L_08B19844:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B19848u, 0x6E55202Au, "vfpu3 not lowered yet"); return;
L_08B19868:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B1986Cu, 0x4353202Au, "unknown not lowered yet"); return;
L_08B19878:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B1987Cu, 0x4F484441u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 238u, 0x08B2ADB4u>(ctx, &aot_mem); return;
    }
    goto L_08B19880;
L_08B19880:
    rt.unsupported(0x08B19880u, 0x4E495F43u, "unknown not lowered yet"); return;
L_08B19890:
    rt.unsupported(0x08B19890u, 0x6E657320u, "vfpu3 not lowered yet"); return;
L_08B19898:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B1989Cu, 0x4353202Au, "unknown not lowered yet"); return;
L_08B198A8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B198ACu, 0x4F484441u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 244u, 0x08B2ADE4u>(ctx, &aot_mem); return;
    }
    goto L_08B198B0;
L_08B198B0:
    rt.unsupported(0x08B198B0u, 0x4F4E5F43u, "unknown not lowered yet"); return;
L_08B198CC:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B198D0u, 0x4353202Au, "unknown not lowered yet"); return;
L_08B198DC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B198E0u, 0x4F484441u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 246u, 0x08B2AE18u>(ctx, &aot_mem); return;
    }
    goto L_08B198E4;
L_08B198E4:
    rt.unsupported(0x08B198E4u, 0x4E495F43u, "unknown not lowered yet"); return;
L_08B198F8:
    rt.unsupported(0x08B198F8u, 0x73206E6Fu, "unknown not lowered yet"); return;
L_08B19904:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B19908u, 0x4353202Au, "unknown not lowered yet"); return;
L_08B19914:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B19918u, 0x4F484441u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 247u, 0x08B2AE50u>(ctx, &aot_mem); return;
    }
    goto L_08B1991C;
L_08B1991C:
    rt.unsupported(0x08B1991Cu, 0x4F535F43u, "unknown not lowered yet"); return;
L_08B19928:
    rt.unsupported(0x08B19928u, 0x44455445u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1992Cu, 0x206E6F20u, "unknown not lowered yet"); return;
L_08B19938:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B1993Cu, 0x4353202Au, "unknown not lowered yet"); return;
L_08B19948:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B1994Cu, 0x4F484441u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 248u, 0x08B2AE84u>(ctx, &aot_mem); return;
    }
    goto L_08B19950;
L_08B19950:
    rt.unsupported(0x08B19950u, 0x4E495F43u, "unknown not lowered yet"); return;
L_08B19968:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B1996Cu, 0x4353202Au, "unknown not lowered yet"); return;
L_08B19978:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B1997Cu, 0x4F484441u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 251u, 0x08B2AEB4u>(ctx, &aot_mem); return;
    }
    goto L_08B19980;
L_08B19980:
    rt.unsupported(0x08B19980u, 0x4E495F43u, "unknown not lowered yet"); return;
L_08B199A0:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B199A4u, 0x4353202Au, "unknown not lowered yet"); return;
L_08B199B0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B199B4u, 0x4F484441u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 252u, 0x08B2AEECu>(ctx, &aot_mem); return;
    }
    goto L_08B199B8;
L_08B199B8:
    rt.unsupported(0x08B199B8u, 0x4E495F43u, "unknown not lowered yet"); return;
L_08B199D4:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B199D8u, 0x4353202Au, "unknown not lowered yet"); return;
L_08B199E4:
    rt.unsupported(0x08B199E8u, 0x535F4F4Eu, "control flow in delay slot"); return;
L_08B199EC:
    rt.unsupported(0x08B199ECu, 0x45434150u, "cop1? not lowered yet"); return;
L_08B19A00:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B19A04u, 0x4353202Au, "unknown not lowered yet"); return;
L_08B19A10:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B19A14u, 0x4F484441u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 256u, 0x08B2AF4Cu>(ctx, &aot_mem); return;
    }
    goto L_08B19A18;
L_08B19A18:
    rt.unsupported(0x08B19A18u, 0x4F535F43u, "unknown not lowered yet"); return;
L_08B19A24:
    rt.unsupported(0x08B19A24u, 0x44455452u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B19A28u, 0x206E6F20u, "unknown not lowered yet"); return;
L_08B19A34:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B19A38u, 0x4353202Au, "unknown not lowered yet"); return;
L_08B19A44:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B19A48u, 0x4F484441u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 258u, 0x08B2AF80u>(ctx, &aot_mem); return;
    }
    goto L_08B19A4C;
L_08B19A4C:
    rt.unsupported(0x08B19A4Cu, 0x49545F43u, "cop2/vfpu not lowered yet"); return;
L_08B19A58:
    rt.unsupported(0x08B19A58u, 0x6E657320u, "vfpu3 not lowered yet"); return;
L_08B19A60:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B19A64u, 0x4353202Au, "unknown not lowered yet"); return;
L_08B19A70:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B19A74u, 0x45544E49u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 260u, 0x08B2AFACu>(ctx, &aot_mem); return;
    }
    goto L_08B19A78;
L_08B19A78:
    rt.unsupported(0x08B19A78u, 0x4C414E52u, "unknown not lowered yet"); return;
L_08B19A88:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B19A8Cu, 0x4353202Au, "unknown not lowered yet"); return;
L_08B19A98:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B19A9Cu, 0x4F484441u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 265u, 0x08B2AFD4u>(ctx, &aot_mem); return;
    }
    goto L_08B19AA0;
L_08B19AA0:
    rt.unsupported(0x08B19AA0u, 0x48545F43u, "cop2/vfpu not lowered yet"); return;
L_08B19ABC:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B19AC0u, 0x6E55202Au, "vfpu3 not lowered yet"); return;
L_08B19AE0:
    rt.unsupported(0x08B19AE0u, 0x70737553u, "unknown not lowered yet"); return;
L_08B19B08:
    rt.unsupported(0x08B19B08u, 0x2041554Cu, "unknown not lowered yet"); return;
L_08B19B14:
    rt.unsupported(0x08B19B14u, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08B19B24:
    rt.unsupported(0x08B19B24u, 0x2041554Cu, "unknown not lowered yet"); return;
L_08B19B30:
    rt.unsupported(0x08B19B30u, 0x43534944u, "unknown not lowered yet"); return;
L_08B19B3C:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B19B40u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B19B44u, 0x4C2F5249u, "unknown not lowered yet"); return;
L_08B19B54:
    ctx.gpr[1] = (ctx.gpr[18] < static_cast<std::uint32_t>(21836) ? 1u : 0u);
    rt.unsupported(0x08B19B58u, 0x443B434Cu, "cop1? not lowered yet"); return;
L_08B19B68:
    if (ctx.gpr[9] != ctx.gpr[15]) {
    rt.unsupported(0x08B19B6Cu, 0x49445253u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 280u, 0x08B2B0A0u>(ctx, &aot_mem); return;
    }
    goto L_08B19B70;
L_08B19B70:
    rt.unsupported(0x08B19B74u, 0x52435341u, "control flow in delay slot"); return;
L_08B19B78:
    if (ctx.gpr[26] == ctx.gpr[20]) {
    rt.unsupported(0x08B19B7Cu, 0x4C2E3F2Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 401u, 0x08B2DCA0u>(ctx, &aot_mem); return;
    }
    goto L_08B19B80;
L_08B19B80:
    rt.unsupported(0x08B19B80u, 0x443B4155u, "cop1? not lowered yet"); return;
L_08B19B90:
    if (ctx.gpr[9] != ctx.gpr[15]) {
    rt.unsupported(0x08B19B94u, 0x49445253u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 282u, 0x08B2B0C8u>(ctx, &aot_mem); return;
    }
    goto L_08B19B98;
L_08B19B98:
    rt.unsupported(0x08B19B9Cu, 0x52435341u, "control flow in delay slot"); return;
L_08B19BA0:
    if (ctx.gpr[26] == ctx.gpr[20]) {
    rt.unsupported(0x08B19BA4u, 0x443B3F2Fu, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 407u, 0x08B2DCC8u>(ctx, &aot_mem); return;
    }
    goto L_08B19BA8;
L_08B19BA8:
    ctx.gpr[3] = (ctx.gpr[2] & 21321u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    rt.unsupported(0x08B19BB0u, 0x41475F50u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 812u, 0x08B25898u>(ctx, &aot_mem); return;
    }
    goto L_08B19BB4;
L_08B19BB4:
    if (ctx.gpr[9] != ctx.gpr[15]) {
    rt.unsupported(0x08B19BB8u, 0x49445253u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 284u, 0x08B2B0ECu>(ctx, &aot_mem); return;
    }
    goto L_08B19BBC;
L_08B19BBC:
    ctx.gpr[5] = (ctx.lo);
    goto L_08B19BC0;
L_08B19BC0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B19BC4u, 0x48544150u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 718u, 0x08B2F0F4u>(ctx, &aot_mem); return;
    }
    goto L_08B19BC8;
L_08B19BC8:
    // nop
    goto L_08B19BCC;
L_08B19BCC:
    rt.unsupported(0x08B19BCCu, 0x74736F68u, "unknown not lowered yet"); return;
L_08B19BDC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<83u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<47u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<84u, 1u>(vfpu_d); }
    rt.unsupported(0x08B19BE0u, 0x68746165u, "unknown not lowered yet"); return;
L_08B19BF0:
    rt.unsupported(0x08B19BF0u, 0x74736F68u, "unknown not lowered yet"); return;
L_08B19C00:
    ctx.execute_vfpu_vminmax(84u, 83u, 47u, 1u, false);
    rt.unsupported(0x08B19C04u, 0x69746C75u, "unknown not lowered yet"); return;
L_08B19C14:
    rt.unsupported(0x08B19C14u, 0x74736F68u, "unknown not lowered yet"); return;
L_08B19C24:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<83u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<47u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<84u, 1u>(vfpu_d); }
    rt.unsupported(0x08B19C28u, 0x6E656665u, "vfpu3 not lowered yet"); return;
L_08B19C3C:
    rt.unsupported(0x08B19C3Cu, 0x74736F68u, "unknown not lowered yet"); return;
L_08B19C4C:
    rt.unsupported(0x08B19C4Cu, 0x632F5354u, "vfpu0 not lowered yet"); return;
L_08B19C64:
    rt.unsupported(0x08B19C64u, 0x74736F68u, "unknown not lowered yet"); return;
L_08B19C74:
    rt.unsupported(0x08B19C74u, 0x742F5354u, "unknown not lowered yet"); return;
L_08B19C80:
    rt.unsupported(0x08B19C80u, 0x74736F68u, "unknown not lowered yet"); return;
L_08B19C90:
    rt.unsupported(0x08B19C90u, 0x682F5354u, "unknown not lowered yet"); return;
L_08B19CA4:
    rt.unsupported(0x08B19CA4u, 0x74736F68u, "unknown not lowered yet"); return;
L_08B19CB4:
    rt.unsupported(0x08B19CB4u, 0x732F5354u, "unknown not lowered yet"); return;
L_08B19CC8:
    rt.unsupported(0x08B19CC8u, 0x43534944u, "unknown not lowered yet"); return;
L_08B19CD4:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B19CD8u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B19CDCu, 0x4C2F5249u, "unknown not lowered yet"); return;
L_08B19CEC:
    ctx.execute_vfpu_vminmax(97u, 116u, 104u, 1u, false);
    rt.unsupported(0x08B19CF0u, 0x68637461u, "unknown not lowered yet"); return;
L_08B19CFC:
    rt.unsupported(0x08B19CFCu, 0x43534944u, "unknown not lowered yet"); return;
L_08B19D08:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B19D0Cu, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B19D10u, 0x4C2F5249u, "unknown not lowered yet"); return;
L_08B19D20:
    rt.unsupported(0x08B19D20u, 0x7269746Cu, "unknown not lowered yet"); return;
L_08B19D30:
    rt.unsupported(0x08B19D30u, 0x43534944u, "unknown not lowered yet"); return;
L_08B19D3C:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B19D40u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B19D44u, 0x4C2F5249u, "unknown not lowered yet"); return;
L_08B19D54:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<102u, 1u>(vfpu_d); }
    rt.unsupported(0x08B19D58u, 0x62656874u, "vfpu0 not lowered yet"); return;
L_08B19D68:
    rt.unsupported(0x08B19D68u, 0x43534944u, "unknown not lowered yet"); return;
L_08B19D74:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B19D78u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B19D7Cu, 0x4C2F5249u, "unknown not lowered yet"); return;
L_08B19D8C:
    rt.unsupported(0x08B19D8Cu, 0x72757470u, "unknown not lowered yet"); return;
L_08B19DA0:
    rt.unsupported(0x08B19DA0u, 0x43534944u, "unknown not lowered yet"); return;
L_08B19DAC:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B19DB0u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B19DB4u, 0x4C2F5249u, "unknown not lowered yet"); return;
L_08B19DC4:
    ctx.execute_vfpu_vcmp_ct<107u, 46u, 1u, 14u>();
    ctx.execute_vfpu_vcmp_ct<97u, 46u, 1u, 5u>();
    (void)(0u - 0u);
    goto L_08B19DD0;
L_08B19DD0:
    rt.unsupported(0x08B19DD0u, 0x43534944u, "unknown not lowered yet"); return;
L_08B19DDC:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B19DE0u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B19DE4u, 0x4C2F5249u, "unknown not lowered yet"); return;
L_08B19DF4:
    rt.unsupported(0x08B19DF4u, 0x72617074u, "unknown not lowered yet"); return;
L_08B19E04:
    rt.unsupported(0x08B19E04u, 0x43534944u, "unknown not lowered yet"); return;
L_08B19E10:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B19E14u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B19E18u, 0x4C2F5249u, "unknown not lowered yet"); return;
L_08B19E28:
    rt.unsupported(0x08B19E28u, 0x73797478u, "unknown not lowered yet"); return;
L_08B19E80:
    rt.unsupported(0x08B19E80u, 0x61766E49u, "vfpu0 not lowered yet"); return;
L_08B19EAC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<110u, 1u>(vfpu_d); }
    rt.unsupported(0x08B19EB0u, 0x206F7420u, "unknown not lowered yet"); return;
L_08B19EE8:
    ctx.gpr[31] = (ctx.gpr[18] & 16711u);
    rt.unsupported(0x08B19EECu, 0x00000030u, "special? not lowered yet"); return;
L_08B19EF0:
    ctx.gpr[31] = (ctx.gpr[10] & 16711u);
    rt.unsupported(0x08B19EF4u, 0x00000039u, "special? not lowered yet"); return;
L_08B19EF8:
    ctx.gpr[31] = (ctx.gpr[10] & 21059u);
    // nop
    goto L_08B19F00;
L_08B19F00:
    rt.unsupported(0x08B19F00u, 0x74696E69u, "unknown not lowered yet"); return;
L_08B19F10:
    rt.unsupported(0x08B19F10u, 0x74746573u, "unknown not lowered yet"); return;
L_08B19F38:
    rt.unsupported(0x08B19F38u, 0x74746573u, "unknown not lowered yet"); return;
L_08B19F6C:
    ctx.gpr[31] = (ctx.gpr[10] & 16711u);
    rt.unsupported(0x08B19F70u, 0x00000030u, "special? not lowered yet"); return;
L_08B1A050:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B1A054u, 0x454A424Fu, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 105u, 0x08B2A574u>(ctx, &aot_mem); return;
    }
    goto L_08B1A058;
L_08B1A058:
    rt.unsupported(0x08B1A058u, 0x425F5443u, "unknown not lowered yet"); return;
L_08B1A064:
    rt.unsupported(0x08B1A068u, 0x575F5942u, "control flow in delay slot"); return;
L_08B1A06C:
    rt.unsupported(0x08B1A06Cu, 0x4F504145u, "unknown not lowered yet"); return;
L_08B1A08C:
    rt.unsupported(0x08B1A08Cu, 0x41454C43u, "unknown not lowered yet"); return;
L_08B1A09C:
    rt.unsupported(0x08B1A09Cu, 0x45575F54u, "cop1? not lowered yet"); return;
L_08B1A0C4:
    rt.unsupported(0x08B1A0C4u, 0x4D4D4F43u, "unknown not lowered yet"); return;
L_08B1A0D0:
    rt.unsupported(0x08B1A0D0u, 0x414C5049u, "unknown not lowered yet"); return;
L_08B1A0DC:
    rt.unsupported(0x08B1A0DCu, 0x445F5450u, "unsupported CFC1 control register"); return;
    // nop
    ctx.pc = 0x0915393Cu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B1A290:
    rt.unsupported(0x08B1A290u, 0x20296425u, "unknown not lowered yet"); return;
L_08B1A2A8:
    ctx.gpr[12] = (0u | ctx.gpr[10]);
    goto L_08B1A2AC;
L_08B1A2AC:
    rt.unsupported(0x08B1A2ACu, 0x69797274u, "unknown not lowered yet"); return;
L_08B1A2D0:
    rt.unsupported(0x08B1A2D0u, 0x69797254u, "unknown not lowered yet"); return;
L_08B1A2EC:
    rt.unsupported(0x08B1A2ECu, 0x6E617254u, "vfpu3 not lowered yet"); return;
L_08B1A304:
    rt.unsupported(0x08B1A304u, 0x20646550u, "unknown not lowered yet"); return;
L_08B1A318:
    rt.unsupported(0x08B1A318u, 0x736E6172u, "unknown not lowered yet"); return;
L_08B1A32C:
    rt.unsupported(0x08B1A32Cu, 0x20646550u, "unknown not lowered yet"); return;
L_08B1A364:
    rt.unsupported(0x08B1A364u, 0x20646550u, "unknown not lowered yet"); return;
L_08B1A374:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<80u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1A378u, 0x74617453u, "unknown not lowered yet"); return;
L_08B1A3B8:
    rt.unsupported(0x08B1A3B8u, 0x6E612020u, "vfpu3 not lowered yet"); return;
L_08B1A3F4:
    rt.unsupported(0x08B1A3F4u, 0x7373696Du, "unknown not lowered yet"); return;
L_08B1A424:
    ctx.execute_vfpu_vcmp_ct<111u, 117u, 1u, 3u>();
    rt.unsupported(0x08B1A428u, 0x75632064u, "unknown not lowered yet"); return;
L_08B1A444:
    if (ctx.gpr[27] == ctx.gpr[4]) {
    ctx.execute_vfpu_vscl_ct<116u, 97u, 116u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 384u, 0x08B33988u>(ctx, &aot_mem); return;
    }
    goto L_08B1A44C;
L_08B1A44C:
    ctx.execute_vfpu_vhdp(32u, 40u, 37u, 1u);
    rt.unsupported(0x08B1A450u, 0x20662520u, "unknown not lowered yet"); return;
L_08B1A484:
    rt.unsupported(0x08B1A484u, 0x696E6120u, "unknown not lowered yet"); return;
L_08B1A4C0:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < 10537 ? 1u : 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < 10537 ? 1u : 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < 10537 ? 1u : 0u);
    rt.unsupported(0x08B1A4CCu, 0x20292929u, "unknown not lowered yet"); return;
L_08B1A504:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < 10537 ? 1u : 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < 10537 ? 1u : 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < 10537 ? 1u : 0u);
    rt.unsupported(0x08B1A510u, 0x20292929u, "unknown not lowered yet"); return;
L_08B1A53C:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < 10537 ? 1u : 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < 10537 ? 1u : 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < 10537 ? 1u : 0u);
    rt.unsupported(0x08B1A548u, 0x20292929u, "unknown not lowered yet"); return;
L_08B1A558:
    rt.unsupported(0x08B1A558u, 0x4320444Eu, "unknown not lowered yet"); return;
L_08B1A570:
    rt.unsupported(0x08B1A570u, 0x200A4445u, "unknown not lowered yet"); return;
L_08B1A5A4:
    rt.unsupported(0x08B1A5A4u, 0x6E726157u, "vfpu3 not lowered yet"); return;
L_08B1A5D0:
    rt.unsupported(0x08B1A5D0u, 0x48474946u, "cop2/vfpu not lowered yet"); return;
L_08B1A5DC:
    if (ctx.gpr[2] != ctx.gpr[15]) {
    ctx.gpr[8] = (ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 96u, 0x08B2C72Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1A5E4;
L_08B1A5E4:
    rt.unsupported(0x08B1A5E4u, 0x45524946u, "cop1? not lowered yet"); return;
L_08B1A5F0:
    jump_target = 0u;
    ctx.gpr[10] = (0x08B1A5F8u);
    rt.unsupported(0x08B1A5F4u, 0x45524946u, "cop1? not lowered yet"); return;
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B1A5F8u) goto L_08B1A5F8;
    return;
L_08B1A5F4:
    rt.unsupported(0x08B1A5F4u, 0x45524946u, "cop1? not lowered yet"); return;
L_08B1A5F8:
    if (ctx.gpr[2] == ctx.gpr[9]) {
    rt.unsupported(0x08B1A5FCu, 0x00005245u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 493u, 0x08B2DF48u>(ctx, &aot_mem); return;
    }
    goto L_08B1A600;
L_08B1A600:
    rt.unsupported(0x08B1A600u, 0x45524946u, "cop1? not lowered yet"); return;
L_08B1A60C:
    rt.unsupported(0x08B1A60Cu, 0x45524946u, "cop1? not lowered yet"); return;
L_08B1A61C:
    rt.unsupported(0x08B1A61Cu, 0x44455355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1A620u, 0x4E4F5445u, "unknown not lowered yet"); return;
L_08B1A62C:
    rt.unsupported(0x08B1A62Cu, 0x45524946u, "cop1? not lowered yet"); return;
L_08B1A63C:
    if (ctx.gpr[2] != ctx.gpr[15]) {
    rt.unsupported(0x08B1A640u, 0x46444550u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 98u, 0x08B2C78Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1A644;
L_08B1A644:
    rt.unsupported(0x08B1A644u, 0x434D4F52u, "unknown not lowered yet"); return;
L_08B1A64C:
    rt.unsupported(0x08B1A64Cu, 0x45524946u, "cop1? not lowered yet"); return;
L_08B1A658:
    rt.unsupported(0x08B1A658u, 0x41435449u, "unknown not lowered yet"); return;
L_08B1A660:
    rt.unsupported(0x08B1A660u, 0x4C4C494Bu, "unknown not lowered yet"); return;
L_08B1A66C:
    (void)(0u << (0u & 31u));
    goto L_08B1A670;
L_08B1A670:
    if (ctx.gpr[2] != ctx.gpr[15]) {
    rt.unsupported(0x08B1A674u, 0x49484556u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 101u, 0x08B2C7C0u>(ctx, &aot_mem); return;
    }
    goto L_08B1A678;
L_08B1A678:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 17u));
    goto L_08B1A67C;
L_08B1A67C:
    rt.unsupported(0x08B1A67Cu, 0x454C454Du, "cop1? not lowered yet"); return;
L_08B1A684:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    rt.unsupported(0x08B1A688u, 0x45425245u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 322u, 0x08B2D7C8u>(ctx, &aot_mem); return;
    }
    goto L_08B1A68C;
L_08B1A68C:
    rt.unsupported(0x08B1A68Cu, 0x49484E45u, "cop2/vfpu not lowered yet"); return;
L_08B1A698:
    rt.unsupported(0x08B1A698u, 0x74726F66u, "unknown not lowered yet"); return;
L_08B1A6A8:
    rt.unsupported(0x08B1A6A8u, 0x74726F66u, "unknown not lowered yet"); return;
L_08B1A6B8:
    rt.unsupported(0x08B1A6B8u, 0x206D6572u, "unknown not lowered yet"); return;
L_08B1A6CC:
    rt.unsupported(0x08B1A6CCu, 0x75646E69u, "unknown not lowered yet"); return;
L_08B1A6D4:
    rt.unsupported(0x08B1A6D4u, 0x45455246u, "cop1? not lowered yet"); return;
L_08B1A710:
    rt.unsupported(0x08B1A710u, 0x74736966u, "unknown not lowered yet"); return;
L_08B1A718:
    rt.unsupported(0x08B1A718u, 0x614D6F6Eu, "vfpu0 not lowered yet"); return;
L_08B1A728:
    rt.unsupported(0x08B1A728u, 0x73617262u, "unknown not lowered yet"); return;
L_08B1A730:
    rt.unsupported(0x08B1A730u, 0x73617262u, "unknown not lowered yet"); return;
L_08B1A738:
    ctx.execute_vfpu_vscl_ct<115u, 99u, 114u, 1u>();
    rt.unsupported(0x08B1A73Cu, 0x00000077u, "special? not lowered yet"); return;
L_08B1A740:
    ctx.execute_vfpu_vscl_ct<115u, 99u, 114u, 1u>();
    rt.unsupported(0x08B1A744u, 0x00004177u, "special? not lowered yet"); return;
L_08B1A748:
    ctx.execute_vfpu_vhdp(103u, 111u, 108u, 1u);
    // nop
    goto L_08B1A750;
L_08B1A750:
    ctx.execute_vfpu_vhdp(103u, 111u, 108u, 1u);
    rt.unsupported(0x08B1A754u, 0x00000041u, "special? not lowered yet"); return;
L_08B1A758:
    rt.unsupported(0x08B1A758u, 0x6867696Eu, "unknown not lowered yet"); return;
L_08B1A764:
    rt.unsupported(0x08B1A764u, 0x6867696Eu, "unknown not lowered yet"); return;
L_08B1A770:
    ctx.execute_vfpu_vhdp(107u, 110u, 105u, 1u);
    (void)(0u | 0u);
    goto L_08B1A778;
L_08B1A778:
    ctx.execute_vfpu_vhdp(107u, 110u, 105u, 1u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08B1A780;
L_08B1A780:
    { const bool signed_ok = ctx.execute_signed_sub(12u, 3u, 20u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B1A780u, 0x00746162u); return; } }
    goto L_08B1A784;
L_08B1A784:
    ctx.execute_vfpu_vminmax(98u, 97u, 116u, 1u, false);
    // nop
    goto L_08B1A78C;
L_08B1A78C:
    ctx.execute_vfpu_vminmax(104u, 97u, 109u, 1u, false);
    ctx.gpr[14] = (0u | 0u);
    goto L_08B1A794;
L_08B1A794:
    ctx.execute_vfpu_vminmax(104u, 97u, 109u, 1u, false);
    ctx.gpr[14] = (ctx.gpr[2] | ctx.gpr[1]);
    goto L_08B1A79C;
L_08B1A79C:
    rt.unsupported(0x08B1A79Cu, 0x61656C63u, "vfpu0 not lowered yet"); return;
L_08B1A7A4:
    rt.unsupported(0x08B1A7A4u, 0x61656C63u, "vfpu0 not lowered yet"); return;
L_08B1A7B0:
    rt.unsupported(0x08B1A7B0u, 0x6863616Du, "unknown not lowered yet"); return;
L_08B1A7B8:
    rt.unsupported(0x08B1A7B8u, 0x6863616Du, "unknown not lowered yet"); return;
L_08B1A7C4:
    rt.unsupported(0x08B1A7C4u, 0x726F7773u, "unknown not lowered yet"); return;
L_08B1A7CC:
    rt.unsupported(0x08B1A7CCu, 0x726F7773u, "unknown not lowered yet"); return;
L_08B1A7D4:
    rt.unsupported(0x08B1A7D4u, 0x69616863u, "unknown not lowered yet"); return;
L_08B1A7E0:
    rt.unsupported(0x08B1A7E0u, 0x69616863u, "unknown not lowered yet"); return;
L_08B1A7EC:
    rt.unsupported(0x08B1A7ECu, 0x6E657267u, "vfpu3 not lowered yet"); return;
L_08B1A7F4:
    rt.unsupported(0x08B1A7F4u, 0x6E657267u, "vfpu3 not lowered yet"); return;
L_08B1A800:
    rt.unsupported(0x08B1A800u, 0x72616574u, "unknown not lowered yet"); return;
L_08B1A808:
    rt.unsupported(0x08B1A808u, 0x72616574u, "unknown not lowered yet"); return;
L_08B1A814:
    ctx.execute_vfpu_compare3(109u, 111u, 108u, 1u, 6u);
    rt.unsupported(0x08B1A818u, 0x00766F74u, "special? not lowered yet"); return;
L_08B1A81C:
    ctx.execute_vfpu_compare3(109u, 111u, 108u, 1u, 6u);
    rt.unsupported(0x08B1A820u, 0x41766F74u, "unknown not lowered yet"); return;
L_08B1A828:
    rt.unsupported(0x08B1A828u, 0x6B636F72u, "unknown not lowered yet"); return;
L_08B1A830:
    rt.unsupported(0x08B1A830u, 0x6B636F72u, "unknown not lowered yet"); return;
L_08B1A838:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<104u, 1u>(vfpu_d); }
    ctx.gpr[14] = (ctx.gpr[11] & 30023u);
    // nop
    goto L_08B1A844;
L_08B1A844:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<104u, 1u>(vfpu_d); }
    ctx.gpr[14] = (ctx.gpr[11] & 30023u);
    rt.unsupported(0x08B1A84Cu, 0x00000041u, "special? not lowered yet"); return;
L_08B1A850:
    // nop
    goto L_08B1A854;
L_08B1A854:
    rt.unsupported(0x08B1A854u, 0x68747970u, "unknown not lowered yet"); return;
L_08B1A85C:
    rt.unsupported(0x08B1A85Cu, 0x68747970u, "unknown not lowered yet"); return;
L_08B1A864:
    ctx.execute_vfpu_compare3(99u, 104u, 114u, 1u, 6u);
    rt.unsupported(0x08B1A868u, 0x7567656Du, "unknown not lowered yet"); return;
L_08B1A870:
    ctx.execute_vfpu_compare3(99u, 104u, 114u, 1u, 6u);
    rt.unsupported(0x08B1A874u, 0x7567656Du, "unknown not lowered yet"); return;
L_08B1A87C:
    rt.unsupported(0x08B1A87Cu, 0x746F6873u, "unknown not lowered yet"); return;
L_08B1A888:
    rt.unsupported(0x08B1A888u, 0x73617073u, "unknown not lowered yet"); return;
L_08B1A898:
    rt.unsupported(0x08B1A898u, 0x62757473u, "vfpu0 not lowered yet"); return;
L_08B1A8A4:
    rt.unsupported(0x08B1A8A4u, 0x62757473u, "vfpu0 not lowered yet"); return;
L_08B1A8B4:
    ctx.gpr[3] = (ctx.gpr[11] ^ 25972u);
    // nop
    goto L_08B1A8BC;
L_08B1A8BC:
    ctx.gpr[3] = (ctx.gpr[11] ^ 25972u);
    rt.unsupported(0x08B1A8C0u, 0x00000041u, "special? not lowered yet"); return;
L_08B1A8C4:
    ctx.gpr[9] = (ctx.gpr[11] & 31349u);
    // nop
    goto L_08B1A8CC;
L_08B1A8CC:
    ctx.gpr[9] = (ctx.gpr[11] & 31349u);
    rt.unsupported(0x08B1A8D0u, 0x00000041u, "special? not lowered yet"); return;
L_08B1A8D4:
    ctx.gpr[9] = (ctx.gpr[19] & 31349u);
    // nop
    goto L_08B1A8DC;
L_08B1A8DC:
    ctx.gpr[9] = (ctx.gpr[19] & 31349u);
    rt.unsupported(0x08B1A8E0u, 0x00000041u, "special? not lowered yet"); return;
L_08B1A8E4:
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[1]) < static_cast<std::int32_t>(ctx.gpr[21]) ? ctx.gpr[1] : ctx.gpr[21]);
    goto L_08B1A8E8;
L_08B1A8E8:
    rt.unsupported(0x08B1A8E8u, 0x4135706Du, "unknown not lowered yet"); return;
L_08B1A8F0:
    ctx.gpr[6] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B1A8F4;
L_08B1A8F4:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[1]) ? ctx.gpr[2] : ctx.gpr[1]);
    goto L_08B1A8F8;
L_08B1A8F8:
    ctx.execute_vfpu_vscl_ct<114u, 117u, 103u, 1u>();
    rt.unsupported(0x08B1A8FCu, 0x00000072u, "special? not lowered yet"); return;
L_08B1A900:
    ctx.execute_vfpu_vscl_ct<114u, 117u, 103u, 1u>();
    rt.unsupported(0x08B1A904u, 0x00004172u, "special? not lowered yet"); return;
L_08B1A908:
    rt.unsupported(0x08B1A908u, 0x70696E73u, "unknown not lowered yet"); return;
L_08B1A910:
    rt.unsupported(0x08B1A910u, 0x70696E73u, "unknown not lowered yet"); return;
L_08B1A918:
    ctx.execute_vfpu_vscl_ct<108u, 97u, 115u, 1u>();
    ctx.execute_vfpu_compare3(114u, 115u, 99u, 1u, 6u);
    rt.unsupported(0x08B1A920u, 0x00006570u, "special? not lowered yet"); return;
L_08B1A924:
    ctx.execute_vfpu_vscl_ct<108u, 97u, 115u, 1u>();
    ctx.execute_vfpu_compare3(114u, 115u, 99u, 1u, 6u);
    rt.unsupported(0x08B1A92Cu, 0x00416570u, "special? not lowered yet"); return;
L_08B1A930:
    ctx.execute_vfpu_vminmax(102u, 108u, 97u, 1u, false);
    ctx.gpr[14] = (0u | 0u);
    goto L_08B1A938;
L_08B1A938:
    ctx.execute_vfpu_vminmax(102u, 108u, 97u, 1u, false);
    ctx.gpr[14] = (ctx.gpr[2] | ctx.gpr[1]);
    goto L_08B1A940;
L_08B1A940:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[1]) < static_cast<std::int32_t>(ctx.gpr[16]) ? ctx.gpr[1] : ctx.gpr[16]);
    goto L_08B1A944;
L_08B1A944:
    rt.unsupported(0x08B1A944u, 0x4130366Du, "unknown not lowered yet"); return;
L_08B1A94C:
    rt.unsupported(0x08B1A94Cu, 0x696E696Du, "unknown not lowered yet"); return;
L_08B1A954:
    rt.unsupported(0x08B1A954u, 0x696E696Du, "unknown not lowered yet"); return;
L_08B1A960:
    rt.unsupported(0x08B1A960u, 0x626D6F62u, "vfpu0 not lowered yet"); return;
L_08B1A968:
    rt.unsupported(0x08B1A968u, 0x626D6F62u, "vfpu0 not lowered yet"); return;
L_08B1A970:
    ctx.execute_vfpu_vscl_ct<99u, 97u, 109u, 1u>();
    rt.unsupported(0x08B1A974u, 0x00006172u, "special? not lowered yet"); return;
L_08B1A978:
    ctx.execute_vfpu_vscl_ct<99u, 97u, 109u, 1u>();
    rt.unsupported(0x08B1A97Cu, 0x00416172u, "special? not lowered yet"); return;
L_08B1A980:
    ctx.execute_vfpu_vscl_ct<115u, 105u, 116u, 1u>();
    rt.unsupported(0x08B1A984u, 0x6B636F72u, "unknown not lowered yet"); return;
L_08B1A98C:
    rt.unsupported(0x08B1A98Cu, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B1A994:
    (void)(0u - 0u);
    goto L_08B1A998;
L_08B1A998:
    rt.unsupported(0x08B1A998u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B1A9A8:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B1A9ACu, 0x69736E69u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 333u, 0x08B32F34u>(ctx, &aot_mem); return;
    }
    goto L_08B1A9B0;
L_08B1A9B0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<49u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<100u, 1u>(vfpu_d); }
    ctx.gpr[14] = (ctx.gpr[3] + ctx.gpr[11]);
    goto L_08B1A9B8;
L_08B1A9B8:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B1A9BCu, 0x69736E69u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 334u, 0x08B32F44u>(ctx, &aot_mem); return;
    }
    goto L_08B1A9C0;
L_08B1A9C0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<50u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<100u, 1u>(vfpu_d); }
    ctx.gpr[14] = (ctx.gpr[3] + ctx.gpr[11]);
    goto L_08B1A9C8;
L_08B1A9C8:
    rt.unsupported(0x08B1A9C8u, 0x6E647568u, "vfpu3 not lowered yet"); return;
L_08B1A9D4:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B1A9D8u, 0x69736E69u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 336u, 0x08B32F60u>(ctx, &aot_mem); return;
    }
    goto L_08B1A9DC;
L_08B1A9DC:
    ctx.gpr[12] = (ctx.gpr[1] & ctx.gpr[17]);
    goto L_08B1A9E0;
L_08B1A9E0:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B1A9E4u, 0x69736E69u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 337u, 0x08B32F6Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1A9E8;
L_08B1A9E8:
    ctx.gpr[12] = (ctx.gpr[1] & ctx.gpr[18]);
    goto L_08B1A9EC;
L_08B1A9EC:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    ctx.execute_vfpu_vcmp_ct<117u, 116u, 1u, 15u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 338u, 0x08B32F78u>(ctx, &aot_mem); return;
    }
    goto L_08B1A9F4;
L_08B1A9F4:
    rt.unsupported(0x08B1A9F4u, 0x00656E69u, "special? not lowered yet"); return;
L_08B1A9F8:
    ctx.execute_vfpu_vscl_ct<115u, 105u, 116u, 1u>();
    rt.unsupported(0x08B1A9FCu, 0x70696E73u, "unknown not lowered yet"); return;
L_08B1AA04:
    ctx.execute_vfpu_vscl_ct<115u, 105u, 116u, 1u>();
    rt.unsupported(0x08B1AA08u, 0x70696E73u, "unknown not lowered yet"); return;
L_08B1AA10:
    ctx.execute_vfpu_vscl_ct<115u, 105u, 116u, 1u>();
    rt.unsupported(0x08B1AA14u, 0x0036314Du, "special? not lowered yet"); return;
L_08B1AA18:
    ctx.execute_vfpu_vscl_ct<115u, 105u, 116u, 1u>();
    ctx.execute_vfpu_vminmax(77u, 49u, 54u, 1u, false);
    // nop
    goto L_08B1AA24;
L_08B1AA24:
    ctx.execute_vfpu_vscl_ct<115u, 105u, 116u, 1u>();
    ctx.execute_vfpu_vscl_ct<108u, 97u, 115u, 1u>();
    rt.unsupported(0x08B1AA2Cu, 0x00000072u, "special? not lowered yet"); return;
L_08B1AA30:
    ctx.execute_vfpu_vscl_ct<115u, 105u, 116u, 1u>();
    ctx.execute_vfpu_vscl_ct<108u, 97u, 115u, 1u>();
    rt.unsupported(0x08B1AA38u, 0x00006D72u, "special? not lowered yet"); return;
L_08B1AA3C:
    ctx.execute_vfpu_vscl_ct<108u, 97u, 115u, 1u>();
    rt.unsupported(0x08B1AA40u, 0x746F6472u, "unknown not lowered yet"); return;
L_08B1AA48:
    ctx.execute_vfpu_vscl_ct<108u, 97u, 115u, 1u>();
    rt.unsupported(0x08B1AA4Cu, 0x746F6472u, "unknown not lowered yet"); return;
L_08B1AA54:
    rt.unsupported(0x08B1AA54u, 0x77656976u, "unknown not lowered yet"); return;
L_08B1AA64:
    rt.unsupported(0x08B1AA64u, 0x77656976u, "unknown not lowered yet"); return;
L_08B1AA74:
    ctx.execute_vfpu_vscl_ct<98u, 108u, 101u, 1u>();
    ctx.gpr[12] = (ctx.gpr[3] & ctx.gpr[18]);
    goto L_08B1AA7C;
L_08B1AA7C:
    rt.unsupported(0x08B1AA7Cu, 0x6E657267u, "vfpu3 not lowered yet"); return;
L_08B1AA88:
    (void)(0u < 0u ? 1u : 0u);
    goto L_08B1AA8C;
L_08B1AA8C:
    ctx.gpr[16] = (ctx.gpr[1] ^ 9508u);
    (void)(0u & 0u);
    goto L_08B1AA94;
L_08B1AA94:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<48u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<50u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<37u, 1u>(vfpu_d); }
    ctx.gpr[16] = (ctx.gpr[17] & 9530u);
    (void)(0u & 0u);
    rt.unsupported(0x08B1AAA0u, 0x726F6D65u, "unknown not lowered yet"); return;
L_08B1AAA8:
    rt.unsupported(0x08B1AAA8u, 0x00647568u, "special? not lowered yet"); return;
L_08B1AAAC:
    (void)(static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B1AAB0;
L_08B1AAB0:
    ctx.gpr[12] = (0u | 0u);
    goto L_08B1AAB4;
L_08B1AAB4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<48u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<51u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<37u, 1u>(vfpu_d); }
    // nop
    goto L_08B1AABC;
L_08B1AABC:
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(29477));
    ctx.gpr[13] = (ctx.gpr[9] + static_cast<std::uint32_t>(8292));
    ctx.gpr[5] = (0u & 0u);
    goto L_08B1AAC8;
L_08B1AAC8:
    rt.unsupported(0x08B1AAC8u, 0x45534843u, "cop1? not lowered yet"); return;
L_08B1AAD0:
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(29477));
    (void)(0u & 0u);
    goto L_08B1AAD8;
L_08B1AAD8:
    rt.unsupported(0x08B1AAD8u, 0x41465F4Du, "unknown not lowered yet"); return;
L_08B1AAE0:
    if (ctx.gpr[18] != ctx.gpr[15]) {
    rt.unsupported(0x08B1AAE4u, 0x00005245u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 300u, 0x08B32818u>(ctx, &aot_mem); return;
    }
    goto L_08B1AAE8;
L_08B1AAE4:
    rt.unsupported(0x08B1AAE4u, 0x00005245u, "special? not lowered yet"); return;
L_08B1AAE8:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B1AAECu, 0x0000465Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 275u, 0x08B2B034u>(ctx, &aot_mem); return;
    }
    goto L_08B1AAF0;
L_08B1AAF0:
    ctx.gpr[9] = (ctx.gpr[2] & 20557u);
    rt.unsupported(0x08B1AAF4u, 0x00000031u, "special? not lowered yet"); return;
L_08B1AAF8:
    ctx.gpr[9] = (ctx.gpr[2] & 20557u);
    rt.unsupported(0x08B1AAFCu, 0x00000032u, "special? not lowered yet"); return;
L_08B1AB00:
    ctx.gpr[9] = (ctx.gpr[2] & 20557u);
    rt.unsupported(0x08B1AB04u, 0x00000033u, "special? not lowered yet"); return;
L_08B1AB08:
    ctx.gpr[9] = (ctx.gpr[2] & 20557u);
    rt.unsupported(0x08B1AB0Cu, 0x00000034u, "special? not lowered yet"); return;
L_08B1AB10:
    ctx.gpr[9] = (ctx.gpr[2] & 20557u);
    rt.unsupported(0x08B1AB14u, 0x00000035u, "special? not lowered yet"); return;
L_08B1AB18:
    ctx.gpr[9] = (ctx.gpr[2] & 20557u);
    rt.unsupported(0x08B1AB1Cu, 0x00000036u, "special? not lowered yet"); return;
L_08B1AB20:
    ctx.gpr[9] = (ctx.gpr[2] & 20557u);
    rt.unsupported(0x08B1AB24u, 0x00000037u, "special? not lowered yet"); return;
L_08B1AB28:
    ctx.gpr[9] = (ctx.gpr[2] & 20557u);
    rt.unsupported(0x08B1AB2Cu, 0x00000038u, "special? not lowered yet"); return;
L_08B1AB30:
    ctx.gpr[9] = (ctx.gpr[2] & 20557u);
    rt.unsupported(0x08B1AB34u, 0x00000039u, "special? not lowered yet"); return;
L_08B1AB38:
    ctx.gpr[9] = (ctx.gpr[10] & 20557u);
    rt.unsupported(0x08B1AB3Cu, 0x00000030u, "special? not lowered yet"); return;
L_08B1AB40:
    ctx.gpr[9] = (ctx.gpr[10] & 20557u);
    rt.unsupported(0x08B1AB44u, 0x00000031u, "special? not lowered yet"); return;
L_08B1AB48:
    ctx.gpr[9] = (ctx.gpr[10] & 20557u);
    rt.unsupported(0x08B1AB4Cu, 0x00000032u, "special? not lowered yet"); return;
L_08B1AB50:
    ctx.gpr[9] = (ctx.gpr[10] & 20557u);
    rt.unsupported(0x08B1AB54u, 0x00000033u, "special? not lowered yet"); return;
L_08B1AB58:
    ctx.gpr[9] = (ctx.gpr[10] & 20557u);
    rt.unsupported(0x08B1AB5Cu, 0x00000034u, "special? not lowered yet"); return;
L_08B1AB60:
    ctx.gpr[9] = (ctx.gpr[10] & 20557u);
    rt.unsupported(0x08B1AB64u, 0x00000035u, "special? not lowered yet"); return;
L_08B1AB68:
    ctx.gpr[9] = (ctx.gpr[10] & 20557u);
    rt.unsupported(0x08B1AB6Cu, 0x00000036u, "special? not lowered yet"); return;
L_08B1AB90:
    rt.unsupported(0x08B1AB90u, 0x43414E4Bu, "unknown not lowered yet"); return;
L_08B1ABA0:
    rt.unsupported(0x08B1ABA0u, 0x4C414745u, "unknown not lowered yet"); return;
L_08B1ABAC:
    rt.unsupported(0x08B1ABACu, 0x726F6D65u, "unknown not lowered yet"); return;
L_08B1ABB4:
    ctx.execute_vfpu_vcmp_ct<111u, 117u, 1u, 3u>();
    rt.unsupported(0x08B1ABB8u, 0x74276E64u, "unknown not lowered yet"); return;
L_08B1ABD4:
    rt.unsupported(0x08B1ABD8u, 0x52414843u, "control flow in delay slot"); return;
L_08B1ABDC:
    rt.unsupported(0x08B1ABDCu, 0x4545425Fu, "cop1? not lowered yet"); return;
L_08B1ABF0:
    rt.unsupported(0x08B1ABF0u, 0x202D2052u, "unknown not lowered yet"); return;
L_08B1AC14:
    rt.unsupported(0x08B1AC18u, 0x52414843u, "control flow in delay slot"); return;
L_08B1AC1C:
    rt.unsupported(0x08B1AC1Cu, 0x4545425Fu, "cop1? not lowered yet"); return;
L_08B1AC30:
    rt.unsupported(0x08B1AC30u, 0x43202D20u, "unknown not lowered yet"); return;
L_08B1AC4C:
    rt.unsupported(0x08B1AC50u, 0x5F524143u, "control flow in delay slot"); return;
L_08B1AC54:
    rt.unsupported(0x08B1AC54u, 0x4E454542u, "unknown not lowered yet"); return;
L_08B1AC68:
    rt.unsupported(0x08B1AC68u, 0x43202D20u, "unknown not lowered yet"); return;
L_08B1AC80:
    rt.unsupported(0x08B1AC84u, 0x5F524143u, "control flow in delay slot"); return;
L_08B1AC88:
    rt.unsupported(0x08B1AC88u, 0x4E454542u, "unknown not lowered yet"); return;
L_08B1AC9C:
    rt.unsupported(0x08B1AC9Cu, 0x6946202Du, "unknown not lowered yet"); return;
L_08B1ACB8:
    rt.unsupported(0x08B1ACB8u, 0x41454C43u, "unknown not lowered yet"); return;
L_08B1ACCC:
    rt.unsupported(0x08B1ACCCu, 0x455F4547u, "cop1? not lowered yet"); return;
L_08B1ACD8:
    rt.unsupported(0x08B1ACD8u, 0x72616843u, "unknown not lowered yet"); return;
L_08B1ACF0:
    rt.unsupported(0x08B1ACF0u, 0x41454C43u, "unknown not lowered yet"); return;
L_08B1AD10:
    rt.unsupported(0x08B1AD10u, 0x63696865u, "vfpu0 not lowered yet"); return;
L_08B1AEE4:
    rt.unsupported(0x08B1AEE8u, 0x08997124u, "control flow in delay slot"); return;
L_08B1B040:
    rt.unsupported(0x08B1B040u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08B1B050:
    if (ctx.gpr[19] != ctx.gpr[20]) {
    rt.unsupported(0x08B1B054u, 0x63696865u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 38u, 0x08B345A0u>(ctx, &aot_mem); return;
    }
    goto L_08B1B058;
L_08B1B058:
    ctx.execute_vfpu_compare3(108u, 101u, 70u, 1u, 6u);
    rt.unsupported(0x08B1B05Cu, 0x72614772u, "unknown not lowered yet"); return;
L_08B1B064:
    if (ctx.gpr[3] == ctx.gpr[20]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 41u, 0x08B345B4u>(ctx, &aot_mem); return;
    }
    goto L_08B1B06C;
L_08B1B06C:
    ctx.execute_vfpu_vscl_ct<114u, 115u, 86u, 1u>();
    ctx.execute_vfpu_vcmp_ct<105u, 99u, 1u, 8u>();
    rt.unsupported(0x08B1B074u, 0x726F4665u, "unknown not lowered yet"); return;
L_08B1B080:
    rt.unsupported(0x08B1B080u, 0x47736148u, "cop1? not lowered yet"); return;
L_08B1B09C:
    ctx.execute_vfpu_vscl_ct<73u, 115u, 86u, 1u>();
    ctx.execute_vfpu_vcmp_ct<105u, 99u, 1u, 8u>();
    rt.unsupported(0x08B1B0A4u, 0x476E4965u, "cop1? not lowered yet"); return;
L_08B1B0B0:
    rt.unsupported(0x08B1B0B0u, 0x73656F44u, "unknown not lowered yet"); return;
L_08B1B0B4:
    rt.unsupported(0x08B1B0B4u, 0x61726147u, "vfpu0 not lowered yet"); return;
L_08B1B0C8:
    ctx.gpr[12] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B1B0CC;
L_08B1B0CC:
    rt.unsupported(0x08B1B0CCu, 0x47746553u, "cop1? not lowered yet"); return;
L_08B1B0DC:
    rt.unsupported(0x08B1B0DCu, 0x47746547u, "cop1? not lowered yet"); return;
L_08B1B0EC:
    if (ctx.gpr[26] == ctx.gpr[19]) {
    rt.unsupported(0x08B1B0F0u, 0x61726147u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 641u, 0x08B37E14u>(ctx, &aot_mem); return;
    }
    goto L_08B1B0F4;
L_08B1B0F4:
    rt.unsupported(0x08B1B0F4u, 0x74536567u, "unknown not lowered yet"); return;
L_08B1B104:
    rt.unsupported(0x08B1B104u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08B1B11C:
    rt.unsupported(0x08B1B11Cu, 0x61726167u, "vfpu0 not lowered yet"); return;
L_08B1B134:
    ctx.gpr[1] = (ctx.gpr[19] ^ 30028u);
    rt.unsupported(0x08B1B138u, 0x72724520u, "unknown not lowered yet"); return;
L_08B1B154:
    ctx.gpr[1] = (ctx.gpr[19] ^ 30028u);
    rt.unsupported(0x08B1B158u, 0x6E795320u, "vfpu3 not lowered yet"); return;
L_08B1B180:
    ctx.gpr[1] = (ctx.gpr[19] ^ 30028u);
    ctx.execute_vfpu_vminmax(32u, 77u, 101u, 1u, false);
    rt.unsupported(0x08B1B188u, 0x2079726Fu, "unknown not lowered yet"); return;
L_08B1B1A0:
    ctx.gpr[1] = (ctx.gpr[19] ^ 30028u);
    rt.unsupported(0x08B1B1A4u, 0x6E654720u, "vfpu3 not lowered yet"); return;
L_08B1B1E8:
    ctx.gpr[1] = (ctx.gpr[19] ^ 30028u);
    rt.unsupported(0x08B1B1ECu, 0x72724520u, "unknown not lowered yet"); return;
L_08B1B210:
    ctx.gpr[1] = (ctx.gpr[19] ^ 30028u);
    rt.unsupported(0x08B1B214u, 0x6B6E5520u, "unknown not lowered yet"); return;
L_08B1B224:
    if (0u == 0u) (void)(0u);
    goto L_08B1B228;
L_08B1B228:
    rt.unsupported(0x08B1B228u, 0x4152545Fu, "unknown not lowered yet"); return;
L_08B1B238:
    rt.unsupported(0x08B1B238u, 0x61656C43u, "vfpu0 not lowered yet"); return;
L_08B1B24C:
    rt.unsupported(0x08B1B24Cu, 0x61656C43u, "vfpu0 not lowered yet"); return;
L_08B1B264:
    rt.unsupported(0x08B1B264u, 0x206E7572u, "unknown not lowered yet"); return;
L_08B1B27C:
    rt.unsupported(0x08B1B27Cu, 0x75716552u, "unknown not lowered yet"); return;
L_08B1B28C:
    rt.unsupported(0x08B1B28Cu, 0x4D736148u, "unknown not lowered yet"); return;
L_08B1B29C:
    rt.unsupported(0x08B1B29Cu, 0x44414F4Cu, "unsupported CFC1 control register"); return;
    if (ctx.gpr[2] != ctx.gpr[21]) {
    rt.unsupported(0x08B1B2A4u, 0x4E454353u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 1u, 0x08B2C020u>(ctx, &aot_mem); return;
    }
    goto L_08B1B2A8;
L_08B1B2A8:
    rt.unsupported(0x08B1B2A8u, 0x00000045u, "special? not lowered yet"); return;
L_08B1B2AC:
    rt.unsupported(0x08B1B2ACu, 0x435F5349u, "unknown not lowered yet"); return;
L_08B1B2BC:
    rt.unsupported(0x08B1B2BCu, 0x00004445u, "special? not lowered yet"); return;
L_08B1B2C0:
    rt.unsupported(0x08B1B2C4u, 0x55435F54u, "control flow in delay slot"); return;
L_08B1B2C8:
    rt.unsupported(0x08B1B2C8u, 0x45435354u, "cop1? not lowered yet"); return;
L_08B1B2D0:
    rt.unsupported(0x08B1B2D4u, 0x53545543u, "control flow in delay slot"); return;
L_08B1B2D8:
    rt.unsupported(0x08B1B2D8u, 0x454E4543u, "cop1? not lowered yet"); return;
L_08B1B2E8:
    rt.unsupported(0x08B1B2E8u, 0x41454C43u, "unknown not lowered yet"); return;
L_08B1B2F4:
    rt.unsupported(0x08B1B2F4u, 0x0000454Eu, "special? not lowered yet"); return;
L_08B1B2F8:
    rt.unsupported(0x08B1B2F8u, 0x61656C43u, "vfpu0 not lowered yet"); return;
L_08B1B308:
    rt.unsupported(0x08B1B308u, 0x0000006Eu, "special? not lowered yet"); return;
L_08B1B30C:
    if (ctx.gpr[27] == ctx.gpr[14]) {
    rt.unsupported(0x08B1B310u, 0x70697263u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 19u, 0x08B38858u>(ctx, &aot_mem); return;
    }
    goto L_08B1B314;
L_08B1B314:
    rt.unsupported(0x08B1B314u, 0x43646574u, "unknown not lowered yet"); return;
L_08B1B320:
    rt.unsupported(0x08B1B320u, 0x636F7250u, "vfpu0 not lowered yet"); return;
L_08B1B32C:
    rt.unsupported(0x08B1B32Cu, 0x43646574u, "unknown not lowered yet"); return;
L_08B1B338:
    if (ctx.gpr[19] != ctx.gpr[20]) {
    ctx.execute_vfpu_compare3(101u, 99u, 116u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 62u, 0x08B34888u>(ctx, &aot_mem); return;
    }
    goto L_08B1B340;
L_08B1B340:
    rt.unsupported(0x08B1B340u, 0x726F4672u, "unknown not lowered yet"); return;
L_08B1B358:
    rt.unsupported(0x08B1B358u, 0x41746547u, "unknown not lowered yet"); return;
L_08B1B36C:
    rt.unsupported(0x08B1B36Cu, 0x00000073u, "special? not lowered yet"); return;
L_08B1B370:
    rt.unsupported(0x08B1B370u, 0x736F7243u, "unknown not lowered yet"); return;
L_08B1B380:
    rt.unsupported(0x08B1B380u, 0x4E636556u, "unknown not lowered yet"); return;
L_08B1B390:
    if (ctx.gpr[27] == ctx.gpr[3]) {
    ctx.execute_vfpu_vscl_ct<99u, 97u, 108u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 63u, 0x08B348ECu>(ctx, &aot_mem); return;
    }
    goto L_08B1B398;
L_08B1B398:
    // nop
    // nop
    // nop
    ctx.gpr[12] = (0u | 0u);
    rt.unsupported(0x08B1B3A8u, 0x00646574u, "special? not lowered yet"); return;
L_08B1B3D8:
    rt.unsupported(0x08B1B3D8u, 0x74696E49u, "unknown not lowered yet"); return;
L_08B1B3F8:
    rt.unsupported(0x08B1B3F8u, 0x74696E49u, "unknown not lowered yet"); return;
L_08B1B41C:
    rt.unsupported(0x08B1B41Cu, 0x74726170u, "unknown not lowered yet"); return;
L_08B1B428:
    rt.unsupported(0x08B1B428u, 0x6B6F6D73u, "unknown not lowered yet"); return;
L_08B1B434:
    rt.unsupported(0x08B1B434u, 0x6E696172u, "vfpu3 not lowered yet"); return;
L_08B1B440:
    rt.unsupported(0x08B1B440u, 0x74616F62u, "unknown not lowered yet"); return;
L_08B1B44C:
    ctx.execute_vfpu_vminmax(102u, 108u, 97u, 1u, false);
    ctx.gpr[6] = (0u | 0u);
    goto L_08B1B454;
L_08B1B454:
    ctx.execute_vfpu_vminmax(102u, 108u, 97u, 1u, false);
    ctx.gpr[6] = (0u | 0u);
    goto L_08B1B45C;
L_08B1B45C:
    rt.unsupported(0x08B1B45Cu, 0x6E696172u, "vfpu3 not lowered yet"); return;
L_08B1B468:
    ctx.execute_vfpu_compare3(98u, 108u, 111u, 1u, 6u);
    (void)(0u & 0u);
    goto L_08B1B470;
L_08B1B470:
    ctx.execute_vfpu_vscl_ct<103u, 97u, 109u, 1u>();
    ctx.execute_vfpu_vhdp(108u, 101u, 97u, 1u);
    ctx.gpr[31] = (ctx.gpr[18] | 12592u);
    rt.unsupported(0x08B1B47Cu, 0x00000034u, "special? not lowered yet"); return;
L_08B1B480:
    rt.unsupported(0x08B1B480u, 0x7474656Cu, "unknown not lowered yet"); return;
L_08B1B488:
    rt.unsupported(0x08B1B488u, 0x756F6C63u, "unknown not lowered yet"); return;
L_08B1B490:
    rt.unsupported(0x08B1B490u, 0x756F6C63u, "unknown not lowered yet"); return;
L_08B1B49C:
    ctx.execute_vfpu_compare3(98u, 108u, 111u, 1u, 6u);
    ctx.execute_vfpu_vcmp_ct<115u, 112u, 1u, 4u>();
    ctx.gpr[14] = (ctx.gpr[1] + ctx.gpr[18]);
    goto L_08B1B4A8;
L_08B1B4A8:
    rt.unsupported(0x08B1B4A8u, 0x676E7567u, "vfpu1 not lowered yet"); return;
L_08B1B4B0:
    ctx.execute_vfpu_vcmp_ct<111u, 108u, 1u, 3u>();
    ctx.execute_vfpu_compare3(105u, 115u, 105u, 1u, 6u);
    ctx.execute_vfpu_compare3(110u, 115u, 109u, 1u, 6u);
    ctx.gpr[12] = (0u < 0u ? 1u : 0u);
    goto L_08B1B4C0;
L_08B1B4C0:
    ctx.execute_vfpu_vcmp_ct<117u, 108u, 1u, 2u>();
    rt.unsupported(0x08B1B4C4u, 0x69687465u, "unknown not lowered yet"); return;
L_08B1B4D0:
    rt.unsupported(0x08B1B4D0u, 0x736E7567u, "unknown not lowered yet"); return;
L_08B1B4DC:
    rt.unsupported(0x08B1B4DCu, 0x6E696F70u, "vfpu3 not lowered yet"); return;
L_08B1B4E8:
    rt.unsupported(0x08B1B4E8u, 0x72617073u, "unknown not lowered yet"); return;
L_08B1B4F0:
    ctx.execute_vfpu_vcmp_ct<97u, 108u, 1u, 2u>();
    rt.unsupported(0x08B1B4F4u, 0x705F746Fu, "unknown not lowered yet"); return;
L_08B1B500:
    rt.unsupported(0x08B1B500u, 0x736E7567u, "unknown not lowered yet"); return;
L_08B1B50C:
    rt.unsupported(0x08B1B50Cu, 0x74616568u, "unknown not lowered yet"); return;
L_08B1B518:
    rt.unsupported(0x08B1B518u, 0x73616562u, "unknown not lowered yet"); return;
L_08B1B520:
    rt.unsupported(0x08B1B520u, 0x6E696172u, "vfpu3 not lowered yet"); return;
L_08B1B52C:
    rt.unsupported(0x08B1B52Cu, 0x6E696172u, "vfpu3 not lowered yet"); return;
L_08B1B538:
    rt.unsupported(0x08B1B538u, 0x6E696172u, "vfpu3 not lowered yet"); return;
L_08B1B548:
    rt.unsupported(0x08B1B548u, 0x6968706Du, "unknown not lowered yet"); return;
L_08B1B550:
    ctx.execute_vfpu_vscl_ct<102u, 105u, 114u, 1u>();
    ctx.execute_vfpu_vscl_ct<104u, 111u, 115u, 1u>();
    // nop
    goto L_08B1B55C;
L_08B1B55C:
    rt.unsupported(0x08B1B55Cu, 0x72615043u, "unknown not lowered yet"); return;
L_08B1B858:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<80u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<67u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<77u, 111u, 100u, 1u>();
    ctx.execute_vfpu_vhdp(108u, 73u, 110u, 1u);
    rt.unsupported(0x08B1B864u, 0x0000006Fu, "special? not lowered yet"); return;
L_08B1B898:
    if (ctx.gpr[2] == ctx.gpr[1]) {
    rt.unsupported(0x08B1B89Cu, 0x4D204E4Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 205u, 0x08B2CDF8u>(ctx, &aot_mem); return;
    }
    goto L_08B1B8A0;
L_08B1B8A0:
    rt.unsupported(0x08B1B8A0u, 0x4C45444Fu, "unknown not lowered yet"); return;
L_08B1B8B8:
    ctx.gpr[14] = (ctx.gpr[27] + static_cast<std::uint32_t>(24899));
    rt.unsupported(0x08B1B8BCu, 0x69662074u, "unknown not lowered yet"); return;
L_08B1B8DC:
    rt.unsupported(0x08B1B8DCu, 0x74615072u, "unknown not lowered yet"); return;
L_08B1B8E8:
    rt.unsupported(0x08B1B8E8u, 0x00007070u, "special? not lowered yet"); return;
L_08B1B8EC:
    ctx.execute_vfpu_compare3(77u, 80u, 78u, 1u, 6u);
    rt.unsupported(0x08B1B8F0u, 0x00006574u, "special? not lowered yet"); return;
L_08B1B8F4:
    ctx.execute_vfpu_vminmax(99u, 115u, 95u, 1u, false);
    rt.unsupported(0x08B1B8F8u, 0x00637369u, "special? not lowered yet"); return;
L_08B1B8FC:
    rt.unsupported(0x08B1B8FCu, 0x686E6F64u, "unknown not lowered yet"); return;
L_08B1B904:
    rt.unsupported(0x08B1B904u, 0x686E6F64u, "unknown not lowered yet"); return;
L_08B1B90C:
    ctx.gpr[20] = (ctx.gpr[19] & 25706u);
    // nop
    goto L_08B1B914;
L_08B1B914:
    ctx.gpr[20] = (ctx.gpr[3] | 25706u);
    // nop
    goto L_08B1B91C;
L_08B1B91C:
    ctx.gpr[20] = (ctx.gpr[11] | 25706u);
    // nop
    goto L_08B1B924;
L_08B1B924:
    ctx.gpr[20] = (ctx.gpr[19] | 25706u);
    // nop
    goto L_08B1B92C;
L_08B1B92C:
    ctx.gpr[18] = (ctx.gpr[11] & 24941u);
    // nop
    goto L_08B1B934;
L_08B1B934:
    ctx.gpr[18] = (ctx.gpr[19] & 24941u);
    // nop
    goto L_08B1B93C;
L_08B1B93C:
    ctx.gpr[18] = (ctx.gpr[27] & 24941u);
    // nop
    goto L_08B1B944;
L_08B1B944:
    ctx.gpr[12] = (ctx.gpr[11] & 24947u);
    // nop
    goto L_08B1B94C;
L_08B1B94C:
    ctx.gpr[12] = (ctx.gpr[19] & 24947u);
    // nop
    goto L_08B1B954;
L_08B1B954:
    ctx.gpr[12] = (ctx.gpr[27] & 24947u);
    // nop
    goto L_08B1B95C;
L_08B1B95C:
    ctx.gpr[12] = (ctx.gpr[3] | 24947u);
    // nop
    goto L_08B1B964;
L_08B1B964:
    ctx.gpr[12] = (ctx.gpr[19] | 24947u);
    // nop
    goto L_08B1B96C;
L_08B1B96C:
    ctx.gpr[12] = (ctx.gpr[27] | 24947u);
    // nop
    goto L_08B1B974;
L_08B1B974:
    ctx.gpr[3] = (ctx.gpr[19] & 26998u);
    // nop
    goto L_08B1B97C;
L_08B1B97C:
    ctx.gpr[3] = (ctx.gpr[27] & 26998u);
    // nop
    goto L_08B1B984;
L_08B1B984:
    ctx.gpr[3] = (ctx.gpr[3] | 26998u);
    // nop
    goto L_08B1B98C;
L_08B1B98C:
    ctx.gpr[3] = (ctx.gpr[19] | 26998u);
    // nop
    goto L_08B1B994;
L_08B1B994:
    rt.unsupported(0x08B1B994u, 0x72756F74u, "unknown not lowered yet"); return;
L_08B1B99C:
    ctx.gpr[3] = (ctx.gpr[19] & 24941u);
    // nop
    goto L_08B1B9A4;
L_08B1B9A4:
    ctx.gpr[3] = (ctx.gpr[27] | 26998u);
    // nop
    rt.unsupported(0x08B1B9ACu, 0x726F6D65u, "unknown not lowered yet"); return;
L_08B1B9B4:
    rt.unsupported(0x08B1B9B4u, 0x6E616C50u, "vfpu3 not lowered yet"); return;
L_08B1B9CC:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.execute_vfpu_vcmp_ct<32u, 80u, 1u, 10u>();
    rt.unsupported(0x08B1B9D4u, 0x72657961u, "unknown not lowered yet"); return;
L_08B1B9F8:
    ctx.execute_vfpu_vscl_ct<83u, 112u, 101u, 1u>();
    ctx.execute_vfpu_vhdp(100u, 32u, 37u, 1u);
    rt.unsupported(0x08B1BA00u, 0x73614D20u, "unknown not lowered yet"); return;
L_08B1BA1C:
    rt.unsupported(0x08B1BA1Cu, 0x746F6972u, "unknown not lowered yet"); return;
L_08B1BA24:
    rt.unsupported(0x08B1BA24u, 0x69727473u, "unknown not lowered yet"); return;
L_08B1BA2C:
    rt.unsupported(0x08B1BA2Cu, 0x61656C43u, "vfpu0 not lowered yet"); return;
}

void recomp_unit_0197(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0197_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_197(Runtime &runtime) {
    runtime.register_generated_unit(197u, 0x08B18000u, 16384u, &recomp_unit_0197, &recomp_unit_0197_entry);
    runtime.register_function(0x08B18000u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18024u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18040u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18064u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18098u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B180A4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B180C0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B180C4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B180D0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B180ECu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B180F0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B180FCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18118u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1811Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18128u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18144u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18148u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18154u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1816Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18174u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18180u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18198u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B181A0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B181ACu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B181CCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B181D8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B181F8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18208u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18218u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18234u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18248u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1824Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18254u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18264u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1826Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18284u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18294u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18300u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18308u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1832Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1833Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1834Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18368u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18378u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18384u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1839Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B183C0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B183C8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B183DCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B183E4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B183F0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B183F4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18400u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18404u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18918u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18920u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18928u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18930u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18944u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18948u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18958u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18968u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18974u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1898Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1899Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B189A4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B189B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B189C0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B189C4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B189D0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B189DCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B189E4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B189F0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18A04u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18A10u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18A20u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18A34u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18A40u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18A4Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18A58u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18A5Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18A6Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18A78u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18A80u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18A8Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18A94u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18AACu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18AC4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18ADCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18AE8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B00u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B14u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B20u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B2Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B30u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B38u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B44u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B50u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B5Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B68u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B70u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B7Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B80u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B90u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18BA4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18BC0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18BE0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18BFCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18C1Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18C3Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18C40u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18C50u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18C60u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18C74u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18C90u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18CACu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18CD4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18CE0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18CECu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18CF4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18D00u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18D04u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18D10u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18D1Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18D28u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18D60u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18D70u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18D78u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18D80u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18D88u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18D90u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18D98u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18DA0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18DA8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18DB0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18DB8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18DC0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18DC8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18DD0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18DD8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18DE0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18DE8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18DF0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18DF8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E00u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E08u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E10u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E18u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E20u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E28u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E30u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E38u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E40u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E48u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E50u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E58u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E60u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E68u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E70u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E78u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E80u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E88u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E90u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E98u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18EA0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18EA8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18EB0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18EB8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18EC0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18EC8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18ED0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18ED8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18EE0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18EE8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18EF0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18EF8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F00u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F08u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F10u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F18u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F20u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F28u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F30u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F38u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F40u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F48u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F50u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F58u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F60u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F68u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F70u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F98u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F9Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18FACu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18FB4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18FC0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18FCCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18FD8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18FE8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18FF4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19000u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19010u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1901Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19024u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19030u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19038u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19040u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1904Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19050u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1905Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19068u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19074u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19080u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1908Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19094u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B190A0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B190ACu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B190B8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B190C0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B190C8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B190D0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B190D8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B190E0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B190ECu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B190FCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1910Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1911Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1912Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19138u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19144u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19150u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19160u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19170u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1917Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19188u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19198u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B191A4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B191B4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B191BCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B191CCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B191D4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B191D8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B191E8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B191F0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B191F8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19208u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19218u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19224u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19230u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1923Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19248u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19254u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19260u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1926Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19278u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19290u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B192D0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B192D8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B192E0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B192E8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B192F0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B192F8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19300u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19308u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19310u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19318u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19320u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19328u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19330u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19338u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19340u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19348u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19350u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19358u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19360u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19368u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19370u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19378u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19380u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19388u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19390u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19398u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B193A0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B193A8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B193B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B193B8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B193C0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B193C8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B193D0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B193D8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B193E0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B193E8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B193F0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B193F8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19400u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19408u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19410u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19418u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19420u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19428u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19430u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19558u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19568u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19580u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19598u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B195C8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B195E0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19628u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19630u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19648u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19664u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19674u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1967Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1968Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19698u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B196A8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B196B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B196D0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B196E0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B196E8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B196FCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19708u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19718u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19720u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1972Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19740u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19750u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19758u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19764u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19778u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19788u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19790u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1979Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B197A8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B197B8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B197C0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B197D4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B197E4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B197ECu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1980Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1981Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19824u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19844u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19868u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19878u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19880u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19890u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19898u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B198A8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B198B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B198CCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B198DCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B198E4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B198F8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19904u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19914u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1991Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19928u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19938u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19948u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19950u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19968u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19978u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19980u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B199A0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B199B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B199B8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B199D4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B199E4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B199ECu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19A00u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19A10u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19A18u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19A24u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19A34u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19A44u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19A4Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19A58u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19A60u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19A70u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19A78u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19A88u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19A98u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19AA0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19ABCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19AE0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19B08u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19B14u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19B24u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19B30u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19B3Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19B54u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19B68u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19B70u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19B78u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19B80u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19B90u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19B98u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19BA0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19BA8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19BB4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19BBCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19BC0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19BC8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19BCCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19BDCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19BF0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19C00u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19C14u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19C24u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19C3Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19C4Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19C64u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19C74u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19C80u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19C90u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19CA4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19CB4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19CC8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19CD4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19CECu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19CFCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19D08u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19D20u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19D30u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19D3Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19D54u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19D68u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19D74u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19D8Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19DA0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19DACu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19DC4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19DD0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19DDCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19DF4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19E04u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19E10u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19E28u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19E80u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19EACu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19EE8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19EF0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19EF8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19F00u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19F10u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19F38u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19F6Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A050u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A058u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A064u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A06Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A08Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A09Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A0C4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A0D0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A0DCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A290u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A2A8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A2ACu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A2D0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A2ECu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A304u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A318u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A32Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A364u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A374u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A3B8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A3F4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A424u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A444u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A44Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A484u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A4C0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A504u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A53Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A558u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A570u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A5A4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A5D0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A5DCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A5E4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A5F0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A5F4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A5F8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A600u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A60Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A61Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A62Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A63Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A644u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A64Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A658u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A660u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A66Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A670u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A678u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A67Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A684u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A68Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A698u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A6A8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A6B8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A6CCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A6D4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A710u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A718u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A728u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A730u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A738u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A740u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A748u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A750u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A758u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A764u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A770u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A778u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A780u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A784u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A78Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A794u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A79Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A7A4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A7B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A7B8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A7C4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A7CCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A7D4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A7E0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A7ECu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A7F4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A800u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A808u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A814u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A81Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A828u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A830u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A838u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A844u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A850u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A854u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A85Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A864u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A870u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A87Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A888u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A898u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A8A4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A8B4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A8BCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A8C4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A8CCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A8D4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A8DCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A8E4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A8E8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A8F0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A8F4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A8F8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A900u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A908u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A910u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A918u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A924u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A930u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A938u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A940u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A944u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A94Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A954u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A960u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A968u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A970u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A978u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A980u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A98Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A994u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A998u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A9A8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A9B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A9B8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A9C0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A9C8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A9D4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A9DCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A9E0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A9E8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A9ECu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A9F4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A9F8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA04u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA10u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA18u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA24u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA30u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA3Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA48u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA54u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA64u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA74u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA7Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA88u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA8Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA94u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AAA8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AAACu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AAB0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AAB4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AABCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AAC8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AAD0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AAD8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AAE0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AAE4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AAE8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AAF0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AAF8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB00u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB08u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB10u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB18u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB20u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB28u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB30u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB38u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB40u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB48u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB50u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB58u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB60u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB68u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB90u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ABA0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ABACu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ABB4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ABD4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ABDCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ABF0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AC14u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AC1Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AC30u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AC4Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AC54u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AC68u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AC80u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AC88u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AC9Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ACB8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ACCCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ACD8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ACF0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AD10u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AEE4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B040u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B050u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B058u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B064u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B06Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B080u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B09Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B0B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B0B4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B0C8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B0CCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B0DCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B0ECu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B0F4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B104u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B11Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B134u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B154u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B180u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B1A0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B1E8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B210u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B224u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B228u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B238u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B24Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B264u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B27Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B28Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B29Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B2A8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B2ACu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B2BCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B2C0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B2C8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B2D0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B2D8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B2E8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B2F4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B2F8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B308u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B30Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B314u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B320u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B32Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B338u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B340u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B358u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B36Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B370u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B380u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B390u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B398u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B3D8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B3F8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B41Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B428u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B434u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B440u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B44Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B454u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B45Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B468u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B470u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B480u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B488u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B490u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B49Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B4A8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B4B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B4C0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B4D0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B4DCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B4E8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B4F0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B500u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B50Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B518u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B520u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B52Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B538u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B548u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B550u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B55Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B858u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B898u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B8A0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B8B8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B8DCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B8E8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B8ECu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B8F4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B8FCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B904u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B90Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B914u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B91Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B924u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B92Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B934u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B93Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B944u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B94Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B954u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B95Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B964u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B96Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B974u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B97Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B984u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B98Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B994u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B99Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B9A4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B9B4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B9CCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B9F8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BA1Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BA24u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BA2Cu, &recomp_unit_0197, "recomp_unit_0197");
}
} // namespace psprecomp
