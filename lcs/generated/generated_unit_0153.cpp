#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0153[4092] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 7, 0, 8,
    0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0,
    0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0,
    0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0,
    29, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0,
    0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 42, 0, 43, 0,
    0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0,
    50, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0,
    0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 64,
    0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0,
    0, 71, 0, 0, 0, 0, 0, 0, 72, 73, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0,
    0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 85,
    0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0,
    0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0,
    100, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0,
    0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 110, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0,
    0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0,
    121, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0,
    0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 135,
    0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0,
    0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 145, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0,
    0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0,
    0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0,
    163, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170,
    0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0,
    0, 177, 0, 0, 0, 0, 0, 0, 178, 179, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 184, 0, 0,
    0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 191,
    0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0,
    0, 0, 0, 199, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0,
    0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 209, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 0,
    0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0,
    220, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0,
    0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 234, 0,
    0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 240, 0, 241,
    0, 0, 0, 0, 0, 0, 242, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0,
    0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0,
    0, 0, 0, 0, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0,
    263, 0, 264, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 269, 0, 270, 0, 0,
    0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 277,
    0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 0, 0,
    0, 0, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 291,
    0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293, 294, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 297, 0, 0, 0, 0, 0, 0, 298,
    0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 305, 0, 0, 0,
    0, 0, 0, 306, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0,
    313, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 319,
    0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 326, 0, 0, 0,
    0, 0, 0, 327, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0,
    334, 0, 0, 0, 0, 0, 0, 335, 0, 336, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0,
    340, 0, 0, 0, 0, 0, 0, 341, 342, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0,
    0, 0, 0, 348, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0,
    355, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 361, 0, 0, 0, 0,
    362, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 366, 367, 0, 368, 0, 0, 0,
    0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0,
    376, 0, 0, 0, 0, 0, 0, 377, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 382, 0, 0, 0, 0,
    0, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 386, 0, 0, 0, 0, 387, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0,
    0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 391, 392, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 395, 0, 0, 0, 0, 0, 0, 396, 0,
    397, 0, 0, 0, 0, 0, 0, 398, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 403, 0, 0, 0, 0,
    0, 0, 404, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 411,
    0, 0, 0, 0, 412, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 417, 0,
    418, 0, 0, 0, 0, 0, 0, 419, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 424, 0, 0, 0, 0,
    0, 0, 425, 0, 426, 0, 0, 0, 0, 0, 0, 427, 0, 428, 0, 0, 0, 0, 0, 0, 429, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 432,
    0, 0, 0, 0, 0, 0, 433, 0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 436, 0, 0, 0, 0, 437, 0, 0, 438, 0, 0, 0, 0, 0, 0,
    0, 0, 439, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 441, 442, 0, 443, 0, 0, 0, 0, 0, 0, 444, 0, 445, 0, 0, 0, 0,
    0, 0, 446, 0, 447, 0, 0, 0, 0, 0, 0, 448, 0, 449, 0, 0, 0, 0, 0, 0, 450, 0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 453,
    0, 0, 0, 0, 0, 0, 454, 0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 457, 0, 0, 0, 0, 0, 0, 458, 0, 459, 0, 0, 0, 0, 0,
    0, 460, 0, 461, 0, 0, 0, 0, 462, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0,
    0, 466, 467, 0, 468, 0, 0, 0, 0, 0, 0, 469, 0, 470, 0, 0, 0, 0, 0, 0, 471, 0, 472, 0, 0, 0, 0, 0, 0, 473, 0, 474,
    0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0, 478, 0, 0, 0, 0, 0, 0, 479, 0, 480, 0, 0, 0, 0, 0,
    0, 481, 0, 482, 0, 0, 0, 0, 0, 0, 483, 0, 484, 0, 0, 0, 0, 0, 0, 485, 0, 486, 0, 0, 0, 0, 487, 0, 0, 488, 0, 0,
    0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 491, 492, 0, 493, 0, 0, 0, 0, 0, 0, 494, 0, 495,
    0, 0, 0, 0, 0, 0, 496, 0, 497, 0, 0, 0, 0, 0, 0, 498, 0, 499, 0, 0, 0, 0, 0, 0, 500, 0, 501, 0, 0, 0, 0, 0,
    0, 502, 0, 503, 0, 0, 0, 0, 0, 0, 504, 0, 505, 0, 0, 0, 0, 0, 0, 506, 0, 507, 0, 0, 0, 0, 0, 0, 508, 0, 509, 0,
    0, 0, 0, 0, 0, 510, 0, 511, 0, 0, 0, 0, 512, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 515, 0,
    0, 0, 0, 0, 0, 516, 517, 0, 518, 0, 0, 0, 0, 0, 0, 519, 0, 520, 0, 0, 0, 0, 0, 0, 521, 0, 522, 0, 0, 0, 0, 0,
    0, 523, 0, 524, 0, 0, 0, 0, 0, 0, 525, 0, 526, 0, 0, 0, 0, 0, 0, 527, 0, 528, 0, 0, 0, 0, 0, 0, 529, 0, 530, 0,
    0, 0, 0, 0, 0, 531, 0, 532, 0, 0, 0, 0, 0, 0, 533, 0, 534, 0, 0, 0, 0, 0, 0, 535, 0, 536, 0, 0, 0, 0, 537, 0,
    0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 541, 542, 0, 543, 0, 0, 0, 0, 0,
    0, 544, 0, 545, 0, 0, 0, 0, 0, 0, 546, 0, 547, 0, 0, 0, 0, 0, 0, 548, 0, 549, 0, 0, 0, 0, 0, 0, 550, 0, 551, 0,
    0, 0, 0, 0, 0, 552, 0, 553, 0, 0, 0, 0, 0, 0, 554, 0, 555, 0, 0, 0, 0, 0, 0, 556, 0, 557, 0, 0, 0, 0, 0, 0,
    558, 0, 559, 0, 0, 0, 0, 0, 0, 560, 0, 561, 0, 0, 0, 0, 562, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0,
    0, 0, 565, 0, 0, 0, 0, 0, 0, 566, 567, 0, 568, 0, 0, 0, 0, 0, 0, 569, 0, 570, 0, 0, 0, 0, 0, 0, 571, 0, 572, 0,
    0, 0, 0, 0, 0, 573, 0, 574, 0, 0, 0, 0, 0, 0, 575, 0, 576, 0, 0, 0, 0, 0, 0, 577, 0, 578, 0, 0, 0, 0, 0, 0,
    579, 0, 580, 0, 0, 0, 0, 0, 0, 581, 0, 582, 0, 0, 0, 0, 0, 0, 583, 0, 584, 0, 0, 0, 0, 0, 0, 585, 0, 586, 0, 0,
    0, 0, 587, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 591, 592, 0, 593, 0,
    0, 0, 0, 0, 0, 594, 0, 595, 0, 0, 0, 0, 0, 0, 596, 0, 597, 0, 0, 0, 0, 0, 0, 598, 0, 599, 0, 0, 0, 0, 0, 0,
    600, 0, 601, 0, 0, 0, 0, 0, 0, 602, 0, 603, 0, 0, 0, 0, 0, 0, 604, 0, 605, 0, 0, 0, 0, 0, 0, 606, 0, 607, 0, 0,
    0, 0, 0, 0, 608, 0, 609, 0, 0, 0, 0, 0, 0, 610, 0, 611, 0, 0, 0, 0, 612, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0,
    614, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 616, 617, 0, 618, 0, 0, 0, 0, 0, 0, 619, 0, 620, 0, 0, 0, 0, 0, 0,
    621, 0, 622, 0, 0, 0, 0, 0, 0, 623, 0, 624, 0, 0, 0, 0, 0, 0, 625, 0, 626, 0, 0, 0, 0, 0, 0, 627, 0, 628, 0, 0,
    0, 0, 0, 0, 629, 0, 630, 0, 0, 0, 0, 0, 0, 631, 0, 632, 0, 0, 0, 0, 0, 0, 633, 0, 634, 0, 0, 0, 0, 0, 0, 635,
    0, 636, 0, 0, 0, 0, 637, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 641,
    642, 0, 643, 0, 0, 0, 0, 0, 0, 644, 0, 645, 0, 0, 0, 0, 0, 0, 646, 0, 647, 0, 0, 0, 0, 0, 0, 648, 0, 649, 0, 0,
    0, 0, 0, 0, 650, 0, 651, 0, 0, 0, 0, 0, 0, 652, 0, 653, 0, 0, 0, 0, 0, 0, 654, 0, 655, 0, 0, 0, 0, 0, 0, 656,
    0, 657, 0, 0, 0, 0, 0, 0, 658, 0, 659, 0, 0, 0, 0, 0, 0, 660, 0, 661, 0, 0, 0, 0, 662, 0, 0, 663, 0, 0, 0, 0,
    0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 666, 667, 0, 668, 0, 0, 0, 0, 0, 0, 669, 0, 670, 0, 0,
    0, 0, 0, 0, 671, 0, 672, 0, 0, 0, 0, 0, 0, 673, 0, 674, 0, 0, 0, 0, 0, 0, 675, 0, 676, 0, 0, 0, 0, 0, 0, 677,
    0, 678, 0, 0, 0, 0, 0, 0, 679, 0, 680, 0, 0, 0, 0, 0, 0, 681, 0, 682, 0, 0, 0, 0, 0, 0, 683, 0, 684, 0, 0, 0,
    0, 0, 0, 685, 0, 686, 0, 0, 0, 0, 687, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 690, 0, 0, 0,
    0, 0, 0, 691, 692, 0, 693, 0, 0, 0, 0, 0, 0, 694, 0, 695, 0, 0, 0, 0, 0, 0, 696, 0, 697, 0, 0, 0, 0, 0, 0, 698,
    0, 699, 0, 0, 0, 0, 0, 0, 700, 0, 701, 0, 0, 0, 0, 0, 0, 702, 0, 703, 0, 0, 0, 0, 0, 0, 704, 0, 705, 0, 0, 0,
    0, 0, 0, 706, 0, 707, 0, 0, 0, 0, 0, 0, 708, 0, 709, 0, 0, 0, 0, 0, 0, 710, 0, 711, 0, 0, 0, 0, 712, 0, 0, 713,
    0, 0, 0, 0, 0, 0, 0, 714, 0, 0, 715, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 717, 718, 0, 719, 0, 0, 0, 0, 0,
    0, 720, 0, 721, 0, 0, 0, 0, 0, 0, 722, 0, 723, 0, 0, 0, 0, 0, 0, 724, 0, 725, 0, 0, 0, 726, 0, 0, 727, 0, 0, 0,
    0, 0, 0, 0, 728, 0, 0, 729, 0, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 0, 731, 732, 0, 733, 0, 0, 0, 0, 0, 0, 734, 0,
    735, 0, 0, 0, 0, 0, 0, 736, 0, 737, 0, 0, 0, 0, 0, 0, 738, 0, 739, 0, 0, 0, 740, 0, 0, 741, 0, 0, 0, 0, 0, 0,
    0, 742, 0, 0, 743, 0, 0, 0, 0, 0, 744, 0, 0, 0, 0, 0, 0, 745, 746, 0, 747, 0, 0, 0, 0, 0, 0, 748, 0, 749, 0, 0,
    0, 0, 0, 0, 750, 0, 751, 0, 0, 0, 0, 0, 0, 752, 0, 753, 0, 0, 0, 754, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 756, 0,
    0, 757, 0, 0, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 759, 760, 0, 761, 0, 0, 0, 0, 0, 0, 762, 0, 763, 0, 0, 0, 0, 0,
    0, 764, 0, 765, 0, 0, 0, 0, 0, 0, 766, 0, 767, 0, 0, 0, 768, 0, 0, 769, 0, 0, 0, 0, 0, 0, 0, 770, 0, 0, 771, 0,
    772, 0, 0, 0, 0, 0, 0, 773, 774, 0, 775, 0, 0, 0, 0, 0, 0, 776, 0, 777, 0, 0, 0, 0, 0, 0, 778, 0, 779, 0, 0, 0,
    780, 0, 0, 781, 0, 0, 0, 0, 0, 0, 0, 782, 0, 0, 783, 0, 0, 0, 0, 0, 784, 0, 0, 0, 0, 0, 0, 785, 786, 0, 787, 0,
    0, 0, 0, 0, 0, 788, 0, 789, 0, 0, 0, 0, 0, 0, 790, 0, 791, 0, 0, 0, 0, 0, 0, 792, 0, 793, 0, 0, 0, 794, 0, 0,
    795, 0, 0, 0, 0, 0, 0, 0, 0, 796, 0, 0, 0, 0, 0, 797, 0, 0, 0, 0, 0, 0, 798, 799, 0, 800, 0, 0, 0, 0, 0, 0,
    801, 0, 802, 0, 0, 0, 0, 0, 0, 803, 0, 804, 0, 0, 0, 0, 0, 0, 805, 0, 806, 0, 0, 0, 0, 0, 0, 807, 0, 808, 0, 0,
    0, 0, 0, 0, 809, 0, 810, 0, 0, 0, 0, 0, 0, 811, 0, 812, 0, 0, 0, 0, 0, 0, 813, 0, 814, 0, 0, 0, 0, 0, 0, 815,
    0, 816, 0, 0, 0, 0, 0, 0, 817, 0, 818, 0, 0, 0, 0, 819, 0, 0, 820, 0, 0, 0, 0, 0, 0, 0, 0, 821, 0, 0, 0, 0,
    0, 822, 0, 0, 0, 0, 0, 0, 823, 824, 0, 825, 0, 0, 0, 0, 0, 0, 826, 0, 827, 0, 0, 0, 0, 0, 0, 828, 0, 829, 0, 0,
    0, 0, 0, 0, 830, 0, 831, 0, 0, 0, 0, 0, 0, 832, 0, 833, 0, 0, 0, 0, 0, 0, 834, 0, 835, 0, 0, 0, 0, 0, 0, 836,
    0, 837, 0, 0, 0, 0, 0, 0, 838, 0, 839, 0, 0, 0, 0, 840, 0, 0, 841, 0, 0, 0, 0, 0, 0, 0, 0, 842, 0, 0, 0, 0,
    0, 843, 0, 0, 0, 0, 0, 0, 844, 845, 0, 846, 0, 0, 0, 0, 0, 0, 847, 0, 848, 0, 0, 0, 0, 0, 0, 849, 0, 850, 0, 0,
    0, 0, 0, 0, 851, 0, 852, 0, 0, 0, 0, 0, 0, 853, 0, 854, 0, 0, 0, 0, 0, 0, 855, 0, 856, 0, 0, 0, 0, 0, 0, 857,
    0, 858, 0, 0, 0, 0, 0, 0, 859, 0, 860, 0, 0, 0, 0, 0, 0, 861, 0, 862, 0, 0, 0, 0, 863, 0, 0, 864, 0, 0, 0, 0,
    0, 0, 0, 0, 865, 0, 0, 0, 0, 0, 866, 0, 0, 0, 0, 0, 0, 867, 868, 0, 869, 0, 0, 0, 0, 0, 0, 870, 0, 871, 0, 0,
    0, 0, 0, 0, 872, 0, 873, 0, 0, 0, 0, 0, 0, 874, 0, 875, 0, 0, 0, 0, 0, 0, 876, 0, 877, 0, 0, 0, 0, 0, 0, 878,
    0, 879, 0, 0, 0, 0, 0, 0, 880, 0, 881, 0, 0, 0, 0, 0, 0, 882, 0, 883, 0, 0, 0, 0, 884, 0, 0, 885, 0, 0, 0, 0,
    0, 0, 0, 0, 886, 0, 0, 0, 0, 0, 887, 0, 0, 0, 0, 0, 0, 888, 889, 0, 890, 0, 0, 0, 0, 0, 0, 891, 0, 892, 0, 0,
    0, 0, 0, 0, 893, 0, 894, 0, 0, 0, 0, 0, 0, 895, 0, 896, 0, 0, 0, 0, 0, 0, 897, 0, 898, 0, 0, 0, 0, 0, 0, 899,
    0, 900, 0, 0, 0, 0, 0, 0, 901, 0, 902, 0, 0, 0, 0, 0, 0, 903, 0, 904, 0, 0, 0, 0, 905, 0, 0, 906,
};
void recomp_unit_0153_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A68000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0153[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A68000;
    case 2u: goto L_08A6800C;
    case 3u: goto L_08A68018;
    case 4u: goto L_08A6803C;
    case 5u: goto L_08A68054;
    case 6u: goto L_08A68070;
    case 7u: goto L_08A68074;
    case 8u: goto L_08A6807C;
    case 9u: goto L_08A68098;
    case 10u: goto L_08A680A0;
    case 11u: goto L_08A680BC;
    case 12u: goto L_08A680C4;
    case 13u: goto L_08A680E0;
    case 14u: goto L_08A680E8;
    case 15u: goto L_08A68104;
    case 16u: goto L_08A6810C;
    case 17u: goto L_08A68128;
    case 18u: goto L_08A68130;
    case 19u: goto L_08A6814C;
    case 20u: goto L_08A68154;
    case 21u: goto L_08A68170;
    case 22u: goto L_08A68178;
    case 23u: goto L_08A68194;
    case 24u: goto L_08A6819C;
    case 25u: goto L_08A681B8;
    case 26u: goto L_08A681C0;
    case 27u: goto L_08A681DC;
    case 28u: goto L_08A681E4;
    case 29u: goto L_08A68200;
    case 30u: goto L_08A68208;
    case 31u: goto L_08A68224;
    case 32u: goto L_08A6822C;
    case 33u: goto L_08A68248;
    case 34u: goto L_08A68250;
    case 35u: goto L_08A6826C;
    case 36u: goto L_08A68274;
    case 37u: goto L_08A68288;
    case 38u: goto L_08A68294;
    case 39u: goto L_08A682B8;
    case 40u: goto L_08A682D0;
    case 41u: goto L_08A682EC;
    case 42u: goto L_08A682F0;
    case 43u: goto L_08A682F8;
    case 44u: goto L_08A68314;
    case 45u: goto L_08A6831C;
    case 46u: goto L_08A68338;
    case 47u: goto L_08A68340;
    case 48u: goto L_08A6835C;
    case 49u: goto L_08A68364;
    case 50u: goto L_08A68380;
    case 51u: goto L_08A68388;
    case 52u: goto L_08A683A4;
    case 53u: goto L_08A683AC;
    case 54u: goto L_08A683C8;
    case 55u: goto L_08A683D0;
    case 56u: goto L_08A683EC;
    case 57u: goto L_08A683F4;
    case 58u: goto L_08A68410;
    case 59u: goto L_08A68418;
    case 60u: goto L_08A68434;
    case 61u: goto L_08A6843C;
    case 62u: goto L_08A68458;
    case 63u: goto L_08A68460;
    case 64u: goto L_08A6847C;
    case 65u: goto L_08A68484;
    case 66u: goto L_08A684A0;
    case 67u: goto L_08A684A8;
    case 68u: goto L_08A684BC;
    case 69u: goto L_08A684C8;
    case 70u: goto L_08A684EC;
    case 71u: goto L_08A68504;
    case 72u: goto L_08A68520;
    case 73u: goto L_08A68524;
    case 74u: goto L_08A6852C;
    case 75u: goto L_08A68548;
    case 76u: goto L_08A68550;
    case 77u: goto L_08A6856C;
    case 78u: goto L_08A68574;
    case 79u: goto L_08A68590;
    case 80u: goto L_08A68598;
    case 81u: goto L_08A685B4;
    case 82u: goto L_08A685BC;
    case 83u: goto L_08A685D8;
    case 84u: goto L_08A685E0;
    case 85u: goto L_08A685FC;
    case 86u: goto L_08A68604;
    case 87u: goto L_08A68620;
    case 88u: goto L_08A68628;
    case 89u: goto L_08A68644;
    case 90u: goto L_08A6864C;
    case 91u: goto L_08A68668;
    case 92u: goto L_08A68670;
    case 93u: goto L_08A6868C;
    case 94u: goto L_08A68694;
    case 95u: goto L_08A686B0;
    case 96u: goto L_08A686B8;
    case 97u: goto L_08A686D4;
    case 98u: goto L_08A686DC;
    case 99u: goto L_08A686F8;
    case 100u: goto L_08A68700;
    case 101u: goto L_08A6871C;
    case 102u: goto L_08A68724;
    case 103u: goto L_08A68740;
    case 104u: goto L_08A68748;
    case 105u: goto L_08A6875C;
    case 106u: goto L_08A68768;
    case 107u: goto L_08A6878C;
    case 108u: goto L_08A687A4;
    case 109u: goto L_08A687C0;
    case 110u: goto L_08A687C4;
    case 111u: goto L_08A687CC;
    case 112u: goto L_08A687E8;
    case 113u: goto L_08A687F0;
    case 114u: goto L_08A6880C;
    case 115u: goto L_08A68814;
    case 116u: goto L_08A68830;
    case 117u: goto L_08A68838;
    case 118u: goto L_08A68854;
    case 119u: goto L_08A6885C;
    case 120u: goto L_08A68878;
    case 121u: goto L_08A68880;
    case 122u: goto L_08A6889C;
    case 123u: goto L_08A688A4;
    case 124u: goto L_08A688C0;
    case 125u: goto L_08A688C8;
    case 126u: goto L_08A688E4;
    case 127u: goto L_08A688EC;
    case 128u: goto L_08A68908;
    case 129u: goto L_08A68910;
    case 130u: goto L_08A6892C;
    case 131u: goto L_08A68934;
    case 132u: goto L_08A68950;
    case 133u: goto L_08A68958;
    case 134u: goto L_08A68974;
    case 135u: goto L_08A6897C;
    case 136u: goto L_08A68998;
    case 137u: goto L_08A689A0;
    case 138u: goto L_08A689B0;
    case 139u: goto L_08A689C0;
    case 140u: goto L_08A689D4;
    case 141u: goto L_08A689E0;
    case 142u: goto L_08A68A04;
    case 143u: goto L_08A68A1C;
    case 144u: goto L_08A68A38;
    case 145u: goto L_08A68A3C;
    case 146u: goto L_08A68A44;
    case 147u: goto L_08A68A60;
    case 148u: goto L_08A68A68;
    case 149u: goto L_08A68A84;
    case 150u: goto L_08A68A8C;
    case 151u: goto L_08A68AA8;
    case 152u: goto L_08A68AB0;
    case 153u: goto L_08A68ACC;
    case 154u: goto L_08A68AD4;
    case 155u: goto L_08A68AF0;
    case 156u: goto L_08A68AF8;
    case 157u: goto L_08A68B14;
    case 158u: goto L_08A68B1C;
    case 159u: goto L_08A68B38;
    case 160u: goto L_08A68B40;
    case 161u: goto L_08A68B5C;
    case 162u: goto L_08A68B64;
    case 163u: goto L_08A68B80;
    case 164u: goto L_08A68B88;
    case 165u: goto L_08A68BA4;
    case 166u: goto L_08A68BAC;
    case 167u: goto L_08A68BC8;
    case 168u: goto L_08A68BD0;
    case 169u: goto L_08A68BE0;
    case 170u: goto L_08A68BFC;
    case 171u: goto L_08A68C04;
    case 172u: goto L_08A68C20;
    case 173u: goto L_08A68C28;
    case 174u: goto L_08A68C3C;
    case 175u: goto L_08A68C48;
    case 176u: goto L_08A68C6C;
    case 177u: goto L_08A68C84;
    case 178u: goto L_08A68CA0;
    case 179u: goto L_08A68CA4;
    case 180u: goto L_08A68CAC;
    case 181u: goto L_08A68CC8;
    case 182u: goto L_08A68CD0;
    case 183u: goto L_08A68CEC;
    case 184u: goto L_08A68CF4;
    case 185u: goto L_08A68D10;
    case 186u: goto L_08A68D18;
    case 187u: goto L_08A68D34;
    case 188u: goto L_08A68D3C;
    case 189u: goto L_08A68D58;
    case 190u: goto L_08A68D60;
    case 191u: goto L_08A68D7C;
    case 192u: goto L_08A68D84;
    case 193u: goto L_08A68DA0;
    case 194u: goto L_08A68DA8;
    case 195u: goto L_08A68DC4;
    case 196u: goto L_08A68DCC;
    case 197u: goto L_08A68DE8;
    case 198u: goto L_08A68DF0;
    case 199u: goto L_08A68E0C;
    case 200u: goto L_08A68E14;
    case 201u: goto L_08A68E24;
    case 202u: goto L_08A68E40;
    case 203u: goto L_08A68E48;
    case 204u: goto L_08A68E5C;
    case 205u: goto L_08A68E68;
    case 206u: goto L_08A68E8C;
    case 207u: goto L_08A68EA4;
    case 208u: goto L_08A68EC0;
    case 209u: goto L_08A68EC4;
    case 210u: goto L_08A68ECC;
    case 211u: goto L_08A68EE8;
    case 212u: goto L_08A68EF0;
    case 213u: goto L_08A68F0C;
    case 214u: goto L_08A68F14;
    case 215u: goto L_08A68F30;
    case 216u: goto L_08A68F38;
    case 217u: goto L_08A68F54;
    case 218u: goto L_08A68F5C;
    case 219u: goto L_08A68F78;
    case 220u: goto L_08A68F80;
    case 221u: goto L_08A68F9C;
    case 222u: goto L_08A68FA4;
    case 223u: goto L_08A68FC0;
    case 224u: goto L_08A68FC8;
    case 225u: goto L_08A68FE4;
    case 226u: goto L_08A68FEC;
    case 227u: goto L_08A69008;
    case 228u: goto L_08A69010;
    case 229u: goto L_08A6902C;
    case 230u: goto L_08A69034;
    case 231u: goto L_08A69044;
    case 232u: goto L_08A69060;
    case 233u: goto L_08A69068;
    case 234u: goto L_08A69078;
    case 235u: goto L_08A6908C;
    case 236u: goto L_08A69098;
    case 237u: goto L_08A690BC;
    case 238u: goto L_08A690D4;
    case 239u: goto L_08A690F0;
    case 240u: goto L_08A690F4;
    case 241u: goto L_08A690FC;
    case 242u: goto L_08A69118;
    case 243u: goto L_08A69120;
    case 244u: goto L_08A6913C;
    case 245u: goto L_08A69144;
    case 246u: goto L_08A69160;
    case 247u: goto L_08A69168;
    case 248u: goto L_08A69184;
    case 249u: goto L_08A6918C;
    case 250u: goto L_08A691A8;
    case 251u: goto L_08A691B0;
    case 252u: goto L_08A691CC;
    case 253u: goto L_08A691D4;
    case 254u: goto L_08A691F0;
    case 255u: goto L_08A691F8;
    case 256u: goto L_08A69214;
    case 257u: goto L_08A6921C;
    case 258u: goto L_08A69238;
    case 259u: goto L_08A69240;
    case 260u: goto L_08A69250;
    case 261u: goto L_08A69260;
    case 262u: goto L_08A69274;
    case 263u: goto L_08A69280;
    case 264u: goto L_08A69288;
    case 265u: goto L_08A69290;
    case 266u: goto L_08A692B4;
    case 267u: goto L_08A692CC;
    case 268u: goto L_08A692E8;
    case 269u: goto L_08A692EC;
    case 270u: goto L_08A692F4;
    case 271u: goto L_08A69310;
    case 272u: goto L_08A69318;
    case 273u: goto L_08A69334;
    case 274u: goto L_08A6933C;
    case 275u: goto L_08A69358;
    case 276u: goto L_08A69360;
    case 277u: goto L_08A6937C;
    case 278u: goto L_08A69384;
    case 279u: goto L_08A693A0;
    case 280u: goto L_08A693A8;
    case 281u: goto L_08A693C4;
    case 282u: goto L_08A693CC;
    case 283u: goto L_08A693E8;
    case 284u: goto L_08A693F0;
    case 285u: goto L_08A6940C;
    case 286u: goto L_08A69414;
    case 287u: goto L_08A69430;
    case 288u: goto L_08A69438;
    case 289u: goto L_08A6944C;
    case 290u: goto L_08A69458;
    case 291u: goto L_08A6947C;
    case 292u: goto L_08A69494;
    case 293u: goto L_08A694B0;
    case 294u: goto L_08A694B4;
    case 295u: goto L_08A694BC;
    case 296u: goto L_08A694D8;
    case 297u: goto L_08A694E0;
    case 298u: goto L_08A694FC;
    case 299u: goto L_08A69504;
    case 300u: goto L_08A69520;
    case 301u: goto L_08A69528;
    case 302u: goto L_08A69544;
    case 303u: goto L_08A6954C;
    case 304u: goto L_08A69568;
    case 305u: goto L_08A69570;
    case 306u: goto L_08A6958C;
    case 307u: goto L_08A69594;
    case 308u: goto L_08A695B0;
    case 309u: goto L_08A695B8;
    case 310u: goto L_08A695D4;
    case 311u: goto L_08A695DC;
    case 312u: goto L_08A695F8;
    case 313u: goto L_08A69600;
    case 314u: goto L_08A69614;
    case 315u: goto L_08A69620;
    case 316u: goto L_08A69644;
    case 317u: goto L_08A6965C;
    case 318u: goto L_08A69678;
    case 319u: goto L_08A6967C;
    case 320u: goto L_08A69684;
    case 321u: goto L_08A696A0;
    case 322u: goto L_08A696A8;
    case 323u: goto L_08A696C4;
    case 324u: goto L_08A696CC;
    case 325u: goto L_08A696E8;
    case 326u: goto L_08A696F0;
    case 327u: goto L_08A6970C;
    case 328u: goto L_08A69714;
    case 329u: goto L_08A69730;
    case 330u: goto L_08A69738;
    case 331u: goto L_08A69754;
    case 332u: goto L_08A6975C;
    case 333u: goto L_08A69778;
    case 334u: goto L_08A69780;
    case 335u: goto L_08A6979C;
    case 336u: goto L_08A697A4;
    case 337u: goto L_08A697B8;
    case 338u: goto L_08A697C4;
    case 339u: goto L_08A697E8;
    case 340u: goto L_08A69800;
    case 341u: goto L_08A6981C;
    case 342u: goto L_08A69820;
    case 343u: goto L_08A69828;
    case 344u: goto L_08A69844;
    case 345u: goto L_08A6984C;
    case 346u: goto L_08A69868;
    case 347u: goto L_08A69870;
    case 348u: goto L_08A6988C;
    case 349u: goto L_08A69894;
    case 350u: goto L_08A698B0;
    case 351u: goto L_08A698B8;
    case 352u: goto L_08A698D4;
    case 353u: goto L_08A698DC;
    case 354u: goto L_08A698F8;
    case 355u: goto L_08A69900;
    case 356u: goto L_08A6991C;
    case 357u: goto L_08A69924;
    case 358u: goto L_08A69940;
    case 359u: goto L_08A69948;
    case 360u: goto L_08A69964;
    case 361u: goto L_08A6996C;
    case 362u: goto L_08A69980;
    case 363u: goto L_08A6998C;
    case 364u: goto L_08A699B0;
    case 365u: goto L_08A699C8;
    case 366u: goto L_08A699E4;
    case 367u: goto L_08A699E8;
    case 368u: goto L_08A699F0;
    case 369u: goto L_08A69A0C;
    case 370u: goto L_08A69A14;
    case 371u: goto L_08A69A30;
    case 372u: goto L_08A69A38;
    case 373u: goto L_08A69A54;
    case 374u: goto L_08A69A5C;
    case 375u: goto L_08A69A78;
    case 376u: goto L_08A69A80;
    case 377u: goto L_08A69A9C;
    case 378u: goto L_08A69AA4;
    case 379u: goto L_08A69AC0;
    case 380u: goto L_08A69AC8;
    case 381u: goto L_08A69AE4;
    case 382u: goto L_08A69AEC;
    case 383u: goto L_08A69B08;
    case 384u: goto L_08A69B10;
    case 385u: goto L_08A69B2C;
    case 386u: goto L_08A69B34;
    case 387u: goto L_08A69B48;
    case 388u: goto L_08A69B54;
    case 389u: goto L_08A69B78;
    case 390u: goto L_08A69B90;
    case 391u: goto L_08A69BAC;
    case 392u: goto L_08A69BB0;
    case 393u: goto L_08A69BB8;
    case 394u: goto L_08A69BD4;
    case 395u: goto L_08A69BDC;
    case 396u: goto L_08A69BF8;
    case 397u: goto L_08A69C00;
    case 398u: goto L_08A69C1C;
    case 399u: goto L_08A69C24;
    case 400u: goto L_08A69C40;
    case 401u: goto L_08A69C48;
    case 402u: goto L_08A69C64;
    case 403u: goto L_08A69C6C;
    case 404u: goto L_08A69C88;
    case 405u: goto L_08A69C90;
    case 406u: goto L_08A69CAC;
    case 407u: goto L_08A69CB4;
    case 408u: goto L_08A69CD0;
    case 409u: goto L_08A69CD8;
    case 410u: goto L_08A69CF4;
    case 411u: goto L_08A69CFC;
    case 412u: goto L_08A69D10;
    case 413u: goto L_08A69D1C;
    case 414u: goto L_08A69D40;
    case 415u: goto L_08A69D58;
    case 416u: goto L_08A69D74;
    case 417u: goto L_08A69D78;
    case 418u: goto L_08A69D80;
    case 419u: goto L_08A69D9C;
    case 420u: goto L_08A69DA4;
    case 421u: goto L_08A69DC0;
    case 422u: goto L_08A69DC8;
    case 423u: goto L_08A69DE4;
    case 424u: goto L_08A69DEC;
    case 425u: goto L_08A69E08;
    case 426u: goto L_08A69E10;
    case 427u: goto L_08A69E2C;
    case 428u: goto L_08A69E34;
    case 429u: goto L_08A69E50;
    case 430u: goto L_08A69E58;
    case 431u: goto L_08A69E74;
    case 432u: goto L_08A69E7C;
    case 433u: goto L_08A69E98;
    case 434u: goto L_08A69EA0;
    case 435u: goto L_08A69EBC;
    case 436u: goto L_08A69EC4;
    case 437u: goto L_08A69ED8;
    case 438u: goto L_08A69EE4;
    case 439u: goto L_08A69F08;
    case 440u: goto L_08A69F20;
    case 441u: goto L_08A69F3C;
    case 442u: goto L_08A69F40;
    case 443u: goto L_08A69F48;
    case 444u: goto L_08A69F64;
    case 445u: goto L_08A69F6C;
    case 446u: goto L_08A69F88;
    case 447u: goto L_08A69F90;
    case 448u: goto L_08A69FAC;
    case 449u: goto L_08A69FB4;
    case 450u: goto L_08A69FD0;
    case 451u: goto L_08A69FD8;
    case 452u: goto L_08A69FF4;
    case 453u: goto L_08A69FFC;
    case 454u: goto L_08A6A018;
    case 455u: goto L_08A6A020;
    case 456u: goto L_08A6A03C;
    case 457u: goto L_08A6A044;
    case 458u: goto L_08A6A060;
    case 459u: goto L_08A6A068;
    case 460u: goto L_08A6A084;
    case 461u: goto L_08A6A08C;
    case 462u: goto L_08A6A0A0;
    case 463u: goto L_08A6A0AC;
    case 464u: goto L_08A6A0D0;
    case 465u: goto L_08A6A0E8;
    case 466u: goto L_08A6A104;
    case 467u: goto L_08A6A108;
    case 468u: goto L_08A6A110;
    case 469u: goto L_08A6A12C;
    case 470u: goto L_08A6A134;
    case 471u: goto L_08A6A150;
    case 472u: goto L_08A6A158;
    case 473u: goto L_08A6A174;
    case 474u: goto L_08A6A17C;
    case 475u: goto L_08A6A198;
    case 476u: goto L_08A6A1A0;
    case 477u: goto L_08A6A1BC;
    case 478u: goto L_08A6A1C4;
    case 479u: goto L_08A6A1E0;
    case 480u: goto L_08A6A1E8;
    case 481u: goto L_08A6A204;
    case 482u: goto L_08A6A20C;
    case 483u: goto L_08A6A228;
    case 484u: goto L_08A6A230;
    case 485u: goto L_08A6A24C;
    case 486u: goto L_08A6A254;
    case 487u: goto L_08A6A268;
    case 488u: goto L_08A6A274;
    case 489u: goto L_08A6A298;
    case 490u: goto L_08A6A2B0;
    case 491u: goto L_08A6A2CC;
    case 492u: goto L_08A6A2D0;
    case 493u: goto L_08A6A2D8;
    case 494u: goto L_08A6A2F4;
    case 495u: goto L_08A6A2FC;
    case 496u: goto L_08A6A318;
    case 497u: goto L_08A6A320;
    case 498u: goto L_08A6A33C;
    case 499u: goto L_08A6A344;
    case 500u: goto L_08A6A360;
    case 501u: goto L_08A6A368;
    case 502u: goto L_08A6A384;
    case 503u: goto L_08A6A38C;
    case 504u: goto L_08A6A3A8;
    case 505u: goto L_08A6A3B0;
    case 506u: goto L_08A6A3CC;
    case 507u: goto L_08A6A3D4;
    case 508u: goto L_08A6A3F0;
    case 509u: goto L_08A6A3F8;
    case 510u: goto L_08A6A414;
    case 511u: goto L_08A6A41C;
    case 512u: goto L_08A6A430;
    case 513u: goto L_08A6A43C;
    case 514u: goto L_08A6A460;
    case 515u: goto L_08A6A478;
    case 516u: goto L_08A6A494;
    case 517u: goto L_08A6A498;
    case 518u: goto L_08A6A4A0;
    case 519u: goto L_08A6A4BC;
    case 520u: goto L_08A6A4C4;
    case 521u: goto L_08A6A4E0;
    case 522u: goto L_08A6A4E8;
    case 523u: goto L_08A6A504;
    case 524u: goto L_08A6A50C;
    case 525u: goto L_08A6A528;
    case 526u: goto L_08A6A530;
    case 527u: goto L_08A6A54C;
    case 528u: goto L_08A6A554;
    case 529u: goto L_08A6A570;
    case 530u: goto L_08A6A578;
    case 531u: goto L_08A6A594;
    case 532u: goto L_08A6A59C;
    case 533u: goto L_08A6A5B8;
    case 534u: goto L_08A6A5C0;
    case 535u: goto L_08A6A5DC;
    case 536u: goto L_08A6A5E4;
    case 537u: goto L_08A6A5F8;
    case 538u: goto L_08A6A604;
    case 539u: goto L_08A6A628;
    case 540u: goto L_08A6A640;
    case 541u: goto L_08A6A65C;
    case 542u: goto L_08A6A660;
    case 543u: goto L_08A6A668;
    case 544u: goto L_08A6A684;
    case 545u: goto L_08A6A68C;
    case 546u: goto L_08A6A6A8;
    case 547u: goto L_08A6A6B0;
    case 548u: goto L_08A6A6CC;
    case 549u: goto L_08A6A6D4;
    case 550u: goto L_08A6A6F0;
    case 551u: goto L_08A6A6F8;
    case 552u: goto L_08A6A714;
    case 553u: goto L_08A6A71C;
    case 554u: goto L_08A6A738;
    case 555u: goto L_08A6A740;
    case 556u: goto L_08A6A75C;
    case 557u: goto L_08A6A764;
    case 558u: goto L_08A6A780;
    case 559u: goto L_08A6A788;
    case 560u: goto L_08A6A7A4;
    case 561u: goto L_08A6A7AC;
    case 562u: goto L_08A6A7C0;
    case 563u: goto L_08A6A7CC;
    case 564u: goto L_08A6A7F0;
    case 565u: goto L_08A6A808;
    case 566u: goto L_08A6A824;
    case 567u: goto L_08A6A828;
    case 568u: goto L_08A6A830;
    case 569u: goto L_08A6A84C;
    case 570u: goto L_08A6A854;
    case 571u: goto L_08A6A870;
    case 572u: goto L_08A6A878;
    case 573u: goto L_08A6A894;
    case 574u: goto L_08A6A89C;
    case 575u: goto L_08A6A8B8;
    case 576u: goto L_08A6A8C0;
    case 577u: goto L_08A6A8DC;
    case 578u: goto L_08A6A8E4;
    case 579u: goto L_08A6A900;
    case 580u: goto L_08A6A908;
    case 581u: goto L_08A6A924;
    case 582u: goto L_08A6A92C;
    case 583u: goto L_08A6A948;
    case 584u: goto L_08A6A950;
    case 585u: goto L_08A6A96C;
    case 586u: goto L_08A6A974;
    case 587u: goto L_08A6A988;
    case 588u: goto L_08A6A994;
    case 589u: goto L_08A6A9B8;
    case 590u: goto L_08A6A9D0;
    case 591u: goto L_08A6A9EC;
    case 592u: goto L_08A6A9F0;
    case 593u: goto L_08A6A9F8;
    case 594u: goto L_08A6AA14;
    case 595u: goto L_08A6AA1C;
    case 596u: goto L_08A6AA38;
    case 597u: goto L_08A6AA40;
    case 598u: goto L_08A6AA5C;
    case 599u: goto L_08A6AA64;
    case 600u: goto L_08A6AA80;
    case 601u: goto L_08A6AA88;
    case 602u: goto L_08A6AAA4;
    case 603u: goto L_08A6AAAC;
    case 604u: goto L_08A6AAC8;
    case 605u: goto L_08A6AAD0;
    case 606u: goto L_08A6AAEC;
    case 607u: goto L_08A6AAF4;
    case 608u: goto L_08A6AB10;
    case 609u: goto L_08A6AB18;
    case 610u: goto L_08A6AB34;
    case 611u: goto L_08A6AB3C;
    case 612u: goto L_08A6AB50;
    case 613u: goto L_08A6AB5C;
    case 614u: goto L_08A6AB80;
    case 615u: goto L_08A6AB98;
    case 616u: goto L_08A6ABB4;
    case 617u: goto L_08A6ABB8;
    case 618u: goto L_08A6ABC0;
    case 619u: goto L_08A6ABDC;
    case 620u: goto L_08A6ABE4;
    case 621u: goto L_08A6AC00;
    case 622u: goto L_08A6AC08;
    case 623u: goto L_08A6AC24;
    case 624u: goto L_08A6AC2C;
    case 625u: goto L_08A6AC48;
    case 626u: goto L_08A6AC50;
    case 627u: goto L_08A6AC6C;
    case 628u: goto L_08A6AC74;
    case 629u: goto L_08A6AC90;
    case 630u: goto L_08A6AC98;
    case 631u: goto L_08A6ACB4;
    case 632u: goto L_08A6ACBC;
    case 633u: goto L_08A6ACD8;
    case 634u: goto L_08A6ACE0;
    case 635u: goto L_08A6ACFC;
    case 636u: goto L_08A6AD04;
    case 637u: goto L_08A6AD18;
    case 638u: goto L_08A6AD24;
    case 639u: goto L_08A6AD48;
    case 640u: goto L_08A6AD60;
    case 641u: goto L_08A6AD7C;
    case 642u: goto L_08A6AD80;
    case 643u: goto L_08A6AD88;
    case 644u: goto L_08A6ADA4;
    case 645u: goto L_08A6ADAC;
    case 646u: goto L_08A6ADC8;
    case 647u: goto L_08A6ADD0;
    case 648u: goto L_08A6ADEC;
    case 649u: goto L_08A6ADF4;
    case 650u: goto L_08A6AE10;
    case 651u: goto L_08A6AE18;
    case 652u: goto L_08A6AE34;
    case 653u: goto L_08A6AE3C;
    case 654u: goto L_08A6AE58;
    case 655u: goto L_08A6AE60;
    case 656u: goto L_08A6AE7C;
    case 657u: goto L_08A6AE84;
    case 658u: goto L_08A6AEA0;
    case 659u: goto L_08A6AEA8;
    case 660u: goto L_08A6AEC4;
    case 661u: goto L_08A6AECC;
    case 662u: goto L_08A6AEE0;
    case 663u: goto L_08A6AEEC;
    case 664u: goto L_08A6AF10;
    case 665u: goto L_08A6AF28;
    case 666u: goto L_08A6AF44;
    case 667u: goto L_08A6AF48;
    case 668u: goto L_08A6AF50;
    case 669u: goto L_08A6AF6C;
    case 670u: goto L_08A6AF74;
    case 671u: goto L_08A6AF90;
    case 672u: goto L_08A6AF98;
    case 673u: goto L_08A6AFB4;
    case 674u: goto L_08A6AFBC;
    case 675u: goto L_08A6AFD8;
    case 676u: goto L_08A6AFE0;
    case 677u: goto L_08A6AFFC;
    case 678u: goto L_08A6B004;
    case 679u: goto L_08A6B020;
    case 680u: goto L_08A6B028;
    case 681u: goto L_08A6B044;
    case 682u: goto L_08A6B04C;
    case 683u: goto L_08A6B068;
    case 684u: goto L_08A6B070;
    case 685u: goto L_08A6B08C;
    case 686u: goto L_08A6B094;
    case 687u: goto L_08A6B0A8;
    case 688u: goto L_08A6B0B4;
    case 689u: goto L_08A6B0D8;
    case 690u: goto L_08A6B0F0;
    case 691u: goto L_08A6B10C;
    case 692u: goto L_08A6B110;
    case 693u: goto L_08A6B118;
    case 694u: goto L_08A6B134;
    case 695u: goto L_08A6B13C;
    case 696u: goto L_08A6B158;
    case 697u: goto L_08A6B160;
    case 698u: goto L_08A6B17C;
    case 699u: goto L_08A6B184;
    case 700u: goto L_08A6B1A0;
    case 701u: goto L_08A6B1A8;
    case 702u: goto L_08A6B1C4;
    case 703u: goto L_08A6B1CC;
    case 704u: goto L_08A6B1E8;
    case 705u: goto L_08A6B1F0;
    case 706u: goto L_08A6B20C;
    case 707u: goto L_08A6B214;
    case 708u: goto L_08A6B230;
    case 709u: goto L_08A6B238;
    case 710u: goto L_08A6B254;
    case 711u: goto L_08A6B25C;
    case 712u: goto L_08A6B270;
    case 713u: goto L_08A6B27C;
    case 714u: goto L_08A6B29C;
    case 715u: goto L_08A6B2A8;
    case 716u: goto L_08A6B2C0;
    case 717u: goto L_08A6B2DC;
    case 718u: goto L_08A6B2E0;
    case 719u: goto L_08A6B2E8;
    case 720u: goto L_08A6B304;
    case 721u: goto L_08A6B30C;
    case 722u: goto L_08A6B328;
    case 723u: goto L_08A6B330;
    case 724u: goto L_08A6B34C;
    case 725u: goto L_08A6B354;
    case 726u: goto L_08A6B364;
    case 727u: goto L_08A6B370;
    case 728u: goto L_08A6B390;
    case 729u: goto L_08A6B39C;
    case 730u: goto L_08A6B3B4;
    case 731u: goto L_08A6B3D0;
    case 732u: goto L_08A6B3D4;
    case 733u: goto L_08A6B3DC;
    case 734u: goto L_08A6B3F8;
    case 735u: goto L_08A6B400;
    case 736u: goto L_08A6B41C;
    case 737u: goto L_08A6B424;
    case 738u: goto L_08A6B440;
    case 739u: goto L_08A6B448;
    case 740u: goto L_08A6B458;
    case 741u: goto L_08A6B464;
    case 742u: goto L_08A6B484;
    case 743u: goto L_08A6B490;
    case 744u: goto L_08A6B4A8;
    case 745u: goto L_08A6B4C4;
    case 746u: goto L_08A6B4C8;
    case 747u: goto L_08A6B4D0;
    case 748u: goto L_08A6B4EC;
    case 749u: goto L_08A6B4F4;
    case 750u: goto L_08A6B510;
    case 751u: goto L_08A6B518;
    case 752u: goto L_08A6B534;
    case 753u: goto L_08A6B53C;
    case 754u: goto L_08A6B54C;
    case 755u: goto L_08A6B558;
    case 756u: goto L_08A6B578;
    case 757u: goto L_08A6B584;
    case 758u: goto L_08A6B59C;
    case 759u: goto L_08A6B5B8;
    case 760u: goto L_08A6B5BC;
    case 761u: goto L_08A6B5C4;
    case 762u: goto L_08A6B5E0;
    case 763u: goto L_08A6B5E8;
    case 764u: goto L_08A6B604;
    case 765u: goto L_08A6B60C;
    case 766u: goto L_08A6B628;
    case 767u: goto L_08A6B630;
    case 768u: goto L_08A6B640;
    case 769u: goto L_08A6B64C;
    case 770u: goto L_08A6B66C;
    case 771u: goto L_08A6B678;
    case 772u: goto L_08A6B680;
    case 773u: goto L_08A6B69C;
    case 774u: goto L_08A6B6A0;
    case 775u: goto L_08A6B6A8;
    case 776u: goto L_08A6B6C4;
    case 777u: goto L_08A6B6CC;
    case 778u: goto L_08A6B6E8;
    case 779u: goto L_08A6B6F0;
    case 780u: goto L_08A6B700;
    case 781u: goto L_08A6B70C;
    case 782u: goto L_08A6B72C;
    case 783u: goto L_08A6B738;
    case 784u: goto L_08A6B750;
    case 785u: goto L_08A6B76C;
    case 786u: goto L_08A6B770;
    case 787u: goto L_08A6B778;
    case 788u: goto L_08A6B794;
    case 789u: goto L_08A6B79C;
    case 790u: goto L_08A6B7B8;
    case 791u: goto L_08A6B7C0;
    case 792u: goto L_08A6B7DC;
    case 793u: goto L_08A6B7E4;
    case 794u: goto L_08A6B7F4;
    case 795u: goto L_08A6B800;
    case 796u: goto L_08A6B824;
    case 797u: goto L_08A6B83C;
    case 798u: goto L_08A6B858;
    case 799u: goto L_08A6B85C;
    case 800u: goto L_08A6B864;
    case 801u: goto L_08A6B880;
    case 802u: goto L_08A6B888;
    case 803u: goto L_08A6B8A4;
    case 804u: goto L_08A6B8AC;
    case 805u: goto L_08A6B8C8;
    case 806u: goto L_08A6B8D0;
    case 807u: goto L_08A6B8EC;
    case 808u: goto L_08A6B8F4;
    case 809u: goto L_08A6B910;
    case 810u: goto L_08A6B918;
    case 811u: goto L_08A6B934;
    case 812u: goto L_08A6B93C;
    case 813u: goto L_08A6B958;
    case 814u: goto L_08A6B960;
    case 815u: goto L_08A6B97C;
    case 816u: goto L_08A6B984;
    case 817u: goto L_08A6B9A0;
    case 818u: goto L_08A6B9A8;
    case 819u: goto L_08A6B9BC;
    case 820u: goto L_08A6B9C8;
    case 821u: goto L_08A6B9EC;
    case 822u: goto L_08A6BA04;
    case 823u: goto L_08A6BA20;
    case 824u: goto L_08A6BA24;
    case 825u: goto L_08A6BA2C;
    case 826u: goto L_08A6BA48;
    case 827u: goto L_08A6BA50;
    case 828u: goto L_08A6BA6C;
    case 829u: goto L_08A6BA74;
    case 830u: goto L_08A6BA90;
    case 831u: goto L_08A6BA98;
    case 832u: goto L_08A6BAB4;
    case 833u: goto L_08A6BABC;
    case 834u: goto L_08A6BAD8;
    case 835u: goto L_08A6BAE0;
    case 836u: goto L_08A6BAFC;
    case 837u: goto L_08A6BB04;
    case 838u: goto L_08A6BB20;
    case 839u: goto L_08A6BB28;
    case 840u: goto L_08A6BB3C;
    case 841u: goto L_08A6BB48;
    case 842u: goto L_08A6BB6C;
    case 843u: goto L_08A6BB84;
    case 844u: goto L_08A6BBA0;
    case 845u: goto L_08A6BBA4;
    case 846u: goto L_08A6BBAC;
    case 847u: goto L_08A6BBC8;
    case 848u: goto L_08A6BBD0;
    case 849u: goto L_08A6BBEC;
    case 850u: goto L_08A6BBF4;
    case 851u: goto L_08A6BC10;
    case 852u: goto L_08A6BC18;
    case 853u: goto L_08A6BC34;
    case 854u: goto L_08A6BC3C;
    case 855u: goto L_08A6BC58;
    case 856u: goto L_08A6BC60;
    case 857u: goto L_08A6BC7C;
    case 858u: goto L_08A6BC84;
    case 859u: goto L_08A6BCA0;
    case 860u: goto L_08A6BCA8;
    case 861u: goto L_08A6BCC4;
    case 862u: goto L_08A6BCCC;
    case 863u: goto L_08A6BCE0;
    case 864u: goto L_08A6BCEC;
    case 865u: goto L_08A6BD10;
    case 866u: goto L_08A6BD28;
    case 867u: goto L_08A6BD44;
    case 868u: goto L_08A6BD48;
    case 869u: goto L_08A6BD50;
    case 870u: goto L_08A6BD6C;
    case 871u: goto L_08A6BD74;
    case 872u: goto L_08A6BD90;
    case 873u: goto L_08A6BD98;
    case 874u: goto L_08A6BDB4;
    case 875u: goto L_08A6BDBC;
    case 876u: goto L_08A6BDD8;
    case 877u: goto L_08A6BDE0;
    case 878u: goto L_08A6BDFC;
    case 879u: goto L_08A6BE04;
    case 880u: goto L_08A6BE20;
    case 881u: goto L_08A6BE28;
    case 882u: goto L_08A6BE44;
    case 883u: goto L_08A6BE4C;
    case 884u: goto L_08A6BE60;
    case 885u: goto L_08A6BE6C;
    case 886u: goto L_08A6BE90;
    case 887u: goto L_08A6BEA8;
    case 888u: goto L_08A6BEC4;
    case 889u: goto L_08A6BEC8;
    case 890u: goto L_08A6BED0;
    case 891u: goto L_08A6BEEC;
    case 892u: goto L_08A6BEF4;
    case 893u: goto L_08A6BF10;
    case 894u: goto L_08A6BF18;
    case 895u: goto L_08A6BF34;
    case 896u: goto L_08A6BF3C;
    case 897u: goto L_08A6BF58;
    case 898u: goto L_08A6BF60;
    case 899u: goto L_08A6BF7C;
    case 900u: goto L_08A6BF84;
    case 901u: goto L_08A6BFA0;
    case 902u: goto L_08A6BFA8;
    case 903u: goto L_08A6BFC4;
    case 904u: goto L_08A6BFCC;
    case 905u: goto L_08A6BFE0;
    case 906u: goto L_08A6BFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A68000:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6800Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6800Cu) goto L_08A6800C;
    return;
