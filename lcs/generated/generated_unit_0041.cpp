#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0041[4090] = {
    1, 0, 2, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 5, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    8, 0, 9, 0, 0, 10, 0, 11, 0, 12, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0,
    0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 21, 0, 0, 22, 0, 23, 24, 25, 0,
    26, 0, 0, 0, 0, 27, 0, 28, 0, 29, 0, 30, 0, 0, 31, 0, 0, 32, 0, 33, 34, 35, 0, 36, 0, 0, 0, 0, 37, 0, 38, 0,
    0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 43, 44, 0, 45,
    0, 46, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 53, 54,
    0, 55, 0, 56, 0, 57, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 62, 63, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 69, 0,
    0, 0, 70, 0, 71, 0, 72, 0, 73, 0, 0, 0, 74, 0, 0, 0, 75, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 79,
    0, 0, 80, 0, 81, 0, 82, 0, 83, 84, 0, 85, 0, 86, 0, 87, 0, 0, 88, 89, 0, 90, 0, 91, 0, 92, 0, 93, 0, 94, 0, 95,
    0, 96, 0, 97, 0, 98, 0, 99, 0, 100, 0, 101, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 109, 110, 0, 111, 0, 112, 0, 0, 113, 0, 114, 0, 0, 0, 0,
    115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 119, 0, 120, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0,
    123, 0, 0, 0, 0, 0, 0, 124, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 130,
    0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0,
    0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 141,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 146, 0, 0,
    0, 147, 148, 0, 149, 0, 150, 0, 0, 0, 0, 0, 151, 152, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 156, 0, 157, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 162, 0, 0, 163, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 166, 0, 167, 0, 0, 168, 169, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 181, 0,
    0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    188, 0, 189, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 194, 0, 0,
    0, 195, 196, 0, 197, 0, 198, 0, 0, 0, 0, 0, 199, 200, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 204, 0, 205,
    0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0,
    209, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0,
    0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 235, 0, 0, 236, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 238, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0,
    0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 246, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0,
    249, 0, 250, 0, 0, 0, 251, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0,
    0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 259, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262,
    0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 271, 0, 272, 0, 273, 0, 274, 0, 275, 0, 276, 0, 277, 0, 0, 0,
    0, 278, 0, 279, 0, 280, 0, 281, 0, 282, 0, 283, 0, 0, 0, 284, 0, 285, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 291, 0, 0, 292, 0, 0, 293, 294, 0, 295, 0, 296, 0, 297, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 300, 0, 0, 0, 301, 0, 302, 0, 303, 304, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 306, 307, 0, 0, 0, 308, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 0, 0, 0, 0, 0, 0,
    313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 316, 317, 0, 318, 0, 0, 0, 0, 319, 0, 320, 0, 321, 0,
    0, 0, 322, 0, 323, 0, 0, 0, 0, 324, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0,
    0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 334, 0, 335, 0, 0, 336, 0, 0, 0,
    0, 0, 0, 0, 0, 337, 338, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0,
    0, 0, 341, 0, 342, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 346, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 349, 0,
    350, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 354, 355, 356,
    0, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 359, 0, 360, 0, 0, 0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    363, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 366, 0, 367, 368, 0, 0, 0, 369, 0, 0, 0, 370, 0, 371, 372, 0, 0, 0, 0, 373,
    0, 0, 0, 374, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 385, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388,
    0, 389, 0, 0, 0, 0, 0, 0, 0, 390, 0, 391, 0, 0, 0, 392, 0, 0, 0, 393, 394, 0, 395, 0, 0, 0, 0, 0, 0, 0, 396, 0,
    0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 399, 0, 0, 400, 0, 0, 0, 0, 401, 0,
    402, 0, 0, 0, 403, 0, 0, 0, 404, 405, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 410, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 417, 418, 0, 419, 0, 420, 0, 0, 0, 0, 0, 421, 422,
    423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 425, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 429,
    0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 431, 0, 0, 0, 432, 0, 433, 0, 0, 0, 0, 0, 434, 0, 435, 0, 0, 0, 436, 0, 0,
    0, 437, 438, 0, 439, 440, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443,
    0, 0, 0, 444, 445, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 448, 0, 0, 449, 0, 0, 450, 0, 0, 0, 451, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 454, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 457, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 459, 0, 0, 460, 0, 461, 0, 0, 0, 0, 0, 462, 0, 463, 0,
    0, 0, 0, 0, 0, 464, 0, 465, 0, 466, 0, 467, 0, 0, 0, 468, 0, 0, 0, 469, 470, 0, 471, 0, 472, 0, 0, 0, 0, 0, 473, 474,
    0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 480, 0,
    0, 0, 481, 0, 0, 0, 482, 483, 0, 484, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 487, 0, 0, 488, 0, 0, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 491, 0, 492, 0, 493, 0, 0,
    0, 494, 0, 0, 0, 0, 0, 495, 0, 496, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 499, 0, 0, 0, 500, 0,
    0, 0, 501, 502, 0, 503, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 506, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 509, 0, 0, 0, 510, 0, 0, 0, 511, 512, 0,
    513, 514, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 518, 0,
    0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 521, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0,
    524, 0, 0, 0, 525, 0, 0, 0, 526, 527, 0, 528, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 531, 0, 0, 532, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 536, 0, 537, 0, 538, 0, 539, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 542, 0, 0, 543, 0, 544, 0, 545, 0, 0, 0, 546, 0, 0, 0, 547, 548, 0, 549, 0, 550,
    0, 0, 0, 0, 0, 551, 552, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 555, 0, 556, 0, 0, 0, 0, 557, 0, 0, 0,
    0, 0, 558, 0, 0, 0, 0, 559, 0, 560, 0, 561, 0, 562, 0, 563, 0, 564, 0, 565, 0, 566, 0, 0, 0, 567, 0, 0, 568, 0, 0, 569,
    0, 0, 0, 570, 0, 0, 0, 0, 571, 0, 0, 572, 0, 573, 0, 0, 574, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 576, 0, 0, 577, 0,
    578, 0, 579, 0, 580, 0, 581, 0, 0, 582, 0, 583, 0, 0, 584, 0, 585, 0, 586, 0, 0, 587, 0, 0, 588, 0, 589, 0, 590, 0, 591, 0,
    0, 592, 0, 0, 593, 0, 594, 0, 0, 595, 0, 0, 596, 0, 597, 0, 0, 598, 0, 599, 0, 0, 600, 0, 601, 0, 0, 0, 0, 602, 0, 0,
    0, 603, 0, 0, 0, 604, 0, 0, 605, 0, 0, 606, 0, 0, 607, 0, 608, 0, 0, 0, 0, 0, 609, 0, 610, 0, 611, 0, 612, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 614, 0, 615, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 618, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 620, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0,
    623, 0, 624, 0, 625, 0, 626, 0, 627, 0, 0, 0, 0, 0, 0, 0, 628, 0, 629, 0, 630, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0,
    632, 0, 0, 633, 0, 0, 0, 0, 0, 634, 0, 635, 0, 0, 636, 0, 0, 637, 0, 638, 0, 0, 639, 0, 0, 640, 0, 641, 0, 0, 642, 0,
    0, 0, 0, 0, 0, 643, 0, 0, 644, 0, 0, 645, 0, 646, 0, 647, 0, 648, 0, 649, 0, 0, 650, 0, 0, 651, 0, 652, 0, 653, 0, 0,
    0, 0, 654, 0, 655, 0, 0, 0, 0, 0, 656, 0, 657, 0, 658, 0, 659, 0, 660, 0, 0, 661, 0, 662, 0, 0, 663, 0, 0, 664, 0, 0,
    665, 0, 0, 666, 0, 0, 667, 0, 0, 668, 0, 0, 669, 0, 0, 670, 0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 672,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 675, 0, 0, 676, 0, 0, 677, 678, 0,
    0, 0, 0, 0, 0, 0, 679, 0, 0, 680, 681, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 683, 0, 684, 0, 685,
    0, 0, 0, 0, 0, 686, 0, 687, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0,
    691, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0, 696, 0, 697, 0, 698, 0,
    0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 701, 0, 0,
    702, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 705, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0,
    0, 0, 710, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 714, 0, 715, 0, 0, 0,
    0, 716, 0, 717, 0, 718, 0, 719, 0, 720, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 0, 0, 722, 0, 723, 0, 0, 724, 0, 725, 726,
    0, 727, 0, 0, 0, 0, 728, 0, 0, 729, 730, 0, 731, 0, 732, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 734, 0, 0, 735, 0, 0, 0, 736, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0,
    738, 0, 0, 739, 0, 0, 0, 0, 740, 0, 0, 0, 741, 0, 0, 0, 742, 0, 0, 0, 0, 0, 743, 0, 0, 744, 0, 0, 0, 0, 0, 0,
    0, 0, 745, 0, 0, 0, 746, 0, 0, 0, 747, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 748, 0, 0, 0, 749, 0, 750, 751, 0, 0, 752,
    0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 754, 0, 0, 755, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 757, 0, 758, 0, 0, 0, 0, 0, 759, 0, 0, 760, 0, 0, 761, 0, 762, 0, 0, 763, 0, 0, 764, 0, 0, 0, 765,
    0, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 0, 768, 0, 0, 0, 0, 769,
    0, 770, 0, 0, 0, 0, 0, 0, 771, 0, 772, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 773, 0, 0, 774, 0, 775, 0,
    0, 0, 0, 0, 0, 776, 0, 0, 777, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 779, 0, 0, 780, 0, 781, 0, 782,
    0, 0, 783, 0, 0, 784, 0, 0, 0, 0, 0, 785, 786, 0, 0, 0, 0, 787, 0, 0, 788, 0, 0, 0, 0, 0, 0, 0, 789, 0, 0, 790,
    0, 0, 0, 0, 791, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 793, 0, 0, 794, 0, 0, 795, 0, 0, 796, 0, 0,
    797, 0, 0, 798, 0, 799, 0, 800, 0, 801, 0, 802, 0, 0, 0, 803, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 804, 0, 0, 805,
    0, 0, 806, 0, 0, 807, 0, 808, 0, 809, 0, 810, 0, 0, 811, 0, 0, 0, 812, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 813,
    0, 0, 0, 0, 0, 0, 814, 0, 0, 815, 0, 0, 0, 0, 0, 816, 0, 0, 817, 0, 818, 0, 819, 0, 0, 0, 0, 0, 820, 0, 0, 821,
    0, 822, 0, 823, 0, 0, 0, 0, 0, 0, 824, 0, 0, 825, 0, 0, 826, 0, 0, 827, 0, 0, 0, 828, 0, 829, 0, 830, 0, 831, 0, 0,
    0, 832, 0, 0, 833, 0, 834, 0, 835, 0, 0, 0, 836, 0, 0, 0, 837, 0, 0, 838, 0, 839, 0, 0, 0, 0, 840, 0, 0, 0, 841, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 842, 0, 0, 843, 0, 0, 844, 0, 0, 845, 0, 846, 0, 847, 0, 848, 0, 0, 0, 0, 0,
    0, 0, 849, 0, 0, 0, 850, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 851, 0, 0, 0, 852, 0, 0, 853, 0, 854, 0, 855, 0,
    0, 856, 0, 0, 857, 0, 858, 0, 859, 0, 0, 0, 0, 0, 0, 860, 0, 0, 0, 861, 0, 862, 0, 863, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 864, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 865, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 866, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 867, 0, 868, 869, 0, 870, 0, 0, 0, 0, 0,
    0, 0, 0, 871, 0, 872, 873, 0, 874, 0, 0, 0, 875, 0, 876, 0, 0, 0, 877, 0, 0, 0, 0, 878, 879, 0, 0, 0, 0, 880, 881, 0,
    0, 0, 0, 882, 0, 0, 883, 0, 0, 0, 0, 884, 0, 0, 885, 0, 0, 0, 886, 887, 0, 0, 0, 0, 888, 0, 0, 0, 0, 889, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 890, 0, 0, 891, 0, 0, 0, 892, 893, 0, 894, 0, 0, 0, 895, 0, 896, 0, 0, 897, 0, 0,
    0, 0, 0, 898, 0, 0, 0, 899, 0, 900, 901, 0, 902, 0, 0, 0, 903, 0, 904, 905, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 906,
    0, 0, 907, 0, 0, 908, 909, 0, 910, 0, 0, 911, 0, 0, 0, 912, 0, 0, 913, 0, 0, 0, 914, 0, 915, 916,
};
void recomp_unit_0041_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088A8000u;
        entry_id = (entry_delta < 16360u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0041[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088A8000;
    case 2u: goto L_088A8008;
    case 3u: goto L_088A801C;
    case 4u: goto L_088A8028;
    case 5u: goto L_088A8038;
    case 6u: goto L_088A803C;
    case 7u: goto L_088A8058;
    case 8u: goto L_088A8080;
    case 9u: goto L_088A8088;
    case 10u: goto L_088A8094;
    case 11u: goto L_088A809C;
    case 12u: goto L_088A80A4;
    case 13u: goto L_088A80B4;
    case 14u: goto L_088A80C0;
    case 15u: goto L_088A80D0;
    case 16u: goto L_088A80E4;
    case 17u: goto L_088A80F0;
    case 18u: goto L_088A810C;
    case 19u: goto L_088A8148;
    case 20u: goto L_088A8150;
    case 21u: goto L_088A815C;
    case 22u: goto L_088A8168;
    case 23u: goto L_088A8170;
    case 24u: goto L_088A8174;
    case 25u: goto L_088A8178;
    case 26u: goto L_088A8180;
    case 27u: goto L_088A8194;
    case 28u: goto L_088A819C;
    case 29u: goto L_088A81A4;
    case 30u: goto L_088A81AC;
    case 31u: goto L_088A81B8;
    case 32u: goto L_088A81C4;
    case 33u: goto L_088A81CC;
    case 34u: goto L_088A81D0;
    case 35u: goto L_088A81D4;
    case 36u: goto L_088A81DC;
    case 37u: goto L_088A81F0;
    case 38u: goto L_088A81F8;
    case 39u: goto L_088A8218;
    case 40u: goto L_088A8240;
    case 41u: goto L_088A824C;
    case 42u: goto L_088A8264;
    case 43u: goto L_088A8270;
    case 44u: goto L_088A8274;
    case 45u: goto L_088A827C;
    case 46u: goto L_088A8284;
    case 47u: goto L_088A8288;
    case 48u: goto L_088A8294;
    case 49u: goto L_088A82B0;
    case 50u: goto L_088A82C8;
    case 51u: goto L_088A82D4;
    case 52u: goto L_088A82EC;
    case 53u: goto L_088A82F8;
    case 54u: goto L_088A82FC;
    case 55u: goto L_088A8304;
    case 56u: goto L_088A830C;
    case 57u: goto L_088A8314;
    case 58u: goto L_088A8318;
    case 59u: goto L_088A832C;
    case 60u: goto L_088A8354;
    case 61u: goto L_088A835C;
    case 62u: goto L_088A838C;
    case 63u: goto L_088A8390;
    case 64u: goto L_088A839C;
    case 65u: goto L_088A83A4;
    case 66u: goto L_088A83C8;
    case 67u: goto L_088A83D4;
    case 68u: goto L_088A83F4;
    case 69u: goto L_088A83F8;
    case 70u: goto L_088A8408;
    case 71u: goto L_088A8410;
    case 72u: goto L_088A8418;
    case 73u: goto L_088A8420;
    case 74u: goto L_088A8430;
    case 75u: goto L_088A8440;
    case 76u: goto L_088A8444;
    case 77u: goto L_088A8464;
    case 78u: goto L_088A8470;
    case 79u: goto L_088A847C;
    case 80u: goto L_088A8488;
    case 81u: goto L_088A8490;
    case 82u: goto L_088A8498;
    case 83u: goto L_088A84A0;
    case 84u: goto L_088A84A4;
    case 85u: goto L_088A84AC;
    case 86u: goto L_088A84B4;
    case 87u: goto L_088A84BC;
    case 88u: goto L_088A84C8;
    case 89u: goto L_088A84CC;
    case 90u: goto L_088A84D4;
    case 91u: goto L_088A84DC;
    case 92u: goto L_088A84E4;
    case 93u: goto L_088A84EC;
    case 94u: goto L_088A84F4;
    case 95u: goto L_088A84FC;
    case 96u: goto L_088A8504;
    case 97u: goto L_088A850C;
    case 98u: goto L_088A8514;
    case 99u: goto L_088A851C;
    case 100u: goto L_088A8524;
    case 101u: goto L_088A852C;
    case 102u: goto L_088A8534;
    case 103u: goto L_088A853C;
    case 104u: goto L_088A8558;
    case 105u: goto L_088A8570;
    case 106u: goto L_088A8594;
    case 107u: goto L_088A85A0;
    case 108u: goto L_088A85B8;
    case 109u: goto L_088A85C4;
    case 110u: goto L_088A85C8;
    case 111u: goto L_088A85D0;
    case 112u: goto L_088A85D8;
    case 113u: goto L_088A85E4;
    case 114u: goto L_088A85EC;
    case 115u: goto L_088A8600;
    case 116u: goto L_088A8618;
    case 117u: goto L_088A8630;
    case 118u: goto L_088A863C;
    case 119u: goto L_088A8644;
    case 120u: goto L_088A864C;
    case 121u: goto L_088A8658;
    case 122u: goto L_088A8660;
    case 123u: goto L_088A8680;
    case 124u: goto L_088A869C;
    case 125u: goto L_088A86A0;
    case 126u: goto L_088A86B8;
    case 127u: goto L_088A86C8;
    case 128u: goto L_088A86D8;
    case 129u: goto L_088A86E8;
    case 130u: goto L_088A86FC;
    case 131u: goto L_088A870C;
    case 132u: goto L_088A8720;
    case 133u: goto L_088A8768;
    case 134u: goto L_088A8778;
    case 135u: goto L_088A878C;
    case 136u: goto L_088A87A8;
    case 137u: goto L_088A87B8;
    case 138u: goto L_088A87C4;
    case 139u: goto L_088A87E0;
    case 140u: goto L_088A87F0;
    case 141u: goto L_088A87FC;
    case 142u: goto L_088A8828;
    case 143u: goto L_088A8838;
    case 144u: goto L_088A8858;
    case 145u: goto L_088A8864;
    case 146u: goto L_088A8874;
    case 147u: goto L_088A8884;
    case 148u: goto L_088A8888;
    case 149u: goto L_088A8890;
    case 150u: goto L_088A8898;
    case 151u: goto L_088A88B0;
    case 152u: goto L_088A88B4;
    case 153u: goto L_088A88B8;
    case 154u: goto L_088A88E0;
    case 155u: goto L_088A88E8;
    case 156u: goto L_088A88EC;
    case 157u: goto L_088A88F4;
    case 158u: goto L_088A8940;
    case 159u: goto L_088A8954;
    case 160u: goto L_088A89A4;
    case 161u: goto L_088A89AC;
    case 162u: goto L_088A89B8;
    case 163u: goto L_088A89C4;
    case 164u: goto L_088A89D0;
    case 165u: goto L_088A89D8;
    case 166u: goto L_088A8A0C;
    case 167u: goto L_088A8A14;
    case 168u: goto L_088A8A20;
    case 169u: goto L_088A8A24;
    case 170u: goto L_088A8A28;
    case 171u: goto L_088A8A48;
    case 172u: goto L_088A8AA4;
    case 173u: goto L_088A8AB8;
    case 174u: goto L_088A8B08;
    case 175u: goto L_088A8B1C;
    case 176u: goto L_088A8B28;
    case 177u: goto L_088A8B40;
    case 178u: goto L_088A8B48;
    case 179u: goto L_088A8B64;
    case 180u: goto L_088A8B6C;
    case 181u: goto L_088A8B78;
    case 182u: goto L_088A8B84;
    case 183u: goto L_088A8B94;
    case 184u: goto L_088A8BA8;
    case 185u: goto L_088A8BB4;
    case 186u: goto L_088A8BC4;
    case 187u: goto L_088A8BCC;
    case 188u: goto L_088A8C00;
    case 189u: goto L_088A8C08;
    case 190u: goto L_088A8C0C;
    case 191u: goto L_088A8C3C;
    case 192u: goto L_088A8C5C;
    case 193u: goto L_088A8C64;
    case 194u: goto L_088A8C74;
    case 195u: goto L_088A8C84;
    case 196u: goto L_088A8C88;
    case 197u: goto L_088A8C90;
    case 198u: goto L_088A8C98;
    case 199u: goto L_088A8CB0;
    case 200u: goto L_088A8CB4;
    case 201u: goto L_088A8CB8;
    case 202u: goto L_088A8CE8;
    case 203u: goto L_088A8CF0;
    case 204u: goto L_088A8CF4;
    case 205u: goto L_088A8CFC;
    case 206u: goto L_088A8D10;
    case 207u: goto L_088A8D1C;
    case 208u: goto L_088A8D6C;
    case 209u: goto L_088A8D80;
    case 210u: goto L_088A8D9C;
    case 211u: goto L_088A8DA4;
    case 212u: goto L_088A8DBC;
    case 213u: goto L_088A8DC8;
    case 214u: goto L_088A8DE8;
    case 215u: goto L_088A8DFC;
    case 216u: goto L_088A8E3C;
    case 217u: goto L_088A8E58;
    case 218u: goto L_088A8EA0;
    case 219u: goto L_088A8EB4;
    case 220u: goto L_088A8ECC;
    case 221u: goto L_088A8ED4;
    case 222u: goto L_088A8EF0;
    case 223u: goto L_088A8EF8;
    case 224u: goto L_088A8F10;
    case 225u: goto L_088A8F18;
    case 226u: goto L_088A8F30;
    case 227u: goto L_088A8F3C;
    case 228u: goto L_088A8F5C;
    case 229u: goto L_088A8F70;
    case 230u: goto L_088A8FB0;
    case 231u: goto L_088A8FCC;
    case 232u: goto L_088A8FD4;
    case 233u: goto L_088A9050;
    case 234u: goto L_088A905C;
    case 235u: goto L_088A9064;
    case 236u: goto L_088A9070;
    case 237u: goto L_088A90AC;
    case 238u: goto L_088A90B4;
    case 239u: goto L_088A90B8;
    case 240u: goto L_088A90D0;
    case 241u: goto L_088A90F8;
    case 242u: goto L_088A9108;
    case 243u: goto L_088A9114;
    case 244u: goto L_088A912C;
    case 245u: goto L_088A913C;
    case 246u: goto L_088A9144;
    case 247u: goto L_088A9154;
    case 248u: goto L_088A9160;
    case 249u: goto L_088A9180;
    case 250u: goto L_088A9188;
    case 251u: goto L_088A9198;
    case 252u: goto L_088A91A4;
    case 253u: goto L_088A91AC;
    case 254u: goto L_088A91E0;
    case 255u: goto L_088A91F0;
    case 256u: goto L_088A920C;
    case 257u: goto L_088A9224;
    case 258u: goto L_088A9240;
    case 259u: goto L_088A9244;
    case 260u: goto L_088A9254;
    case 261u: goto L_088A9268;
    case 262u: goto L_088A927C;
    case 263u: goto L_088A928C;
    case 264u: goto L_088A92A8;
    case 265u: goto L_088A92B0;
    case 266u: goto L_088A92CC;
    case 267u: goto L_088A92D4;
    case 268u: goto L_088A92DC;
    case 269u: goto L_088A9324;
    case 270u: goto L_088A932C;
    case 271u: goto L_088A9340;
    case 272u: goto L_088A9348;
    case 273u: goto L_088A9350;
    case 274u: goto L_088A9358;
    case 275u: goto L_088A9360;
    case 276u: goto L_088A9368;
    case 277u: goto L_088A9370;
    case 278u: goto L_088A9384;
    case 279u: goto L_088A938C;
    case 280u: goto L_088A9394;
    case 281u: goto L_088A939C;
    case 282u: goto L_088A93A4;
    case 283u: goto L_088A93AC;
    case 284u: goto L_088A93BC;
    case 285u: goto L_088A93C4;
    case 286u: goto L_088A93C8;
    case 287u: goto L_088A93D8;
    case 288u: goto L_088A93F0;
    case 289u: goto L_088A9418;
    case 290u: goto L_088A9424;
    case 291u: goto L_088A9430;
    case 292u: goto L_088A943C;
    case 293u: goto L_088A9448;
    case 294u: goto L_088A944C;
    case 295u: goto L_088A9454;
    case 296u: goto L_088A945C;
    case 297u: goto L_088A9464;
    case 298u: goto L_088A9494;
    case 299u: goto L_088A94A0;
    case 300u: goto L_088A94AC;
    case 301u: goto L_088A94BC;
    case 302u: goto L_088A94C4;
    case 303u: goto L_088A94CC;
    case 304u: goto L_088A94D0;
    case 305u: goto L_088A94D8;
    case 306u: goto L_088A9508;
    case 307u: goto L_088A950C;
    case 308u: goto L_088A951C;
    case 309u: goto L_088A9528;
    case 310u: goto L_088A9534;
    case 311u: goto L_088A9558;
    case 312u: goto L_088A9560;
    case 313u: goto L_088A9580;
    case 314u: goto L_088A95AC;
    case 315u: goto L_088A95C4;
    case 316u: goto L_088A95C8;
    case 317u: goto L_088A95CC;
    case 318u: goto L_088A95D4;
    case 319u: goto L_088A95E8;
    case 320u: goto L_088A95F0;
    case 321u: goto L_088A95F8;
    case 322u: goto L_088A9608;
    case 323u: goto L_088A9610;
    case 324u: goto L_088A9624;
    case 325u: goto L_088A9628;
    case 326u: goto L_088A9654;
    case 327u: goto L_088A9660;
    case 328u: goto L_088A966C;
    case 329u: goto L_088A968C;
    case 330u: goto L_088A96A4;
    case 331u: goto L_088A96AC;
    case 332u: goto L_088A96C4;
    case 333u: goto L_088A96CC;
    case 334u: goto L_088A96DC;
    case 335u: goto L_088A96E4;
    case 336u: goto L_088A96F0;
    case 337u: goto L_088A9714;
    case 338u: goto L_088A9718;
    case 339u: goto L_088A973C;
    case 340u: goto L_088A9774;
    case 341u: goto L_088A9788;
    case 342u: goto L_088A9790;
    case 343u: goto L_088A9794;
    case 344u: goto L_088A97B0;
    case 345u: goto L_088A97C0;
    case 346u: goto L_088A97C8;
    case 347u: goto L_088A97D8;
    case 348u: goto L_088A97E8;
    case 349u: goto L_088A97F8;
    case 350u: goto L_088A9800;
    case 351u: goto L_088A9804;
    case 352u: goto L_088A9850;
    case 353u: goto L_088A9864;
    case 354u: goto L_088A9874;
    case 355u: goto L_088A9878;
    case 356u: goto L_088A987C;
    case 357u: goto L_088A988C;
    case 358u: goto L_088A9894;
    case 359u: goto L_088A98AC;
    case 360u: goto L_088A98B4;
    case 361u: goto L_088A98CC;
    case 362u: goto L_088A98D4;
    case 363u: goto L_088A9900;
    case 364u: goto L_088A9910;
    case 365u: goto L_088A9924;
    case 366u: goto L_088A9930;
    case 367u: goto L_088A9938;
    case 368u: goto L_088A993C;
    case 369u: goto L_088A994C;
    case 370u: goto L_088A995C;
    case 371u: goto L_088A9964;
    case 372u: goto L_088A9968;
    case 373u: goto L_088A997C;
    case 374u: goto L_088A998C;
    case 375u: goto L_088A9998;
    case 376u: goto L_088A99AC;
    case 377u: goto L_088A99B8;
    case 378u: goto L_088A99CC;
    case 379u: goto L_088A99D8;
    case 380u: goto L_088A9A04;
    case 381u: goto L_088A9A1C;
    case 382u: goto L_088A9A38;
    case 383u: goto L_088A9A50;
    case 384u: goto L_088A9A60;
    case 385u: goto L_088A9A88;
    case 386u: goto L_088A9A8C;
    case 387u: goto L_088A9AB4;
    case 388u: goto L_088A9AFC;
    case 389u: goto L_088A9B04;
    case 390u: goto L_088A9B24;
    case 391u: goto L_088A9B2C;
    case 392u: goto L_088A9B3C;
    case 393u: goto L_088A9B4C;
    case 394u: goto L_088A9B50;
    case 395u: goto L_088A9B58;
    case 396u: goto L_088A9B78;
    case 397u: goto L_088A9B98;
    case 398u: goto L_088A9BCC;
    case 399u: goto L_088A9BD8;
    case 400u: goto L_088A9BE4;
    case 401u: goto L_088A9BF8;
    case 402u: goto L_088A9C00;
    case 403u: goto L_088A9C10;
    case 404u: goto L_088A9C20;
    case 405u: goto L_088A9C24;
    case 406u: goto L_088A9C2C;
    case 407u: goto L_088A9C4C;
    case 408u: goto L_088A9C6C;
    case 409u: goto L_088A9CA0;
    case 410u: goto L_088A9CAC;
    case 411u: goto L_088A9CB4;
    case 412u: goto L_088A9CC4;
    case 413u: goto L_088A9CF8;
    case 414u: goto L_088A9D20;
    case 415u: goto L_088A9D2C;
    case 416u: goto L_088A9D3C;
    case 417u: goto L_088A9D4C;
    case 418u: goto L_088A9D50;
    case 419u: goto L_088A9D58;
    case 420u: goto L_088A9D60;
    case 421u: goto L_088A9D78;
    case 422u: goto L_088A9D7C;
    case 423u: goto L_088A9D80;
    case 424u: goto L_088A9DA8;
    case 425u: goto L_088A9DB4;
    case 426u: goto L_088A9DBC;
    case 427u: goto L_088A9DD4;
    case 428u: goto L_088A9DE4;
    case 429u: goto L_088A9DFC;
    case 430u: goto L_088A9E20;
    case 431u: goto L_088A9E2C;
    case 432u: goto L_088A9E3C;
    case 433u: goto L_088A9E44;
    case 434u: goto L_088A9E5C;
    case 435u: goto L_088A9E64;
    case 436u: goto L_088A9E74;
    case 437u: goto L_088A9E84;
    case 438u: goto L_088A9E88;
    case 439u: goto L_088A9E90;
    case 440u: goto L_088A9E94;
    case 441u: goto L_088A9EAC;
    case 442u: goto L_088A9ECC;
    case 443u: goto L_088A9EFC;
    case 444u: goto L_088A9F0C;
    case 445u: goto L_088A9F10;
    case 446u: goto L_088A9F28;
    case 447u: goto L_088A9F70;
    case 448u: goto L_088A9F98;
    case 449u: goto L_088A9FA4;
    case 450u: goto L_088A9FB0;
    case 451u: goto L_088A9FC0;
    case 452u: goto L_088A9FC8;
    case 453u: goto L_088A9FEC;
    case 454u: goto L_088A9FF4;
    case 455u: goto L_088AA024;
    case 456u: goto L_088AA068;
    case 457u: goto L_088AA074;
    case 458u: goto L_088AA0AC;
    case 459u: goto L_088AA0C4;
    case 460u: goto L_088AA0D0;
    case 461u: goto L_088AA0D8;
    case 462u: goto L_088AA0F0;
    case 463u: goto L_088AA0F8;
    case 464u: goto L_088AA114;
    case 465u: goto L_088AA11C;
    case 466u: goto L_088AA124;
    case 467u: goto L_088AA12C;
    case 468u: goto L_088AA13C;
    case 469u: goto L_088AA14C;
    case 470u: goto L_088AA150;
    case 471u: goto L_088AA158;
    case 472u: goto L_088AA160;
    case 473u: goto L_088AA178;
    case 474u: goto L_088AA17C;
    case 475u: goto L_088AA198;
    case 476u: goto L_088AA1D0;
    case 477u: goto L_088AA1F0;
    case 478u: goto L_088AA244;
    case 479u: goto L_088AA270;
    case 480u: goto L_088AA278;
    case 481u: goto L_088AA288;
    case 482u: goto L_088AA298;
    case 483u: goto L_088AA29C;
    case 484u: goto L_088AA2A4;
    case 485u: goto L_088AA2C4;
    case 486u: goto L_088AA2E4;
    case 487u: goto L_088AA314;
    case 488u: goto L_088AA320;
    case 489u: goto L_088AA330;
    case 490u: goto L_088AA344;
    case 491u: goto L_088AA364;
    case 492u: goto L_088AA36C;
    case 493u: goto L_088AA374;
    case 494u: goto L_088AA384;
    case 495u: goto L_088AA39C;
    case 496u: goto L_088AA3A4;
    case 497u: goto L_088AA3B4;
    case 498u: goto L_088AA3E0;
    case 499u: goto L_088AA3E8;
    case 500u: goto L_088AA3F8;
    case 501u: goto L_088AA408;
    case 502u: goto L_088AA40C;
    case 503u: goto L_088AA414;
    case 504u: goto L_088AA434;
    case 505u: goto L_088AA458;
    case 506u: goto L_088AA48C;
    case 507u: goto L_088AA4A0;
    case 508u: goto L_088AA4CC;
    case 509u: goto L_088AA4D4;
    case 510u: goto L_088AA4E4;
    case 511u: goto L_088AA4F4;
    case 512u: goto L_088AA4F8;
    case 513u: goto L_088AA500;
    case 514u: goto L_088AA504;
    case 515u: goto L_088AA520;
    case 516u: goto L_088AA540;
    case 517u: goto L_088AA56C;
    case 518u: goto L_088AA578;
    case 519u: goto L_088AA588;
    case 520u: goto L_088AA5B8;
    case 521u: goto L_088AA5CC;
    case 522u: goto L_088AA5D0;
    case 523u: goto L_088AA5F8;
    case 524u: goto L_088AA600;
    case 525u: goto L_088AA610;
    case 526u: goto L_088AA620;
    case 527u: goto L_088AA624;
    case 528u: goto L_088AA62C;
    case 529u: goto L_088AA64C;
    case 530u: goto L_088AA66C;
    case 531u: goto L_088AA698;
    case 532u: goto L_088AA6A4;
    case 533u: goto L_088AA6AC;
    case 534u: goto L_088AA6D0;
    case 535u: goto L_088AA720;
    case 536u: goto L_088AA734;
    case 537u: goto L_088AA73C;
    case 538u: goto L_088AA744;
    case 539u: goto L_088AA74C;
    case 540u: goto L_088AA754;
    case 541u: goto L_088AA7A4;
    case 542u: goto L_088AA7AC;
    case 543u: goto L_088AA7B8;
    case 544u: goto L_088AA7C0;
    case 545u: goto L_088AA7C8;
    case 546u: goto L_088AA7D8;
    case 547u: goto L_088AA7E8;
    case 548u: goto L_088AA7EC;
    case 549u: goto L_088AA7F4;
    case 550u: goto L_088AA7FC;
    case 551u: goto L_088AA814;
    case 552u: goto L_088AA818;
    case 553u: goto L_088AA81C;
    case 554u: goto L_088AA84C;
    case 555u: goto L_088AA854;
    case 556u: goto L_088AA85C;
    case 557u: goto L_088AA870;
    case 558u: goto L_088AA888;
    case 559u: goto L_088AA89C;
    case 560u: goto L_088AA8A4;
    case 561u: goto L_088AA8AC;
    case 562u: goto L_088AA8B4;
    case 563u: goto L_088AA8BC;
    case 564u: goto L_088AA8C4;
    case 565u: goto L_088AA8CC;
    case 566u: goto L_088AA8D4;
    case 567u: goto L_088AA8E4;
    case 568u: goto L_088AA8F0;
    case 569u: goto L_088AA8FC;
    case 570u: goto L_088AA90C;
    case 571u: goto L_088AA920;
    case 572u: goto L_088AA92C;
    case 573u: goto L_088AA934;
    case 574u: goto L_088AA940;
    case 575u: goto L_088AA95C;
    case 576u: goto L_088AA96C;
    case 577u: goto L_088AA978;
    case 578u: goto L_088AA980;
    case 579u: goto L_088AA988;
    case 580u: goto L_088AA990;
    case 581u: goto L_088AA998;
    case 582u: goto L_088AA9A4;
    case 583u: goto L_088AA9AC;
    case 584u: goto L_088AA9B8;
    case 585u: goto L_088AA9C0;
    case 586u: goto L_088AA9C8;
    case 587u: goto L_088AA9D4;
    case 588u: goto L_088AA9E0;
    case 589u: goto L_088AA9E8;
    case 590u: goto L_088AA9F0;
    case 591u: goto L_088AA9F8;
    case 592u: goto L_088AAA04;
    case 593u: goto L_088AAA10;
    case 594u: goto L_088AAA18;
    case 595u: goto L_088AAA24;
    case 596u: goto L_088AAA30;
    case 597u: goto L_088AAA38;
    case 598u: goto L_088AAA44;
    case 599u: goto L_088AAA4C;
    case 600u: goto L_088AAA58;
    case 601u: goto L_088AAA60;
    case 602u: goto L_088AAA74;
    case 603u: goto L_088AAA84;
    case 604u: goto L_088AAA94;
    case 605u: goto L_088AAAA0;
    case 606u: goto L_088AAAAC;
    case 607u: goto L_088AAAB8;
    case 608u: goto L_088AAAC0;
    case 609u: goto L_088AAAD8;
    case 610u: goto L_088AAAE0;
    case 611u: goto L_088AAAE8;
    case 612u: goto L_088AAAF0;
    case 613u: goto L_088AAB24;
    case 614u: goto L_088AAB2C;
    case 615u: goto L_088AAB34;
    case 616u: goto L_088AAB3C;
    case 617u: goto L_088AAB6C;
    case 618u: goto L_088AAB74;
    case 619u: goto L_088AABA4;
    case 620u: goto L_088AABAC;
    case 621u: goto L_088AABC4;
    case 622u: goto L_088AABF8;
    case 623u: goto L_088AAC00;
    case 624u: goto L_088AAC08;
    case 625u: goto L_088AAC10;
    case 626u: goto L_088AAC18;
    case 627u: goto L_088AAC20;
    case 628u: goto L_088AAC40;
    case 629u: goto L_088AAC48;
    case 630u: goto L_088AAC50;
    case 631u: goto L_088AAC70;
    case 632u: goto L_088AAC80;
    case 633u: goto L_088AAC8C;
    case 634u: goto L_088AACA4;
    case 635u: goto L_088AACAC;
    case 636u: goto L_088AACB8;
    case 637u: goto L_088AACC4;
    case 638u: goto L_088AACCC;
    case 639u: goto L_088AACD8;
    case 640u: goto L_088AACE4;
    case 641u: goto L_088AACEC;
    case 642u: goto L_088AACF8;
    case 643u: goto L_088AAD14;
    case 644u: goto L_088AAD20;
    case 645u: goto L_088AAD2C;
    case 646u: goto L_088AAD34;
    case 647u: goto L_088AAD3C;
    case 648u: goto L_088AAD44;
    case 649u: goto L_088AAD4C;
    case 650u: goto L_088AAD58;
    case 651u: goto L_088AAD64;
    case 652u: goto L_088AAD6C;
    case 653u: goto L_088AAD74;
    case 654u: goto L_088AAD88;
    case 655u: goto L_088AAD90;
    case 656u: goto L_088AADA8;
    case 657u: goto L_088AADB0;
    case 658u: goto L_088AADB8;
    case 659u: goto L_088AADC0;
    case 660u: goto L_088AADC8;
    case 661u: goto L_088AADD4;
    case 662u: goto L_088AADDC;
    case 663u: goto L_088AADE8;
    case 664u: goto L_088AADF4;
    case 665u: goto L_088AAE00;
    case 666u: goto L_088AAE0C;
    case 667u: goto L_088AAE18;
    case 668u: goto L_088AAE24;
    case 669u: goto L_088AAE30;
    case 670u: goto L_088AAE3C;
    case 671u: goto L_088AAE44;
    case 672u: goto L_088AAE7C;
    case 673u: goto L_088AAEB0;
    case 674u: goto L_088AAED0;
    case 675u: goto L_088AAEDC;
    case 676u: goto L_088AAEE8;
    case 677u: goto L_088AAEF4;
    case 678u: goto L_088AAEF8;
    case 679u: goto L_088AAF18;
    case 680u: goto L_088AAF24;
    case 681u: goto L_088AAF28;
    case 682u: goto L_088AAF58;
    case 683u: goto L_088AAF6C;
    case 684u: goto L_088AAF74;
    case 685u: goto L_088AAF7C;
    case 686u: goto L_088AAF94;
    case 687u: goto L_088AAF9C;
    case 688u: goto L_088AAFAC;
    case 689u: goto L_088AAFD0;
    case 690u: goto L_088AAFEC;
    case 691u: goto L_088AB000;
    case 692u: goto L_088AB010;
    case 693u: goto L_088AB030;
    case 694u: goto L_088AB03C;
    case 695u: goto L_088AB060;
    case 696u: goto L_088AB068;
    case 697u: goto L_088AB070;
    case 698u: goto L_088AB078;
    case 699u: goto L_088AB08C;
    case 700u: goto L_088AB0E4;
    case 701u: goto L_088AB0F4;
    case 702u: goto L_088AB100;
    case 703u: goto L_088AB108;
    case 704u: goto L_088AB150;
    case 705u: goto L_088AB184;
    case 706u: goto L_088AB198;
    case 707u: goto L_088AB1B4;
    case 708u: goto L_088AB1D0;
    case 709u: goto L_088AB1E4;
    case 710u: goto L_088AB208;
    case 711u: goto L_088AB224;
    case 712u: goto L_088AB238;
    case 713u: goto L_088AB25C;
    case 714u: goto L_088AB268;
    case 715u: goto L_088AB270;
    case 716u: goto L_088AB284;
    case 717u: goto L_088AB28C;
    case 718u: goto L_088AB294;
    case 719u: goto L_088AB29C;
    case 720u: goto L_088AB2A4;
    case 721u: goto L_088AB2B8;
    case 722u: goto L_088AB2DC;
    case 723u: goto L_088AB2E4;
    case 724u: goto L_088AB2F0;
    case 725u: goto L_088AB2F8;
    case 726u: goto L_088AB2FC;
    case 727u: goto L_088AB304;
    case 728u: goto L_088AB318;
    case 729u: goto L_088AB324;
    case 730u: goto L_088AB328;
    case 731u: goto L_088AB330;
    case 732u: goto L_088AB338;
    case 733u: goto L_088AB364;
    case 734u: goto L_088AB390;
    case 735u: goto L_088AB39C;
    case 736u: goto L_088AB3AC;
    case 737u: goto L_088AB3E0;
    case 738u: goto L_088AB400;
    case 739u: goto L_088AB40C;
    case 740u: goto L_088AB420;
    case 741u: goto L_088AB430;
    case 742u: goto L_088AB440;
    case 743u: goto L_088AB458;
    case 744u: goto L_088AB464;
    case 745u: goto L_088AB488;
    case 746u: goto L_088AB498;
    case 747u: goto L_088AB4A8;
    case 748u: goto L_088AB4D4;
    case 749u: goto L_088AB4E4;
    case 750u: goto L_088AB4EC;
    case 751u: goto L_088AB4F0;
    case 752u: goto L_088AB4FC;
    case 753u: goto L_088AB510;
    case 754u: goto L_088AB544;
    case 755u: goto L_088AB550;
    case 756u: goto L_088AB568;
    case 757u: goto L_088AB594;
    case 758u: goto L_088AB59C;
    case 759u: goto L_088AB5B4;
    case 760u: goto L_088AB5C0;
    case 761u: goto L_088AB5CC;
    case 762u: goto L_088AB5D4;
    case 763u: goto L_088AB5E0;
    case 764u: goto L_088AB5EC;
    case 765u: goto L_088AB5FC;
    case 766u: goto L_088AB614;
    case 767u: goto L_088AB65C;
    case 768u: goto L_088AB668;
    case 769u: goto L_088AB67C;
    case 770u: goto L_088AB684;
    case 771u: goto L_088AB6A0;
    case 772u: goto L_088AB6A8;
    case 773u: goto L_088AB6E4;
    case 774u: goto L_088AB6F0;
    case 775u: goto L_088AB6F8;
    case 776u: goto L_088AB714;
    case 777u: goto L_088AB720;
    case 778u: goto L_088AB750;
    case 779u: goto L_088AB760;
    case 780u: goto L_088AB76C;
    case 781u: goto L_088AB774;
    case 782u: goto L_088AB77C;
    case 783u: goto L_088AB788;
    case 784u: goto L_088AB794;
    case 785u: goto L_088AB7AC;
    case 786u: goto L_088AB7B0;
    case 787u: goto L_088AB7C4;
    case 788u: goto L_088AB7D0;
    case 789u: goto L_088AB7F0;
    case 790u: goto L_088AB7FC;
    case 791u: goto L_088AB810;
    case 792u: goto L_088AB81C;
    case 793u: goto L_088AB850;
    case 794u: goto L_088AB85C;
    case 795u: goto L_088AB868;
    case 796u: goto L_088AB874;
    case 797u: goto L_088AB880;
    case 798u: goto L_088AB88C;
    case 799u: goto L_088AB894;
    case 800u: goto L_088AB89C;
    case 801u: goto L_088AB8A4;
    case 802u: goto L_088AB8AC;
    case 803u: goto L_088AB8BC;
    case 804u: goto L_088AB8F0;
    case 805u: goto L_088AB8FC;
    case 806u: goto L_088AB908;
    case 807u: goto L_088AB914;
    case 808u: goto L_088AB91C;
    case 809u: goto L_088AB924;
    case 810u: goto L_088AB92C;
    case 811u: goto L_088AB938;
    case 812u: goto L_088AB948;
    case 813u: goto L_088AB97C;
    case 814u: goto L_088AB998;
    case 815u: goto L_088AB9A4;
    case 816u: goto L_088AB9BC;
    case 817u: goto L_088AB9C8;
    case 818u: goto L_088AB9D0;
    case 819u: goto L_088AB9D8;
    case 820u: goto L_088AB9F0;
    case 821u: goto L_088AB9FC;
    case 822u: goto L_088ABA04;
    case 823u: goto L_088ABA0C;
    case 824u: goto L_088ABA28;
    case 825u: goto L_088ABA34;
    case 826u: goto L_088ABA40;
    case 827u: goto L_088ABA4C;
    case 828u: goto L_088ABA5C;
    case 829u: goto L_088ABA64;
    case 830u: goto L_088ABA6C;
    case 831u: goto L_088ABA74;
    case 832u: goto L_088ABA84;
    case 833u: goto L_088ABA90;
    case 834u: goto L_088ABA98;
    case 835u: goto L_088ABAA0;
    case 836u: goto L_088ABAB0;
    case 837u: goto L_088ABAC0;
    case 838u: goto L_088ABACC;
    case 839u: goto L_088ABAD4;
    case 840u: goto L_088ABAE8;
    case 841u: goto L_088ABAF8;
    case 842u: goto L_088ABB2C;
    case 843u: goto L_088ABB38;
    case 844u: goto L_088ABB44;
    case 845u: goto L_088ABB50;
    case 846u: goto L_088ABB58;
    case 847u: goto L_088ABB60;
    case 848u: goto L_088ABB68;
    case 849u: goto L_088ABB88;
    case 850u: goto L_088ABB98;
    case 851u: goto L_088ABBCC;
    case 852u: goto L_088ABBDC;
    case 853u: goto L_088ABBE8;
    case 854u: goto L_088ABBF0;
    case 855u: goto L_088ABBF8;
    case 856u: goto L_088ABC04;
    case 857u: goto L_088ABC10;
    case 858u: goto L_088ABC18;
    case 859u: goto L_088ABC20;
    case 860u: goto L_088ABC3C;
    case 861u: goto L_088ABC4C;
    case 862u: goto L_088ABC54;
    case 863u: goto L_088ABC5C;
    case 864u: goto L_088ABC88;
    case 865u: goto L_088ABCB4;
    case 866u: goto L_088ABCE4;
    case 867u: goto L_088ABD54;
    case 868u: goto L_088ABD5C;
    case 869u: goto L_088ABD60;
    case 870u: goto L_088ABD68;
    case 871u: goto L_088ABD8C;
    case 872u: goto L_088ABD94;
    case 873u: goto L_088ABD98;
    case 874u: goto L_088ABDA0;
    case 875u: goto L_088ABDB0;
    case 876u: goto L_088ABDB8;
    case 877u: goto L_088ABDC8;
    case 878u: goto L_088ABDDC;
    case 879u: goto L_088ABDE0;
    case 880u: goto L_088ABDF4;
    case 881u: goto L_088ABDF8;
    case 882u: goto L_088ABE0C;
    case 883u: goto L_088ABE18;
    case 884u: goto L_088ABE2C;
    case 885u: goto L_088ABE38;
    case 886u: goto L_088ABE48;
    case 887u: goto L_088ABE4C;
    case 888u: goto L_088ABE60;
    case 889u: goto L_088ABE74;
    case 890u: goto L_088ABEA8;
    case 891u: goto L_088ABEB4;
    case 892u: goto L_088ABEC4;
    case 893u: goto L_088ABEC8;
    case 894u: goto L_088ABED0;
    case 895u: goto L_088ABEE0;
    case 896u: goto L_088ABEE8;
    case 897u: goto L_088ABEF4;
    case 898u: goto L_088ABF0C;
    case 899u: goto L_088ABF1C;
    case 900u: goto L_088ABF24;
    case 901u: goto L_088ABF28;
    case 902u: goto L_088ABF30;
    case 903u: goto L_088ABF40;
    case 904u: goto L_088ABF48;
    case 905u: goto L_088ABF4C;
    case 906u: goto L_088ABF7C;
    case 907u: goto L_088ABF88;
    case 908u: goto L_088ABF94;
    case 909u: goto L_088ABF98;
    case 910u: goto L_088ABFA0;
    case 911u: goto L_088ABFAC;
    case 912u: goto L_088ABFBC;
    case 913u: goto L_088ABFC8;
    case 914u: goto L_088ABFD8;
    case 915u: goto L_088ABFE0;
    case 916u: goto L_088ABFE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088A8000:
    ctx.gpr[31] = (0x088A8008u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 692u, 0x08AFAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8008u) goto L_088A8008;
    return;
L_088A8008:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_088A8028;
      }
      goto L_088A801C;
    }
L_088A801C:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088A8028u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8028u) goto L_088A8028;
    return;
L_088A8028:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    goto L_088A8038;
L_088A8038:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_088A803C;
L_088A803C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8058:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20932)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088A8088;
      }
      goto L_088A8080;
    }
L_088A8080:
    ctx.gpr[31] = (0x088A8088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8088u) goto L_088A8088;
    return;
L_088A8088:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20932)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088A809C;
      }
      goto L_088A8094;
    }
L_088A8094:
    ctx.gpr[31] = (0x088A809Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x088A809Cu) goto L_088A809C;
    return;
L_088A809C:
    ctx.gpr[31] = (0x088A80A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20932)));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 302u, 0x08A09374u>(ctx, &aot_mem) && ctx.pc == 0x088A80A4u) goto L_088A80A4;
    return;
L_088A80A4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A80B4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 235u, 0x08A08F14u>(ctx, &aot_mem) && ctx.pc == 0x088A80B4u) goto L_088A80B4;
    return;
L_088A80B4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x088A80C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x088A80C0u) goto L_088A80C0;
    return;
L_088A80C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A80D0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x088A80D0u) goto L_088A80D0;
    return;
L_088A80D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_088A80F0;
      }
      goto L_088A80E4;
    }
L_088A80E4:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A80F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x088A80F0u) goto L_088A80F0;
    return;