L_08A6800C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A68018:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A68274;
      }
      goto L_08A6803C;
    }
L_08A6803C:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(31720)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A68054:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 758u);
    ctx.gpr[31] = (0x08A68070u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68070u) goto L_08A68070;
    return;
L_08A68070:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A68074;
L_08A68074:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68288;
      }
      goto L_08A6807C;
    }
L_08A6807C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 756u);
    ctx.gpr[31] = (0x08A68098u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68098u) goto L_08A68098;
    return;
L_08A68098:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68074;
      }
      goto L_08A680A0;
    }
L_08A680A0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 745u);
    ctx.gpr[31] = (0x08A680BCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A680BCu) goto L_08A680BC;
    return;
L_08A680BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68074;
      }
      goto L_08A680C4;
    }
L_08A680C4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 752u);
    ctx.gpr[31] = (0x08A680E0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A680E0u) goto L_08A680E0;
    return;
L_08A680E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68074;
      }
      goto L_08A680E8;
    }
L_08A680E8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 748u);
    ctx.gpr[31] = (0x08A68104u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68104u) goto L_08A68104;
    return;
L_08A68104:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68074;
      }
      goto L_08A6810C;
    }
L_08A6810C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 754u);
    ctx.gpr[31] = (0x08A68128u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68128u) goto L_08A68128;
    return;
L_08A68128:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68074;
      }
      goto L_08A68130;
    }
L_08A68130:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6814Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6814Cu) goto L_08A6814C;
    return;
L_08A6814C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68074;
      }
      goto L_08A68154;
    }
L_08A68154:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68170u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68170u) goto L_08A68170;
    return;
L_08A68170:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68074;
      }
      goto L_08A68178;
    }
L_08A68178:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 761u);
    ctx.gpr[31] = (0x08A68194u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68194u) goto L_08A68194;
    return;
L_08A68194:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68074;
      }
      goto L_08A6819C;
    }
L_08A6819C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 763u);
    ctx.gpr[31] = (0x08A681B8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A681B8u) goto L_08A681B8;
    return;
L_08A681B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68074;
      }
      goto L_08A681C0;
    }
L_08A681C0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A681DCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A681DCu) goto L_08A681DC;
    return;
L_08A681DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68074;
      }
      goto L_08A681E4;
    }
L_08A681E4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68200u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68200u) goto L_08A68200;
    return;
L_08A68200:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68074;
      }
      goto L_08A68208;
    }
L_08A68208:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68224u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68224u) goto L_08A68224;
    return;
L_08A68224:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68074;
      }
      goto L_08A6822C;
    }
L_08A6822C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68248u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68248u) goto L_08A68248;
    return;