L_088A80F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A810C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[17] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] & 65535u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1628));
      if (branch_taken) {
          goto L_088A81A4;
      }
      goto L_088A8148;
    }
L_088A8148:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A8178;
      }
      goto L_088A8150;
    }
L_088A8150:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x088A815Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088A815Cu) goto L_088A815C;
    return;
L_088A815C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8174;
      }
      goto L_088A8168;
    }
L_088A8168:
    ctx.gpr[31] = (0x088A8170u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x088A8170u) goto L_088A8170;
    return;
L_088A8170:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_088A8174;
L_088A8174:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[19]);
    goto L_088A8178;
L_088A8178:
    ctx.gpr[31] = (0x088A8180u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088A8524;
L_088A8180:
    ctx.gpr[4] = (ctx.gpr[2] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088A8194u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x088A8194u) goto L_088A8194;
    return;
L_088A8194:
    ctx.gpr[31] = (0x088A819Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 299u, 0x089131F4u>(ctx, &aot_mem) && ctx.pc == 0x088A819Cu) goto L_088A819C;
    return;
L_088A819C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A81F8;
      }
      goto L_088A81A4;
    }
L_088A81A4:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A81D4;
      }
      goto L_088A81AC;
    }
L_088A81AC:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x088A81B8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088A81B8u) goto L_088A81B8;
    return;
L_088A81B8:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A81D0;
      }
      goto L_088A81C4;
    }
L_088A81C4:
    ctx.gpr[31] = (0x088A81CCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x088A81CCu) goto L_088A81CC;
    return;
L_088A81CC:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_088A81D0;
L_088A81D0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[19]);
    goto L_088A81D4;
L_088A81D4:
    ctx.gpr[31] = (0x088A81DCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088A8534;
L_088A81DC:
    ctx.gpr[4] = (ctx.gpr[2] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088A81F0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x088A81F0u) goto L_088A81F0;
    return;
L_088A81F0:
    ctx.gpr[31] = (0x088A81F8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 299u, 0x089131F4u>(ctx, &aot_mem) && ctx.pc == 0x088A81F8u) goto L_088A81F8;
    return;
L_088A81F8:
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
L_088A8218:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A8240u);
    ctx.gpr[6] = (0u | 1u);
    goto L_088A87FC;
L_088A8240:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088A8274;
      }
      goto L_088A824C;
    }
L_088A824C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088A8264u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A8264u) goto L_088A8264;
    return;
L_088A8264:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A8274;
      }
      goto L_088A8270;
    }
L_088A8270:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_088A8274;
L_088A8274:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8288;
      }
      goto L_088A827C;
    }
L_088A827C:
    ctx.gpr[31] = (0x088A8284u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 152u, 0x08980B2Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8284u) goto L_088A8284;
    return;
L_088A8284:
    ctx.gpr[19] = (ctx.gpr[2] & 255u);
    goto L_088A8288;
L_088A8288:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A8294u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_088A810C;
L_088A8294:
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
L_088A82B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A82C8u);
    ctx.gpr[6] = (0u | 1u);
    goto L_088A87FC;
L_088A82C8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088A82FC;
      }
      goto L_088A82D4;
    }
L_088A82D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088A82ECu);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A82ECu) goto L_088A82EC;
    return;
L_088A82EC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A82FC;
      }
      goto L_088A82F8;
    }
L_088A82F8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_088A82FC;
L_088A82FC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8314;
      }
      goto L_088A8304;
    }
L_088A8304:
    ctx.gpr[31] = (0x088A830Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 152u, 0x08980B2Cu>(ctx, &aot_mem) && ctx.pc == 0x088A830Cu) goto L_088A830C;
    return;
L_088A830C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8318;
      }
      goto L_088A8314;
    }