L_08A68248:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68074;
      }
      goto L_08A68250;
    }
L_08A68250:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 765u);
    ctx.gpr[31] = (0x08A6826Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6826Cu) goto L_08A6826C;
    return;
L_08A6826C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68074;
      }
      goto L_08A68274;
    }
L_08A68274:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A68288u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A68288u) goto L_08A68288;
    return;
L_08A68288:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A68294:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A684A8;
      }
      goto L_08A682B8;
    }
L_08A682B8:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(31880)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A682D0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4037u);
    ctx.gpr[31] = (0x08A682ECu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A682ECu) goto L_08A682EC;
    return;
L_08A682EC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A682F0;
L_08A682F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A684BC;
      }
      goto L_08A682F8;
    }
L_08A682F8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4035u);
    ctx.gpr[31] = (0x08A68314u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68314u) goto L_08A68314;
    return;
L_08A68314:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A682F0;
      }
      goto L_08A6831C;
    }
L_08A6831C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4024u);
    ctx.gpr[31] = (0x08A68338u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68338u) goto L_08A68338;
    return;
L_08A68338:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A682F0;
      }
      goto L_08A68340;
    }
L_08A68340:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4031u);
    ctx.gpr[31] = (0x08A6835Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6835Cu) goto L_08A6835C;
    return;
L_08A6835C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A682F0;
      }
      goto L_08A68364;
    }
L_08A68364:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4027u);
    ctx.gpr[31] = (0x08A68380u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68380u) goto L_08A68380;
    return;
L_08A68380:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A682F0;
      }
      goto L_08A68388;
    }
L_08A68388:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4033u);
    ctx.gpr[31] = (0x08A683A4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A683A4u) goto L_08A683A4;
    return;
L_08A683A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A682F0;
      }
      goto L_08A683AC;
    }
L_08A683AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A683C8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A683C8u) goto L_08A683C8;
    return;
L_08A683C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A682F0;
      }
      goto L_08A683D0;
    }
L_08A683D0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4040u);
    ctx.gpr[31] = (0x08A683ECu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A683ECu) goto L_08A683EC;
    return;
L_08A683EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A682F0;
      }
      goto L_08A683F4;
    }
L_08A683F4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4042u);
    ctx.gpr[31] = (0x08A68410u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68410u) goto L_08A68410;
    return;
L_08A68410:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A682F0;
      }
      goto L_08A68418;
    }
L_08A68418:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68434u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68434u) goto L_08A68434;
    return;
L_08A68434:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A682F0;
      }
      goto L_08A6843C;
    }
L_08A6843C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68458u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68458u) goto L_08A68458;
    return;
L_08A68458:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A682F0;
      }
      goto L_08A68460;
    }
L_08A68460:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4045u);
    ctx.gpr[31] = (0x08A6847Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6847Cu) goto L_08A6847C;
    return;
L_08A6847C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A682F0;
      }
      goto L_08A68484;
    }
L_08A68484:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A684A0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A684A0u) goto L_08A684A0;
    return;
L_08A684A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A682F0;
      }
      goto L_08A684A8;
    }
L_08A684A8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A684BCu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 207u, 0x08A6CD04u>(ctx, &aot_mem) && ctx.pc == 0x08A684BCu) goto L_08A684BC;
    return;
L_08A684BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A684C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A68748;
      }
      goto L_08A684EC;
    }
L_08A684EC:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(32040)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A68504:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4058u);
    ctx.gpr[31] = (0x08A68520u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68520u) goto L_08A68520;
    return;
L_08A68520:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A68524;
L_08A68524:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6875C;
      }
      goto L_08A6852C;
    }
L_08A6852C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4056u);
    ctx.gpr[31] = (0x08A68548u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68548u) goto L_08A68548;
    return;
L_08A68548:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68524;
      }
      goto L_08A68550;
    }
L_08A68550:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4046u);
    ctx.gpr[31] = (0x08A6856Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6856Cu) goto L_08A6856C;
    return;
L_08A6856C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68524;
      }
      goto L_08A68574;
    }
L_08A68574:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4052u);
    ctx.gpr[31] = (0x08A68590u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68590u) goto L_08A68590;
    return;
L_08A68590:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68524;
      }
      goto L_08A68598;
    }
L_08A68598:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4049u);
    ctx.gpr[31] = (0x08A685B4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A685B4u) goto L_08A685B4;
    return;
L_08A685B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68524;
      }
      goto L_08A685BC;
    }
L_08A685BC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4054u);
    ctx.gpr[31] = (0x08A685D8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A685D8u) goto L_08A685D8;
    return;
L_08A685D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68524;
      }
      goto L_08A685E0;
    }
L_08A685E0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A685FCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A685FCu) goto L_08A685FC;
    return;
L_08A685FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68524;
      }
      goto L_08A68604;
    }
L_08A68604:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68620u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68620u) goto L_08A68620;
    return;
L_08A68620:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68524;
      }
      goto L_08A68628;
    }
L_08A68628:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4061u);
    ctx.gpr[31] = (0x08A68644u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68644u) goto L_08A68644;
    return;
L_08A68644:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68524;
      }
      goto L_08A6864C;
    }
L_08A6864C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4063u);
    ctx.gpr[31] = (0x08A68668u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68668u) goto L_08A68668;
    return;
L_08A68668:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68524;
      }
      goto L_08A68670;
    }
L_08A68670:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6868Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6868Cu) goto L_08A6868C;
    return;
L_08A6868C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68524;
      }
      goto L_08A68694;
    }
L_08A68694:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A686B0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A686B0u) goto L_08A686B0;
    return;
L_08A686B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68524;
      }
      goto L_08A686B8;
    }
L_08A686B8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A686D4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A686D4u) goto L_08A686D4;
    return;
L_08A686D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68524;
      }
      goto L_08A686DC;
    }
L_08A686DC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A686F8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A686F8u) goto L_08A686F8;
    return;
L_08A686F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68524;
      }
      goto L_08A68700;
    }
L_08A68700:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6871Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6871Cu) goto L_08A6871C;
    return;
L_08A6871C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68524;
      }
      goto L_08A68724;
    }
L_08A68724:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4066u);
    ctx.gpr[31] = (0x08A68740u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68740u) goto L_08A68740;
    return;
L_08A68740:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68524;
      }
      goto L_08A68748;
    }
L_08A68748:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6875Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 207u, 0x08A6CD04u>(ctx, &aot_mem) && ctx.pc == 0x08A6875Cu) goto L_08A6875C;
    return;
L_08A6875C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A68768:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A689C0;
      }
      goto L_08A6878C;
    }
L_08A6878C:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(32200)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A687A4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4087u);
    ctx.gpr[31] = (0x08A687C0u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A687C0u) goto L_08A687C0;
    return;
L_08A687C0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A687C4;
L_08A687C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A689D4;
      }
      goto L_08A687CC;
    }
L_08A687CC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4077u);
    ctx.gpr[31] = (0x08A687E8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A687E8u) goto L_08A687E8;
    return;
L_08A687E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A687C4;
      }
      goto L_08A687F0;
    }
L_08A687F0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4067u);
    ctx.gpr[31] = (0x08A6880Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6880Cu) goto L_08A6880C;
    return;
L_08A6880C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A687C4;
      }
      goto L_08A68814;
    }
L_08A68814:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4073u);
    ctx.gpr[31] = (0x08A68830u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68830u) goto L_08A68830;
    return;
L_08A68830:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A687C4;
      }
      goto L_08A68838;
    }
L_08A68838:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4070u);
    ctx.gpr[31] = (0x08A68854u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68854u) goto L_08A68854;
    return;
L_08A68854:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A687C4;
      }
      goto L_08A6885C;
    }
L_08A6885C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4075u);
    ctx.gpr[31] = (0x08A68878u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68878u) goto L_08A68878;
    return;
L_08A68878:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A687C4;
      }
      goto L_08A68880;
    }
L_08A68880:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6889Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6889Cu) goto L_08A6889C;
    return;
L_08A6889C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A687C4;
      }
      goto L_08A688A4;
    }
L_08A688A4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4079u);
    ctx.gpr[31] = (0x08A688C0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A688C0u) goto L_08A688C0;
    return;
L_08A688C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A687C4;
      }
      goto L_08A688C8;
    }
L_08A688C8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A688E4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A688E4u) goto L_08A688E4;
    return;
L_08A688E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A687C4;
      }
      goto L_08A688EC;
    }
L_08A688EC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4082u);
    ctx.gpr[31] = (0x08A68908u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68908u) goto L_08A68908;
    return;
L_08A68908:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A687C4;
      }
      goto L_08A68910;
    }
L_08A68910:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4084u);
    ctx.gpr[31] = (0x08A6892Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6892Cu) goto L_08A6892C;
    return;
L_08A6892C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A687C4;
      }
      goto L_08A68934;
    }
L_08A68934:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68950u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68950u) goto L_08A68950;
    return;
L_08A68950:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A687C4;
      }
      goto L_08A68958;
    }
L_08A68958:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68974u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68974u) goto L_08A68974;
    return;
L_08A68974:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A687C4;
      }
      goto L_08A6897C;
    }
L_08A6897C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68998u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68998u) goto L_08A68998;
    return;
L_08A68998:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A687C4;
      }
      goto L_08A689A0;
    }
L_08A689A0:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A687C4;
      }
      goto L_08A689B0;
    }
L_08A689B0:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A687C4;
      }
      goto L_08A689C0;
    }
L_08A689C0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A689D4u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 207u, 0x08A6CD04u>(ctx, &aot_mem) && ctx.pc == 0x08A689D4u) goto L_08A689D4;
    return;
L_08A689D4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A689E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A68C28;
      }
      goto L_08A68A04;
    }
L_08A68A04:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(32360)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A68A1C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4113u);
    ctx.gpr[31] = (0x08A68A38u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68A38u) goto L_08A68A38;
    return;
L_08A68A38:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A68A3C;
L_08A68A3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68C3C;
      }
      goto L_08A68A44;
    }
L_08A68A44:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4115u);
    ctx.gpr[31] = (0x08A68A60u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68A60u) goto L_08A68A60;
    return;
L_08A68A60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68A3C;
      }
      goto L_08A68A68;
    }
L_08A68A68:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68A84u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68A84u) goto L_08A68A84;
    return;
L_08A68A84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68A3C;
      }
      goto L_08A68A8C;
    }
L_08A68A8C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4109u);
    ctx.gpr[31] = (0x08A68AA8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68AA8u) goto L_08A68AA8;
    return;
L_08A68AA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68A3C;
      }
      goto L_08A68AB0;
    }
L_08A68AB0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4105u);
    ctx.gpr[31] = (0x08A68ACCu);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68ACCu) goto L_08A68ACC;
    return;
L_08A68ACC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68A3C;
      }
      goto L_08A68AD4;
    }
L_08A68AD4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4111u);
    ctx.gpr[31] = (0x08A68AF0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68AF0u) goto L_08A68AF0;
    return;
L_08A68AF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68A3C;
      }
      goto L_08A68AF8;
    }
L_08A68AF8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68B14u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68B14u) goto L_08A68B14;
    return;
L_08A68B14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68A3C;
      }
      goto L_08A68B1C;
    }
L_08A68B1C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68B38u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68B38u) goto L_08A68B38;
    return;
L_08A68B38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68A3C;
      }
      goto L_08A68B40;
    }
L_08A68B40:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4118u);
    ctx.gpr[31] = (0x08A68B5Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68B5Cu) goto L_08A68B5C;
    return;
L_08A68B5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68A3C;
      }
      goto L_08A68B64;
    }
L_08A68B64:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4120u);
    ctx.gpr[31] = (0x08A68B80u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68B80u) goto L_08A68B80;
    return;
L_08A68B80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68A3C;
      }
      goto L_08A68B88;
    }
L_08A68B88:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68BA4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68BA4u) goto L_08A68BA4;
    return;
L_08A68BA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68A3C;
      }
      goto L_08A68BAC;
    }
L_08A68BAC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68BC8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68BC8u) goto L_08A68BC8;
    return;
L_08A68BC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68A3C;
      }
      goto L_08A68BD0;
    }
L_08A68BD0:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A68A3C;
      }
      goto L_08A68BE0;
    }
L_08A68BE0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4123u);
    ctx.gpr[31] = (0x08A68BFCu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68BFCu) goto L_08A68BFC;
    return;
L_08A68BFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68A3C;
      }
      goto L_08A68C04;
    }
L_08A68C04:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68C20u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68C20u) goto L_08A68C20;
    return;
L_08A68C20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68A3C;
      }
      goto L_08A68C28;
    }
L_08A68C28:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A68C3Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A68C3Cu) goto L_08A68C3C;
    return;
L_08A68C3C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A68C48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A68E48;
      }
      goto L_08A68C6C;
    }
L_08A68C6C:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(32520)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A68C84:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4138u);
    ctx.gpr[31] = (0x08A68CA0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68CA0u) goto L_08A68CA0;
    return;
L_08A68CA0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A68CA4;
L_08A68CA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68E5C;
      }
      goto L_08A68CAC;
    }
L_08A68CAC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4127u);
    ctx.gpr[31] = (0x08A68CC8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68CC8u) goto L_08A68CC8;
    return;
L_08A68CC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68CA4;
      }
      goto L_08A68CD0;
    }
L_08A68CD0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4134u);
    ctx.gpr[31] = (0x08A68CECu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68CECu) goto L_08A68CEC;
    return;
L_08A68CEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68CA4;
      }
      goto L_08A68CF4;
    }
L_08A68CF4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4130u);
    ctx.gpr[31] = (0x08A68D10u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68D10u) goto L_08A68D10;
    return;
L_08A68D10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68CA4;
      }
      goto L_08A68D18;
    }
L_08A68D18:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4136u);
    ctx.gpr[31] = (0x08A68D34u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68D34u) goto L_08A68D34;
    return;
L_08A68D34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68CA4;
      }
      goto L_08A68D3C;
    }
L_08A68D3C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4140u);
    ctx.gpr[31] = (0x08A68D58u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68D58u) goto L_08A68D58;
    return;
L_08A68D58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68CA4;
      }
      goto L_08A68D60;
    }
L_08A68D60:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68D7Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68D7Cu) goto L_08A68D7C;
    return;
L_08A68D7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68CA4;
      }
      goto L_08A68D84;
    }
L_08A68D84:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4142u);
    ctx.gpr[31] = (0x08A68DA0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68DA0u) goto L_08A68DA0;
    return;
L_08A68DA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68CA4;
      }
      goto L_08A68DA8;
    }
L_08A68DA8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4144u);
    ctx.gpr[31] = (0x08A68DC4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68DC4u) goto L_08A68DC4;
    return;
L_08A68DC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68CA4;
      }
      goto L_08A68DCC;
    }
L_08A68DCC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68DE8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68DE8u) goto L_08A68DE8;
    return;
L_08A68DE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68CA4;
      }
      goto L_08A68DF0;
    }
L_08A68DF0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68E0Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68E0Cu) goto L_08A68E0C;
    return;
L_08A68E0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68CA4;
      }
      goto L_08A68E14;
    }
L_08A68E14:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A68CA4;
      }
      goto L_08A68E24;
    }
L_08A68E24:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4147u);
    ctx.gpr[31] = (0x08A68E40u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68E40u) goto L_08A68E40;
    return;
L_08A68E40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68CA4;
      }
      goto L_08A68E48;
    }
L_08A68E48:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A68E5Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 207u, 0x08A6CD04u>(ctx, &aot_mem) && ctx.pc == 0x08A68E5Cu) goto L_08A68E5C;
    return;
L_08A68E5C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A68E68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A69078;
      }
      goto L_08A68E8C;
    }
L_08A68E8C:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(32680)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A68EA4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 682u);
    ctx.gpr[31] = (0x08A68EC0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68EC0u) goto L_08A68EC0;
    return;
L_08A68EC0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A68EC4;
L_08A68EC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6908C;
      }
      goto L_08A68ECC;
    }
L_08A68ECC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 671u);
    ctx.gpr[31] = (0x08A68EE8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68EE8u) goto L_08A68EE8;
    return;
L_08A68EE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68EC4;
      }
      goto L_08A68EF0;
    }
L_08A68EF0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 678u);
    ctx.gpr[31] = (0x08A68F0Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68F0Cu) goto L_08A68F0C;
    return;
L_08A68F0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68EC4;
      }
      goto L_08A68F14;
    }
L_08A68F14:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 674u);
    ctx.gpr[31] = (0x08A68F30u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68F30u) goto L_08A68F30;
    return;
L_08A68F30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68EC4;
      }
      goto L_08A68F38;
    }
L_08A68F38:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 680u);
    ctx.gpr[31] = (0x08A68F54u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68F54u) goto L_08A68F54;
    return;
L_08A68F54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68EC4;
      }
      goto L_08A68F5C;
    }
L_08A68F5C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68F78u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68F78u) goto L_08A68F78;
    return;
L_08A68F78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68EC4;
      }
      goto L_08A68F80;
    }
L_08A68F80:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 684u);
    ctx.gpr[31] = (0x08A68F9Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68F9Cu) goto L_08A68F9C;
    return;
L_08A68F9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68EC4;
      }
      goto L_08A68FA4;
    }
L_08A68FA4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68FC0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68FC0u) goto L_08A68FC0;
    return;
L_08A68FC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68EC4;
      }
      goto L_08A68FC8;
    }
L_08A68FC8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 687u);
    ctx.gpr[31] = (0x08A68FE4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A68FE4u) goto L_08A68FE4;
    return;
L_08A68FE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68EC4;
      }
      goto L_08A68FEC;
    }
L_08A68FEC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 689u);
    ctx.gpr[31] = (0x08A69008u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69008u) goto L_08A69008;
    return;
L_08A69008:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68EC4;
      }
      goto L_08A69010;
    }
L_08A69010:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6902Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6902Cu) goto L_08A6902C;
    return;
L_08A6902C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68EC4;
      }
      goto L_08A69034;
    }
L_08A69034:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A68EC4;
      }
      goto L_08A69044;
    }
L_08A69044:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 692u);
    ctx.gpr[31] = (0x08A69060u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69060u) goto L_08A69060;
    return;
L_08A69060:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68EC4;
      }
      goto L_08A69068;
    }
L_08A69068:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A68EC4;
      }
      goto L_08A69078;
    }
L_08A69078:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6908Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6908Cu) goto L_08A6908C;
    return;
L_08A6908C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69098:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A69260;
      }
      goto L_08A690BC;
    }
L_08A690BC:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-32696)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A690D4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 711u);
    ctx.gpr[31] = (0x08A690F0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A690F0u) goto L_08A690F0;
    return;
L_08A690F0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A690F4;
L_08A690F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69274;
      }
      goto L_08A690FC;
    }
L_08A690FC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 700u);
    ctx.gpr[31] = (0x08A69118u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69118u) goto L_08A69118;
    return;
L_08A69118:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A690F4;
      }
      goto L_08A69120;
    }
L_08A69120:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 704u);
    ctx.gpr[31] = (0x08A6913Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6913Cu) goto L_08A6913C;
    return;
L_08A6913C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A690F4;
      }
      goto L_08A69144;
    }
L_08A69144:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 709u);
    ctx.gpr[31] = (0x08A69160u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69160u) goto L_08A69160;
    return;
L_08A69160:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A690F4;
      }
      goto L_08A69168;
    }
L_08A69168:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 714u);
    ctx.gpr[31] = (0x08A69184u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69184u) goto L_08A69184;
    return;
L_08A69184:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A690F4;
      }
      goto L_08A6918C;
    }
L_08A6918C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 693u);
    ctx.gpr[31] = (0x08A691A8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A691A8u) goto L_08A691A8;
    return;
L_08A691A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A690F4;
      }
      goto L_08A691B0;
    }
L_08A691B0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 696u);
    ctx.gpr[31] = (0x08A691CCu);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A691CCu) goto L_08A691CC;
    return;
L_08A691CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A690F4;
      }
      goto L_08A691D4;
    }
L_08A691D4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 702u);
    ctx.gpr[31] = (0x08A691F0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A691F0u) goto L_08A691F0;
    return;
L_08A691F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A690F4;
      }
      goto L_08A691F8;
    }
L_08A691F8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 706u);
    ctx.gpr[31] = (0x08A69214u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69214u) goto L_08A69214;
    return;
L_08A69214:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A690F4;
      }
      goto L_08A6921C;
    }
L_08A6921C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A69238u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69238u) goto L_08A69238;
    return;
L_08A69238:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A690F4;
      }
      goto L_08A69240;
    }
L_08A69240:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A690F4;
      }
      goto L_08A69250;
    }
L_08A69250:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A690F4;
      }
      goto L_08A69260;
    }
L_08A69260:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A69274u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 207u, 0x08A6CD04u>(ctx, &aot_mem) && ctx.pc == 0x08A69274u) goto L_08A69274;
    return;
L_08A69274:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69280:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 5662u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69288:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 5662u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69290:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A69438;
      }
      goto L_08A692B4;
    }
L_08A692B4:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-32536)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A692CC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1549u);
    ctx.gpr[31] = (0x08A692E8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A692E8u) goto L_08A692E8;
    return;
L_08A692E8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A692EC;
L_08A692EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6944C;
      }
      goto L_08A692F4;
    }
L_08A692F4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1552u);
    ctx.gpr[31] = (0x08A69310u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69310u) goto L_08A69310;
    return;
L_08A69310:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A692EC;
      }
      goto L_08A69318;
    }
L_08A69318:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1557u);
    ctx.gpr[31] = (0x08A69334u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69334u) goto L_08A69334;
    return;
L_08A69334:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A692EC;
      }
      goto L_08A6933C;
    }
L_08A6933C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1561u);
    ctx.gpr[31] = (0x08A69358u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69358u) goto L_08A69358;
    return;
L_08A69358:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A692EC;
      }
      goto L_08A69360;
    }
L_08A69360:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1563u);
    ctx.gpr[31] = (0x08A6937Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6937Cu) goto L_08A6937C;
    return;
L_08A6937C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A692EC;
      }
      goto L_08A69384;
    }
L_08A69384:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1567u);
    ctx.gpr[31] = (0x08A693A0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A693A0u) goto L_08A693A0;
    return;
L_08A693A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A692EC;
      }
      goto L_08A693A8;
    }
L_08A693A8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1569u);
    ctx.gpr[31] = (0x08A693C4u);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A693C4u) goto L_08A693C4;
    return;
L_08A693C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A692EC;
      }
      goto L_08A693CC;
    }
L_08A693CC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1555u);
    ctx.gpr[31] = (0x08A693E8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A693E8u) goto L_08A693E8;
    return;
L_08A693E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A692EC;
      }
      goto L_08A693F0;
    }
L_08A693F0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1559u);
    ctx.gpr[31] = (0x08A6940Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6940Cu) goto L_08A6940C;
    return;
L_08A6940C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A692EC;
      }
      goto L_08A69414;
    }
L_08A69414:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1565u);
    ctx.gpr[31] = (0x08A69430u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69430u) goto L_08A69430;
    return;
L_08A69430:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A692EC;
      }
      goto L_08A69438;
    }
L_08A69438:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6944Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6944Cu) goto L_08A6944C;
    return;
L_08A6944C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69458:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A69600;
      }
      goto L_08A6947C;
    }
L_08A6947C:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-32376)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69494:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1574u);
    ctx.gpr[31] = (0x08A694B0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A694B0u) goto L_08A694B0;
    return;
L_08A694B0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A694B4;
L_08A694B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69614;
      }
      goto L_08A694BC;
    }
L_08A694BC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1577u);
    ctx.gpr[31] = (0x08A694D8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A694D8u) goto L_08A694D8;
    return;
L_08A694D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A694B4;
      }
      goto L_08A694E0;
    }
L_08A694E0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1581u);
    ctx.gpr[31] = (0x08A694FCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A694FCu) goto L_08A694FC;
    return;
L_08A694FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A694B4;
      }
      goto L_08A69504;
    }
L_08A69504:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1585u);
    ctx.gpr[31] = (0x08A69520u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69520u) goto L_08A69520;
    return;
L_08A69520:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A694B4;
      }
      goto L_08A69528;
    }
L_08A69528:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1587u);
    ctx.gpr[31] = (0x08A69544u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69544u) goto L_08A69544;
    return;
L_08A69544:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A694B4;
      }
      goto L_08A6954C;
    }
L_08A6954C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1591u);
    ctx.gpr[31] = (0x08A69568u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69568u) goto L_08A69568;
    return;
L_08A69568:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A694B4;
      }
      goto L_08A69570;
    }
L_08A69570:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1593u);
    ctx.gpr[31] = (0x08A6958Cu);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6958Cu) goto L_08A6958C;
    return;
L_08A6958C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A694B4;
      }
      goto L_08A69594;
    }
L_08A69594:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1579u);
    ctx.gpr[31] = (0x08A695B0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A695B0u) goto L_08A695B0;
    return;
L_08A695B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A694B4;
      }
      goto L_08A695B8;
    }
L_08A695B8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1583u);
    ctx.gpr[31] = (0x08A695D4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A695D4u) goto L_08A695D4;
    return;
L_08A695D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A694B4;
      }
      goto L_08A695DC;
    }
L_08A695DC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1589u);
    ctx.gpr[31] = (0x08A695F8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A695F8u) goto L_08A695F8;
    return;
L_08A695F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A694B4;
      }
      goto L_08A69600;
    }
L_08A69600:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A69614u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A69614u) goto L_08A69614;
    return;
L_08A69614:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69620:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A697A4;
      }
      goto L_08A69644;
    }
L_08A69644:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-32216)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6965C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1598u);
    ctx.gpr[31] = (0x08A69678u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69678u) goto L_08A69678;
    return;
L_08A69678:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6967C;
L_08A6967C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A697B8;
      }
      goto L_08A69684;
    }
L_08A69684:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1601u);
    ctx.gpr[31] = (0x08A696A0u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A696A0u) goto L_08A696A0;
    return;
L_08A696A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6967C;
      }
      goto L_08A696A8;
    }
L_08A696A8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1608u);
    ctx.gpr[31] = (0x08A696C4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A696C4u) goto L_08A696C4;
    return;
L_08A696C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6967C;
      }
      goto L_08A696CC;
    }
L_08A696CC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1612u);
    ctx.gpr[31] = (0x08A696E8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A696E8u) goto L_08A696E8;
    return;
L_08A696E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6967C;
      }
      goto L_08A696F0;
    }
L_08A696F0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1615u);
    ctx.gpr[31] = (0x08A6970Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6970Cu) goto L_08A6970C;
    return;
L_08A6970C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6967C;
      }
      goto L_08A69714;
    }
L_08A69714:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1619u);
    ctx.gpr[31] = (0x08A69730u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69730u) goto L_08A69730;
    return;
L_08A69730:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6967C;
      }
      goto L_08A69738;
    }
L_08A69738:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1605u);
    ctx.gpr[31] = (0x08A69754u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69754u) goto L_08A69754;
    return;
L_08A69754:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6967C;
      }
      goto L_08A6975C;
    }
L_08A6975C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1610u);
    ctx.gpr[31] = (0x08A69778u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69778u) goto L_08A69778;
    return;
L_08A69778:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6967C;
      }
      goto L_08A69780;
    }
L_08A69780:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1617u);
    ctx.gpr[31] = (0x08A6979Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6979Cu) goto L_08A6979C;
    return;
L_08A6979C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6967C;
      }
      goto L_08A697A4;
    }
L_08A697A4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A697B8u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A697B8u) goto L_08A697B8;
    return;
L_08A697B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A697C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A6996C;
      }
      goto L_08A697E8;
    }
L_08A697E8:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-32056)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69800:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1623u);
    ctx.gpr[31] = (0x08A6981Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6981Cu) goto L_08A6981C;
    return;
L_08A6981C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A69820;
L_08A69820:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69980;
      }
      goto L_08A69828;
    }
L_08A69828:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1626u);
    ctx.gpr[31] = (0x08A69844u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69844u) goto L_08A69844;
    return;
L_08A69844:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69820;
      }
      goto L_08A6984C;
    }
L_08A6984C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1630u);
    ctx.gpr[31] = (0x08A69868u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69868u) goto L_08A69868;
    return;
L_08A69868:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69820;
      }
      goto L_08A69870;
    }
L_08A69870:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1634u);
    ctx.gpr[31] = (0x08A6988Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6988Cu) goto L_08A6988C;
    return;
L_08A6988C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69820;
      }
      goto L_08A69894;
    }
L_08A69894:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1636u);
    ctx.gpr[31] = (0x08A698B0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A698B0u) goto L_08A698B0;
    return;
L_08A698B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69820;
      }
      goto L_08A698B8;
    }
L_08A698B8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1640u);
    ctx.gpr[31] = (0x08A698D4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A698D4u) goto L_08A698D4;
    return;
L_08A698D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69820;
      }
      goto L_08A698DC;
    }
L_08A698DC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1642u);
    ctx.gpr[31] = (0x08A698F8u);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A698F8u) goto L_08A698F8;
    return;
L_08A698F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69820;
      }
      goto L_08A69900;
    }
L_08A69900:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1628u);
    ctx.gpr[31] = (0x08A6991Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6991Cu) goto L_08A6991C;
    return;
L_08A6991C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69820;
      }
      goto L_08A69924;
    }
L_08A69924:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1632u);
    ctx.gpr[31] = (0x08A69940u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69940u) goto L_08A69940;
    return;
L_08A69940:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69820;
      }
      goto L_08A69948;
    }
L_08A69948:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1638u);
    ctx.gpr[31] = (0x08A69964u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69964u) goto L_08A69964;
    return;
L_08A69964:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69820;
      }
      goto L_08A6996C;
    }
L_08A6996C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A69980u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A69980u) goto L_08A69980;
    return;
L_08A69980:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6998C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A69B34;
      }
      goto L_08A699B0;
    }
L_08A699B0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-31896)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A699C8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1647u);
    ctx.gpr[31] = (0x08A699E4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A699E4u) goto L_08A699E4;
    return;
L_08A699E4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A699E8;
L_08A699E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69B48;
      }
      goto L_08A699F0;
    }
L_08A699F0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1650u);
    ctx.gpr[31] = (0x08A69A0Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69A0Cu) goto L_08A69A0C;
    return;
L_08A69A0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A699E8;
      }
      goto L_08A69A14;
    }
L_08A69A14:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1655u);
    ctx.gpr[31] = (0x08A69A30u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69A30u) goto L_08A69A30;
    return;
L_08A69A30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A699E8;
      }
      goto L_08A69A38;
    }
L_08A69A38:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1659u);
    ctx.gpr[31] = (0x08A69A54u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69A54u) goto L_08A69A54;
    return;
L_08A69A54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A699E8;
      }
      goto L_08A69A5C;
    }
L_08A69A5C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1661u);
    ctx.gpr[31] = (0x08A69A78u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69A78u) goto L_08A69A78;
    return;
L_08A69A78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A699E8;
      }
      goto L_08A69A80;
    }
L_08A69A80:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1665u);
    ctx.gpr[31] = (0x08A69A9Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69A9Cu) goto L_08A69A9C;
    return;
L_08A69A9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A699E8;
      }
      goto L_08A69AA4;
    }
L_08A69AA4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1667u);
    ctx.gpr[31] = (0x08A69AC0u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69AC0u) goto L_08A69AC0;
    return;
L_08A69AC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A699E8;
      }
      goto L_08A69AC8;
    }
L_08A69AC8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1653u);
    ctx.gpr[31] = (0x08A69AE4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69AE4u) goto L_08A69AE4;
    return;
L_08A69AE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A699E8;
      }
      goto L_08A69AEC;
    }
L_08A69AEC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1657u);
    ctx.gpr[31] = (0x08A69B08u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69B08u) goto L_08A69B08;
    return;
L_08A69B08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A699E8;
      }
      goto L_08A69B10;
    }
L_08A69B10:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1663u);
    ctx.gpr[31] = (0x08A69B2Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69B2Cu) goto L_08A69B2C;
    return;
L_08A69B2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A699E8;
      }
      goto L_08A69B34;
    }
L_08A69B34:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A69B48u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A69B48u) goto L_08A69B48;
    return;
L_08A69B48:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69B54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A69CFC;
      }
      goto L_08A69B78;
    }
L_08A69B78:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-31736)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69B90:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1671u);
    ctx.gpr[31] = (0x08A69BACu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69BACu) goto L_08A69BAC;
    return;
L_08A69BAC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A69BB0;
L_08A69BB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69D10;
      }
      goto L_08A69BB8;
    }
L_08A69BB8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1674u);
    ctx.gpr[31] = (0x08A69BD4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69BD4u) goto L_08A69BD4;
    return;
L_08A69BD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69BB0;
      }
      goto L_08A69BDC;
    }
L_08A69BDC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1679u);
    ctx.gpr[31] = (0x08A69BF8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69BF8u) goto L_08A69BF8;
    return;
L_08A69BF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69BB0;
      }
      goto L_08A69C00;
    }
L_08A69C00:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1683u);
    ctx.gpr[31] = (0x08A69C1Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69C1Cu) goto L_08A69C1C;
    return;
L_08A69C1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69BB0;
      }
      goto L_08A69C24;
    }
L_08A69C24:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1685u);
    ctx.gpr[31] = (0x08A69C40u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69C40u) goto L_08A69C40;
    return;
L_08A69C40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69BB0;
      }
      goto L_08A69C48;
    }
L_08A69C48:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1689u);
    ctx.gpr[31] = (0x08A69C64u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69C64u) goto L_08A69C64;
    return;
L_08A69C64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69BB0;
      }
      goto L_08A69C6C;
    }
L_08A69C6C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1691u);
    ctx.gpr[31] = (0x08A69C88u);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69C88u) goto L_08A69C88;
    return;
L_08A69C88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69BB0;
      }
      goto L_08A69C90;
    }
L_08A69C90:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1677u);
    ctx.gpr[31] = (0x08A69CACu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69CACu) goto L_08A69CAC;
    return;
L_08A69CAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69BB0;
      }
      goto L_08A69CB4;
    }
L_08A69CB4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1681u);
    ctx.gpr[31] = (0x08A69CD0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69CD0u) goto L_08A69CD0;
    return;
L_08A69CD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69BB0;
      }
      goto L_08A69CD8;
    }
L_08A69CD8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1687u);
    ctx.gpr[31] = (0x08A69CF4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69CF4u) goto L_08A69CF4;
    return;
L_08A69CF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69BB0;
      }
      goto L_08A69CFC;
    }
L_08A69CFC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A69D10u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A69D10u) goto L_08A69D10;
    return;
L_08A69D10:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69D1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A69EC4;
      }
      goto L_08A69D40;
    }
L_08A69D40:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-31576)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69D58:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1696u);
    ctx.gpr[31] = (0x08A69D74u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69D74u) goto L_08A69D74;
    return;
L_08A69D74:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A69D78;
L_08A69D78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69ED8;
      }
      goto L_08A69D80;
    }
L_08A69D80:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1699u);
    ctx.gpr[31] = (0x08A69D9Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69D9Cu) goto L_08A69D9C;
    return;
L_08A69D9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69D78;
      }
      goto L_08A69DA4;
    }
L_08A69DA4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1703u);
    ctx.gpr[31] = (0x08A69DC0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69DC0u) goto L_08A69DC0;
    return;
L_08A69DC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69D78;
      }
      goto L_08A69DC8;
    }
L_08A69DC8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1707u);
    ctx.gpr[31] = (0x08A69DE4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69DE4u) goto L_08A69DE4;
    return;
L_08A69DE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69D78;
      }
      goto L_08A69DEC;
    }
L_08A69DEC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1709u);
    ctx.gpr[31] = (0x08A69E08u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69E08u) goto L_08A69E08;
    return;
L_08A69E08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69D78;
      }
      goto L_08A69E10;
    }
L_08A69E10:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1713u);
    ctx.gpr[31] = (0x08A69E2Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69E2Cu) goto L_08A69E2C;
    return;
L_08A69E2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69D78;
      }
      goto L_08A69E34;
    }
L_08A69E34:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1714u);
    ctx.gpr[31] = (0x08A69E50u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69E50u) goto L_08A69E50;
    return;
L_08A69E50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69D78;
      }
      goto L_08A69E58;
    }
L_08A69E58:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1701u);
    ctx.gpr[31] = (0x08A69E74u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69E74u) goto L_08A69E74;
    return;
L_08A69E74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69D78;
      }
      goto L_08A69E7C;
    }
L_08A69E7C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1705u);
    ctx.gpr[31] = (0x08A69E98u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69E98u) goto L_08A69E98;
    return;
L_08A69E98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69D78;
      }
      goto L_08A69EA0;
    }
L_08A69EA0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1711u);
    ctx.gpr[31] = (0x08A69EBCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69EBCu) goto L_08A69EBC;
    return;
L_08A69EBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69D78;
      }
      goto L_08A69EC4;
    }