L_088A8314:
    ctx.gpr[2] = (0u | 65535u);
    goto L_088A8318;
L_088A8318:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A832C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088A835C;
      }
      goto L_088A8354;
    }
L_088A8354:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088A8444;
      }
      goto L_088A835C;
    }
L_088A835C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088A8408;
      }
      goto L_088A838C;
    }
L_088A838C:
    ctx.gpr[17] = (0u | 1u);
    goto L_088A8390;
L_088A8390:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A839Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_088A82B0;
L_088A839C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A83C8;
      }
      goto L_088A83A4;
    }
L_088A83A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
      if (branch_taken) {
          goto L_088A83F8;
      }
      goto L_088A83C8;
    }
L_088A83C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A83D4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_088A82B0;
L_088A83D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
      if (branch_taken) {
          goto L_088A83F8;
      }
      goto L_088A83F4;
    }
L_088A83F4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_088A83F8;
L_088A83F8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A8390;
      }
      goto L_088A8408;
    }
L_088A8408:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088A8420;
      }
      goto L_088A8410;
    }
L_088A8410:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088A8420;
      }
      goto L_088A8418;
    }
L_088A8418:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088A8444;
      }
      goto L_088A8420;
    }
L_088A8420:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088A8430u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4388));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 445u, 0x088A6FECu>(ctx, &aot_mem) && ctx.pc == 0x088A8430u) goto L_088A8430;
    return;
L_088A8430:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088A8440u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4412));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 445u, 0x088A6FECu>(ctx, &aot_mem) && ctx.pc == 0x088A8440u) goto L_088A8440;
    return;
L_088A8440:
    ctx.gpr[2] = (0u | 1u);
    goto L_088A8444;
L_088A8444:
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
L_088A8464:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8498;
      }
      goto L_088A8470;
    }
L_088A8470:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A8490;
      }
      goto L_088A847C;
    }
L_088A847C:
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A84A0;
      }
      goto L_088A8488;
    }
L_088A8488:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088A84A4;
      }
      goto L_088A8490;
    }
L_088A8490:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088A84A4;
      }
      goto L_088A8498;
    }
L_088A8498:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088A84A4;
      }
      goto L_088A84A0;
    }
L_088A84A0:
    ctx.gpr[2] = (0u | 0u);
    goto L_088A84A4;
L_088A84A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A84AC:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A84B4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A84BC:
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A84CC;
      }
      goto L_088A84C8;
    }
L_088A84C8:
    ctx.gpr[5] = (0u | 2u);
    goto L_088A84CC;
L_088A84CC:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A84D4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A84DC:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A84E4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A84EC:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A84F4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A84FC:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8504:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A850C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8514:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A851C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8524:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(57)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A852C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8534:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(58)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A853C:
    ctx.gpr[4] = (ctx.gpr[5] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[2] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16228));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8558:
    ctx.gpr[4] = (ctx.gpr[5] & 65535u);
    ctx.gpr[2] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16228));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8570:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A8594u);
    ctx.gpr[6] = (0u | 1u);
    goto L_088A87FC;
L_088A8594:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088A85C8;
      }
      goto L_088A85A0;
    }
L_088A85A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088A85B8u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A85B8u) goto L_088A85B8;
    return;
L_088A85B8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A85C8;
      }
      goto L_088A85C4;
    }
L_088A85C4:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_088A85C8;
L_088A85C8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A85EC;
      }
      goto L_088A85D0;
    }
L_088A85D0:
    ctx.gpr[31] = (0x088A85D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 152u, 0x08980B2Cu>(ctx, &aot_mem) && ctx.pc == 0x088A85D8u) goto L_088A85D8;
    return;
L_088A85D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A85E4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_088A853C;
L_088A85E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8600;
      }
      goto L_088A85EC;
    }
L_088A85EC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_088A8600;
L_088A8600:
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
L_088A8618:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(16228));
      if (branch_taken) {
          goto L_088A864C;
      }
      goto L_088A8630;
    }
L_088A8630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A8644;
      }
      goto L_088A863C;
    }
L_088A863C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8658;
      }
      goto L_088A8644;
    }
L_088A8644:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088A8658;
      }
      goto L_088A864C;
    }
L_088A864C:
    ctx.gpr[4] = (ctx.gpr[5] & 15u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
    goto L_088A8658;
L_088A8658:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8660:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088A86A0;
      }
      goto L_088A8680;
    }
L_088A8680:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & 14u);
    ctx.gpr[6] = (ctx.gpr[6] ^ 12u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A86A0;
      }
      goto L_088A869C;
    }
L_088A869C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(336)));
    goto L_088A86A0;
L_088A86A0:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-7248)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_088A86D8;
      }
      goto L_088A86B8;
    }
L_088A86B8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A86D8;
      }
      goto L_088A86C8;
    }
L_088A86C8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_088A86E8;
      }
      goto L_088A86D8;
    }
L_088A86D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    goto L_088A86E8;
L_088A86E8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A86FCu);
    ctx.gpr[7] = (0u | 1u);
    goto L_088AB568;
L_088A86FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A870Cu);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088A87C4;
L_088A870C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8720:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-7248)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A8768u);
    ctx.gpr[7] = (0u | 1u);
    goto L_088AB568;
L_088A8768:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A8778u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088A87C4;
L_088A8778:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A878C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(225)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088A87B8;
      }
      goto L_088A87A8;
    }
L_088A87A8:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x088A87B8u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 236u, 0x0886D94Cu>(ctx, &aot_mem) && ctx.pc == 0x088A87B8u) goto L_088A87B8;
    return;
L_088A87B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A87C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(225)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088A87F0;
      }
      goto L_088A87E0;
    }
L_088A87E0:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x088A87F0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 248u, 0x0886DA3Cu>(ctx, &aot_mem) && ctx.pc == 0x088A87F0u) goto L_088A87F0;
    return;
L_088A87F0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A87FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
      if (branch_taken) {
          goto L_088A88E8;
      }
      goto L_088A8828;
    }
L_088A8828:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A88E8;
      }
      goto L_088A8838;
    }
L_088A8838:
    ctx.gpr[9] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[6] & 65535u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8890;
      }
      goto L_088A8858;
    }
L_088A8858:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_088A8864;
L_088A8864:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    if (ctx.gpr[10] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_088A8884;
    }
    goto L_088A8874;
L_088A8874:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088A8888;
      }
      goto L_088A8884;
    }
L_088A8884:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_088A8888;
L_088A8888:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_088A8864;
    }
    goto L_088A8890;
L_088A8890:
    if (ctx.gpr[5] == ctx.gpr[7]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
        goto L_088A88B4;
    }
    goto L_088A8898;
L_088A8898:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
        goto L_088A88B8;
    }
    goto L_088A88B0;
L_088A88B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    goto L_088A88B4;
L_088A88B4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_088A88B8;
L_088A88B8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A88E8;
      }
      goto L_088A88E0;
    }
L_088A88E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088A88EC;
      }
      goto L_088A88E8;
    }
L_088A88E8:
    ctx.gpr[2] = (0u | 0u);
    goto L_088A88EC;
L_088A88EC:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A88F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[4]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    ctx.gpr[9] = (ctx.gpr[9] >> 30u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (ctx.gpr[5] < ctx.gpr[8] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088A8A24;
      }
      goto L_088A8940;
    }
L_088A8940:
    ctx.gpr[19] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8A24;
      }
      goto L_088A8954;
    }
L_088A8954:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] ^ ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8A24;
      }
      goto L_088A89A4;
    }
L_088A89A4:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_088A89AC;
L_088A89AC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A89D0;
      }
      goto L_088A89B8;
    }
L_088A89B8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088A89D0;
      }
      goto L_088A89C4;
    }
L_088A89C4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088A8A14;
      }
      goto L_088A89D0;
    }
L_088A89D0:
    ctx.gpr[31] = (0x088A89D8u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 888u, 0x08AFBD8Cu>(ctx, &aot_mem) && ctx.pc == 0x088A89D8u) goto L_088A89D8;
    return;
L_088A89D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] ^ ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[6] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088A89AC;
      }
      goto L_088A8A0C;
    }
L_088A8A0C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
      if (branch_taken) {
          goto L_088A8A20;
      }
      goto L_088A8A14;
    }
L_088A8A14:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088A8A28;
      }
      goto L_088A8A20;
    }
L_088A8A20:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    goto L_088A8A24;
L_088A8A24:
    ctx.gpr[2] = (0u | 0u);
    goto L_088A8A28;
L_088A8A28:
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
L_088A8A48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] << 24u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 24u));
      if (branch_taken) {
          goto L_088A8C08;
      }
      goto L_088A8AA4;
    }
L_088A8AA4:
    ctx.gpr[18] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8C08;
      }
      goto L_088A8AB8;
    }
L_088A8AB8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] ^ ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8C08;
      }
      goto L_088A8B08;
    }
L_088A8B08:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (0u | 2u);
    ctx.gpr[20] = (0u | 3u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_088A8B1C;
L_088A8B1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8BC4;
      }
      goto L_088A8B28;
    }
L_088A8B28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088A8B40u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A8B40u) goto L_088A8B40;
    return;
L_088A8B40:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[19];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088A8B6C;
      }
      goto L_088A8B48;
    }
L_088A8B48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088A8B64u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A8B64u) goto L_088A8B64;
    return;
L_088A8B64:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088A8BC4;
      }
      goto L_088A8B6C;
    }
L_088A8B6C:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8BC4;
      }
      goto L_088A8B78;
    }
L_088A8B78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
        goto L_088A8BA8;
    }
    goto L_088A8B84;
L_088A8B84:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088A8B94u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x088A8B94u) goto L_088A8B94;
    return;
L_088A8B94:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    goto L_088A8BA8;
L_088A8BA8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(206))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088A8BC4;
      }
      goto L_088A8BB4;
    }
L_088A8BB4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[23]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[30]);
      if (branch_taken) {
          goto L_088A8C0C;
      }
      goto L_088A8BC4;
    }
L_088A8BC4:
    ctx.gpr[31] = (0x088A8BCCu);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 888u, 0x08AFBD8Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8BCCu) goto L_088A8BCC;
    return;
L_088A8BCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] ^ ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[30] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_088A8B1C;
      }
      goto L_088A8C00;
    }
L_088A8C00:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[30]);
    goto L_088A8C08;
L_088A8C08:
    ctx.gpr[2] = (0u | 0u);
    goto L_088A8C0C;
L_088A8C0C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8C3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8C90;
      }
      goto L_088A8C5C;
    }
L_088A8C5C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_088A8C64;
L_088A8C64:
    ctx.gpr[8] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_088A8C84;
    }
    goto L_088A8C74;
L_088A8C74:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088A8C88;
      }
      goto L_088A8C84;
    }
L_088A8C84:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_088A8C88;
L_088A8C88:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_088A8C64;
    }
    goto L_088A8C90;
L_088A8C90:
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_088A8CB4;
    }
    goto L_088A8C98;
L_088A8C98:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
        goto L_088A8CB8;
    }
    goto L_088A8CB0;
L_088A8CB0:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_088A8CB4;
L_088A8CB4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_088A8CB8;
L_088A8CB8:
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
          goto L_088A8CF0;
      }
      goto L_088A8CE8;
    }
L_088A8CE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088A8CF4;
      }
      goto L_088A8CF0;
    }
L_088A8CF0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    goto L_088A8CF4;
L_088A8CF4:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8CFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A8D10u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    goto L_088A8E58;
L_088A8D10:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8D1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[7] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(5736));
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8DA4;
      }
      goto L_088A8D6C;
    }
L_088A8D6C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A8E3C;
      }
      goto L_088A8D80;
    }
L_088A8D80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(144));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088A8D9Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A8D9Cu) goto L_088A8D9C;
    return;
L_088A8D9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8E3C;
      }
      goto L_088A8DA4;
    }
L_088A8DA4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088A8DBCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4436));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 445u, 0x088A6FECu>(ctx, &aot_mem) && ctx.pc == 0x088A8DBCu) goto L_088A8DBC;
    return;
L_088A8DBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8DFC;
      }
      goto L_088A8DC8;
    }
L_088A8DC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(4492));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088A8DE8u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A8DE8u) goto L_088A8DE8;
    return;
L_088A8DE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[31] = (0x088A8DFCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 445u, 0x088A6FECu>(ctx, &aot_mem) && ctx.pc == 0x088A8DFCu) goto L_088A8DFC;
    return;
L_088A8DFC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-7234)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A8E3Cu);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088A87C4;
L_088A8E3C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8E58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (2232u << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(5736));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] ^ ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088A8EF8;
      }
      goto L_088A8EA0;
    }
L_088A8EA0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A8FB0;
      }
      goto L_088A8EB4;
    }
L_088A8EB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(136));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088A8ECCu);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A8ECCu) goto L_088A8ECC;
    return;
L_088A8ECC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8FB0;
      }
      goto L_088A8ED4;
    }
L_088A8ED4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(144));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088A8EF0u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A8EF0u) goto L_088A8EF0;
    return;
L_088A8EF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8FB0;
      }
      goto L_088A8EF8;
    }
L_088A8EF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(136));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088A8F10u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A8F10u) goto L_088A8F10;
    return;
L_088A8F10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8FB0;
      }
      goto L_088A8F18;
    }
L_088A8F18:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A8F30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4524));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8F30u) goto L_088A8F30;
    return;
L_088A8F30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8F70;
      }
      goto L_088A8F3C;
    }
L_088A8F3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(4492));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088A8F5Cu);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A8F5Cu) goto L_088A8F5C;
    return;
L_088A8F5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[31] = (0x088A8F70u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8F70u) goto L_088A8F70;
    return;
L_088A8F70:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-7234)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088A8FB0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088A87C4;
L_088A8FB0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8FCC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8FD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (ctx.gpr[18] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(100));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(100));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088A90AC;
      }
      goto L_088A9050;
    }
L_088A9050:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9064;
      }
      goto L_088A905C;
    }
L_088A905C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088A90B4;
      }
      goto L_088A9064;
    }
L_088A9064:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x088A9070u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 888u, 0x08AFBD8Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9070u) goto L_088A9070;
    return;
L_088A9070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] ^ ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A9050;
      }
      goto L_088A90AC;
    }
L_088A90AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088A90B8;
      }
      goto L_088A90B4;
    }
L_088A90B4:
    ctx.gpr[2] = (0u | 1u);
    goto L_088A90B8;
L_088A90B8:
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
L_088A90D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A90F8u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 552u, 0x08AFE538u>(ctx, &aot_mem) && ctx.pc == 0x088A90F8u) goto L_088A90F8;
    return;
L_088A90F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088A9114;
      }
      goto L_088A9108;
    }
L_088A9108:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_088A9114;
L_088A9114:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9144;
      }
      goto L_088A912C;
    }
L_088A912C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088A9144;
      }
      goto L_088A913C;
    }
L_088A913C:
    ctx.gpr[31] = (0x088A9144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088A9144u) goto L_088A9144;
    return;
L_088A9144:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9154:
    ctx.gpr[4] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27476)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9160:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088A9188;
      }
      goto L_088A9180;
    }
L_088A9180:
    ctx.gpr[31] = (0x088A9188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9188u) goto L_088A9188;
    return;
L_088A9188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A91A4;
      }
      goto L_088A9198;
    }
L_088A9198:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A91AC;
      }
      goto L_088A91A4;
    }
L_088A91A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A932C;
      }
      goto L_088A91AC;
    }
L_088A91AC:
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[8] = (32768u << 16u);
    ctx.gpr[10] = (2230u << 16u);
    goto L_088A91E0;
L_088A91E0:
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9244;
      }
      goto L_088A91F0;
    }
L_088A91F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[16] = ctx.fpr[12] / ctx.fpr[13];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(248)));
      if (branch_taken) {
          goto L_088A9224;
      }
      goto L_088A920C;
    }
L_088A920C:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[2]);
      if (branch_taken) {
          goto L_088A9240;
      }
      goto L_088A9224;
    }
L_088A9224:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[2]);
    goto L_088A9240;
L_088A9240:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(248), ctx.gpr[6]);
    goto L_088A9244;
L_088A9244:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A91E0;
      }
      goto L_088A9254;
    }
L_088A9254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(102) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A927C;
      }
      goto L_088A9268;
    }
L_088A9268:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(101));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-8148)));
    goto L_088A927C;
L_088A927C:
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[11]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A932C;
      }
      goto L_088A928C;
    }
L_088A928C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(248)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(252)));
      if (branch_taken) {
          goto L_088A92CC;
      }
      goto L_088A92A8;
    }
L_088A92A8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A92CC;
      }
      goto L_088A92B0;
    }
L_088A92B0:
    ctx.gpr[5] = (0u | 59u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 59u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_088A92DC;
      }
      goto L_088A92CC;
    }
L_088A92CC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_088A92DC;
      }
      goto L_088A92D4;
    }
L_088A92D4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_088A92DC;
L_088A92DC:
    ctx.gpr[9] = (ctx.gpr[5] & 255u);
    ctx.gpr[10] = (2230u << 16u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(-7232)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[9]));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(21), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(25), ctx.gpr[7]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(29), ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A9324u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088A87C4;
L_088A9324:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088A932C;
L_088A932C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9340:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9348:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9350:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9358:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9360:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9368:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9370:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A9384u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_088A84F4;
L_088A9384:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088A93C4;
      }
      goto L_088A938C;
    }
L_088A938C:
    ctx.gpr[31] = (0x088A9394u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088A9340;
L_088A9394:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A93C4;
      }
      goto L_088A939C;
    }
L_088A939C:
    ctx.gpr[31] = (0x088A93A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088A9348;
L_088A93A4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A93C4;
      }
      goto L_088A93AC;
    }
L_088A93AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A93C4;
      }
      goto L_088A93BC;
    }
L_088A93BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088A93C8;
      }
      goto L_088A93C4;
    }
L_088A93C4:
    ctx.gpr[2] = (0u | 0u);
    goto L_088A93C8;
L_088A93C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A93D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088A9418;
      }
      goto L_088A93F0;
    }
L_088A93F0:
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-7231)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088A9418u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088A87C4;
L_088A9418:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9424:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9430:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9448;
      }
      goto L_088A943C;
    }
L_088A943C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088A944C;
      }
      goto L_088A9448;
    }
L_088A9448:
    ctx.gpr[2] = (0u | 1u);
    goto L_088A944C;
L_088A944C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9454:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A945C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9464:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[7] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A94CC;
      }
      goto L_088A9494;
    }
L_088A9494:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A94AC;
      }
      goto L_088A94A0;
    }