L_08A69EC4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A69ED8u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A69ED8u) goto L_08A69ED8;
    return;
L_08A69ED8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69EE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A6A08C;
      }
      goto L_08A69F08;
    }
L_08A69F08:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-31416)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69F20:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1718u);
    ctx.gpr[31] = (0x08A69F3Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69F3Cu) goto L_08A69F3C;
    return;
L_08A69F3C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A69F40;
L_08A69F40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A0A0;
      }
      goto L_08A69F48;
    }
L_08A69F48:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1721u);
    ctx.gpr[31] = (0x08A69F64u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69F64u) goto L_08A69F64;
    return;
L_08A69F64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69F40;
      }
      goto L_08A69F6C;
    }
L_08A69F6C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1725u);
    ctx.gpr[31] = (0x08A69F88u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69F88u) goto L_08A69F88;
    return;
L_08A69F88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69F40;
      }
      goto L_08A69F90;
    }
L_08A69F90:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1729u);
    ctx.gpr[31] = (0x08A69FACu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69FACu) goto L_08A69FAC;
    return;
L_08A69FAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69F40;
      }
      goto L_08A69FB4;
    }
L_08A69FB4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1731u);
    ctx.gpr[31] = (0x08A69FD0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69FD0u) goto L_08A69FD0;
    return;
L_08A69FD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69F40;
      }
      goto L_08A69FD8;
    }
L_08A69FD8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1735u);
    ctx.gpr[31] = (0x08A69FF4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A69FF4u) goto L_08A69FF4;
    return;
L_08A69FF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69F40;
      }
      goto L_08A69FFC;
    }
L_08A69FFC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1737u);
    ctx.gpr[31] = (0x08A6A018u);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A018u) goto L_08A6A018;
    return;
L_08A6A018:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69F40;
      }
      goto L_08A6A020;
    }
L_08A6A020:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1723u);
    ctx.gpr[31] = (0x08A6A03Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A03Cu) goto L_08A6A03C;
    return;
L_08A6A03C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69F40;
      }
      goto L_08A6A044;
    }
L_08A6A044:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1727u);
    ctx.gpr[31] = (0x08A6A060u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A060u) goto L_08A6A060;
    return;
L_08A6A060:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69F40;
      }
      goto L_08A6A068;
    }
L_08A6A068:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1733u);
    ctx.gpr[31] = (0x08A6A084u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A084u) goto L_08A6A084;
    return;
L_08A6A084:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69F40;
      }
      goto L_08A6A08C;
    }
L_08A6A08C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6A0A0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6A0A0u) goto L_08A6A0A0;
    return;
L_08A6A0A0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A0AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A6A254;
      }
      goto L_08A6A0D0;
    }
L_08A6A0D0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-31256)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A0E8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1742u);
    ctx.gpr[31] = (0x08A6A104u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A104u) goto L_08A6A104;
    return;
L_08A6A104:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6A108;
L_08A6A108:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A268;
      }
      goto L_08A6A110;
    }
L_08A6A110:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1745u);
    ctx.gpr[31] = (0x08A6A12Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A12Cu) goto L_08A6A12C;
    return;
L_08A6A12C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A108;
      }
      goto L_08A6A134;
    }
L_08A6A134:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1750u);
    ctx.gpr[31] = (0x08A6A150u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A150u) goto L_08A6A150;
    return;
L_08A6A150:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A108;
      }
      goto L_08A6A158;
    }
L_08A6A158:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1754u);
    ctx.gpr[31] = (0x08A6A174u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A174u) goto L_08A6A174;
    return;
L_08A6A174:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A108;
      }
      goto L_08A6A17C;
    }
L_08A6A17C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1756u);
    ctx.gpr[31] = (0x08A6A198u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A198u) goto L_08A6A198;
    return;
L_08A6A198:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A108;
      }
      goto L_08A6A1A0;
    }
L_08A6A1A0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1760u);
    ctx.gpr[31] = (0x08A6A1BCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A1BCu) goto L_08A6A1BC;
    return;
L_08A6A1BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A108;
      }
      goto L_08A6A1C4;
    }
L_08A6A1C4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1762u);
    ctx.gpr[31] = (0x08A6A1E0u);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A1E0u) goto L_08A6A1E0;
    return;
L_08A6A1E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A108;
      }
      goto L_08A6A1E8;
    }
L_08A6A1E8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1748u);
    ctx.gpr[31] = (0x08A6A204u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A204u) goto L_08A6A204;
    return;
L_08A6A204:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A108;
      }
      goto L_08A6A20C;
    }
L_08A6A20C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1752u);
    ctx.gpr[31] = (0x08A6A228u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A228u) goto L_08A6A228;
    return;
L_08A6A228:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A108;
      }
      goto L_08A6A230;
    }
L_08A6A230:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1758u);
    ctx.gpr[31] = (0x08A6A24Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A24Cu) goto L_08A6A24C;
    return;
L_08A6A24C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A108;
      }
      goto L_08A6A254;
    }
L_08A6A254:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6A268u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6A268u) goto L_08A6A268;
    return;
L_08A6A268:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A274:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A6A41C;
      }
      goto L_08A6A298;
    }
L_08A6A298:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-31096)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A2B0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1767u);
    ctx.gpr[31] = (0x08A6A2CCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A2CCu) goto L_08A6A2CC;
    return;
L_08A6A2CC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6A2D0;
L_08A6A2D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A430;
      }
      goto L_08A6A2D8;
    }
L_08A6A2D8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1770u);
    ctx.gpr[31] = (0x08A6A2F4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A2F4u) goto L_08A6A2F4;
    return;
L_08A6A2F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A2D0;
      }
      goto L_08A6A2FC;
    }
L_08A6A2FC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1775u);
    ctx.gpr[31] = (0x08A6A318u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A318u) goto L_08A6A318;
    return;
L_08A6A318:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A2D0;
      }
      goto L_08A6A320;
    }
L_08A6A320:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1779u);
    ctx.gpr[31] = (0x08A6A33Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A33Cu) goto L_08A6A33C;
    return;
L_08A6A33C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A2D0;
      }
      goto L_08A6A344;
    }
L_08A6A344:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1781u);
    ctx.gpr[31] = (0x08A6A360u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A360u) goto L_08A6A360;
    return;
L_08A6A360:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A2D0;
      }
      goto L_08A6A368;
    }
L_08A6A368:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1785u);
    ctx.gpr[31] = (0x08A6A384u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A384u) goto L_08A6A384;
    return;
L_08A6A384:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A2D0;
      }
      goto L_08A6A38C;
    }
L_08A6A38C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1787u);
    ctx.gpr[31] = (0x08A6A3A8u);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A3A8u) goto L_08A6A3A8;
    return;
L_08A6A3A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A2D0;
      }
      goto L_08A6A3B0;
    }
L_08A6A3B0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1773u);
    ctx.gpr[31] = (0x08A6A3CCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A3CCu) goto L_08A6A3CC;
    return;
L_08A6A3CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A2D0;
      }
      goto L_08A6A3D4;
    }
L_08A6A3D4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1777u);
    ctx.gpr[31] = (0x08A6A3F0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A3F0u) goto L_08A6A3F0;
    return;
L_08A6A3F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A2D0;
      }
      goto L_08A6A3F8;
    }
L_08A6A3F8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1783u);
    ctx.gpr[31] = (0x08A6A414u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A414u) goto L_08A6A414;
    return;
L_08A6A414:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A2D0;
      }
      goto L_08A6A41C;
    }
L_08A6A41C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6A430u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6A430u) goto L_08A6A430;
    return;
L_08A6A430:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A43C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A6A5E4;
      }
      goto L_08A6A460;
    }
L_08A6A460:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-30936)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A478:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1792u);
    ctx.gpr[31] = (0x08A6A494u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A494u) goto L_08A6A494;
    return;
L_08A6A494:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6A498;
L_08A6A498:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A5F8;
      }
      goto L_08A6A4A0;
    }
L_08A6A4A0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1795u);
    ctx.gpr[31] = (0x08A6A4BCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A4BCu) goto L_08A6A4BC;
    return;
L_08A6A4BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A498;
      }
      goto L_08A6A4C4;
    }
L_08A6A4C4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1799u);
    ctx.gpr[31] = (0x08A6A4E0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A4E0u) goto L_08A6A4E0;
    return;
L_08A6A4E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A498;
      }
      goto L_08A6A4E8;
    }
L_08A6A4E8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1803u);
    ctx.gpr[31] = (0x08A6A504u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A504u) goto L_08A6A504;
    return;
L_08A6A504:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A498;
      }
      goto L_08A6A50C;
    }
L_08A6A50C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1805u);
    ctx.gpr[31] = (0x08A6A528u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A528u) goto L_08A6A528;
    return;
L_08A6A528:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A498;
      }
      goto L_08A6A530;
    }
L_08A6A530:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1809u);
    ctx.gpr[31] = (0x08A6A54Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A54Cu) goto L_08A6A54C;
    return;
L_08A6A54C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A498;
      }
      goto L_08A6A554;
    }
L_08A6A554:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1811u);
    ctx.gpr[31] = (0x08A6A570u);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A570u) goto L_08A6A570;
    return;
L_08A6A570:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A498;
      }
      goto L_08A6A578;
    }
L_08A6A578:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1797u);
    ctx.gpr[31] = (0x08A6A594u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A594u) goto L_08A6A594;
    return;
L_08A6A594:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A498;
      }
      goto L_08A6A59C;
    }
L_08A6A59C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1801u);
    ctx.gpr[31] = (0x08A6A5B8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A5B8u) goto L_08A6A5B8;
    return;
L_08A6A5B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A498;
      }
      goto L_08A6A5C0;
    }
L_08A6A5C0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1807u);
    ctx.gpr[31] = (0x08A6A5DCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A5DCu) goto L_08A6A5DC;
    return;
L_08A6A5DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A498;
      }
      goto L_08A6A5E4;
    }
L_08A6A5E4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6A5F8u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6A5F8u) goto L_08A6A5F8;
    return;
L_08A6A5F8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A604:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A6A7AC;
      }
      goto L_08A6A628;
    }
L_08A6A628:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-30776)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A640:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1816u);
    ctx.gpr[31] = (0x08A6A65Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A65Cu) goto L_08A6A65C;
    return;
L_08A6A65C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6A660;
L_08A6A660:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A7C0;
      }
      goto L_08A6A668;
    }
L_08A6A668:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1819u);
    ctx.gpr[31] = (0x08A6A684u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A684u) goto L_08A6A684;
    return;
L_08A6A684:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A660;
      }
      goto L_08A6A68C;
    }
L_08A6A68C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1824u);
    ctx.gpr[31] = (0x08A6A6A8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A6A8u) goto L_08A6A6A8;
    return;
L_08A6A6A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A660;
      }
      goto L_08A6A6B0;
    }
L_08A6A6B0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1828u);
    ctx.gpr[31] = (0x08A6A6CCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A6CCu) goto L_08A6A6CC;
    return;
L_08A6A6CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A660;
      }
      goto L_08A6A6D4;
    }
L_08A6A6D4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1830u);
    ctx.gpr[31] = (0x08A6A6F0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A6F0u) goto L_08A6A6F0;
    return;
L_08A6A6F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A660;
      }
      goto L_08A6A6F8;
    }
L_08A6A6F8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1834u);
    ctx.gpr[31] = (0x08A6A714u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A714u) goto L_08A6A714;
    return;
L_08A6A714:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A660;
      }
      goto L_08A6A71C;
    }
L_08A6A71C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1836u);
    ctx.gpr[31] = (0x08A6A738u);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A738u) goto L_08A6A738;
    return;
L_08A6A738:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A660;
      }
      goto L_08A6A740;
    }
L_08A6A740:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1822u);
    ctx.gpr[31] = (0x08A6A75Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A75Cu) goto L_08A6A75C;
    return;
L_08A6A75C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A660;
      }
      goto L_08A6A764;
    }
L_08A6A764:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1826u);
    ctx.gpr[31] = (0x08A6A780u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A780u) goto L_08A6A780;
    return;
L_08A6A780:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A660;
      }
      goto L_08A6A788;
    }
L_08A6A788:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1832u);
    ctx.gpr[31] = (0x08A6A7A4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A7A4u) goto L_08A6A7A4;
    return;
L_08A6A7A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A660;
      }
      goto L_08A6A7AC;
    }
L_08A6A7AC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6A7C0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6A7C0u) goto L_08A6A7C0;
    return;
L_08A6A7C0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A7CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A6A974;
      }
      goto L_08A6A7F0;
    }
L_08A6A7F0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-30616)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A808:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1841u);
    ctx.gpr[31] = (0x08A6A824u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A824u) goto L_08A6A824;
    return;
L_08A6A824:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6A828;
L_08A6A828:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A988;
      }
      goto L_08A6A830;
    }
L_08A6A830:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1844u);
    ctx.gpr[31] = (0x08A6A84Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A84Cu) goto L_08A6A84C;
    return;
L_08A6A84C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A828;
      }
      goto L_08A6A854;
    }
L_08A6A854:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1848u);
    ctx.gpr[31] = (0x08A6A870u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A870u) goto L_08A6A870;
    return;
L_08A6A870:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A828;
      }
      goto L_08A6A878;
    }
L_08A6A878:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1852u);
    ctx.gpr[31] = (0x08A6A894u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A894u) goto L_08A6A894;
    return;
L_08A6A894:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A828;
      }
      goto L_08A6A89C;
    }
L_08A6A89C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1854u);
    ctx.gpr[31] = (0x08A6A8B8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A8B8u) goto L_08A6A8B8;
    return;
L_08A6A8B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A828;
      }
      goto L_08A6A8C0;
    }
L_08A6A8C0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1858u);
    ctx.gpr[31] = (0x08A6A8DCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A8DCu) goto L_08A6A8DC;
    return;
L_08A6A8DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A828;
      }
      goto L_08A6A8E4;
    }
L_08A6A8E4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1860u);
    ctx.gpr[31] = (0x08A6A900u);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A900u) goto L_08A6A900;
    return;
L_08A6A900:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A828;
      }
      goto L_08A6A908;
    }
L_08A6A908:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1846u);
    ctx.gpr[31] = (0x08A6A924u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A924u) goto L_08A6A924;
    return;
L_08A6A924:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A828;
      }
      goto L_08A6A92C;
    }
L_08A6A92C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1850u);
    ctx.gpr[31] = (0x08A6A948u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A948u) goto L_08A6A948;
    return;
L_08A6A948:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A828;
      }
      goto L_08A6A950;
    }
L_08A6A950:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1856u);
    ctx.gpr[31] = (0x08A6A96Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A96Cu) goto L_08A6A96C;
    return;
L_08A6A96C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A828;
      }
      goto L_08A6A974;
    }
L_08A6A974:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6A988u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6A988u) goto L_08A6A988;
    return;
L_08A6A988:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A994:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A6AB3C;
      }
      goto L_08A6A9B8;
    }
L_08A6A9B8:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-30456)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A9D0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1865u);
    ctx.gpr[31] = (0x08A6A9ECu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6A9ECu) goto L_08A6A9EC;
    return;
L_08A6A9EC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6A9F0;
L_08A6A9F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AB50;
      }
      goto L_08A6A9F8;
    }
L_08A6A9F8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1868u);
    ctx.gpr[31] = (0x08A6AA14u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6AA14u) goto L_08A6AA14;
    return;
L_08A6AA14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A9F0;
      }
      goto L_08A6AA1C;
    }
L_08A6AA1C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1873u);
    ctx.gpr[31] = (0x08A6AA38u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6AA38u) goto L_08A6AA38;
    return;
L_08A6AA38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A9F0;
      }
      goto L_08A6AA40;
    }
L_08A6AA40:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1877u);
    ctx.gpr[31] = (0x08A6AA5Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6AA5Cu) goto L_08A6AA5C;
    return;
L_08A6AA5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A9F0;
      }
      goto L_08A6AA64;
    }
L_08A6AA64:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1879u);
    ctx.gpr[31] = (0x08A6AA80u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6AA80u) goto L_08A6AA80;
    return;
L_08A6AA80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A9F0;
      }
      goto L_08A6AA88;
    }
L_08A6AA88:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1883u);
    ctx.gpr[31] = (0x08A6AAA4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6AAA4u) goto L_08A6AAA4;
    return;
L_08A6AAA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A9F0;
      }
      goto L_08A6AAAC;
    }
L_08A6AAAC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1885u);
    ctx.gpr[31] = (0x08A6AAC8u);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6AAC8u) goto L_08A6AAC8;
    return;
L_08A6AAC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A9F0;
      }
      goto L_08A6AAD0;
    }
L_08A6AAD0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1871u);
    ctx.gpr[31] = (0x08A6AAECu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6AAECu) goto L_08A6AAEC;
    return;
L_08A6AAEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A9F0;
      }
      goto L_08A6AAF4;
    }
L_08A6AAF4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1875u);
    ctx.gpr[31] = (0x08A6AB10u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6AB10u) goto L_08A6AB10;
    return;
L_08A6AB10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A9F0;
      }
      goto L_08A6AB18;
    }
L_08A6AB18:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1881u);
    ctx.gpr[31] = (0x08A6AB34u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6AB34u) goto L_08A6AB34;
    return;
L_08A6AB34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A9F0;
      }
      goto L_08A6AB3C;
    }
L_08A6AB3C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6AB50u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6AB50u) goto L_08A6AB50;
    return;
L_08A6AB50:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6AB5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A6AD04;
      }
      goto L_08A6AB80;
    }
L_08A6AB80:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-30296)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6AB98:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1890u);
    ctx.gpr[31] = (0x08A6ABB4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6ABB4u) goto L_08A6ABB4;
    return;
L_08A6ABB4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6ABB8;
L_08A6ABB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AD18;
      }
      goto L_08A6ABC0;
    }
L_08A6ABC0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1893u);
    ctx.gpr[31] = (0x08A6ABDCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6ABDCu) goto L_08A6ABDC;
    return;
L_08A6ABDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6ABB8;
      }
      goto L_08A6ABE4;
    }
L_08A6ABE4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1898u);
    ctx.gpr[31] = (0x08A6AC00u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6AC00u) goto L_08A6AC00;
    return;
L_08A6AC00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6ABB8;
      }
      goto L_08A6AC08;
    }
L_08A6AC08:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1902u);
    ctx.gpr[31] = (0x08A6AC24u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6AC24u) goto L_08A6AC24;
    return;
L_08A6AC24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6ABB8;
      }
      goto L_08A6AC2C;
    }
L_08A6AC2C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1904u);
    ctx.gpr[31] = (0x08A6AC48u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6AC48u) goto L_08A6AC48;
    return;
L_08A6AC48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6ABB8;
      }
      goto L_08A6AC50;
    }
L_08A6AC50:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1906u);
    ctx.gpr[31] = (0x08A6AC6Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6AC6Cu) goto L_08A6AC6C;
    return;
L_08A6AC6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6ABB8;
      }
      goto L_08A6AC74;
    }
L_08A6AC74:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1910u);
    ctx.gpr[31] = (0x08A6AC90u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6AC90u) goto L_08A6AC90;
    return;
L_08A6AC90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6ABB8;
      }
      goto L_08A6AC98;
    }
L_08A6AC98:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1896u);
    ctx.gpr[31] = (0x08A6ACB4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6ACB4u) goto L_08A6ACB4;
    return;
L_08A6ACB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6ABB8;
      }
      goto L_08A6ACBC;
    }
L_08A6ACBC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1900u);
    ctx.gpr[31] = (0x08A6ACD8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6ACD8u) goto L_08A6ACD8;
    return;
L_08A6ACD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6ABB8;
      }
      goto L_08A6ACE0;
    }
L_08A6ACE0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1908u);
    ctx.gpr[31] = (0x08A6ACFCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6ACFCu) goto L_08A6ACFC;
    return;
L_08A6ACFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6ABB8;
      }
      goto L_08A6AD04;
    }
L_08A6AD04:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6AD18u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6AD18u) goto L_08A6AD18;
    return;
L_08A6AD18:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6AD24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A6AECC;
      }
      goto L_08A6AD48;
    }
L_08A6AD48:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-30136)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6AD60:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1914u);
    ctx.gpr[31] = (0x08A6AD7Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6AD7Cu) goto L_08A6AD7C;
    return;
L_08A6AD7C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6AD80;
L_08A6AD80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AEE0;
      }
      goto L_08A6AD88;
    }
L_08A6AD88:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1917u);
    ctx.gpr[31] = (0x08A6ADA4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6ADA4u) goto L_08A6ADA4;
    return;
L_08A6ADA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AD80;
      }
      goto L_08A6ADAC;
    }
L_08A6ADAC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1921u);
    ctx.gpr[31] = (0x08A6ADC8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6ADC8u) goto L_08A6ADC8;
    return;
L_08A6ADC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AD80;
      }
      goto L_08A6ADD0;
    }
L_08A6ADD0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1925u);
    ctx.gpr[31] = (0x08A6ADECu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6ADECu) goto L_08A6ADEC;
    return;
L_08A6ADEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AD80;
      }
      goto L_08A6ADF4;
    }
L_08A6ADF4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1927u);
    ctx.gpr[31] = (0x08A6AE10u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6AE10u) goto L_08A6AE10;
    return;
L_08A6AE10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AD80;
      }
      goto L_08A6AE18;
    }
L_08A6AE18:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1931u);
    ctx.gpr[31] = (0x08A6AE34u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6AE34u) goto L_08A6AE34;
    return;
L_08A6AE34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AD80;
      }
      goto L_08A6AE3C;
    }
L_08A6AE3C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1933u);
    ctx.gpr[31] = (0x08A6AE58u);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6AE58u) goto L_08A6AE58;
    return;
L_08A6AE58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AD80;
      }
      goto L_08A6AE60;
    }
L_08A6AE60:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1919u);
    ctx.gpr[31] = (0x08A6AE7Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6AE7Cu) goto L_08A6AE7C;
    return;
L_08A6AE7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AD80;
      }
      goto L_08A6AE84;
    }
L_08A6AE84:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1923u);
    ctx.gpr[31] = (0x08A6AEA0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6AEA0u) goto L_08A6AEA0;
    return;
L_08A6AEA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AD80;
      }
      goto L_08A6AEA8;
    }
L_08A6AEA8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1929u);
    ctx.gpr[31] = (0x08A6AEC4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6AEC4u) goto L_08A6AEC4;
    return;
L_08A6AEC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AD80;
      }
      goto L_08A6AECC;
    }
L_08A6AECC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6AEE0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6AEE0u) goto L_08A6AEE0;
    return;
L_08A6AEE0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6AEEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A6B094;
      }
      goto L_08A6AF10;
    }
L_08A6AF10:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-29976)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6AF28:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1938u);
    ctx.gpr[31] = (0x08A6AF44u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6AF44u) goto L_08A6AF44;
    return;
L_08A6AF44:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6AF48;
L_08A6AF48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B0A8;
      }
      goto L_08A6AF50;
    }
L_08A6AF50:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1941u);
    ctx.gpr[31] = (0x08A6AF6Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6AF6Cu) goto L_08A6AF6C;
    return;
L_08A6AF6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AF48;
      }
      goto L_08A6AF74;
    }
L_08A6AF74:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1945u);
    ctx.gpr[31] = (0x08A6AF90u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6AF90u) goto L_08A6AF90;
    return;
L_08A6AF90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AF48;
      }
      goto L_08A6AF98;
    }
L_08A6AF98:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1949u);
    ctx.gpr[31] = (0x08A6AFB4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6AFB4u) goto L_08A6AFB4;
    return;
L_08A6AFB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AF48;
      }
      goto L_08A6AFBC;
    }
L_08A6AFBC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1951u);
    ctx.gpr[31] = (0x08A6AFD8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6AFD8u) goto L_08A6AFD8;
    return;
L_08A6AFD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AF48;
      }
      goto L_08A6AFE0;
    }
L_08A6AFE0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1955u);
    ctx.gpr[31] = (0x08A6AFFCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6AFFCu) goto L_08A6AFFC;
    return;
L_08A6AFFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AF48;
      }
      goto L_08A6B004;
    }
L_08A6B004:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1957u);
    ctx.gpr[31] = (0x08A6B020u);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B020u) goto L_08A6B020;
    return;
L_08A6B020:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AF48;
      }
      goto L_08A6B028;
    }
L_08A6B028:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1943u);
    ctx.gpr[31] = (0x08A6B044u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B044u) goto L_08A6B044;
    return;
L_08A6B044:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AF48;
      }
      goto L_08A6B04C;
    }
L_08A6B04C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1947u);
    ctx.gpr[31] = (0x08A6B068u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B068u) goto L_08A6B068;
    return;
L_08A6B068:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AF48;
      }
      goto L_08A6B070;
    }
L_08A6B070:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1953u);
    ctx.gpr[31] = (0x08A6B08Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B08Cu) goto L_08A6B08C;
    return;
L_08A6B08C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AF48;
      }
      goto L_08A6B094;
    }
L_08A6B094:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6B0A8u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6B0A8u) goto L_08A6B0A8;
    return;
L_08A6B0A8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B0B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A6B25C;
      }
      goto L_08A6B0D8;
    }
L_08A6B0D8:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-29816)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B0F0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1962u);
    ctx.gpr[31] = (0x08A6B10Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B10Cu) goto L_08A6B10C;
    return;
L_08A6B10C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6B110;
L_08A6B110:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B270;
      }
      goto L_08A6B118;
    }
L_08A6B118:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1965u);
    ctx.gpr[31] = (0x08A6B134u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B134u) goto L_08A6B134;
    return;
L_08A6B134:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B110;
      }
      goto L_08A6B13C;
    }
L_08A6B13C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1970u);
    ctx.gpr[31] = (0x08A6B158u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B158u) goto L_08A6B158;
    return;
L_08A6B158:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B110;
      }
      goto L_08A6B160;
    }
L_08A6B160:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1974u);
    ctx.gpr[31] = (0x08A6B17Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B17Cu) goto L_08A6B17C;
    return;
L_08A6B17C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B110;
      }
      goto L_08A6B184;
    }
L_08A6B184:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1976u);
    ctx.gpr[31] = (0x08A6B1A0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B1A0u) goto L_08A6B1A0;
    return;
L_08A6B1A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B110;
      }
      goto L_08A6B1A8;
    }
L_08A6B1A8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1980u);
    ctx.gpr[31] = (0x08A6B1C4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B1C4u) goto L_08A6B1C4;
    return;
L_08A6B1C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B110;
      }
      goto L_08A6B1CC;
    }
L_08A6B1CC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1982u);
    ctx.gpr[31] = (0x08A6B1E8u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B1E8u) goto L_08A6B1E8;
    return;
L_08A6B1E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B110;
      }
      goto L_08A6B1F0;
    }
L_08A6B1F0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1968u);
    ctx.gpr[31] = (0x08A6B20Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B20Cu) goto L_08A6B20C;
    return;
L_08A6B20C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B110;
      }
      goto L_08A6B214;
    }
L_08A6B214:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1972u);
    ctx.gpr[31] = (0x08A6B230u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B230u) goto L_08A6B230;
    return;
L_08A6B230:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B110;
      }
      goto L_08A6B238;
    }
L_08A6B238:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1978u);
    ctx.gpr[31] = (0x08A6B254u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B254u) goto L_08A6B254;
    return;
L_08A6B254:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B110;
      }
      goto L_08A6B25C;
    }
L_08A6B25C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6B270u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6B270u) goto L_08A6B270;
    return;
L_08A6B270:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B27C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 123 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A6B354;
      }
      goto L_08A6B29C;
    }
L_08A6B29C:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 156 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-123));
      if (branch_taken) {
          goto L_08A6B354;
      }
      goto L_08A6B2A8;
    }
L_08A6B2A8:
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[7]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-29656)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B2C0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2805u);
    ctx.gpr[31] = (0x08A6B2DCu);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B2DCu) goto L_08A6B2DC;
    return;
L_08A6B2DC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6B2E0;
L_08A6B2E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B364;
      }
      goto L_08A6B2E8;
    }
L_08A6B2E8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2809u);
    ctx.gpr[31] = (0x08A6B304u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B304u) goto L_08A6B304;
    return;
L_08A6B304:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B2E0;
      }
      goto L_08A6B30C;
    }
L_08A6B30C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2811u);
    ctx.gpr[31] = (0x08A6B328u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B328u) goto L_08A6B328;
    return;
L_08A6B328:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B2E0;
      }
      goto L_08A6B330;
    }
L_08A6B330:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2814u);
    ctx.gpr[31] = (0x08A6B34Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B34Cu) goto L_08A6B34C;
    return;
L_08A6B34C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B2E0;
      }
      goto L_08A6B354;
    }
L_08A6B354:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A6B364u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 207u, 0x08A6CD04u>(ctx, &aot_mem) && ctx.pc == 0x08A6B364u) goto L_08A6B364;
    return;
L_08A6B364:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B370:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 123 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A6B448;
      }
      goto L_08A6B390;
    }
L_08A6B390:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 156 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-123));
      if (branch_taken) {
          goto L_08A6B448;
      }
      goto L_08A6B39C;
    }
L_08A6B39C:
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[7]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-29520)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B3B4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5234u);
    ctx.gpr[31] = (0x08A6B3D0u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B3D0u) goto L_08A6B3D0;
    return;
L_08A6B3D0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6B3D4;
L_08A6B3D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B458;
      }
      goto L_08A6B3DC;
    }
L_08A6B3DC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5238u);
    ctx.gpr[31] = (0x08A6B3F8u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B3F8u) goto L_08A6B3F8;
    return;
L_08A6B3F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B3D4;
      }
      goto L_08A6B400;
    }
L_08A6B400:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5242u);
    ctx.gpr[31] = (0x08A6B41Cu);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B41Cu) goto L_08A6B41C;
    return;
L_08A6B41C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B3D4;
      }
      goto L_08A6B424;
    }
L_08A6B424:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5247u);
    ctx.gpr[31] = (0x08A6B440u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B440u) goto L_08A6B440;
    return;
L_08A6B440:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B3D4;
      }
      goto L_08A6B448;
    }
L_08A6B448:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A6B458u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 207u, 0x08A6CD04u>(ctx, &aot_mem) && ctx.pc == 0x08A6B458u) goto L_08A6B458;
    return;
L_08A6B458:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B464:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 123 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A6B53C;
      }
      goto L_08A6B484;
    }
L_08A6B484:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 156 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-123));
      if (branch_taken) {
          goto L_08A6B53C;
      }
      goto L_08A6B490;
    }
L_08A6B490:
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[7]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-29384)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B4A8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3749u);
    ctx.gpr[31] = (0x08A6B4C4u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B4C4u) goto L_08A6B4C4;
    return;
L_08A6B4C4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6B4C8;
L_08A6B4C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B54C;
      }
      goto L_08A6B4D0;
    }
L_08A6B4D0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3753u);
    ctx.gpr[31] = (0x08A6B4ECu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B4ECu) goto L_08A6B4EC;
    return;
L_08A6B4EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B4C8;
      }
      goto L_08A6B4F4;
    }
L_08A6B4F4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3756u);
    ctx.gpr[31] = (0x08A6B510u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B510u) goto L_08A6B510;
    return;
L_08A6B510:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B4C8;
      }
      goto L_08A6B518;
    }
L_08A6B518:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3758u);
    ctx.gpr[31] = (0x08A6B534u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B534u) goto L_08A6B534;
    return;
L_08A6B534:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B4C8;
      }
      goto L_08A6B53C;
    }
L_08A6B53C:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A6B54Cu);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6B54Cu) goto L_08A6B54C;
    return;
L_08A6B54C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B558:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 123 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A6B630;
      }
      goto L_08A6B578;
    }
L_08A6B578:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 156 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-123));
      if (branch_taken) {
          goto L_08A6B630;
      }
      goto L_08A6B584;
    }
L_08A6B584:
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[7]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-29248)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B59C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2290u);
    ctx.gpr[31] = (0x08A6B5B8u);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B5B8u) goto L_08A6B5B8;
    return;
L_08A6B5B8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6B5BC;
L_08A6B5BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B640;
      }
      goto L_08A6B5C4;
    }
L_08A6B5C4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2295u);
    ctx.gpr[31] = (0x08A6B5E0u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B5E0u) goto L_08A6B5E0;
    return;
L_08A6B5E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B5BC;
      }
      goto L_08A6B5E8;
    }
L_08A6B5E8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2299u);
    ctx.gpr[31] = (0x08A6B604u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B604u) goto L_08A6B604;
    return;
L_08A6B604:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B5BC;
      }
      goto L_08A6B60C;
    }
L_08A6B60C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2302u);
    ctx.gpr[31] = (0x08A6B628u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B628u) goto L_08A6B628;
    return;
L_08A6B628:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B5BC;
      }
      goto L_08A6B630;
    }
L_08A6B630:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A6B640u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6B640u) goto L_08A6B640;
    return;
L_08A6B640:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B64C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (0u | 155u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A6B6CC;
      }
      goto L_08A6B66C;
    }
L_08A6B66C:
    ctx.gpr[7] = (0u | 144u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 123u);
      if (branch_taken) {
          goto L_08A6B6A8;
      }
      goto L_08A6B678;
    }
L_08A6B678:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A6B6F0;
      }
      goto L_08A6B680;
    }
L_08A6B680:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2281u);
    ctx.gpr[31] = (0x08A6B69Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B69Cu) goto L_08A6B69C;
    return;
L_08A6B69C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6B6A0;
L_08A6B6A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B700;
      }
      goto L_08A6B6A8;
    }
L_08A6B6A8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2278u);
    ctx.gpr[31] = (0x08A6B6C4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B6C4u) goto L_08A6B6C4;
    return;
L_08A6B6C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B6A0;
      }
      goto L_08A6B6CC;
    }
L_08A6B6CC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2284u);
    ctx.gpr[31] = (0x08A6B6E8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B6E8u) goto L_08A6B6E8;
    return;
L_08A6B6E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B6A0;
      }
      goto L_08A6B6F0;
    }
L_08A6B6F0:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A6B700u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6B700u) goto L_08A6B700;
    return;
L_08A6B700:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B70C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 123 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A6B7E4;
      }
      goto L_08A6B72C;
    }
L_08A6B72C:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 156 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-123));
      if (branch_taken) {
          goto L_08A6B7E4;
      }
      goto L_08A6B738;
    }
L_08A6B738:
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[7]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-29112)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B750:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1060u);
    ctx.gpr[31] = (0x08A6B76Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B76Cu) goto L_08A6B76C;
    return;
L_08A6B76C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6B770;
L_08A6B770:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B7F4;
      }
      goto L_08A6B778;
    }
L_08A6B778:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1063u);
    ctx.gpr[31] = (0x08A6B794u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B794u) goto L_08A6B794;
    return;
L_08A6B794:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B770;
      }
      goto L_08A6B79C;
    }
L_08A6B79C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1065u);
    ctx.gpr[31] = (0x08A6B7B8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B7B8u) goto L_08A6B7B8;
    return;
L_08A6B7B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B770;
      }
      goto L_08A6B7C0;
    }
L_08A6B7C0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1068u);
    ctx.gpr[31] = (0x08A6B7DCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B7DCu) goto L_08A6B7DC;
    return;
L_08A6B7DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B770;
      }
      goto L_08A6B7E4;
    }
L_08A6B7E4:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A6B7F4u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6B7F4u) goto L_08A6B7F4;
    return;
L_08A6B7F4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B800:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A6B9A8;
      }
      goto L_08A6B824;
    }
L_08A6B824:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-28976)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B83C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2838u);
    ctx.gpr[31] = (0x08A6B858u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B858u) goto L_08A6B858;
    return;
L_08A6B858:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6B85C;
L_08A6B85C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B9BC;
      }
      goto L_08A6B864;
    }
L_08A6B864:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2842u);
    ctx.gpr[31] = (0x08A6B880u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B880u) goto L_08A6B880;
    return;
L_08A6B880:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B85C;
      }
      goto L_08A6B888;
    }
L_08A6B888:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2846u);
    ctx.gpr[31] = (0x08A6B8A4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B8A4u) goto L_08A6B8A4;
    return;
L_08A6B8A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B85C;
      }
      goto L_08A6B8AC;
    }
L_08A6B8AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2850u);
    ctx.gpr[31] = (0x08A6B8C8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B8C8u) goto L_08A6B8C8;
    return;
L_08A6B8C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B85C;
      }
      goto L_08A6B8D0;
    }
L_08A6B8D0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2852u);
    ctx.gpr[31] = (0x08A6B8ECu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B8ECu) goto L_08A6B8EC;
    return;
L_08A6B8EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B85C;
      }
      goto L_08A6B8F4;
    }
L_08A6B8F4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2856u);
    ctx.gpr[31] = (0x08A6B910u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B910u) goto L_08A6B910;
    return;
L_08A6B910:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B85C;
      }
      goto L_08A6B918;
    }
L_08A6B918:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2858u);
    ctx.gpr[31] = (0x08A6B934u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B934u) goto L_08A6B934;
    return;
L_08A6B934:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B85C;
      }
      goto L_08A6B93C;
    }
L_08A6B93C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2844u);
    ctx.gpr[31] = (0x08A6B958u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B958u) goto L_08A6B958;
    return;
L_08A6B958:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B85C;
      }
      goto L_08A6B960;
    }
L_08A6B960:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2848u);
    ctx.gpr[31] = (0x08A6B97Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B97Cu) goto L_08A6B97C;
    return;
L_08A6B97C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B85C;
      }
      goto L_08A6B984;
    }
L_08A6B984:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2854u);
    ctx.gpr[31] = (0x08A6B9A0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6B9A0u) goto L_08A6B9A0;
    return;