L_088A94A0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A94C4;
      }
      goto L_088A94AC;
    }
L_088A94AC:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[7] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A9494;
      }
      goto L_088A94BC;
    }
L_088A94BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A94CC;
      }
      goto L_088A94C4;
    }
L_088A94C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088A94D0;
      }
      goto L_088A94CC;
    }
L_088A94CC:
    ctx.gpr[2] = (0u | 0u);
    goto L_088A94D0;
L_088A94D0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A94D8:
    ctx.gpr[6] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[10] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_088A9558;
      }
      goto L_088A9508;
    }
L_088A9508:
    ctx.gpr[9] = (0u | 0u);
    goto L_088A950C;
L_088A950C:
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
        goto L_088A9534;
    }
    goto L_088A951C;
L_088A951C:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[11] != ctx.gpr[6]) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
        goto L_088A9534;
    }
    goto L_088A9528;
L_088A9528:
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    goto L_088A9534;
L_088A9534:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[5]);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    ctx.gpr[11] = (ctx.gpr[11] >> 30u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[11]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[10] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A950C;
      }
      goto L_088A9558;
    }
L_088A9558:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9560:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[6] << (ctx.gpr[5] & 31u));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(269)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(269), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9580:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_088A95C8;
      }
      goto L_088A95AC;
    }
L_088A95AC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 0 ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] ^ 1u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_088A95CC;
      }
      goto L_088A95C4;
    }
L_088A95C4:
    ctx.gpr[6] = (0u | 1u);
    goto L_088A95C8;
L_088A95C8:
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_088A95CC;
L_088A95CC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A95E8;
      }
      goto L_088A95D4;
    }
L_088A95D4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088A95F0;
      }
      goto L_088A95E8;
    }
L_088A95E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088A9718;
      }
      goto L_088A95F0;
    }
L_088A95F0:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9610;
      }
      goto L_088A95F8;
    }
L_088A95F8:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_088A9610;
      }
      goto L_088A9608;
    }
L_088A9608:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[7] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_088A9628;
      }
      goto L_088A9610;
    }
L_088A9610:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (ctx.gpr[4] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088A95F0;
      }
      goto L_088A9624;
    }
L_088A9624:
    ctx.gpr[17] = (ctx.gpr[7] + static_cast<std::uint32_t>(100));
    goto L_088A9628;
L_088A9628:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[18] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (2232u << 16u);
      if (branch_taken) {
          goto L_088A9714;
      }
      goto L_088A9654;
    }
L_088A9654:
    ctx.gpr[20] = (0u | 2u);
    ctx.gpr[21] = (0u | 3u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(5736));
    goto L_088A9660;
L_088A9660:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A96E4;
      }
      goto L_088A966C;
    }
L_088A966C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A96E4;
      }
      goto L_088A968C;
    }
L_088A968C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088A96A4u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A96A4u) goto L_088A96A4;
    return;
L_088A96A4:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088A96CC;
      }
      goto L_088A96AC;
    }
L_088A96AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088A96C4u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A96C4u) goto L_088A96C4;
    return;
L_088A96C4:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088A96E4;
      }
      goto L_088A96CC;
    }
L_088A96CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(596)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088A96E4;
      }
      goto L_088A96DC;
    }
L_088A96DC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
    goto L_088A96E4;
L_088A96E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x088A96F0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 888u, 0x08AFBD8Cu>(ctx, &aot_mem) && ctx.pc == 0x088A96F0u) goto L_088A96F0;
    return;
L_088A96F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A9660;
      }
      goto L_088A9714;
    }
L_088A9714:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_088A9718;
L_088A9718:
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
L_088A973C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088A97B0;
      }
      goto L_088A9774;
    }
L_088A9774:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(225), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20932)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088A9794;
      }
      goto L_088A9788;
    }
L_088A9788:
    ctx.gpr[31] = (0x088A9790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9790u) goto L_088A9790;
    return;
L_088A9790:
    ctx.gpr[4] = (2230u << 16u);
    goto L_088A9794;
L_088A9794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9A8C;
      }
      goto L_088A97B0;
    }
L_088A97B0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(4572));
    ctx.gpr[31] = (0x088A97C0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_088ABC88;
L_088A97C0:
    ctx.gpr[31] = (0x088A97C8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_088ABC5C;
L_088A97C8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A97D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4620));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 445u, 0x088A6FECu>(ctx, &aot_mem) && ctx.pc == 0x088A97D8u) goto L_088A97D8;
    return;
L_088A97D8:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088A994C;
      }
      goto L_088A97E8;
    }
L_088A97E8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20928)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088A9804;
      }
      goto L_088A97F8;
    }
L_088A97F8:
    ctx.gpr[31] = (0x088A9800u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 533u, 0x08AFA59Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9800u) goto L_088A9800;
    return;
L_088A9800:
    ctx.gpr[5] = (2230u << 16u);
    goto L_088A9804;
L_088A9804:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-20928)));
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(280), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(281), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[19] << 3u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(282), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(120));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(283), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(284), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(285), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(280));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088A9878;
      }
      goto L_088A9850;
    }
L_088A9850:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(280));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(280));
      if (branch_taken) {
          goto L_088A9878;
      }
      goto L_088A9864;
    }
L_088A9864:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_088A987C;
      }
      goto L_088A9874;
    }
L_088A9874:
    ctx.gpr[5] = (0u | 1u);
    goto L_088A9878;
L_088A9878:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_088A987C;
L_088A987C:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A993C;
      }
      goto L_088A988C;
    }
L_088A988C:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088A9938;
      }
      goto L_088A9894;
    }
L_088A9894:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[21] = (2225u << 16u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4652));
      if (branch_taken) {
          goto L_088A98B4;
      }
      goto L_088A98AC;
    }
L_088A98AC:
    ctx.gpr[31] = (0x088A98B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x088A98B4u) goto L_088A98B4;
    return;
L_088A98B4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20928)));
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
      if (branch_taken) {
          goto L_088A98D4;
      }
      goto L_088A98CC;
    }
L_088A98CC:
    ctx.gpr[31] = (0x088A98D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 533u, 0x08AFA59Cu>(ctx, &aot_mem) && ctx.pc == 0x088A98D4u) goto L_088A98D4;
    return;
L_088A98D4:
    ctx.gpr[4] = (ctx.gpr[19] << 3u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-20928)));
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(120));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088A9900u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 213u, 0x08A08DECu>(ctx, &aot_mem) && ctx.pc == 0x088A9900u) goto L_088A9900;
    return;
L_088A9900:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088A9910u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9910u) goto L_088A9910;
    return;
L_088A9910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_088A9930;
      }
      goto L_088A9924;
    }
L_088A9924:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[31] = (0x088A9930u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9930u) goto L_088A9930;
    return;
L_088A9930:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A994C;
      }
      goto L_088A9938;
    }
L_088A9938:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_088A993C;
L_088A993C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A97E8;
      }
      goto L_088A994C;
    }
L_088A994C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_088A9968;
      }
      goto L_088A995C;
    }
L_088A995C:
    ctx.gpr[31] = (0x088A9964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x088A9964u) goto L_088A9964;
    return;
L_088A9964:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    goto L_088A9968;
L_088A9968:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088A997Cu);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-21280)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x088A997Cu) goto L_088A997C;
    return;
L_088A997C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088A998Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x088A998Cu) goto L_088A998C;
    return;
L_088A998C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088A9998u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 781u, 0x0883BFA4u>(ctx, &aot_mem) && ctx.pc == 0x088A9998u) goto L_088A9998;
    return;
L_088A9998:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_088A99B8;
      }
      goto L_088A99AC;
    }
L_088A99AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x088A99B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x088A99B8u) goto L_088A99B8;
    return;
L_088A99B8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(116));
    ctx.gpr[31] = (0x088A99CCu);
    ctx.gpr[5] = (ctx.gpr[17] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 120u, 0x089C08C8u>(ctx, &aot_mem) && ctx.pc == 0x088A99CCu) goto L_088A99CC;
    return;
L_088A99CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x088A99D8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 448u, 0x0886E9F8u>(ctx, &aot_mem) && ctx.pc == 0x088A99D8u) goto L_088A99D8;
    return;
L_088A99D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9A88;
      }
      goto L_088A9A04;
    }
L_088A9A04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
        goto L_088A9A60;
    }
    goto L_088A9A1C;
L_088A9A1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
        goto L_088A9A60;
    }
    goto L_088A9A38;
L_088A9A38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088A9A50u);
    ctx.gpr[5] = (0u | 3u);
    goto L_088AB150;
L_088A9A50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    goto L_088A9A60;
L_088A9A60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A9A04;
      }
      goto L_088A9A88;
    }
L_088A9A88:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    goto L_088A9A8C;
L_088A9A8C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9AB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[7] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[7] = (2232u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(5736));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_088A9BE4;
      }
      goto L_088A9AFC;
    }
L_088A9AFC:
    ctx.gpr[31] = (0x088A9B04u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    goto L_088A9F28;
L_088A9B04:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] & 65535u);
      if (branch_taken) {
          goto L_088A9B58;
      }
      goto L_088A9B24;
    }
L_088A9B24:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    goto L_088A9B2C;
L_088A9B2C:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(12));
        goto L_088A9B4C;
    }
    goto L_088A9B3C;
L_088A9B3C:
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088A9B50;
      }
      goto L_088A9B4C;
    }
L_088A9B4C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    goto L_088A9B50;
L_088A9B50:
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
        goto L_088A9B2C;
    }
    goto L_088A9B58;
L_088A9B58:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[7] ^ ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[9] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088A9B98;
      }
      goto L_088A9B78;
    }
L_088A9B78:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9BD8;
      }
      goto L_088A9B98;
    }
L_088A9B98:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[31] = (0x088A9BCCu);
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 939u, 0x08AFFF8Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9BCCu) goto L_088A9BCC;
    return;
L_088A9BCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_088A9BD8;
L_088A9BD8:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(20));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088A9CB4;
      }
      goto L_088A9BE4;
    }
L_088A9BE4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088A9C2C;
      }
      goto L_088A9BF8;
    }
L_088A9BF8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    goto L_088A9C00;
L_088A9C00:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
        goto L_088A9C20;
    }
    goto L_088A9C10;
L_088A9C10:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088A9C24;
      }
      goto L_088A9C20;
    }
L_088A9C20:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_088A9C24;
L_088A9C24:
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
        goto L_088A9C00;
    }
    goto L_088A9C2C;
L_088A9C2C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[6] ^ ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088A9C6C;
      }
      goto L_088A9C4C;
    }
L_088A9C4C:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9CAC;
      }
      goto L_088A9C6C;
    }
L_088A9C6C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.gpr[31] = (0x088A9CA0u);
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 939u, 0x08AFFF8Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9CA0u) goto L_088A9CA0;
    return;
L_088A9CA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    goto L_088A9CAC;
L_088A9CAC:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_088A9CB4;
L_088A9CB4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9CC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[6] = (ctx.gpr[18] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088A9DE4;
      }
      goto L_088A9CF8;
    }
L_088A9CF8:
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088A9D58;
      }
      goto L_088A9D20;
    }
L_088A9D20:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    goto L_088A9D2C;
L_088A9D2C:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
        goto L_088A9D4C;
    }
    goto L_088A9D3C;
L_088A9D3C:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088A9D50;
      }
      goto L_088A9D4C;
    }
L_088A9D4C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_088A9D50;
L_088A9D50:
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
        goto L_088A9D2C;
    }
    goto L_088A9D58;
L_088A9D58:
    if (ctx.gpr[6] == ctx.gpr[5]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_088A9D7C;
    }
    goto L_088A9D60;
L_088A9D60:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
        goto L_088A9D80;
    }
    goto L_088A9D78;
L_088A9D78:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_088A9D7C;
L_088A9D7C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    goto L_088A9D80;
L_088A9D80:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x088A9DA8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 798u, 0x08AFF75Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9DA8u) goto L_088A9DA8;
    return;
L_088A9DA8:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9DBC;
      }
      goto L_088A9DB4;
    }
L_088A9DB4:
    ctx.gpr[31] = (0x088A9DBCu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x088A9DBCu) goto L_088A9DBC;
    return;
L_088A9DBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9DE4;
      }
      goto L_088A9DD4;
    }
L_088A9DD4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(104));
    ctx.gpr[31] = (0x088A9DE4u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 571u, 0x08AFE668u>(ctx, &aot_mem) && ctx.pc == 0x088A9DE4u) goto L_088A9DE4;
    return;
L_088A9DE4:
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
L_088A9DFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088A9E3C;
      }
      goto L_088A9E20;
    }
L_088A9E20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9E3C;
      }
      goto L_088A9E2C;
    }
L_088A9E2C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(104));
    ctx.gpr[31] = (0x088A9E3Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 571u, 0x08AFE668u>(ctx, &aot_mem) && ctx.pc == 0x088A9E3Cu) goto L_088A9E3C;
    return;
L_088A9E3C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9F10;
      }
      goto L_088A9E44;
    }
L_088A9E44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
        goto L_088A9E94;
    }
    goto L_088A9E5C;
L_088A9E5C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_088A9E64;
L_088A9E64:
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_088A9E84;
    }
    goto L_088A9E74;
L_088A9E74:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088A9E88;
      }
      goto L_088A9E84;
    }
L_088A9E84:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_088A9E88;
L_088A9E88:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_088A9E64;
    }
    goto L_088A9E90;
L_088A9E90:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_088A9E94;
L_088A9E94:
    ctx.gpr[6] = (ctx.gpr[4] ^ ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_088A9ECC;
      }
      goto L_088A9EAC;
    }
L_088A9EAC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
        goto L_088A9F0C;
    }
    goto L_088A9ECC;
L_088A9ECC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(104));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[31] = (0x088A9EFCu);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 886u, 0x08AFFB5Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9EFCu) goto L_088A9EFC;
    return;
L_088A9EFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    goto L_088A9F0C;
L_088A9F0C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_088A9F10;
L_088A9F10:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9F28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(156)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(100));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_088A9F70;
L_088A9F70:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088A9FEC;
      }
      goto L_088A9F98;
    }
L_088A9F98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9FC0;
      }
      goto L_088A9FA4;
    }
L_088A9FA4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088A9FC0;
      }
      goto L_088A9FB0;
    }
L_088A9FB0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
      if (branch_taken) {
          goto L_088A9FEC;
      }
      goto L_088A9FC0;
    }
L_088A9FC0:
    ctx.gpr[31] = (0x088A9FC8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 888u, 0x08AFBD8Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9FC8u) goto L_088A9FC8;
    return;
L_088A9FC8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A9F98;
      }
      goto L_088A9FEC;
    }
L_088A9FEC:
    if (ctx.gpr[18] == ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_088A9F70;
    }
    goto L_088A9FF4;
L_088A9FF4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(156), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AA024:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (2230u << 16u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(-7234)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[31] = (0x088AA068u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088A87C4;
L_088AA068:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AA074:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(225)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[8] & 255u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088AA11C;
      }
      goto L_088AA0AC;
    }
L_088AA0AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[20] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA11C;
      }
      goto L_088AA0C4;
    }
L_088AA0C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088AA0D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 267u, 0x0886DBB8u>(ctx, &aot_mem) && ctx.pc == 0x088AA0D0u) goto L_088AA0D0;
    return;
L_088AA0D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA0F8;
      }
      goto L_088AA0D8;
    }
L_088AA0D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
      if (branch_taken) {
          goto L_088AA124;
      }
      goto L_088AA0F0;
    }
L_088AA0F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA158;
      }
      goto L_088AA0F8;
    }
L_088AA0F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4692));
    ctx.gpr[31] = (0x088AA114u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 445u, 0x088A6FECu>(ctx, &aot_mem) && ctx.pc == 0x088AA114u) goto L_088AA114;
    return;
L_088AA114:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA1D0;
      }
      goto L_088AA11C;
    }
L_088AA11C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA1D0;
      }
      goto L_088AA124;
    }
L_088AA124:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_088AA12C;
L_088AA12C:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_088AA14C;
    }
    goto L_088AA13C;
L_088AA13C:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088AA150;
      }
      goto L_088AA14C;
    }
L_088AA14C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_088AA150;
L_088AA150:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_088AA12C;
    }
    goto L_088AA158;
L_088AA158:
    if (ctx.gpr[5] == ctx.gpr[16]) {
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
        goto L_088AA17C;
    }
    goto L_088AA160;
L_088AA160:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA17C;
      }
      goto L_088AA178;
    }
L_088AA178:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_088AA17C;
L_088AA17C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088AA1D0;
      }
      goto L_088AA198;
    }
L_088AA198:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[19] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(50))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x088AA1D0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088AA1D0u) goto L_088AA1D0;
    return;
L_088AA1D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AA1F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088AA36C;
      }
      goto L_088AA244;
    }
L_088AA244:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 65535u);
      if (branch_taken) {
          goto L_088AA2A4;
      }
      goto L_088AA270;
    }
L_088AA270:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_088AA278;
L_088AA278:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_088AA298;
    }
    goto L_088AA288;
L_088AA288:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088AA29C;
      }
      goto L_088AA298;
    }
L_088AA298:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_088AA29C;
L_088AA29C:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_088AA278;
    }
    goto L_088AA2A4;
L_088AA2A4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] ^ ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088AA2E4;
      }
      goto L_088AA2C4;
    }
L_088AA2C4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA320;
      }
      goto L_088AA2E4;
    }
L_088AA2E4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[31] = (0x088AA314u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 939u, 0x08AFFF8Cu>(ctx, &aot_mem) && ctx.pc == 0x088AA314u) goto L_088AA314;
    return;
L_088AA314:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_088AA320;
L_088AA320:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA364;
      }
      goto L_088AA330;
    }
L_088AA330:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AA364;
      }
      goto L_088AA344;
    }
L_088AA344:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(144));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[7]);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x088AA364u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088AA364u) goto L_088AA364;
    return;
L_088AA364:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA6AC;
      }
      goto L_088AA36C;
    }
L_088AA36C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088AA6AC;
      }
      goto L_088AA374;
    }
L_088AA374:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088AA6AC;
      }
      goto L_088AA384;
    }
L_088AA384:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA6AC;
      }
      goto L_088AA39C;
    }
L_088AA39C:
    ctx.gpr[31] = (0x088AA3A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088A9F28;
L_088AA3A4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088AA6AC;
      }
      goto L_088AA3B4;
    }
L_088AA3B4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
      if (branch_taken) {
          goto L_088AA414;
      }
      goto L_088AA3E0;
    }
L_088AA3E0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    goto L_088AA3E8;
L_088AA3E8:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
        goto L_088AA408;
    }
    goto L_088AA3F8;
L_088AA3F8:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088AA40C;
      }
      goto L_088AA408;
    }
L_088AA408:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_088AA40C;
L_088AA40C:
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
        goto L_088AA3E8;
    }
    goto L_088AA414;
L_088AA414:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] ^ ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[7]);
      if (branch_taken) {
          goto L_088AA458;
      }
      goto L_088AA434;
    }
L_088AA434:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
        goto L_088AA4A0;
    }
    goto L_088AA458;
L_088AA458:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(ctx.gpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x088AA48Cu);
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 939u, 0x08AFFF8Cu>(ctx, &aot_mem) && ctx.pc == 0x088AA48Cu) goto L_088AA48C;
    return;
L_088AA48C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    goto L_088AA4A0;
L_088AA4A0:
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
        goto L_088AA504;
    }
    goto L_088AA4CC;
L_088AA4CC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_088AA4D4;
L_088AA4D4:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_088AA4F4;
    }
    goto L_088AA4E4;
L_088AA4E4:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088AA4F8;
      }
      goto L_088AA4F4;
    }
L_088AA4F4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_088AA4F8;
L_088AA4F8:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_088AA4D4;
    }
    goto L_088AA500;
L_088AA500:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    goto L_088AA504;
L_088AA504:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] ^ ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088AA540;
      }
      goto L_088AA520;
    }
L_088AA520:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA578;
      }
      goto L_088AA540;
    }
L_088AA540:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(132), static_cast<std::uint16_t>(ctx.gpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(124));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x088AA56Cu);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 939u, 0x08AFFF8Cu>(ctx, &aot_mem) && ctx.pc == 0x088AA56Cu) goto L_088AA56C;
    return;
L_088AA56C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    goto L_088AA578;
L_088AA578:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
      if (branch_taken) {
          goto L_088AA5D0;
      }
      goto L_088AA588;
    }
L_088AA588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    ctx.gpr[21] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x088AA5B8u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088AA5B8u) goto L_088AA5B8;
    return;
L_088AA5B8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088AA5CCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 190u, 0x08A4CC3Cu>(ctx, &aot_mem) && ctx.pc == 0x088AA5CCu) goto L_088AA5CC;
    return;
L_088AA5CC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    goto L_088AA5D0;
L_088AA5D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[18] & 65535u);
      if (branch_taken) {
          goto L_088AA62C;
      }
      goto L_088AA5F8;
    }
L_088AA5F8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(176), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_088AA600;
L_088AA600:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_088AA620;
    }
    goto L_088AA610;
L_088AA610:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088AA624;
      }
      goto L_088AA620;
    }
L_088AA620:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_088AA624;
L_088AA624:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_088AA600;
    }
    goto L_088AA62C;
L_088AA62C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] ^ ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088AA66C;
      }
      goto L_088AA64C;
    }
L_088AA64C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(152), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA6A4;
      }
      goto L_088AA66C;
    }
L_088AA66C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[5]);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(168), static_cast<std::uint16_t>(ctx.gpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.gpr[31] = (0x088AA698u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(168));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 939u, 0x08AFFF8Cu>(ctx, &aot_mem) && ctx.pc == 0x088AA698u) goto L_088AA698;
    return;
L_088AA698:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    goto L_088AA6A4;
L_088AA6A4:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    goto L_088AA6AC;
L_088AA6AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AA6D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[8] = (ctx.gpr[7] ^ ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088AA734;
      }
      goto L_088AA720;
    }
L_088AA720:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
        goto L_088AA73C;
    }
    goto L_088AA734;
L_088AA734:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_088AA73C;
      }
      goto L_088AA73C;
    }
L_088AA73C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AA7AC;
      }
      goto L_088AA744;
    }
L_088AA744:
    ctx.gpr[31] = (0x088AA74Cu);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 267u, 0x0886DBB8u>(ctx, &aot_mem) && ctx.pc == 0x088AA74Cu) goto L_088AA74C;
    return;
L_088AA74C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA7AC;
      }
      goto L_088AA754;
    }
L_088AA754:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(6));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(6), ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088AA7C0;
      }
      goto L_088AA7A4;
    }
L_088AA7A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA7F4;
      }
      goto L_088AA7AC;
    }
L_088AA7AC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088AA7B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4752));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 445u, 0x088A6FECu>(ctx, &aot_mem) && ctx.pc == 0x088AA7B8u) goto L_088AA7B8;
    return;
L_088AA7B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA870;
      }
      goto L_088AA7C0;
    }
L_088AA7C0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_088AA7C8;
L_088AA7C8:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_088AA7E8;
    }
    goto L_088AA7D8;
L_088AA7D8:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088AA7EC;
      }
      goto L_088AA7E8;
    }
L_088AA7E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_088AA7EC;
L_088AA7EC:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_088AA7C8;
    }
    goto L_088AA7F4;
L_088AA7F4:
    if (ctx.gpr[5] == ctx.gpr[16]) {
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
        goto L_088AA818;
    }
    goto L_088AA7FC;
L_088AA7FC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
        goto L_088AA81C;
    }
    goto L_088AA814;
L_088AA814:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_088AA818;
L_088AA818:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    goto L_088AA81C;
L_088AA81C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[16] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_088AA854;
    }
    goto L_088AA84C;
L_088AA84C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088AA854;
      }
      goto L_088AA854;
    }
L_088AA854:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA870;
      }
      goto L_088AA85C;
    }
L_088AA85C:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AA870u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 646u, 0x08A5B96Cu>(ctx, &aot_mem) && ctx.pc == 0x088AA870u) goto L_088AA870;
    return;
L_088AA870:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AA888:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AA89Cu);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(54)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x088AA89Cu) goto L_088AA89C;
    return;
L_088AA89C:
    ctx.gpr[31] = (0x088AA8A4u);
    ctx.gpr[4] = (0u | 140u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x088AA8A4u) goto L_088AA8A4;
    return;
L_088AA8A4:
    ctx.gpr[31] = (0x088AA8ACu);
    ctx.gpr[4] = (0u | 132u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x088AA8ACu) goto L_088AA8AC;
    return;
L_088AA8AC:
    ctx.gpr[31] = (0x088AA8B4u);
    ctx.gpr[4] = (0u | 133u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x088AA8B4u) goto L_088AA8B4;
    return;
L_088AA8B4:
    ctx.gpr[31] = (0x088AA8BCu);
    ctx.gpr[4] = (0u | 187u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x088AA8BCu) goto L_088AA8BC;
    return;
L_088AA8BC:
    ctx.gpr[31] = (0x088AA8C4u);
    ctx.gpr[4] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x088AA8C4u) goto L_088AA8C4;
    return;
L_088AA8C4:
    ctx.gpr[31] = (0x088AA8CCu);
    ctx.gpr[4] = (0u | 140u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x088AA8CCu) goto L_088AA8CC;
    return;
L_088AA8CC:
    ctx.gpr[31] = (0x088AA8D4u);
    ctx.gpr[4] = (0u | 162u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x088AA8D4u) goto L_088AA8D4;
    return;
L_088AA8D4:
    ctx.gpr[16] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[31] = (0x088AA8E4u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(558)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x088AA8E4u) goto L_088AA8E4;
    return;
L_088AA8E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[31] = (0x088AA8F0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(560)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x088AA8F0u) goto L_088AA8F0;
    return;
L_088AA8F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[31] = (0x088AA8FCu);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(562)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x088AA8FCu) goto L_088AA8FC;
    return;
L_088AA8FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AA90C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (0u | 157u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AA920u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x088AA920u) goto L_088AA920;
    return;
L_088AA920:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x088AA92Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x088AA92Cu) goto L_088AA92C;
    return;
L_088AA92C:
    ctx.gpr[31] = (0x088AA934u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x088AA934u) goto L_088AA934;
    return;
L_088AA934:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AA940:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AA95Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_088A84B4;
L_088AA95C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088AAAB8;
      }
      goto L_088AA96C;
    }
L_088AA96C:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088AA9AC;
      }
      goto L_088AA978;
    }
L_088AA978:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088AAA38;
      }
      goto L_088AA980;
    }
L_088AA980:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088AAA4C;
      }
      goto L_088AA988;
    }
L_088AA988:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_088AAAB8;
      }
      goto L_088AA990;
    }
L_088AA990:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_088AAA60;
      }
      goto L_088AA998;
    }
L_088AA998:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(54)));
    ctx.gpr[31] = (0x088AA9A4u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x088AA9A4u) goto L_088AA9A4;
    return;
L_088AA9A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AAAB8;
      }
      goto L_088AA9AC;
    }
L_088AA9AC:
    ctx.gpr[4] = (0u | 140u);
    ctx.gpr[31] = (0x088AA9B8u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x088AA9B8u) goto L_088AA9B8;
    return;
L_088AA9B8:
    ctx.gpr[31] = (0x088AA9C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088A84D4;
L_088AA9C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AA9E8;
      }
      goto L_088AA9C8;
    }
L_088AA9C8:
    ctx.gpr[4] = (0u | 132u);
    ctx.gpr[31] = (0x088AA9D4u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x088AA9D4u) goto L_088AA9D4;
    return;
L_088AA9D4:
    ctx.gpr[4] = (0u | 133u);
    ctx.gpr[31] = (0x088AA9E0u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x088AA9E0u) goto L_088AA9E0;
    return;
L_088AA9E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AAA30;
      }
      goto L_088AA9E8;
    }
L_088AA9E8:
    ctx.gpr[31] = (0x088AA9F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088A84D4;
L_088AA9F0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088AAA18;
      }
      goto L_088AA9F8;
    }
L_088AA9F8:
    ctx.gpr[4] = (0u | 133u);
    ctx.gpr[31] = (0x088AAA04u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x088AAA04u) goto L_088AAA04;
    return;
L_088AAA04:
    ctx.gpr[4] = (0u | 187u);
    ctx.gpr[31] = (0x088AAA10u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x088AAA10u) goto L_088AAA10;
    return;
L_088AAA10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AAA30;
      }
      goto L_088AAA18;
    }
L_088AAA18:
    ctx.gpr[4] = (0u | 144u);
    ctx.gpr[31] = (0x088AAA24u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x088AAA24u) goto L_088AAA24;
    return;
L_088AAA24:
    ctx.gpr[4] = (0u | 187u);
    ctx.gpr[31] = (0x088AAA30u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x088AAA30u) goto L_088AAA30;
    return;
L_088AAA30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AAAB8;
      }
      goto L_088AAA38;
    }
L_088AAA38:
    ctx.gpr[4] = (0u | 140u);
    ctx.gpr[31] = (0x088AAA44u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x088AAA44u) goto L_088AAA44;
    return;
L_088AAA44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AAAB8;
      }
      goto L_088AAA4C;
    }
L_088AAA4C:
    ctx.gpr[4] = (0u | 162u);
    ctx.gpr[31] = (0x088AAA58u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x088AAA58u) goto L_088AAA58;
    return;
L_088AAA58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AAAB8;
      }
      goto L_088AAA60;
    }
L_088AAA60:
    ctx.gpr[18] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x088AAA74u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(558)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x088AAA74u) goto L_088AAA74;
    return;
L_088AAA74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x088AAA84u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(560)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x088AAA84u) goto L_088AAA84;
    return;
L_088AAA84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x088AAA94u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(562)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x088AAA94u) goto L_088AAA94;
    return;
L_088AAA94:
    ctx.gpr[4] = (0u | 150u);
    ctx.gpr[31] = (0x088AAAA0u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x088AAAA0u) goto L_088AAAA0;
    return;
L_088AAAA0:
    ctx.gpr[4] = (0u | 133u);
    ctx.gpr[31] = (0x088AAAACu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x088AAAACu) goto L_088AAAAC;
    return;
L_088AAAAC:
    ctx.gpr[4] = (0u | 160u);
    ctx.gpr[31] = (0x088AAAB8u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x088AAAB8u) goto L_088AAAB8;
    return;
L_088AAAB8:
    ctx.gpr[31] = (0x088AAAC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 931u, 0x089C7D40u>(ctx, &aot_mem) && ctx.pc == 0x088AAAC0u) goto L_088AAAC0;
    return;
L_088AAAC0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088AAAD8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 12u, 0x089C8108u>(ctx, &aot_mem) && ctx.pc == 0x088AAAD8u) goto L_088AAAD8;
    return;
L_088AAAD8:
    ctx.gpr[31] = (0x088AAAE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 489u, 0x08AB7264u>(ctx, &aot_mem) && ctx.pc == 0x088AAAE0u) goto L_088AAAE0;
    return;
L_088AAAE0:
    ctx.gpr[31] = (0x088AAAE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088A84D4;
L_088AAAE8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (17538u << 16u);
      if (branch_taken) {
          goto L_088AAB2C;
      }
      goto L_088AAAF0;
    }
L_088AAAF0:
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (50253u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x088AAB24u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 295u, 0x08985DF4u>(ctx, &aot_mem) && ctx.pc == 0x088AAB24u) goto L_088AAB24;
    return;
L_088AAB24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AABA4;
      }
      goto L_088AAB2C;
    }
L_088AAB2C:
    ctx.gpr[31] = (0x088AAB34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088A84D4;
L_088AAB34:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.gpr[4] = (17300u << 16u);
      if (branch_taken) {
          goto L_088AAB74;
      }
      goto L_088AAB3C;
    }
L_088AAB3C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (50323u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16844u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x088AAB6Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 295u, 0x08985DF4u>(ctx, &aot_mem) && ctx.pc == 0x088AAB6Cu) goto L_088AAB6C;
    return;
L_088AAB6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AABA4;
      }
      goto L_088AAB74;
    }
L_088AAB74:
    ctx.gpr[4] = (50170u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (17058u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x088AABA4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 295u, 0x08985DF4u>(ctx, &aot_mem) && ctx.pc == 0x088AABA4u) goto L_088AABA4;
    return;
L_088AABA4:
    ctx.gpr[31] = (0x088AABACu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x088AABACu) goto L_088AABAC;
    return;
L_088AABAC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AABC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AABF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 568u, 0x089C66D8u>(ctx, &aot_mem) && ctx.pc == 0x088AABF8u) goto L_088AABF8;
    return;
L_088AABF8:
    ctx.gpr[30] = (0u | 7u);
    ctx.gpr[18] = (2229u << 16u);
    goto L_088AAC00;
L_088AAC00:
    ctx.gpr[31] = (0x088AAC08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 25u, 0x089C81E0u>(ctx, &aot_mem) && ctx.pc == 0x088AAC08u) goto L_088AAC08;
    return;
L_088AAC08:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AAC00;
      }
      goto L_088AAC10;
    }
L_088AAC10:
    ctx.gpr[31] = (0x088AAC18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 914u, 0x089C7BFCu>(ctx, &aot_mem) && ctx.pc == 0x088AAC18u) goto L_088AAC18;
    return;
L_088AAC18:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AAC10;
      }
      goto L_088AAC20;
    }
L_088AAC20:
    ctx.gpr[23] = (2225u << 16u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[21] = (0u | 6u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(4784));
    ctx.gpr[20] = (2229u << 16u);
    goto L_088AAC40;
L_088AAC40:
    ctx.gpr[31] = (0x088AAC48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 665u, 0x089C6D0Cu>(ctx, &aot_mem) && ctx.pc == 0x088AAC48u) goto L_088AAC48;
    return;
L_088AAC48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AAD74;
      }
      goto L_088AAC50;
    }
L_088AAC50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AAD74;
      }
      goto L_088AAC70;
    }
L_088AAC70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AAD74;
      }
      goto L_088AAC80;
    }
L_088AAC80:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088AAC8Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 445u, 0x088A6FECu>(ctx, &aot_mem) && ctx.pc == 0x088AAC8Cu) goto L_088AAC8C;
    return;
L_088AAC8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[6] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AACB8;
      }
      goto L_088AACA4;
    }
L_088AACA4:
    ctx.gpr[31] = (0x088AACACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x088AACACu) goto L_088AACAC;
    return;
L_088AACAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    goto L_088AACB8;
L_088AACB8:
    ctx.gpr[6] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AACD8;
      }
      goto L_088AACC4;
    }
L_088AACC4:
    ctx.gpr[31] = (0x088AACCCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 631u, 0x089C6AC4u>(ctx, &aot_mem) && ctx.pc == 0x088AACCCu) goto L_088AACCC;
    return;
L_088AACCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    goto L_088AACD8;
L_088AACD8:
    ctx.gpr[6] = (ctx.gpr[5] & 128u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AACF8;
      }
      goto L_088AACE4;
    }
L_088AACE4:
    ctx.gpr[31] = (0x088AACECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 648u, 0x089C6BE8u>(ctx, &aot_mem) && ctx.pc == 0x088AACECu) goto L_088AACEC;
    return;
L_088AACEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    goto L_088AACF8;
L_088AACF8:
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088AAD20;
      }
      goto L_088AAD14;
    }
L_088AAD14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088AAD20;
L_088AAD20:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088AAD44;
      }
      goto L_088AAD2C;
    }
L_088AAD2C:
    ctx.gpr[31] = (0x088AAD34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 25u, 0x089C81E0u>(ctx, &aot_mem) && ctx.pc == 0x088AAD34u) goto L_088AAD34;
    return;
L_088AAD34:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AAD2C;
      }
      goto L_088AAD3C;
    }
L_088AAD3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AAD74;
      }
      goto L_088AAD44;
    }
L_088AAD44:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088AAD58;
      }
      goto L_088AAD4C;
    }
L_088AAD4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088AAD58;
L_088AAD58:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_088AAD74;
      }
      goto L_088AAD64;
    }
L_088AAD64:
    ctx.gpr[31] = (0x088AAD6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 914u, 0x089C7BFCu>(ctx, &aot_mem) && ctx.pc == 0x088AAD6Cu) goto L_088AAD6C;
    return;
L_088AAD6C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AAD64;
      }
      goto L_088AAD74;
    }
L_088AAD74:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 300 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088AAC40;
      }
      goto L_088AAD88;
    }
L_088AAD88:
    ctx.gpr[31] = (0x088AAD90u);
    ctx.gpr[4] = (0u | 157u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x088AAD90u) goto L_088AAD90;
    return;
L_088AAD90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088AADA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4816));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 445u, 0x088A6FECu>(ctx, &aot_mem) && ctx.pc == 0x088AADA8u) goto L_088AADA8;
    return;
L_088AADA8:
    ctx.gpr[31] = (0x088AADB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 521u, 0x089C63A4u>(ctx, &aot_mem) && ctx.pc == 0x088AADB0u) goto L_088AADB0;
    return;