L_08A6B9A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B85C;
      }
      goto L_08A6B9A8;
    }
L_08A6B9A8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6B9BCu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6B9BCu) goto L_08A6B9BC;
    return;
L_08A6B9BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B9C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A6BB28;
      }
      goto L_08A6B9EC;
    }
L_08A6B9EC:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-28816)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BA04:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 392u);
    ctx.gpr[31] = (0x08A6BA20u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6BA20u) goto L_08A6BA20;
    return;
L_08A6BA20:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6BA24;
L_08A6BA24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BB3C;
      }
      goto L_08A6BA2C;
    }
L_08A6BA2C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 395u);
    ctx.gpr[31] = (0x08A6BA48u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6BA48u) goto L_08A6BA48;
    return;
L_08A6BA48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BA24;
      }
      goto L_08A6BA50;
    }
L_08A6BA50:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 401u);
    ctx.gpr[31] = (0x08A6BA6Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6BA6Cu) goto L_08A6BA6C;
    return;
L_08A6BA6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BA24;
      }
      goto L_08A6BA74;
    }
L_08A6BA74:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 405u);
    ctx.gpr[31] = (0x08A6BA90u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6BA90u) goto L_08A6BA90;
    return;
L_08A6BA90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BA24;
      }
      goto L_08A6BA98;
    }
L_08A6BA98:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 408u);
    ctx.gpr[31] = (0x08A6BAB4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6BAB4u) goto L_08A6BAB4;
    return;
L_08A6BAB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BA24;
      }
      goto L_08A6BABC;
    }
L_08A6BABC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 399u);
    ctx.gpr[31] = (0x08A6BAD8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6BAD8u) goto L_08A6BAD8;
    return;
L_08A6BAD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BA24;
      }
      goto L_08A6BAE0;
    }
L_08A6BAE0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 403u);
    ctx.gpr[31] = (0x08A6BAFCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6BAFCu) goto L_08A6BAFC;
    return;
L_08A6BAFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BA24;
      }
      goto L_08A6BB04;
    }
L_08A6BB04:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 410u);
    ctx.gpr[31] = (0x08A6BB20u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6BB20u) goto L_08A6BB20;
    return;
L_08A6BB20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BA24;
      }
      goto L_08A6BB28;
    }
L_08A6BB28:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6BB3Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6BB3Cu) goto L_08A6BB3C;
    return;
L_08A6BB3C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BB48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A6BCCC;
      }
      goto L_08A6BB6C;
    }
L_08A6BB6C:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-28656)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BB84:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 434u);
    ctx.gpr[31] = (0x08A6BBA0u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6BBA0u) goto L_08A6BBA0;
    return;
L_08A6BBA0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6BBA4;
L_08A6BBA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BCE0;
      }
      goto L_08A6BBAC;
    }
L_08A6BBAC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 413u);
    ctx.gpr[31] = (0x08A6BBC8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6BBC8u) goto L_08A6BBC8;
    return;
L_08A6BBC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BBA4;
      }
      goto L_08A6BBD0;
    }
L_08A6BBD0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 416u);
    ctx.gpr[31] = (0x08A6BBECu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6BBECu) goto L_08A6BBEC;
    return;
L_08A6BBEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BBA4;
      }
      goto L_08A6BBF4;
    }
L_08A6BBF4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 421u);
    ctx.gpr[31] = (0x08A6BC10u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6BC10u) goto L_08A6BC10;
    return;
L_08A6BC10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BBA4;
      }
      goto L_08A6BC18;
    }
L_08A6BC18:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 426u);
    ctx.gpr[31] = (0x08A6BC34u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6BC34u) goto L_08A6BC34;
    return;
L_08A6BC34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BBA4;
      }
      goto L_08A6BC3C;
    }
L_08A6BC3C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 429u);
    ctx.gpr[31] = (0x08A6BC58u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6BC58u) goto L_08A6BC58;
    return;
L_08A6BC58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BBA4;
      }
      goto L_08A6BC60;
    }
L_08A6BC60:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 419u);
    ctx.gpr[31] = (0x08A6BC7Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6BC7Cu) goto L_08A6BC7C;
    return;
L_08A6BC7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BBA4;
      }
      goto L_08A6BC84;
    }
L_08A6BC84:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 424u);
    ctx.gpr[31] = (0x08A6BCA0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6BCA0u) goto L_08A6BCA0;
    return;
L_08A6BCA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BBA4;
      }
      goto L_08A6BCA8;
    }
L_08A6BCA8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 431u);
    ctx.gpr[31] = (0x08A6BCC4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6BCC4u) goto L_08A6BCC4;
    return;
L_08A6BCC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BBA4;
      }
      goto L_08A6BCCC;
    }
L_08A6BCCC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6BCE0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6BCE0u) goto L_08A6BCE0;
    return;
L_08A6BCE0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BCEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A6BE4C;
      }
      goto L_08A6BD10;
    }
L_08A6BD10:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-28496)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BD28:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1986u);
    ctx.gpr[31] = (0x08A6BD44u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6BD44u) goto L_08A6BD44;
    return;
L_08A6BD44:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6BD48;
L_08A6BD48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BE60;
      }
      goto L_08A6BD50;
    }
L_08A6BD50:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1989u);
    ctx.gpr[31] = (0x08A6BD6Cu);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6BD6Cu) goto L_08A6BD6C;
    return;
L_08A6BD6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BD48;
      }
      goto L_08A6BD74;
    }
L_08A6BD74:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1994u);
    ctx.gpr[31] = (0x08A6BD90u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6BD90u) goto L_08A6BD90;
    return;
L_08A6BD90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BD48;
      }
      goto L_08A6BD98;
    }
L_08A6BD98:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1998u);
    ctx.gpr[31] = (0x08A6BDB4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6BDB4u) goto L_08A6BDB4;
    return;
L_08A6BDB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BD48;
      }
      goto L_08A6BDBC;
    }
L_08A6BDBC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2001u);
    ctx.gpr[31] = (0x08A6BDD8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6BDD8u) goto L_08A6BDD8;
    return;
L_08A6BDD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BD48;
      }
      goto L_08A6BDE0;
    }
L_08A6BDE0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1992u);
    ctx.gpr[31] = (0x08A6BDFCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6BDFCu) goto L_08A6BDFC;
    return;
L_08A6BDFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BD48;
      }
      goto L_08A6BE04;
    }
L_08A6BE04:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1996u);
    ctx.gpr[31] = (0x08A6BE20u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6BE20u) goto L_08A6BE20;
    return;
L_08A6BE20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BD48;
      }
      goto L_08A6BE28;
    }
L_08A6BE28:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2003u);
    ctx.gpr[31] = (0x08A6BE44u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6BE44u) goto L_08A6BE44;
    return;
L_08A6BE44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BD48;
      }
      goto L_08A6BE4C;
    }
L_08A6BE4C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6BE60u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6BE60u) goto L_08A6BE60;
    return;
L_08A6BE60:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BE6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A6BFCC;
      }
      goto L_08A6BE90;
    }
L_08A6BE90:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-28336)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BEA8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2010u);
    ctx.gpr[31] = (0x08A6BEC4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6BEC4u) goto L_08A6BEC4;
    return;
L_08A6BEC4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6BEC8;
L_08A6BEC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BFE0;
      }
      goto L_08A6BED0;
    }
L_08A6BED0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2013u);
    ctx.gpr[31] = (0x08A6BEECu);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6BEECu) goto L_08A6BEEC;
    return;
L_08A6BEEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BEC8;
      }
      goto L_08A6BEF4;
    }
L_08A6BEF4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2019u);
    ctx.gpr[31] = (0x08A6BF10u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6BF10u) goto L_08A6BF10;
    return;
L_08A6BF10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BEC8;
      }
      goto L_08A6BF18;
    }
L_08A6BF18:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2023u);
    ctx.gpr[31] = (0x08A6BF34u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6BF34u) goto L_08A6BF34;
    return;
L_08A6BF34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BEC8;
      }
      goto L_08A6BF3C;
    }
L_08A6BF3C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2026u);
    ctx.gpr[31] = (0x08A6BF58u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6BF58u) goto L_08A6BF58;
    return;
L_08A6BF58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BEC8;
      }
      goto L_08A6BF60;
    }
L_08A6BF60:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2017u);
    ctx.gpr[31] = (0x08A6BF7Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6BF7Cu) goto L_08A6BF7C;
    return;
L_08A6BF7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BEC8;
      }
      goto L_08A6BF84;
    }
L_08A6BF84:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2021u);
    ctx.gpr[31] = (0x08A6BFA0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6BFA0u) goto L_08A6BFA0;
    return;
L_08A6BFA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BEC8;
      }
      goto L_08A6BFA8;
    }
L_08A6BFA8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2028u);
    ctx.gpr[31] = (0x08A6BFC4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6BFC4u) goto L_08A6BFC4;
    return;
L_08A6BFC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BEC8;
      }
      goto L_08A6BFCC;
    }
L_08A6BFCC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6BFE0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6BFE0u) goto L_08A6BFE0;
    return;
L_08A6BFE0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BFEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.pc = 0x08A6C000u; return;
}

void recomp_unit_0153(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0153_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_153(Runtime &runtime) {
    runtime.register_generated_unit(153u, 0x08A68000u, 16384u, &recomp_unit_0153, &recomp_unit_0153_entry);
    runtime.register_function(0x08A68000u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6800Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68018u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6803Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68054u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68070u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68074u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6807Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68098u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A680A0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A680BCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A680C4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A680E0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A680E8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68104u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6810Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68128u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68130u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6814Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68154u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68170u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68178u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68194u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6819Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A681B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A681C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A681DCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A681E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68200u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68208u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68224u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6822Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68248u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68250u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6826Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68274u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68288u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68294u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A682B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A682D0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A682ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A682F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A682F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68314u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6831Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68338u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68340u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6835Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68364u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68380u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68388u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A683A4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A683ACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A683C8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A683D0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A683ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A683F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68410u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68418u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68434u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6843Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68458u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68460u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6847Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68484u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A684A0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A684A8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A684BCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A684C8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A684ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68504u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68520u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68524u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6852Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68548u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68550u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6856Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68574u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68590u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68598u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A685B4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A685BCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A685D8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A685E0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A685FCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68604u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68620u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68628u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68644u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6864Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68668u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68670u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6868Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68694u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A686B0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A686B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A686D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A686DCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A686F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68700u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6871Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68724u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68740u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68748u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6875Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68768u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6878Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A687A4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A687C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A687C4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A687CCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A687E8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A687F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6880Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68814u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68830u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68838u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68854u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6885Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68878u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68880u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6889Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A688A4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A688C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A688C8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A688E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A688ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68908u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68910u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6892Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68934u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68950u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68958u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68974u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6897Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68998u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A689A0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A689B0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A689C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A689D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A689E0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68A04u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68A1Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68A38u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68A3Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68A44u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68A60u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68A68u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68A84u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68A8Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68AA8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68AB0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68ACCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68AD4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68AF0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68AF8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68B14u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68B1Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68B38u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68B40u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68B5Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68B64u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68B80u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68B88u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68BA4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68BACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68BC8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68BD0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68BE0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68BFCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68C04u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68C20u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68C28u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68C3Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68C48u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68C6Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68C84u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68CA0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68CA4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68CACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68CC8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68CD0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68CECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68CF4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68D10u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68D18u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68D34u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68D3Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68D58u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68D60u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68D7Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68D84u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68DA0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68DA8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68DC4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68DCCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68DE8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68DF0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68E0Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68E14u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68E24u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68E40u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68E48u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68E5Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68E68u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68E8Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68EA4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68EC0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68EC4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68ECCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68EE8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68EF0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68F0Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68F14u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68F30u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68F38u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68F54u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68F5Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68F78u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68F80u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68F9Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68FA4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68FC0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68FC8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68FE4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68FECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69008u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69010u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6902Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69034u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69044u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69060u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69068u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69078u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6908Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69098u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A690BCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A690D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A690F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A690F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A690FCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69118u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69120u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6913Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69144u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69160u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69168u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69184u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6918Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A691A8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A691B0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A691CCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A691D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A691F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A691F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69214u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6921Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69238u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69240u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69250u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69260u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69274u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69280u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69288u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69290u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A692B4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A692CCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A692E8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A692ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A692F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69310u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69318u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69334u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6933Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69358u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69360u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6937Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69384u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A693A0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A693A8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A693C4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A693CCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A693E8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A693F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6940Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69414u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69430u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69438u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6944Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69458u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6947Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69494u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A694B0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A694B4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A694BCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A694D8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A694E0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A694FCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69504u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69520u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69528u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69544u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6954Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69568u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69570u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6958Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69594u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A695B0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A695B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A695D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A695DCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A695F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69600u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69614u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69620u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69644u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6965Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69678u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6967Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69684u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A696A0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A696A8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A696C4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A696CCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A696E8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A696F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6970Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69714u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69730u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69738u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69754u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6975Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69778u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69780u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6979Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A697A4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A697B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A697C4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A697E8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69800u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6981Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69820u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69828u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69844u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6984Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69868u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69870u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6988Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69894u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A698B0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A698B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A698D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A698DCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A698F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69900u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6991Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69924u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69940u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69948u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69964u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6996Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69980u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6998Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A699B0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A699C8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A699E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A699E8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A699F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69A0Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69A14u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69A30u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69A38u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69A54u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69A5Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69A78u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69A80u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69A9Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69AA4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69AC0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69AC8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69AE4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69AECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69B08u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69B10u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69B2Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69B34u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69B48u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69B54u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69B78u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69B90u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69BACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69BB0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69BB8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69BD4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69BDCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69BF8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69C00u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69C1Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69C24u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69C40u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69C48u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69C64u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69C6Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69C88u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69C90u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69CACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69CB4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69CD0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69CD8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69CF4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69CFCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69D10u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69D1Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69D40u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69D58u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69D74u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69D78u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69D80u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69D9Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69DA4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69DC0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69DC8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69DE4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69DECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69E08u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69E10u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69E2Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69E34u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69E50u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69E58u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69E74u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69E7Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69E98u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69EA0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69EBCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69EC4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69ED8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69EE4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69F08u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69F20u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69F3Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69F40u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69F48u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69F64u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69F6Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69F88u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69F90u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69FACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69FB4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69FD0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69FD8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69FF4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69FFCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A018u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A020u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A03Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A044u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A060u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A068u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A084u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A08Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A0A0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A0ACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A0D0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A0E8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A104u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A108u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A110u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A12Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A134u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A150u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A158u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A174u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A17Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A198u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A1A0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A1BCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A1C4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A1E0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A1E8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A204u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A20Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A228u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A230u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A24Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A254u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A268u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A274u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A298u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A2B0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A2CCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A2D0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A2D8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A2F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A2FCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A318u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A320u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A33Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A344u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A360u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A368u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A384u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A38Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A3A8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A3B0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A3CCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A3D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A3F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A3F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A414u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A41Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A430u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A43Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A460u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A478u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A494u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A498u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A4A0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A4BCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A4C4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A4E0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A4E8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A504u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A50Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A528u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A530u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A54Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A554u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A570u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A578u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A594u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A59Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A5B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A5C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A5DCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A5E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A5F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A604u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A628u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A640u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A65Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A660u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A668u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A684u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A68Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A6A8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A6B0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A6CCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A6D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A6F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A6F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A714u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A71Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A738u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A740u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A75Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A764u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A780u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A788u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A7A4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A7ACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A7C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A7CCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A7F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A808u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A824u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A828u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A830u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A84Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A854u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A870u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A878u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A894u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A89Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A8B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A8C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A8DCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A8E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A900u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A908u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A924u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A92Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A948u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A950u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A96Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A974u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A988u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A994u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A9B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A9D0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A9ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A9F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A9F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AA14u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AA1Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AA38u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AA40u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AA5Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AA64u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AA80u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AA88u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AAA4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AAACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AAC8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AAD0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AAECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AAF4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AB10u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AB18u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AB34u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AB3Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AB50u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AB5Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AB80u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AB98u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ABB4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ABB8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ABC0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ABDCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ABE4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AC00u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AC08u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AC24u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AC2Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AC48u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AC50u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AC6Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AC74u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AC90u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AC98u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ACB4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ACBCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ACD8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ACE0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ACFCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AD04u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AD18u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AD24u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AD48u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AD60u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AD7Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AD80u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AD88u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ADA4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ADACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ADC8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ADD0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ADECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ADF4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AE10u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AE18u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AE34u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AE3Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AE58u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AE60u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AE7Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AE84u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AEA0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AEA8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AEC4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AECCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AEE0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AEECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AF10u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AF28u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AF44u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AF48u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AF50u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AF6Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AF74u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AF90u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AF98u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AFB4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AFBCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AFD8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AFE0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AFFCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B004u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B020u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B028u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B044u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B04Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B068u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B070u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B08Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B094u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B0A8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B0B4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B0D8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B0F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B10Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B110u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B118u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B134u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B13Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B158u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B160u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B17Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B184u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B1A0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B1A8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B1C4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B1CCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B1E8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B1F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B20Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B214u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B230u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B238u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B254u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B25Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B270u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B27Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B29Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B2A8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B2C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B2DCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B2E0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B2E8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B304u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B30Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B328u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B330u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B34Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B354u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B364u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B370u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B390u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B39Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B3B4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B3D0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B3D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B3DCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B3F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B400u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B41Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B424u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B440u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B448u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B458u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B464u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B484u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B490u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B4A8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B4C4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B4C8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B4D0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B4ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B4F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B510u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B518u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B534u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B53Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B54Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B558u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B578u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B584u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B59Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B5B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B5BCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B5C4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B5E0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B5E8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B604u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B60Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B628u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B630u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B640u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B64Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B66Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B678u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B680u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B69Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B6A0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B6A8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B6C4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B6CCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B6E8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B6F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B700u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B70Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B72Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B738u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B750u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B76Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B770u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B778u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B794u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B79Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B7B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B7C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B7DCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B7E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B7F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B800u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B824u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B83Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B858u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B85Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B864u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B880u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B888u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B8A4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B8ACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B8C8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B8D0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B8ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B8F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B910u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B918u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B934u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B93Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B958u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B960u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B97Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B984u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B9A0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B9A8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B9BCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B9C8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B9ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BA04u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BA20u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BA24u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BA2Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BA48u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BA50u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BA6Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BA74u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BA90u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BA98u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BAB4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BABCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BAD8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BAE0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BAFCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BB04u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BB20u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BB28u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BB3Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BB48u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BB6Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BB84u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BBA0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BBA4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BBACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BBC8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BBD0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BBECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BBF4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BC10u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BC18u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BC34u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BC3Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BC58u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BC60u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BC7Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BC84u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BCA0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BCA8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BCC4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BCCCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BCE0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BCECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BD10u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BD28u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BD44u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BD48u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BD50u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BD6Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BD74u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BD90u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BD98u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BDB4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BDBCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BDD8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BDE0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BDFCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE04u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE20u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE28u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE44u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE4Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE60u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE6Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE90u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BEA8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BEC4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BEC8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BED0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BEECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BEF4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF10u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF18u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF34u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF3Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF58u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF60u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF7Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF84u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BFA0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BFA8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BFC4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BFCCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BFE0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BFECu, &recomp_unit_0153, "recomp_unit_0153");
}
} // namespace psprecomp