L_088AADB0:
    ctx.gpr[31] = (0x088AADB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 533u, 0x089C648Cu>(ctx, &aot_mem) && ctx.pc == 0x088AADB8u) goto L_088AADB8;
    return;
L_088AADB8:
    ctx.gpr[31] = (0x088AADC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 48u, 0x089C83A8u>(ctx, &aot_mem) && ctx.pc == 0x088AADC0u) goto L_088AADC0;
    return;
L_088AADC0:
    ctx.gpr[31] = (0x088AADC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 568u, 0x089C66D8u>(ctx, &aot_mem) && ctx.pc == 0x088AADC8u) goto L_088AADC8;
    return;
L_088AADC8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088AADD4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 799u, 0x08AA3C24u>(ctx, &aot_mem) && ctx.pc == 0x088AADD4u) goto L_088AADD4;
    return;
L_088AADD4:
    ctx.gpr[31] = (0x088AADDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 764u, 0x089CB354u>(ctx, &aot_mem) && ctx.pc == 0x088AADDCu) goto L_088AADDC;
    return;
L_088AADDC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088AADE8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x088AADE8u) goto L_088AADE8;
    return;
L_088AADE8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x088AADF4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x088AADF4u) goto L_088AADF4;
    return;
L_088AADF4:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x088AAE00u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x088AAE00u) goto L_088AAE00;
    return;
L_088AAE00:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x088AAE0Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x088AAE0Cu) goto L_088AAE0C;
    return;
L_088AAE0C:
    ctx.gpr[4] = (0u | 262u);
    ctx.gpr[31] = (0x088AAE18u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x088AAE18u) goto L_088AAE18;
    return;
L_088AAE18:
    ctx.gpr[4] = (0u | 273u);
    ctx.gpr[31] = (0x088AAE24u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x088AAE24u) goto L_088AAE24;
    return;
L_088AAE24:
    ctx.gpr[4] = (0u | 273u);
    ctx.gpr[31] = (0x088AAE30u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x088AAE30u) goto L_088AAE30;
    return;
L_088AAE30:
    ctx.gpr[4] = (0u | 292u);
    ctx.gpr[31] = (0x088AAE3Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x088AAE3Cu) goto L_088AAE3C;
    return;
L_088AAE3C:
    ctx.gpr[31] = (0x088AAE44u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x088AAE44u) goto L_088AAE44;
    return;
L_088AAE44:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16404), static_cast<std::uint8_t>(0u));
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
L_088AAE7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_088AAED0;
      }
      goto L_088AAEB0;
    }
L_088AAEB0:
    ctx.gpr[4] = (0u - ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4912));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_088AAED0;
L_088AAED0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x088AAEDCu);
    ctx.gpr[4] = (0u | 496u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 238u, 0x0883D3ACu>(ctx, &aot_mem) && ctx.pc == 0x088AAEDCu) goto L_088AAEDC;
    return;
L_088AAEDC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088AAEF8;
      }
      goto L_088AAEE8;
    }
L_088AAEE8:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AAEF4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 194u, 0x0883D0B8u>(ctx, &aot_mem) && ctx.pc == 0x088AAEF4u) goto L_088AAEF4;
    return;
L_088AAEF4:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    goto L_088AAEF8;
L_088AAEF8:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(420), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088AAF28;
      }
      goto L_088AAF18;
    }
L_088AAF18:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x088AAF24u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x088AAF24u) goto L_088AAF24;
    return;
L_088AAF24:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088AAF28;
L_088AAF28:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088AAF58u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x088AAF58u) goto L_088AAF58;
    return;
L_088AAF58:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x088AAF6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x088AAF6Cu) goto L_088AAF6C;
    return;
L_088AAF6C:
    ctx.gpr[31] = (0x088AAF74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x088AAF74u) goto L_088AAF74;
    return;
L_088AAF74:
    ctx.gpr[31] = (0x088AAF7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F898u>(ctx, &aot_mem) && ctx.pc == 0x088AAF7Cu) goto L_088AAF7C;
    return;
L_088AAF7C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088AAF94u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 509u, 0x08882624u>(ctx, &aot_mem) && ctx.pc == 0x088AAF94u) goto L_088AAF94;
    return;
L_088AAF94:
    ctx.gpr[31] = (0x088AAF9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x088AAF9Cu) goto L_088AAF9C;
    return;
L_088AAF9C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    ctx.gpr[31] = (0x088AAFACu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 804u, 0x08AFB74Cu>(ctx, &aot_mem) && ctx.pc == 0x088AAFACu) goto L_088AAFAC;
    return;
L_088AAFAC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AAFD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AAFECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x088AAFECu) goto L_088AAFEC;
    return;
L_088AAFEC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x088AB000u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16256));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 194u, 0x08958B90u>(ctx, &aot_mem) && ctx.pc == 0x088AB000u) goto L_088AB000;
    return;
L_088AB000:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB010:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AB030u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x088AB030u) goto L_088AB030;
    return;
L_088AB030:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088AB03Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x088AB03Cu) goto L_088AB03C;
    return;
L_088AB03C:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17204u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[31] = (0x088AB060u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A288A8u>(ctx, &aot_mem) && ctx.pc == 0x088AB060u) goto L_088AB060;
    return;
L_088AB060:
    ctx.gpr[31] = (0x088AB068u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x088AB068u) goto L_088AB068;
    return;
L_088AB068:
    ctx.gpr[31] = (0x088AB070u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F898u>(ctx, &aot_mem) && ctx.pc == 0x088AB070u) goto L_088AB070;
    return;
L_088AB070:
    ctx.gpr[31] = (0x088AB078u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x088AB078u) goto L_088AB078;
    return;
L_088AB078:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB08C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), 0u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(98), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 24u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AB0E4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x088AB0E4u) goto L_088AB0E4;
    return;
L_088AB0E4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088AB108;
      }
      goto L_088AB0F4;
    }
L_088AB0F4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[31] = (0x088AB100u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x088AB100u) goto L_088AB100;
    return;
L_088AB100:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_088AB108;
L_088AB108:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(104), 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(108));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB150:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088AB338;
      }
      goto L_088AB184;
    }
L_088AB184:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[23] = (ctx.gpr[16] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_088AB28C;
      }
      goto L_088AB198;
    }
L_088AB198:
    ctx.gpr[18] = (2225u << 16u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4824));
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    goto L_088AB1B4;
L_088AB1B4:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088AB238;
      }
      goto L_088AB1D0;
    }
L_088AB1D0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088AB1E4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_088ABC5C;
L_088AB1E4:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(-30636), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB224;
      }
      goto L_088AB208;
    }
L_088AB208:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x088AB224u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088AB224u) goto L_088AB224;
    return;
L_088AB224:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(-30636), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_088AB284;
      }
      goto L_088AB238;
    }
L_088AB238:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088AB25Cu);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 798u, 0x08AFF75Cu>(ctx, &aot_mem) && ctx.pc == 0x088AB25Cu) goto L_088AB25C;
    return;
L_088AB25C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB270;
      }
      goto L_088AB268;
    }
L_088AB268:
    ctx.gpr[31] = (0x088AB270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x088AB270u) goto L_088AB270;
    return;
L_088AB270:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_088AB284;
L_088AB284:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
        goto L_088AB1B4;
    }
    goto L_088AB28C;
L_088AB28C:
    if (ctx.gpr[23] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
        goto L_088AB2FC;
    }
    goto L_088AB294;
L_088AB294:
    if (ctx.gpr[23] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
        goto L_088AB2FC;
    }
    goto L_088AB29C;
L_088AB29C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB2DC;
      }
      goto L_088AB2A4;
    }
L_088AB2A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088AB2B8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 673u, 0x08AFEE48u>(ctx, &aot_mem) && ctx.pc == 0x088AB2B8u) goto L_088AB2B8;
    return;
L_088AB2B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), 0u);
    goto L_088AB2DC;
L_088AB2DC:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088AB2FC;
      }
      goto L_088AB2E4;
    }
L_088AB2E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
        goto L_088AB2FC;
    }
    goto L_088AB2F0;
L_088AB2F0:
    ctx.gpr[31] = (0x088AB2F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x088AB2F8u) goto L_088AB2F8;
    return;
L_088AB2F8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_088AB2FC;
L_088AB2FC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_088AB328;
      }
      goto L_088AB304;
    }
L_088AB304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088AB324;
      }
      goto L_088AB318;
    }
L_088AB318:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x088AB324u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x088AB324u) goto L_088AB324;
    return;
L_088AB324:
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    goto L_088AB328;
L_088AB328:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB338;
      }
      goto L_088AB330;
    }
L_088AB330:
    ctx.gpr[31] = (0x088AB338u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088AB338u) goto L_088AB338;
    return;
L_088AB338:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB364:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AB390u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088A9350;
L_088AB390:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088AB39Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088A9358;
L_088AB39C:
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(5), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]));
    ctx.gpr[31] = (0x088AB3ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088A9360;
L_088AB3AC:
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(9), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(248), ctx.gpr[4]);
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(13), ctx.gpr[4]));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(252), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB3E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AB400u);
    ctx.gpr[6] = (0u | 0u);
    goto L_088A93D8;
L_088AB400:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB40C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AB420u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 745u, 0x089C71ACu>(ctx, &aot_mem) && ctx.pc == 0x088AB420u) goto L_088AB420;
    return;
L_088AB420:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AB430u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x088AB430u) goto L_088AB430;
    return;
L_088AB430:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB440:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AB458u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x088AB458u) goto L_088AB458;
    return;
L_088AB458:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB464:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4856));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AB488u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 445u, 0x088A6FECu>(ctx, &aot_mem) && ctx.pc == 0x088AB488u) goto L_088AB488;
    return;
L_088AB488:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AB498u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    goto L_088A973C;
L_088AB498:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB4A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AB4D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4892));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 445u, 0x088A6FECu>(ctx, &aot_mem) && ctx.pc == 0x088AB4D4u) goto L_088AB4D4;
    return;
L_088AB4D4:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
        goto L_088AB4F0;
    }
    goto L_088AB4E4;
L_088AB4E4:
    ctx.gpr[31] = (0x088AB4ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x088AB4ECu) goto L_088AB4EC;
    return;
L_088AB4EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
    goto L_088AB4F0;
L_088AB4F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB550;
      }
      goto L_088AB4FC;
    }
L_088AB4FC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AB510u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4924));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 445u, 0x088A6FECu>(ctx, &aot_mem) && ctx.pc == 0x088AB510u) goto L_088AB510;
    return;
L_088AB510:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7247)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AB544u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088A87C4;
L_088AB544:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.gpr[31] = (0x088AB550u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088A973C;
L_088AB550:
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
L_088AB568:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-21280)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088AB59C;
      }
      goto L_088AB594;
    }
L_088AB594:
    ctx.gpr[31] = (0x088AB59Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x088AB59Cu) goto L_088AB59C;
    return;
L_088AB59C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4972));
    ctx.gpr[31] = (0x088AB5B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BCB0u>(ctx, &aot_mem) && ctx.pc == 0x088AB5B4u) goto L_088AB5B4;
    return;
L_088AB5B4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AB5C0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 703u, 0x0890BF20u>(ctx, &aot_mem) && ctx.pc == 0x088AB5C0u) goto L_088AB5C0;
    return;
L_088AB5C0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AB5CCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B6CCu>(ctx, &aot_mem) && ctx.pc == 0x088AB5CCu) goto L_088AB5CC;
    return;
L_088AB5CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB5FC;
      }
      goto L_088AB5D4;
    }
L_088AB5D4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AB5E0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 477u, 0x08A020C8u>(ctx, &aot_mem) && ctx.pc == 0x088AB5E0u) goto L_088AB5E0;
    return;
L_088AB5E0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.gpr[31] = (0x088AB5ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 477u, 0x08A020C8u>(ctx, &aot_mem) && ctx.pc == 0x088AB5ECu) goto L_088AB5EC;
    return;
L_088AB5EC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x088AB5FCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 813u, 0x08997BF0u>(ctx, &aot_mem) && ctx.pc == 0x088AB5FCu) goto L_088AB5FC;
    return;
L_088AB5FC:
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
L_088AB614:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(6), ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(7)));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(11), ctx.gpr[7]));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(15), ctx.gpr[8]));
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(19), ctx.gpr[9]));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(21)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AB65Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 956u, 0x08A9B858u>(ctx, &aot_mem) && ctx.pc == 0x088AB65Cu) goto L_088AB65C;
    return;
L_088AB65C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB668:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16399)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
        goto L_088AB684;
    }
    goto L_088AB67C;
L_088AB67C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB6A0;
      }
      goto L_088AB684;
    }
L_088AB684:
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(7), ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(236), ctx.gpr[6]);
    goto L_088AB6A0;
L_088AB6A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB6A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(244)));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(6), ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088AB6F8;
      }
      goto L_088AB6E4;
    }
L_088AB6E4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088AB6F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4056));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 445u, 0x088A6FECu>(ctx, &aot_mem) && ctx.pc == 0x088AB6F0u) goto L_088AB6F0;
    return;
L_088AB6F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB714;
      }
      goto L_088AB6F8;
    }
L_088AB6F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AB714;
L_088AB714:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB720:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(6), ctx.gpr[5]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088AB774;
      }
      goto L_088AB750;
    }
L_088AB750:
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(7), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(10), ctx.gpr[7]));
    ctx.gpr[31] = (0x088AB760u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_088A87FC;
L_088AB760:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AB77C;
      }
      goto L_088AB76C;
    }
L_088AB76C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB810;
      }
      goto L_088AB774;
    }
L_088AB774:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB810;
      }
      goto L_088AB77C;
    }
L_088AB77C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB7B0;
      }
      goto L_088AB788;
    }
L_088AB788:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB7B0;
      }
      goto L_088AB794;
    }
L_088AB794:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088AB7ACu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 227u, 0x088892C8u>(ctx, &aot_mem) && ctx.pc == 0x088AB7ACu) goto L_088AB7AC;
    return;
L_088AB7AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_088AB7B0;
L_088AB7B0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(540)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088AB810;
      }
      goto L_088AB7C4;
    }
L_088AB7C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB7FC;
      }
      goto L_088AB7D0;
    }
L_088AB7D0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x088AB7F0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 227u, 0x088892C8u>(ctx, &aot_mem) && ctx.pc == 0x088AB7F0u) goto L_088AB7F0;
    return;
L_088AB7F0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_088AB7FC;
L_088AB7FC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(540)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088AB7C4;
      }
      goto L_088AB810;
    }
L_088AB810:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB81C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(6), ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088AB89C;
      }
      goto L_088AB850;
    }
L_088AB850:
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(7), ctx.gpr[6]));
    ctx.gpr[31] = (0x088AB85Cu);
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(10), ctx.gpr[6]));
    goto L_088A87FC;
L_088AB85C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB894;
      }
      goto L_088AB868;
    }
L_088AB868:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB88C;
      }
      goto L_088AB874;
    }
L_088AB874:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB8A4;
      }
      goto L_088AB880;
    }
L_088AB880:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(840), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088AB8AC;
      }
      goto L_088AB88C;
    }
L_088AB88C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB8AC;
      }
      goto L_088AB894;
    }
L_088AB894:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB8AC;
      }
      goto L_088AB89C;
    }
L_088AB89C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB8AC;
      }
      goto L_088AB8A4;
    }
L_088AB8A4:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(840), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088AB8AC;
L_088AB8AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB8BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(6), ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088AB924;
      }
      goto L_088AB8F0;
    }
L_088AB8F0:
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(7), ctx.gpr[6]));
    ctx.gpr[31] = (0x088AB8FCu);
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(10), ctx.gpr[6]));
    goto L_088A87FC;
L_088AB8FC:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB91C;
      }
      goto L_088AB908;
    }
L_088AB908:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AB92C;
      }
      goto L_088AB914;
    }
L_088AB914:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB938;
      }
      goto L_088AB91C;
    }
L_088AB91C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB938;
      }
      goto L_088AB924;
    }
L_088AB924:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB938;
      }
      goto L_088AB92C;
    }
L_088AB92C:
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(11), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(14), ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(660), ctx.gpr[4]);
    goto L_088AB938;
L_088AB938:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB948:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(6), ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088ABA0C;
      }
      goto L_088AB97C;
    }
L_088AB97C:
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(6), ctx.gpr[5]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(7), ctx.gpr[6]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(10), ctx.gpr[6]));
    ctx.gpr[31] = (0x088AB998u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    goto L_088A87FC;
L_088AB998:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABA04;
      }
      goto L_088AB9A4;
    }
L_088AB9A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088AB9BCu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088AB9BCu) goto L_088AB9BC;
    return;
L_088AB9BC:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088AB9D8;
      }
      goto L_088AB9C8;
    }
L_088AB9C8:
    ctx.gpr[31] = (0x088AB9D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 312u, 0x08ABDD0Cu>(ctx, &aot_mem) && ctx.pc == 0x088AB9D0u) goto L_088AB9D0;
    return;
L_088AB9D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABA04;
      }
      goto L_088AB9D8;
    }
L_088AB9D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088AB9F0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088AB9F0u) goto L_088AB9F0;
    return;
L_088AB9F0:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088ABA04;
      }
      goto L_088AB9FC;
    }
L_088AB9FC:
    ctx.gpr[31] = (0x088ABA04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 456u, 0x089DA648u>(ctx, &aot_mem) && ctx.pc == 0x088ABA04u) goto L_088ABA04;
    return;
L_088ABA04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABAE8;
      }
      goto L_088ABA0C;
    }
L_088ABA0C:
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(6), ctx.gpr[5]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(7), ctx.gpr[6]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(10), ctx.gpr[6]));
    ctx.gpr[31] = (0x088ABA28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    goto L_088A87FC;
L_088ABA28:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABAE8;
      }
      goto L_088ABA34;
    }
L_088ABA34:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABAE8;
      }
      goto L_088ABA40;
    }
L_088ABA40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ABAA0;
      }
      goto L_088ABA4C;
    }
L_088ABA4C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088ABA5Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1608), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 81u, 0x0880C5C0u>(ctx, &aot_mem) && ctx.pc == 0x088ABA5Cu) goto L_088ABA5C;
    return;
L_088ABA5C:
    ctx.gpr[31] = (0x088ABA64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 211u, 0x0880CFA8u>(ctx, &aot_mem) && ctx.pc == 0x088ABA64u) goto L_088ABA64;
    return;
L_088ABA64:
    ctx.gpr[31] = (0x088ABA6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 181u, 0x0880CD78u>(ctx, &aot_mem) && ctx.pc == 0x088ABA6Cu) goto L_088ABA6C;
    return;
L_088ABA6C:
    ctx.gpr[31] = (0x088ABA74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 196u, 0x0880CE90u>(ctx, &aot_mem) && ctx.pc == 0x088ABA74u) goto L_088ABA74;
    return;
L_088ABA74:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088ABA84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    goto L_088A8C3C;
L_088ABA84:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABA98;
      }
      goto L_088ABA90;
    }
L_088ABA90:
    ctx.gpr[31] = (0x088ABA98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 312u, 0x08ABDD0Cu>(ctx, &aot_mem) && ctx.pc == 0x088ABA98u) goto L_088ABA98;
    return;
L_088ABA98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABAD4;
      }
      goto L_088ABAA0;
    }
L_088ABAA0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088ABAB0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1356), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 502u, 0x08A36F88u>(ctx, &aot_mem) && ctx.pc == 0x088ABAB0u) goto L_088ABAB0;
    return;
L_088ABAB0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088ABAC0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    goto L_088A8C3C;
L_088ABAC0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABAD4;
      }
      goto L_088ABACC;
    }
L_088ABACC:
    ctx.gpr[31] = (0x088ABAD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 456u, 0x089DA648u>(ctx, &aot_mem) && ctx.pc == 0x088ABAD4u) goto L_088ABAD4;
    return;
L_088ABAD4:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(660), ctx.gpr[4]);
    goto L_088ABAE8;
L_088ABAE8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ABAF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(6), ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088ABB60;
      }
      goto L_088ABB2C;
    }
L_088ABB2C:
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(7), ctx.gpr[6]));
    ctx.gpr[31] = (0x088ABB38u);
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(10), ctx.gpr[6]));
    goto L_088A87FC;
L_088ABB38:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABB58;
      }
      goto L_088ABB44;
    }
L_088ABB44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ABB68;
      }
      goto L_088ABB50;
    }
L_088ABB50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABB88;
      }
      goto L_088ABB58;
    }
L_088ABB58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABB88;
      }
      goto L_088ABB60;
    }
L_088ABB60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABB88;
      }
      goto L_088ABB68;
    }
L_088ABB68:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] << 1u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088ABB88;
L_088ABB88:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ABB98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(6), ctx.gpr[5]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088ABBF0;
      }
      goto L_088ABBCC;
    }
L_088ABBCC:
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(7), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(10), ctx.gpr[7]));
    ctx.gpr[31] = (0x088ABBDCu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_088A87FC;
L_088ABBDC:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ABBF8;
      }
      goto L_088ABBE8;
    }
L_088ABBE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABC3C;
      }
      goto L_088ABBF0;
    }
L_088ABBF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABC3C;
      }
      goto L_088ABBF8;
    }
L_088ABBF8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABC3C;
      }
      goto L_088ABC04;
    }
L_088ABC04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ABC3C;
      }
      goto L_088ABC10;
    }
L_088ABC10:
    ctx.gpr[31] = (0x088ABC18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x088ABC18u) goto L_088ABC18;
    return;
L_088ABC18:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABC3C;
      }
      goto L_088ABC20;
    }
L_088ABC20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088ABC3Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088ABC3Cu) goto L_088ABC3C;
    return;
L_088ABC3C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ABC4C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ABC54:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ABC5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[11]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ABC88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[11]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ABCB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[31]);
    ctx.gpr[31] = (0x088ABCE4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4992));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 445u, 0x088A6FECu>(ctx, &aot_mem) && ctx.pc == 0x088ABCE4u) goto L_088ABCE4;
    return;
L_088ABCE4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_088ABD60;
      }
      goto L_088ABD54;
    }
L_088ABD54:
    ctx.gpr[31] = (0x088ABD5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x088ABD5Cu) goto L_088ABD5C;
    return;
L_088ABD5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    goto L_088ABD60;
L_088ABD60:
    ctx.gpr[31] = (0x088ABD68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 302u, 0x08A09374u>(ctx, &aot_mem) && ctx.pc == 0x088ABD68u) goto L_088ABD68;
    return;
L_088ABD68:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ABD98;
      }
      goto L_088ABD8C;
    }
L_088ABD8C:
    ctx.gpr[31] = (0x088ABD94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x088ABD94u) goto L_088ABD94;
    return;
L_088ABD94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    goto L_088ABD98;
L_088ABD98:
    ctx.gpr[31] = (0x088ABDA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 302u, 0x08A09374u>(ctx, &aot_mem) && ctx.pc == 0x088ABDA0u) goto L_088ABDA0;
    return;
L_088ABDA0:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088ABDB0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08B0B7FCu;
    return;
L_088ABDB0:
    ctx.gpr[31] = (0x088ABDB8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x088ABDB8u) goto L_088ABDB8;
    return;
L_088ABDB8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088ABDC8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x088ABDC8u) goto L_088ABDC8;
    return;
L_088ABDC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 58u);
      if (branch_taken) {
          goto L_088ABE0C;
      }
      goto L_088ABDDC;
    }
L_088ABDDC:
    ctx.gpr[7] = (0u | 46u);
    goto L_088ABDE0;
L_088ABDE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088ABDF8;
      }
      goto L_088ABDF4;
    }
L_088ABDF4:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_088ABDF8;
L_088ABDF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ABDE0;
      }
      goto L_088ABE0C;
    }
L_088ABE0C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088ABE18u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5020));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 445u, 0x088A6FECu>(ctx, &aot_mem) && ctx.pc == 0x088ABE18u) goto L_088ABE18;
    return;
L_088ABE18:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26464));
    ctx.gpr[31] = (0x088ABE2Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x088ABE2Cu) goto L_088ABE2C;
    return;
L_088ABE2C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088ABE4C;
      }
      goto L_088ABE38;
    }
L_088ABE38:
    ctx.gpr[5] = (18260u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088ABE48u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16691));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 134u, 0x0886D114u>(ctx, &aot_mem) && ctx.pc == 0x088ABE48u) goto L_088ABE48;
    return;
L_088ABE48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    goto L_088ABE4C;
L_088ABE4C:
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[6] = (2187u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19444));
    ctx.gpr[31] = (0x088ABE60u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-19392));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 189u, 0x0886D4ACu>(ctx, &aot_mem) && ctx.pc == 0x088ABE60u) goto L_088ABE60;
    return;
L_088ABE60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16372)));
    ctx.gpr[31] = (0x088ABE74u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 204u, 0x0886D600u>(ctx, &aot_mem) && ctx.pc == 0x088ABE74u) goto L_088ABE74;
    return;
L_088ABE74:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16080));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16080)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.gpr[31] = (0x088ABEA8u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088ABEA8u) goto L_088ABEA8;
    return;
L_088ABEA8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_088ABEC8;
      }
      goto L_088ABEB4;
    }
L_088ABEB4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088ABEC4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 534u, 0x08AFE3B8u>(ctx, &aot_mem) && ctx.pc == 0x088ABEC4u) goto L_088ABEC4;
    return;
L_088ABEC4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_088ABEC8;
L_088ABEC8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088ABEE0;
      }
      goto L_088ABED0;
    }
L_088ABED0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_088ABEE0;
L_088ABEE0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088ABEF4;
      }
      goto L_088ABEE8;
    }
L_088ABEE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_088ABEF4;
L_088ABEF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
        goto L_088ABF28;
    }
    goto L_088ABF0C;
L_088ABF0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088ABF24;
      }
      goto L_088ABF1C;
    }
L_088ABF1C:
    ctx.gpr[31] = (0x088ABF24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088ABF24u) goto L_088ABF24;
    return;
L_088ABF24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_088ABF28;
L_088ABF28:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (2227u << 16u);
        goto L_088ABF4C;
    }
    goto L_088ABF30;
L_088ABF30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088ABF48;
      }
      goto L_088ABF40;
    }
L_088ABF40:
    ctx.gpr[31] = (0x088ABF48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088ABF48u) goto L_088ABF48;
    return;
L_088ABF48:
    ctx.gpr[4] = (2227u << 16u);
    goto L_088ABF4C;
L_088ABF4C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16088));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16088)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 20u);
    ctx.gpr[31] = (0x088ABF7Cu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7234))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088ABF7Cu) goto L_088ABF7C;
    return;
L_088ABF7C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_088ABF98;
      }
      goto L_088ABF88;
    }
L_088ABF88:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088ABF94u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 534u, 0x08AFE3B8u>(ctx, &aot_mem) && ctx.pc == 0x088ABF94u) goto L_088ABF94;
    return;
L_088ABF94:
    ctx.gpr[18] = (ctx.gpr[21] | 0u);
    goto L_088ABF98;
L_088ABF98:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088ABFAC;
      }
      goto L_088ABFA0;
    }
L_088ABFA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088ABFAC;
L_088ABFAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088ABFBCu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_088A90D0;
L_088ABFBC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088ABFE4;
      }
      goto L_088ABFC8;
    }
L_088ABFC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088ABFE0;
      }
      goto L_088ABFD8;
    }
L_088ABFD8:
    ctx.gpr[31] = (0x088ABFE0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088ABFE0u) goto L_088ABFE0;
    return;
L_088ABFE0:
    ctx.gpr[4] = (2227u << 16u);
    goto L_088ABFE4;
L_088ABFE4:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16096));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16096)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    ctx.pc = 0x088AC000u; return;
}

void recomp_unit_0041(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0041_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_41(Runtime &runtime) {
    runtime.register_generated_unit(41u, 0x088A8000u, 16384u, &recomp_unit_0041, &recomp_unit_0041_entry);
    runtime.register_function(0x088A8000u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8008u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A801Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8028u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8038u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A803Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8058u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8080u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8088u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8094u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A809Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A80A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A80B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A80C0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A80D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A80E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A80F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A810Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8148u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8150u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A815Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8168u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8170u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8174u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8178u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8180u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8194u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A819Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A81A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A81ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A81B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A81C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A81CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A81D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A81D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A81DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A81F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A81F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8218u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8240u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A824Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8264u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8270u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8274u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A827Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8284u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8288u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8294u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8304u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A830Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8314u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8318u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A832Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8354u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A835Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A838Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8390u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A839Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A83A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A83C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A83D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A83F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A83F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8408u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8410u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8418u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8420u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8430u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8440u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8444u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8464u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8470u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A847Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8488u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8490u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8498u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8504u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A850Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8514u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A851Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8524u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A852Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8534u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A853Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8558u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8570u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8594u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A85A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A85B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A85C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A85C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A85D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A85D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A85E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A85ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8600u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8618u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8630u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A863Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8644u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A864Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8658u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8660u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8680u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A869Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A86A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A86B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A86C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A86D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A86E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A86FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A870Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8720u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8768u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8778u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A878Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A87A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A87B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A87C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A87E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A87F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A87FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8828u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8838u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8858u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8864u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8874u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8884u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8888u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8890u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8898u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A88B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A88B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A88B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A88E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A88E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A88ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A88F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8940u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8954u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A89A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A89ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A89B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A89C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A89D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A89D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8A0Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8A14u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8A20u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8A24u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8A28u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8A48u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8AA4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8AB8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B08u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B1Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B28u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B40u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B48u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B64u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B6Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B78u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B84u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B94u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8BA8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8BB4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8BC4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8BCCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8C00u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8C08u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8C0Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8C3Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8C5Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8C64u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8C74u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8C84u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8C88u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8C90u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8C98u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8CB0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8CB4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8CB8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8CE8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8CF0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8CF4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8CFCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8D10u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8D1Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8D6Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8D80u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8D9Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8DA4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8DBCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8DC8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8DE8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8DFCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8E3Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8E58u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8EA0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8EB4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8ECCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8ED4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8EF0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8EF8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8F10u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8F18u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8F30u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8F3Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8F5Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8F70u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8FB0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8FCCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8FD4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9050u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A905Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9064u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9070u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A90ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A90B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A90B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A90D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A90F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9108u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9114u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A912Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A913Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9144u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9154u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9160u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9180u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9188u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9198u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A91A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A91ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A91E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A91F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A920Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9224u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9240u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9244u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9254u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9268u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A927Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A928Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A92A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A92B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A92CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A92D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A92DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9324u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A932Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9340u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9348u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9350u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9358u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9360u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9368u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9370u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9384u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A938Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9394u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A939Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A93A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A93ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A93BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A93C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A93C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A93D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A93F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9418u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9424u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9430u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A943Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9448u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A944Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9454u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A945Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9464u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9494u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A94A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A94ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A94BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A94C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A94CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A94D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A94D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9508u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A950Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A951Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9528u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9534u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9558u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9560u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9580u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A95ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A95C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A95C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A95CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A95D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A95E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A95F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A95F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9608u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9610u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9624u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9628u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9654u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9660u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A966Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A968Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A96A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A96ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A96C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A96CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A96DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A96E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A96F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9714u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9718u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A973Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9774u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9788u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9790u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9794u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A97B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A97C0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A97C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A97D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A97E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A97F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9800u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9804u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9850u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9864u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9874u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9878u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A987Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A988Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9894u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A98ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A98B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A98CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A98D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9900u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9910u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9924u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9930u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9938u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A993Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A994Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A995Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9964u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9968u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A997Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A998Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9998u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A99ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A99B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A99CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A99D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9A04u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9A1Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9A38u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9A50u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9A60u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9A88u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9A8Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9AB4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9AFCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9B04u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9B24u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9B2Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9B3Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9B4Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9B50u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9B58u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9B78u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9B98u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9BCCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9BD8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9BE4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9BF8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9C00u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9C10u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9C20u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9C24u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9C2Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9C4Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9C6Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9CA0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9CACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9CB4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9CC4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9CF8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D20u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D2Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D3Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D4Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D50u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D58u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D60u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D78u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D7Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D80u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9DA8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9DB4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9DBCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9DD4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9DE4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9DFCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E20u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E2Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E3Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E44u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E5Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E64u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E74u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E84u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E88u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E90u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E94u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9EACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9ECCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9EFCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9F0Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9F10u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9F28u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9F70u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9F98u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9FA4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9FB0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9FC0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9FC8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9FECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9FF4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA024u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA068u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA074u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA0ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA0C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA0D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA0D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA0F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA0F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA114u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA11Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA124u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA12Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA13Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA14Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA150u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA158u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA160u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA178u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA17Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA198u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA1D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA1F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA244u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA270u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA278u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA288u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA298u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA29Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA2A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA2C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA2E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA314u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA320u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA330u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA344u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA364u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA36Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA374u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA384u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA39Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA3A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA3B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA3E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA3E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA3F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA408u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA40Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA414u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA434u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA458u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA48Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA4A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA4CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA4D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA4E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA4F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA4F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA500u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA504u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA520u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA540u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA56Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA578u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA588u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA5B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA5CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA5D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA5F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA600u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA610u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA620u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA624u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA62Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA64Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA66Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA698u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA6A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA6ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA6D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA720u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA734u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA73Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA744u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA74Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA754u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA7A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA7ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA7B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA7C0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA7C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA7D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA7E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA7ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA7F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA7FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA814u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA818u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA81Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA84Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA854u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA85Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA870u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA888u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA89Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA8A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA8ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA8B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA8BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA8C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA8CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA8D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA8E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA8F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA8FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA90Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA920u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA92Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA934u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA940u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA95Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA96Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA978u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA980u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA988u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA990u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA998u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA9A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA9ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA9B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA9C0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA9C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA9D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA9E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA9E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA9F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA9F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA04u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA10u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA18u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA24u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA30u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA38u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA44u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA4Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA58u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA60u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA74u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA84u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA94u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAAA0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAAACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAAB8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAAC0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAAD8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAAE0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAAE8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAAF0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAB24u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAB2Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAB34u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAB3Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAB6Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAB74u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AABA4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AABACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AABC4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AABF8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC00u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC08u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC10u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC18u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC20u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC40u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC48u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC50u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC70u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC80u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC8Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AACA4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AACACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AACB8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AACC4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AACCCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AACD8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AACE4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AACECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AACF8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD14u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD20u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD2Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD34u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD3Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD44u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD4Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD58u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD64u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD6Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD74u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD88u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD90u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AADA8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AADB0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AADB8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AADC0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AADC8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AADD4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AADDCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AADE8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AADF4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE00u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE0Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE18u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE24u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE30u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE3Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE44u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE7Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAEB0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAED0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAEDCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAEE8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAEF4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAEF8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAF18u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAF24u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAF28u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAF58u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAF6Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAF74u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAF7Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAF94u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAF9Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAFACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAFD0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAFECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB000u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB010u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB030u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB03Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB060u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB068u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB070u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB078u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB08Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB0E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB0F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB100u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB108u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB150u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB184u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB198u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB1B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB1D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB1E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB208u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB224u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB238u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB25Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB268u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB270u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB284u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB28Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB294u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB29Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB2A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB2B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB2DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB2E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB2F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB2F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB2FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB304u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB318u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB324u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB328u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB330u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB338u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB364u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB390u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB39Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB3ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB3E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB400u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB40Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB420u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB430u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB440u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB458u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB464u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB488u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB498u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB4A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB4D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB4E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB4ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB4F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB4FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB510u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB544u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB550u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB568u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB594u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB59Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB5B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB5C0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB5CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB5D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB5E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB5ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB5FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB614u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB65Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB668u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB67Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB684u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB6A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB6A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB6E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB6F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB6F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB714u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB720u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB750u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB760u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB76Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB774u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB77Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB788u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB794u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB7ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB7B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB7C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB7D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB7F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB7FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB810u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB81Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB850u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB85Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB868u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB874u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB880u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB88Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB894u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB89Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB8A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB8ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB8BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB8F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB8FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB908u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB914u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB91Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB924u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB92Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB938u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB948u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB97Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB998u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB9A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB9BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB9C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB9D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB9D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB9F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB9FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA04u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA0Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA28u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA34u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA40u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA4Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA5Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA64u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA6Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA74u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA84u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA90u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA98u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABAA0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABAB0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABAC0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABACCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABAD4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABAE8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABAF8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB2Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB38u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB44u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB50u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB58u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB60u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB68u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB88u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB98u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABBCCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABBDCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABBE8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABBF0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABBF8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC04u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC10u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC18u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC20u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC3Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC4Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC54u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC5Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC88u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABCB4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABCE4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD54u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD5Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD60u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD68u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD8Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD94u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD98u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABDA0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABDB0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABDB8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABDC8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABDDCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABDE0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABDF4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABDF8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE0Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE18u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE2Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE38u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE48u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE4Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE60u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE74u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABEA8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABEB4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABEC4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABEC8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABED0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABEE0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABEE8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABEF4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF0Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF1Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF24u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF28u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF30u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF40u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF48u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF4Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF7Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF88u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF94u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF98u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABFA0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABFACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABFBCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABFC8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABFD8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABFE0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABFE4u, &recomp_unit_0041, "recomp_unit_0041");
}
} // namespace psprecomp
