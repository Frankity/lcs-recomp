#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0191[4090] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 8,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0,
    0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 25, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0,
    0, 0, 0, 33, 0, 34, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 47, 0, 0,
    48, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0,
    0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0,
    0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0,
    65, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 72, 0,
    0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0,
    78, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83,
    0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0,
    91, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0,
    0, 0, 0, 0, 0, 98, 0, 99, 0, 100, 0, 0, 101, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0,
    0, 0, 105, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 112, 0, 0, 113, 0,
    0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 117, 0, 0, 118, 0, 119, 0, 120, 0, 0, 0, 0, 121, 122,
    0, 123, 0, 124, 0, 125, 0, 126, 0, 127, 0, 128, 0, 129, 0, 130, 0, 0, 131, 0, 132, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 135,
    136, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 142, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 147, 148, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 156,
    0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0,
    164, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 169, 0, 170, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0,
    173, 0, 174, 175, 0, 176, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 181, 182, 0, 0, 0, 183, 0, 184, 0,
    185, 0, 0, 186, 0, 0, 0, 187, 0, 188, 189, 0, 190, 191, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194,
    0, 0, 0, 0, 195, 0, 0, 196, 0, 197, 0, 198, 0, 199, 0, 0, 0, 200, 0, 201, 0, 0, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0,
    205, 0, 206, 0, 0, 207, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 210, 0, 0, 211, 0, 0, 212, 0, 213, 0, 0, 214, 0, 0, 0, 0,
    0, 0, 215, 0, 216, 0, 0, 217, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0,
    222, 0, 0, 223, 0, 0, 224, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0,
    0, 235, 0, 0, 236, 0, 0, 0, 237, 0, 0, 238, 0, 239, 240, 0, 241, 0, 0, 0, 242, 0, 0, 243, 0, 244, 0, 245, 0, 246, 0, 0,
    0, 247, 0, 0, 248, 0, 249, 250, 0, 251, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 256,
    0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 262, 0, 263, 0, 0, 0, 0, 0, 0, 264,
    0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 267, 0, 268, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0,
    0, 273, 0, 274, 275, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0,
    0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 286, 0, 287, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 288, 289, 0, 290, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293, 294, 0, 295, 0, 0, 296,
    0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 301, 302, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 306, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0,
    0, 0, 0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 315, 0, 0, 0, 0, 0,
    316, 0, 0, 317, 0, 318, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 323, 324, 0, 0, 0, 0, 325, 0,
    0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 333, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0,
    0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 338, 0, 339, 0, 0, 0, 340, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 346, 0, 0, 0,
    347, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 351, 352, 0, 0, 353, 0, 0, 354, 0, 355, 0, 356, 0, 0, 357, 358, 0, 359,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0,
    0, 362, 0, 0, 363, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 366, 0, 0, 367, 0, 368, 0, 369, 0, 370, 371, 0, 372,
    0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 376, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 380, 0, 381,
    0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 384, 0, 0, 385, 0, 386, 0, 0, 0, 0, 387, 0, 388, 0, 0, 0, 0, 0,
    0, 389, 0, 0, 0, 390, 0, 0, 391, 0, 392, 393, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 398,
    399, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0,
    0, 0, 0, 410, 411, 0, 0, 412, 0, 413, 0, 0, 414, 0, 415, 0, 0, 416, 0, 417, 0, 0, 418, 0, 419, 0, 420, 0, 0, 0, 0, 0,
    0, 0, 421, 0, 422, 0, 423, 424, 0, 425, 0, 426, 0, 0, 0, 427, 0, 428, 0, 0, 0, 429, 0, 430, 431, 0, 0, 432, 0, 433, 0, 434,
    0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 0, 0, 441, 0, 442, 0, 0, 443, 0, 444, 0, 0, 445, 0, 0, 0, 0, 0, 0, 446,
    0, 0, 447, 0, 0, 0, 448, 0, 0, 449, 0, 450, 0, 451, 0, 0, 0, 452, 0, 0, 453, 0, 454, 455, 0, 456, 0, 457, 0, 0, 0, 0,
    458, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 462, 0, 463, 0,
    464, 0, 465, 0, 466, 0, 0, 467, 0, 468, 0, 469, 0, 470, 0, 471, 0, 0, 472, 0, 473, 0, 474, 0, 475, 0, 476, 0, 0, 0, 0, 0,
    477, 0, 0, 478, 479, 0, 480, 0, 481, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 487, 0, 0, 0, 0, 488, 0, 0, 0, 0, 489, 0,
    0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 491, 0, 0, 492, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 495, 0,
    0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 499, 0, 0, 500, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 503,
    504, 0, 0, 0, 0, 505, 0, 506, 0, 507, 0, 508, 0, 0, 0, 0, 509, 0, 0, 510, 0, 511, 512, 0, 0, 0, 513, 0, 0, 514, 0, 515,
    0, 516, 0, 0, 0, 517, 0, 0, 518, 0, 519, 0, 0, 0, 520, 0, 0, 521, 0, 522, 523, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 525,
    0, 0, 0, 0, 0, 0, 526, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 529, 0, 0, 530, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 532, 533, 0, 0, 0, 0, 0, 0, 534, 0, 0, 535, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 537, 0, 0, 0, 0, 0, 538, 0,
    539, 0, 0, 0, 540, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 545, 0, 546, 0, 547, 0,
    0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 550, 0, 0, 551, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 554, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 556, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 560, 561, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0,
    0, 0, 566, 0, 0, 567, 0, 0, 0, 0, 0, 0, 568, 0, 0, 569, 0, 0, 0, 0, 0, 0, 570, 0, 0, 571, 0, 0, 0, 0, 0, 0,
    0, 572, 0, 0, 573, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 576, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 579, 0, 580, 0, 0, 581, 0, 0, 0, 0,
    582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 584, 0, 0, 585, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 588, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 593, 0, 0, 594, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 603, 0,
    0, 0, 604, 0, 0, 605, 0, 0, 0, 0, 0, 606, 0, 0, 0, 607, 0, 608, 0, 609, 0, 0, 610, 0, 0, 0, 611, 0, 0, 0, 612, 0,
    0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 614, 0, 615, 0, 0, 616, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 618, 0, 619,
    0, 620, 0, 0, 621, 0, 622, 623, 0, 624, 0, 625, 0, 0, 0, 0, 626, 0, 0, 627, 0, 0, 0, 628, 0, 0, 629, 0, 630, 0, 0, 0,
    631, 0, 632, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 634, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 637, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 641, 0, 0, 642, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0,
    0, 0, 0, 0, 0, 645, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 647, 0, 0, 648, 0, 649, 0, 650, 0, 651, 652, 0, 653, 0, 654, 0,
    0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 656, 0, 0, 657, 0, 0, 0, 658, 0, 0, 659, 0, 660, 661, 0, 662, 0, 0, 663, 0, 0, 0,
    0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 669, 0, 0, 0, 670, 0, 0,
    0, 671, 0, 0, 0, 0, 0, 0, 672, 0, 673, 0, 674, 675, 0, 676, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 678, 0, 0, 679, 0,
    0, 680, 0, 681, 0, 0, 0, 0, 682, 0, 683, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 685, 0, 0, 686, 0, 687, 688, 0, 0, 0, 689,
    0, 0, 0, 0, 690, 0, 691, 0, 0, 692, 0, 0, 0, 693, 0, 0, 694, 0, 695, 696, 0, 0, 697, 0, 0, 0, 698, 0, 0, 0, 0, 0,
    0, 0, 699, 0, 0, 0, 700, 0, 0, 0, 701, 0, 0, 702, 703, 0, 0, 0, 704, 0, 0, 0, 0, 705, 0, 0, 706, 0, 0, 0, 0, 0,
    0, 0, 707, 708, 0, 0, 709, 0, 710, 0, 0, 711, 0, 712, 0, 0, 713, 0, 714, 0, 0, 715, 0, 716, 0, 717, 0, 0, 0, 0, 0, 0,
    0, 718, 0, 719, 0, 720, 721, 0, 722, 0, 723, 0, 0, 0, 724, 0, 725, 0, 0, 0, 726, 0, 727, 728, 0, 0, 729, 0, 730, 0, 731, 0,
    0, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 733, 0, 734, 0, 735, 0, 0, 0, 736, 0, 0, 737, 738, 0, 739, 0, 740, 0, 0, 0, 0,
    741, 0, 0, 0, 0, 742, 0, 0, 0, 743, 0, 0, 0, 744, 0, 0, 745, 0, 746, 0, 0, 0, 747, 0, 748, 0, 0, 0, 0, 0, 0, 749,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 750, 0, 751, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 752, 753, 0, 754, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 756, 0, 0, 0, 757, 0,
    0, 0, 758, 759, 0, 760, 761, 0, 0, 0, 0, 762, 0, 0, 763, 0, 0, 0, 764, 0, 0, 0, 765, 766, 0, 767, 768, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 769, 0, 770, 0, 0, 0, 0, 0, 0, 0, 771, 772, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 773, 0, 0,
    0, 0, 0, 0, 0, 774, 0, 0, 775, 0, 0, 0, 0, 776, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 777, 778, 0, 0, 0, 0, 0, 779,
    0, 0, 0, 780, 0, 0, 0, 0, 0, 0, 781, 0, 0, 782, 0, 783, 784, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0, 0, 0, 0, 0, 0,
    0, 0, 786, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 787, 0, 788, 0, 789, 0, 0, 0, 0, 0, 0, 0, 790, 0, 0, 0, 0, 791, 0,
    0, 0, 0, 792, 0, 0, 0, 793, 0, 0, 794, 0, 0, 795, 0, 0, 0, 796, 0, 0, 0, 0, 0, 0, 0, 797, 0, 0, 0, 0, 0, 798,
    0, 0, 0, 799, 0, 800, 0, 0, 0, 0, 801, 0, 0, 0, 0, 802, 0, 0, 0, 803, 0, 0, 804, 0, 0, 805, 0, 0, 0, 806, 0, 0,
    0, 0, 0, 0, 0, 0, 807, 808, 0, 0, 0, 0, 0, 0, 809, 0, 0, 0, 0, 0, 0, 0, 0, 0, 810, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 811, 0, 0, 0, 0, 0, 0, 0, 812, 0, 0, 813, 814, 0, 815, 0, 816, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 817, 0, 818, 0, 819, 0, 0, 0, 0, 0, 0, 820, 0, 0, 0, 0, 821, 0, 0, 0, 0, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0,
    0, 0, 823, 0, 0, 0, 0, 824, 0, 0, 0, 825, 0, 0, 0, 0, 0, 0, 0, 826, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 827, 0, 0, 828, 0, 0, 0, 0, 0, 0, 0, 0, 0, 829, 0, 0, 0, 0, 0, 0, 830, 0, 831, 0, 0, 0, 832, 0, 0, 833,
    0, 0, 0, 0, 0, 0, 0, 0, 834, 0, 0, 835, 0, 0, 0, 836, 0, 0, 0, 0, 0, 0, 0, 0, 0, 837, 0, 838, 0, 0, 0, 0,
    0, 0, 839, 0, 840, 0, 0, 841, 0, 0, 0, 0, 842, 0, 0, 0, 0, 0, 0, 843, 0, 844, 0, 0, 0, 0, 0, 0, 845, 0, 846, 0,
    0, 0, 847, 0, 0, 848, 0, 0, 0, 849, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 850, 0, 0, 0, 0, 0, 0, 0, 0, 851, 0,
    852, 0, 0, 0, 853, 0, 0, 854, 0, 0, 855, 0, 0, 0, 0, 0, 0, 0, 0, 0, 856, 0, 0, 0, 0, 0, 0, 0, 0, 0, 857, 0,
    0, 0, 0, 858, 0, 0, 0, 0, 0, 0, 859, 0, 860, 0, 0, 0, 0, 0, 0, 861, 0, 862, 0, 0, 863, 0, 0, 864, 0, 0, 0, 0,
    0, 0, 865, 0, 866, 0, 867, 0, 0, 0, 868, 0, 0, 0, 0, 0, 0, 0, 0, 0, 869, 0, 0, 0, 0, 870,
};
void recomp_unit_0191_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B00000u;
        entry_id = (entry_delta < 16360u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0191[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B00000;
    case 2u: goto L_08B00018;
    case 3u: goto L_08B00020;
    case 4u: goto L_08B00030;
    case 5u: goto L_08B0003C;
    case 6u: goto L_08B00060;
    case 7u: goto L_08B0006C;
    case 8u: goto L_08B0007C;
    case 9u: goto L_08B000A4;
    case 10u: goto L_08B000AC;
    case 11u: goto L_08B000C8;
    case 12u: goto L_08B000D0;
    case 13u: goto L_08B000DC;
    case 14u: goto L_08B000F0;
    case 15u: goto L_08B0010C;
    case 16u: goto L_08B00114;
    case 17u: goto L_08B00130;
    case 18u: goto L_08B00138;
    case 19u: goto L_08B00148;
    case 20u: goto L_08B00154;
    case 21u: goto L_08B00164;
    case 22u: goto L_08B00194;
    case 23u: goto L_08B001B8;
    case 24u: goto L_08B001C0;
    case 25u: goto L_08B001D0;
    case 26u: goto L_08B001DC;
    case 27u: goto L_08B001E8;
    case 28u: goto L_08B00210;
    case 29u: goto L_08B00238;
    case 30u: goto L_08B0024C;
    case 31u: goto L_08B00268;
    case 32u: goto L_08B00270;
    case 33u: goto L_08B0028C;
    case 34u: goto L_08B00294;
    case 35u: goto L_08B002A0;
    case 36u: goto L_08B002AC;
    case 37u: goto L_08B002C8;
    case 38u: goto L_08B002D0;
    case 39u: goto L_08B002D8;
    case 40u: goto L_08B002E8;
    case 41u: goto L_08B00310;
    case 42u: goto L_08B00324;
    case 43u: goto L_08B00340;
    case 44u: goto L_08B00348;
    case 45u: goto L_08B00364;
    case 46u: goto L_08B0036C;
    case 47u: goto L_08B00374;
    case 48u: goto L_08B00380;
    case 49u: goto L_08B00390;
    case 50u: goto L_08B0039C;
    case 51u: goto L_08B003BC;
    case 52u: goto L_08B003F8;
    case 53u: goto L_08B00404;
    case 54u: goto L_08B0042C;
    case 55u: goto L_08B00448;
    case 56u: goto L_08B00450;
    case 57u: goto L_08B00460;
    case 58u: goto L_08B0046C;
    case 59u: goto L_08B00490;
    case 60u: goto L_08B0049C;
    case 61u: goto L_08B004AC;
    case 62u: goto L_08B004D4;
    case 63u: goto L_08B004DC;
    case 64u: goto L_08B004F8;
    case 65u: goto L_08B00500;
    case 66u: goto L_08B0050C;
    case 67u: goto L_08B00520;
    case 68u: goto L_08B0053C;
    case 69u: goto L_08B00544;
    case 70u: goto L_08B00560;
    case 71u: goto L_08B00568;
    case 72u: goto L_08B00578;
    case 73u: goto L_08B00584;
    case 74u: goto L_08B00594;
    case 75u: goto L_08B005C4;
    case 76u: goto L_08B005E8;
    case 77u: goto L_08B005F0;
    case 78u: goto L_08B00600;
    case 79u: goto L_08B0060C;
    case 80u: goto L_08B00618;
    case 81u: goto L_08B00640;
    case 82u: goto L_08B00668;
    case 83u: goto L_08B0067C;
    case 84u: goto L_08B00698;
    case 85u: goto L_08B006A0;
    case 86u: goto L_08B006BC;
    case 87u: goto L_08B006C4;
    case 88u: goto L_08B006D0;
    case 89u: goto L_08B006DC;
    case 90u: goto L_08B006F8;
    case 91u: goto L_08B00700;
    case 92u: goto L_08B00708;
    case 93u: goto L_08B00718;
    case 94u: goto L_08B00740;
    case 95u: goto L_08B00754;
    case 96u: goto L_08B00770;
    case 97u: goto L_08B00778;
    case 98u: goto L_08B00794;
    case 99u: goto L_08B0079C;
    case 100u: goto L_08B007A4;
    case 101u: goto L_08B007B0;
    case 102u: goto L_08B007C0;
    case 103u: goto L_08B007CC;
    case 104u: goto L_08B007EC;
    case 105u: goto L_08B00808;
    case 106u: goto L_08B00810;
    case 107u: goto L_08B00824;
    case 108u: goto L_08B00834;
    case 109u: goto L_08B0084C;
    case 110u: goto L_08B00858;
    case 111u: goto L_08B00864;
    case 112u: goto L_08B0086C;
    case 113u: goto L_08B00878;
    case 114u: goto L_08B0089C;
    case 115u: goto L_08B008B8;
    case 116u: goto L_08B008C0;
    case 117u: goto L_08B008C8;
    case 118u: goto L_08B008D4;
    case 119u: goto L_08B008DC;
    case 120u: goto L_08B008E4;
    case 121u: goto L_08B008F8;
    case 122u: goto L_08B008FC;
    case 123u: goto L_08B00904;
    case 124u: goto L_08B0090C;
    case 125u: goto L_08B00914;
    case 126u: goto L_08B0091C;
    case 127u: goto L_08B00924;
    case 128u: goto L_08B0092C;
    case 129u: goto L_08B00934;
    case 130u: goto L_08B0093C;
    case 131u: goto L_08B00948;
    case 132u: goto L_08B00950;
    case 133u: goto L_08B00958;
    case 134u: goto L_08B00970;
    case 135u: goto L_08B0097C;
    case 136u: goto L_08B00980;
    case 137u: goto L_08B00988;
    case 138u: goto L_08B00990;
    case 139u: goto L_08B009AC;
    case 140u: goto L_08B009D0;
    case 141u: goto L_08B009DC;
    case 142u: goto L_08B009E4;
    case 143u: goto L_08B009F0;
    case 144u: goto L_08B00A0C;
    case 145u: goto L_08B00A28;
    case 146u: goto L_08B00A34;
    case 147u: goto L_08B00A3C;
    case 148u: goto L_08B00A40;
    case 149u: goto L_08B00A4C;
    case 150u: goto L_08B00A58;
    case 151u: goto L_08B00A6C;
    case 152u: goto L_08B00AC0;
    case 153u: goto L_08B00AD0;
    case 154u: goto L_08B00ADC;
    case 155u: goto L_08B00AE4;
    case 156u: goto L_08B00AFC;
    case 157u: goto L_08B00B14;
    case 158u: goto L_08B00B28;
    case 159u: goto L_08B00B38;
    case 160u: goto L_08B00B48;
    case 161u: goto L_08B00B54;
    case 162u: goto L_08B00B68;
    case 163u: goto L_08B00B78;
    case 164u: goto L_08B00B80;
    case 165u: goto L_08B00B90;
    case 166u: goto L_08B00B9C;
    case 167u: goto L_08B00BB0;
    case 168u: goto L_08B00BBC;
    case 169u: goto L_08B00BC8;
    case 170u: goto L_08B00BD0;
    case 171u: goto L_08B00BDC;
    case 172u: goto L_08B00BF0;
    case 173u: goto L_08B00C00;
    case 174u: goto L_08B00C08;
    case 175u: goto L_08B00C0C;
    case 176u: goto L_08B00C14;
    case 177u: goto L_08B00C24;
    case 178u: goto L_08B00C30;
    case 179u: goto L_08B00C44;
    case 180u: goto L_08B00C54;
    case 181u: goto L_08B00C5C;
    case 182u: goto L_08B00C60;
    case 183u: goto L_08B00C70;
    case 184u: goto L_08B00C78;
    case 185u: goto L_08B00C80;
    case 186u: goto L_08B00C8C;
    case 187u: goto L_08B00C9C;
    case 188u: goto L_08B00CA4;
    case 189u: goto L_08B00CA8;
    case 190u: goto L_08B00CB0;
    case 191u: goto L_08B00CB4;
    case 192u: goto L_08B00CBC;
    case 193u: goto L_08B00CC4;
    case 194u: goto L_08B00CFC;
    case 195u: goto L_08B00D10;
    case 196u: goto L_08B00D1C;
    case 197u: goto L_08B00D24;
    case 198u: goto L_08B00D2C;
    case 199u: goto L_08B00D34;
    case 200u: goto L_08B00D44;
    case 201u: goto L_08B00D4C;
    case 202u: goto L_08B00D5C;
    case 203u: goto L_08B00D68;
    case 204u: goto L_08B00D74;
    case 205u: goto L_08B00D80;
    case 206u: goto L_08B00D88;
    case 207u: goto L_08B00D94;
    case 208u: goto L_08B00DA4;
    case 209u: goto L_08B00DB0;
    case 210u: goto L_08B00DC0;
    case 211u: goto L_08B00DCC;
    case 212u: goto L_08B00DD8;
    case 213u: goto L_08B00DE0;
    case 214u: goto L_08B00DEC;
    case 215u: goto L_08B00E08;
    case 216u: goto L_08B00E10;
    case 217u: goto L_08B00E1C;
    case 218u: goto L_08B00E24;
    case 219u: goto L_08B00E38;
    case 220u: goto L_08B00E50;
    case 221u: goto L_08B00E64;
    case 222u: goto L_08B00E80;
    case 223u: goto L_08B00E8C;
    case 224u: goto L_08B00E98;
    case 225u: goto L_08B00EA0;
    case 226u: goto L_08B00EB4;
    case 227u: goto L_08B00EC8;
    case 228u: goto L_08B00EDC;
    case 229u: goto L_08B00F1C;
    case 230u: goto L_08B00F28;
    case 231u: goto L_08B00F34;
    case 232u: goto L_08B00F48;
    case 233u: goto L_08B00F5C;
    case 234u: goto L_08B00F78;
    case 235u: goto L_08B00F84;
    case 236u: goto L_08B00F90;
    case 237u: goto L_08B00FA0;
    case 238u: goto L_08B00FAC;
    case 239u: goto L_08B00FB4;
    case 240u: goto L_08B00FB8;
    case 241u: goto L_08B00FC0;
    case 242u: goto L_08B00FD0;
    case 243u: goto L_08B00FDC;
    case 244u: goto L_08B00FE4;
    case 245u: goto L_08B00FEC;
    case 246u: goto L_08B00FF4;
    case 247u: goto L_08B01004;
    case 248u: goto L_08B01010;
    case 249u: goto L_08B01018;
    case 250u: goto L_08B0101C;
    case 251u: goto L_08B01024;
    case 252u: goto L_08B0102C;
    case 253u: goto L_08B01040;
    case 254u: goto L_08B0105C;
    case 255u: goto L_08B01070;
    case 256u: goto L_08B0107C;
    case 257u: goto L_08B01090;
    case 258u: goto L_08B0109C;
    case 259u: goto L_08B010A8;
    case 260u: goto L_08B010B8;
    case 261u: goto L_08B010D4;
    case 262u: goto L_08B010D8;
    case 263u: goto L_08B010E0;
    case 264u: goto L_08B010FC;
    case 265u: goto L_08B01110;
    case 266u: goto L_08B0111C;
    case 267u: goto L_08B01128;
    case 268u: goto L_08B01130;
    case 269u: goto L_08B01144;
    case 270u: goto L_08B0114C;
    case 271u: goto L_08B01168;
    case 272u: goto L_08B01178;
    case 273u: goto L_08B01184;
    case 274u: goto L_08B0118C;
    case 275u: goto L_08B01190;
    case 276u: goto L_08B011A0;
    case 277u: goto L_08B011B0;
    case 278u: goto L_08B011C0;
    case 279u: goto L_08B011CC;
    case 280u: goto L_08B011E8;
    case 281u: goto L_08B011F8;
    case 282u: goto L_08B01208;
    case 283u: goto L_08B01234;
    case 284u: goto L_08B01240;
    case 285u: goto L_08B01254;
    case 286u: goto L_08B01260;
    case 287u: goto L_08B01268;
    case 288u: goto L_08B012A0;
    case 289u: goto L_08B012A4;
    case 290u: goto L_08B012AC;
    case 291u: goto L_08B012B8;
    case 292u: goto L_08B012C8;
    case 293u: goto L_08B012E4;
    case 294u: goto L_08B012E8;
    case 295u: goto L_08B012F0;
    case 296u: goto L_08B012FC;
    case 297u: goto L_08B0130C;
    case 298u: goto L_08B0131C;
    case 299u: goto L_08B01338;
    case 300u: goto L_08B01340;
    case 301u: goto L_08B01348;
    case 302u: goto L_08B0134C;
    case 303u: goto L_08B01354;
    case 304u: goto L_08B01380;
    case 305u: goto L_08B013AC;
    case 306u: goto L_08B013B0;
    case 307u: goto L_08B013C0;
    case 308u: goto L_08B013D4;
    case 309u: goto L_08B013F4;
    case 310u: goto L_08B01418;
    case 311u: goto L_08B01424;
    case 312u: goto L_08B01430;
    case 313u: goto L_08B01444;
    case 314u: goto L_08B01464;
    case 315u: goto L_08B01468;
    case 316u: goto L_08B01480;
    case 317u: goto L_08B0148C;
    case 318u: goto L_08B01494;
    case 319u: goto L_08B014A0;
    case 320u: goto L_08B014B0;
    case 321u: goto L_08B014CC;
    case 322u: goto L_08B014D8;
    case 323u: goto L_08B014E0;
    case 324u: goto L_08B014E4;
    case 325u: goto L_08B014F8;
    case 326u: goto L_08B01518;
    case 327u: goto L_08B01524;
    case 328u: goto L_08B01538;
    case 329u: goto L_08B01550;
    case 330u: goto L_08B01568;
    case 331u: goto L_08B01590;
    case 332u: goto L_08B0159C;
    case 333u: goto L_08B015BC;
    case 334u: goto L_08B015C0;
    case 335u: goto L_08B015F4;
    case 336u: goto L_08B0160C;
    case 337u: goto L_08B0161C;
    case 338u: goto L_08B01628;
    case 339u: goto L_08B01630;
    case 340u: goto L_08B01640;
    case 341u: goto L_08B01648;
    case 342u: goto L_08B01664;
    case 343u: goto L_08B016C4;
    case 344u: goto L_08B016CC;
    case 345u: goto L_08B016E8;
    case 346u: goto L_08B016F0;
    case 347u: goto L_08B01700;
    case 348u: goto L_08B0170C;
    case 349u: goto L_08B01720;
    case 350u: goto L_08B0172C;
    case 351u: goto L_08B01738;
    case 352u: goto L_08B0173C;
    case 353u: goto L_08B01748;
    case 354u: goto L_08B01754;
    case 355u: goto L_08B0175C;
    case 356u: goto L_08B01764;
    case 357u: goto L_08B01770;
    case 358u: goto L_08B01774;
    case 359u: goto L_08B0177C;
    case 360u: goto L_08B017C0;
    case 361u: goto L_08B017E8;
    case 362u: goto L_08B01804;
    case 363u: goto L_08B01810;
    case 364u: goto L_08B01818;
    case 365u: goto L_08B01830;
    case 366u: goto L_08B0184C;
    case 367u: goto L_08B01858;
    case 368u: goto L_08B01860;
    case 369u: goto L_08B01868;
    case 370u: goto L_08B01870;
    case 371u: goto L_08B01874;
    case 372u: goto L_08B0187C;
    case 373u: goto L_08B01884;
    case 374u: goto L_08B01898;
    case 375u: goto L_08B018AC;
    case 376u: goto L_08B018B8;
    case 377u: goto L_08B018C4;
    case 378u: goto L_08B018D4;
    case 379u: goto L_08B018F0;
    case 380u: goto L_08B018F4;
    case 381u: goto L_08B018FC;
    case 382u: goto L_08B01918;
    case 383u: goto L_08B0192C;
    case 384u: goto L_08B01938;
    case 385u: goto L_08B01944;
    case 386u: goto L_08B0194C;
    case 387u: goto L_08B01960;
    case 388u: goto L_08B01968;
    case 389u: goto L_08B01984;
    case 390u: goto L_08B01994;
    case 391u: goto L_08B019A0;
    case 392u: goto L_08B019A8;
    case 393u: goto L_08B019AC;
    case 394u: goto L_08B019BC;
    case 395u: goto L_08B019D0;
    case 396u: goto L_08B019DC;
    case 397u: goto L_08B019F0;
    case 398u: goto L_08B019FC;
    case 399u: goto L_08B01A00;
    case 400u: goto L_08B01A0C;
    case 401u: goto L_08B01A1C;
    case 402u: goto L_08B01A40;
    case 403u: goto L_08B01A50;
    case 404u: goto L_08B01A5C;
    case 405u: goto L_08B01A74;
    case 406u: goto L_08B01B38;
    case 407u: goto L_08B01B4C;
    case 408u: goto L_08B01B60;
    case 409u: goto L_08B01B6C;
    case 410u: goto L_08B01B8C;
    case 411u: goto L_08B01B90;
    case 412u: goto L_08B01B9C;
    case 413u: goto L_08B01BA4;
    case 414u: goto L_08B01BB0;
    case 415u: goto L_08B01BB8;
    case 416u: goto L_08B01BC4;
    case 417u: goto L_08B01BCC;
    case 418u: goto L_08B01BD8;
    case 419u: goto L_08B01BE0;
    case 420u: goto L_08B01BE8;
    case 421u: goto L_08B01C08;
    case 422u: goto L_08B01C10;
    case 423u: goto L_08B01C18;
    case 424u: goto L_08B01C1C;
    case 425u: goto L_08B01C24;
    case 426u: goto L_08B01C2C;
    case 427u: goto L_08B01C3C;
    case 428u: goto L_08B01C44;
    case 429u: goto L_08B01C54;
    case 430u: goto L_08B01C5C;
    case 431u: goto L_08B01C60;
    case 432u: goto L_08B01C6C;
    case 433u: goto L_08B01C74;
    case 434u: goto L_08B01C7C;
    case 435u: goto L_08B01C90;
    case 436u: goto L_08B01CA8;
    case 437u: goto L_08B01CD4;
    case 438u: goto L_08B01CDC;
    case 439u: goto L_08B01D10;
    case 440u: goto L_08B01D20;
    case 441u: goto L_08B01D38;
    case 442u: goto L_08B01D40;
    case 443u: goto L_08B01D4C;
    case 444u: goto L_08B01D54;
    case 445u: goto L_08B01D60;
    case 446u: goto L_08B01D7C;
    case 447u: goto L_08B01D88;
    case 448u: goto L_08B01D98;
    case 449u: goto L_08B01DA4;
    case 450u: goto L_08B01DAC;
    case 451u: goto L_08B01DB4;
    case 452u: goto L_08B01DC4;
    case 453u: goto L_08B01DD0;
    case 454u: goto L_08B01DD8;
    case 455u: goto L_08B01DDC;
    case 456u: goto L_08B01DE4;
    case 457u: goto L_08B01DEC;
    case 458u: goto L_08B01E00;
    case 459u: goto L_08B01E24;
    case 460u: goto L_08B01E50;
    case 461u: goto L_08B01E60;
    case 462u: goto L_08B01E70;
    case 463u: goto L_08B01E78;
    case 464u: goto L_08B01E80;
    case 465u: goto L_08B01E88;
    case 466u: goto L_08B01E90;
    case 467u: goto L_08B01E9C;
    case 468u: goto L_08B01EA4;
    case 469u: goto L_08B01EAC;
    case 470u: goto L_08B01EB4;
    case 471u: goto L_08B01EBC;
    case 472u: goto L_08B01EC8;
    case 473u: goto L_08B01ED0;
    case 474u: goto L_08B01ED8;
    case 475u: goto L_08B01EE0;
    case 476u: goto L_08B01EE8;
    case 477u: goto L_08B01F00;
    case 478u: goto L_08B01F0C;
    case 479u: goto L_08B01F10;
    case 480u: goto L_08B01F18;
    case 481u: goto L_08B01F20;
    case 482u: goto L_08B01F3C;
    case 483u: goto L_08B01F6C;
    case 484u: goto L_08B01F94;
    case 485u: goto L_08B01FB4;
    case 486u: goto L_08B01FC4;
    case 487u: goto L_08B01FD0;
    case 488u: goto L_08B01FE4;
    case 489u: goto L_08B01FF8;
    case 490u: goto L_08B02018;
    case 491u: goto L_08B02034;
    case 492u: goto L_08B02040;
    case 493u: goto L_08B0204C;
    case 494u: goto L_08B02070;
    case 495u: goto L_08B02078;
    case 496u: goto L_08B02094;
    case 497u: goto L_08B020AC;
    case 498u: goto L_08B020C0;
    case 499u: goto L_08B02110;
    case 500u: goto L_08B0211C;
    case 501u: goto L_08B02124;
    case 502u: goto L_08B02174;
    case 503u: goto L_08B0217C;
    case 504u: goto L_08B02180;
    case 505u: goto L_08B02194;
    case 506u: goto L_08B0219C;
    case 507u: goto L_08B021A4;
    case 508u: goto L_08B021AC;
    case 509u: goto L_08B021C0;
    case 510u: goto L_08B021CC;
    case 511u: goto L_08B021D4;
    case 512u: goto L_08B021D8;
    case 513u: goto L_08B021E8;
    case 514u: goto L_08B021F4;
    case 515u: goto L_08B021FC;
    case 516u: goto L_08B02204;
    case 517u: goto L_08B02214;
    case 518u: goto L_08B02220;
    case 519u: goto L_08B02228;
    case 520u: goto L_08B02238;
    case 521u: goto L_08B02244;
    case 522u: goto L_08B0224C;
    case 523u: goto L_08B02250;
    case 524u: goto L_08B02260;
    case 525u: goto L_08B0227C;
    case 526u: goto L_08B02298;
    case 527u: goto L_08B0229C;
    case 528u: goto L_08B022C8;
    case 529u: goto L_08B022E0;
    case 530u: goto L_08B022EC;
    case 531u: goto L_08B0233C;
    case 532u: goto L_08B0234C;
    case 533u: goto L_08B02350;
    case 534u: goto L_08B0236C;
    case 535u: goto L_08B02378;
    case 536u: goto L_08B023D0;
    case 537u: goto L_08B023E0;
    case 538u: goto L_08B023F8;
    case 539u: goto L_08B02400;
    case 540u: goto L_08B02410;
    case 541u: goto L_08B02428;
    case 542u: goto L_08B02454;
    case 543u: goto L_08B0249C;
    case 544u: goto L_08B024D0;
    case 545u: goto L_08B024E8;
    case 546u: goto L_08B024F0;
    case 547u: goto L_08B024F8;
    case 548u: goto L_08B02518;
    case 549u: goto L_08B02554;
    case 550u: goto L_08B02588;
    case 551u: goto L_08B02594;
    case 552u: goto L_08B02598;
    case 553u: goto L_08B025EC;
    case 554u: goto L_08B025F4;
    case 555u: goto L_08B02638;
    case 556u: goto L_08B0268C;
    case 557u: goto L_08B02694;
    case 558u: goto L_08B026B8;
    case 559u: goto L_08B026C4;
    case 560u: goto L_08B02714;
    case 561u: goto L_08B02718;
    case 562u: goto L_08B02734;
    case 563u: goto L_08B027AC;
    case 564u: goto L_08B027B8;
    case 565u: goto L_08B027F4;
    case 566u: goto L_08B02808;
    case 567u: goto L_08B02814;
    case 568u: goto L_08B02830;
    case 569u: goto L_08B0283C;
    case 570u: goto L_08B02858;
    case 571u: goto L_08B02864;
    case 572u: goto L_08B02884;
    case 573u: goto L_08B02890;
    case 574u: goto L_08B0289C;
    case 575u: goto L_08B028E4;
    case 576u: goto L_08B028F8;
    case 577u: goto L_08B0292C;
    case 578u: goto L_08B0293C;
    case 579u: goto L_08B02958;
    case 580u: goto L_08B02960;
    case 581u: goto L_08B0296C;
    case 582u: goto L_08B02980;
    case 583u: goto L_08B029BC;
    case 584u: goto L_08B029C4;
    case 585u: goto L_08B029D0;
    case 586u: goto L_08B029EC;
    case 587u: goto L_08B02A28;
    case 588u: goto L_08B02A34;
    case 589u: goto L_08B02A48;
    case 590u: goto L_08B02A6C;
    case 591u: goto L_08B02A98;
    case 592u: goto L_08B02AB8;
    case 593u: goto L_08B02AC4;
    case 594u: goto L_08B02AD0;
    case 595u: goto L_08B02ADC;
    case 596u: goto L_08B02B0C;
    case 597u: goto L_08B02B54;
    case 598u: goto L_08B02B60;
    case 599u: goto L_08B02BA0;
    case 600u: goto L_08B02BAC;
    case 601u: goto L_08B02BCC;
    case 602u: goto L_08B02BF4;
    case 603u: goto L_08B02BF8;
    case 604u: goto L_08B02C08;
    case 605u: goto L_08B02C14;
    case 606u: goto L_08B02C2C;
    case 607u: goto L_08B02C3C;
    case 608u: goto L_08B02C44;
    case 609u: goto L_08B02C4C;
    case 610u: goto L_08B02C58;
    case 611u: goto L_08B02C68;
    case 612u: goto L_08B02C78;
    case 613u: goto L_08B02C9C;
    case 614u: goto L_08B02CA8;
    case 615u: goto L_08B02CB0;
    case 616u: goto L_08B02CBC;
    case 617u: goto L_08B02CD8;
    case 618u: goto L_08B02CF4;
    case 619u: goto L_08B02CFC;
    case 620u: goto L_08B02D04;
    case 621u: goto L_08B02D10;
    case 622u: goto L_08B02D18;
    case 623u: goto L_08B02D1C;
    case 624u: goto L_08B02D24;
    case 625u: goto L_08B02D2C;
    case 626u: goto L_08B02D40;
    case 627u: goto L_08B02D4C;
    case 628u: goto L_08B02D5C;
    case 629u: goto L_08B02D68;
    case 630u: goto L_08B02D70;
    case 631u: goto L_08B02D80;
    case 632u: goto L_08B02D88;
    case 633u: goto L_08B02DA4;
    case 634u: goto L_08B02E04;
    case 635u: goto L_08B02E0C;
    case 636u: goto L_08B02E44;
    case 637u: goto L_08B02E48;
    case 638u: goto L_08B02E50;
    case 639u: goto L_08B02E7C;
    case 640u: goto L_08B02EA4;
    case 641u: goto L_08B02EAC;
    case 642u: goto L_08B02EB8;
    case 643u: goto L_08B02ED4;
    case 644u: goto L_08B02EF8;
    case 645u: goto L_08B02F14;
    case 646u: goto L_08B02F24;
    case 647u: goto L_08B02F40;
    case 648u: goto L_08B02F4C;
    case 649u: goto L_08B02F54;
    case 650u: goto L_08B02F5C;
    case 651u: goto L_08B02F64;
    case 652u: goto L_08B02F68;
    case 653u: goto L_08B02F70;
    case 654u: goto L_08B02F78;
    case 655u: goto L_08B02F8C;
    case 656u: goto L_08B02FA8;
    case 657u: goto L_08B02FB4;
    case 658u: goto L_08B02FC4;
    case 659u: goto L_08B02FD0;
    case 660u: goto L_08B02FD8;
    case 661u: goto L_08B02FDC;
    case 662u: goto L_08B02FE4;
    case 663u: goto L_08B02FF0;
    case 664u: goto L_08B03004;
    case 665u: goto L_08B03030;
    case 666u: goto L_08B0312C;
    case 667u: goto L_08B03180;
    case 668u: goto L_08B031D8;
    case 669u: goto L_08B031E4;
    case 670u: goto L_08B031F4;
    case 671u: goto L_08B03204;
    case 672u: goto L_08B03220;
    case 673u: goto L_08B03228;
    case 674u: goto L_08B03230;
    case 675u: goto L_08B03234;
    case 676u: goto L_08B0323C;
    case 677u: goto L_08B03258;
    case 678u: goto L_08B0326C;
    case 679u: goto L_08B03278;
    case 680u: goto L_08B03284;
    case 681u: goto L_08B0328C;
    case 682u: goto L_08B032A0;
    case 683u: goto L_08B032A8;
    case 684u: goto L_08B032C4;
    case 685u: goto L_08B032D4;
    case 686u: goto L_08B032E0;
    case 687u: goto L_08B032E8;
    case 688u: goto L_08B032EC;
    case 689u: goto L_08B032FC;
    case 690u: goto L_08B03310;
    case 691u: goto L_08B03318;
    case 692u: goto L_08B03324;
    case 693u: goto L_08B03334;
    case 694u: goto L_08B03340;
    case 695u: goto L_08B03348;
    case 696u: goto L_08B0334C;
    case 697u: goto L_08B03358;
    case 698u: goto L_08B03368;
    case 699u: goto L_08B03388;
    case 700u: goto L_08B03398;
    case 701u: goto L_08B033A8;
    case 702u: goto L_08B033B4;
    case 703u: goto L_08B033B8;
    case 704u: goto L_08B033C8;
    case 705u: goto L_08B033DC;
    case 706u: goto L_08B033E8;
    case 707u: goto L_08B03408;
    case 708u: goto L_08B0340C;
    case 709u: goto L_08B03418;
    case 710u: goto L_08B03420;
    case 711u: goto L_08B0342C;
    case 712u: goto L_08B03434;
    case 713u: goto L_08B03440;
    case 714u: goto L_08B03448;
    case 715u: goto L_08B03454;
    case 716u: goto L_08B0345C;
    case 717u: goto L_08B03464;
    case 718u: goto L_08B03484;
    case 719u: goto L_08B0348C;
    case 720u: goto L_08B03494;
    case 721u: goto L_08B03498;
    case 722u: goto L_08B034A0;
    case 723u: goto L_08B034A8;
    case 724u: goto L_08B034B8;
    case 725u: goto L_08B034C0;
    case 726u: goto L_08B034D0;
    case 727u: goto L_08B034D8;
    case 728u: goto L_08B034DC;
    case 729u: goto L_08B034E8;
    case 730u: goto L_08B034F0;
    case 731u: goto L_08B034F8;
    case 732u: goto L_08B03514;
    case 733u: goto L_08B0352C;
    case 734u: goto L_08B03534;
    case 735u: goto L_08B0353C;
    case 736u: goto L_08B0354C;
    case 737u: goto L_08B03558;
    case 738u: goto L_08B0355C;
    case 739u: goto L_08B03564;
    case 740u: goto L_08B0356C;
    case 741u: goto L_08B03580;
    case 742u: goto L_08B03594;
    case 743u: goto L_08B035A4;
    case 744u: goto L_08B035B4;
    case 745u: goto L_08B035C0;
    case 746u: goto L_08B035C8;
    case 747u: goto L_08B035D8;
    case 748u: goto L_08B035E0;
    case 749u: goto L_08B035FC;
    case 750u: goto L_08B0365C;
    case 751u: goto L_08B03664;
    case 752u: goto L_08B0369C;
    case 753u: goto L_08B036A0;
    case 754u: goto L_08B036A8;
    case 755u: goto L_08B036DC;
    case 756u: goto L_08B036E8;
    case 757u: goto L_08B036F8;
    case 758u: goto L_08B03708;
    case 759u: goto L_08B0370C;
    case 760u: goto L_08B03714;
    case 761u: goto L_08B03718;
    case 762u: goto L_08B0372C;
    case 763u: goto L_08B03738;
    case 764u: goto L_08B03748;
    case 765u: goto L_08B03758;
    case 766u: goto L_08B0375C;
    case 767u: goto L_08B03764;
    case 768u: goto L_08B03768;
    case 769u: goto L_08B03794;
    case 770u: goto L_08B0379C;
    case 771u: goto L_08B037BC;
    case 772u: goto L_08B037C0;
    case 773u: goto L_08B037F4;
    case 774u: goto L_08B03814;
    case 775u: goto L_08B03820;
    case 776u: goto L_08B03834;
    case 777u: goto L_08B03860;
    case 778u: goto L_08B03864;
    case 779u: goto L_08B0387C;
    case 780u: goto L_08B0388C;
    case 781u: goto L_08B038A8;
    case 782u: goto L_08B038B4;
    case 783u: goto L_08B038BC;
    case 784u: goto L_08B038C0;
    case 785u: goto L_08B038E4;
    case 786u: goto L_08B03908;
    case 787u: goto L_08B03934;
    case 788u: goto L_08B0393C;
    case 789u: goto L_08B03944;
    case 790u: goto L_08B03964;
    case 791u: goto L_08B03978;
    case 792u: goto L_08B0398C;
    case 793u: goto L_08B0399C;
    case 794u: goto L_08B039A8;
    case 795u: goto L_08B039B4;
    case 796u: goto L_08B039C4;
    case 797u: goto L_08B039E4;
    case 798u: goto L_08B039FC;
    case 799u: goto L_08B03A0C;
    case 800u: goto L_08B03A14;
    case 801u: goto L_08B03A28;
    case 802u: goto L_08B03A3C;
    case 803u: goto L_08B03A4C;
    case 804u: goto L_08B03A58;
    case 805u: goto L_08B03A64;
    case 806u: goto L_08B03A74;
    case 807u: goto L_08B03A98;
    case 808u: goto L_08B03A9C;
    case 809u: goto L_08B03AB8;
    case 810u: goto L_08B03AE0;
    case 811u: goto L_08B03B1C;
    case 812u: goto L_08B03B3C;
    case 813u: goto L_08B03B48;
    case 814u: goto L_08B03B4C;
    case 815u: goto L_08B03B54;
    case 816u: goto L_08B03B5C;
    case 817u: goto L_08B03B84;
    case 818u: goto L_08B03B8C;
    case 819u: goto L_08B03B94;
    case 820u: goto L_08B03BB0;
    case 821u: goto L_08B03BC4;
    case 822u: goto L_08B03BEC;
    case 823u: goto L_08B03C08;
    case 824u: goto L_08B03C1C;
    case 825u: goto L_08B03C2C;
    case 826u: goto L_08B03C4C;
    case 827u: goto L_08B03C88;
    case 828u: goto L_08B03C94;
    case 829u: goto L_08B03CBC;
    case 830u: goto L_08B03CD8;
    case 831u: goto L_08B03CE0;
    case 832u: goto L_08B03CF0;
    case 833u: goto L_08B03CFC;
    case 834u: goto L_08B03D20;
    case 835u: goto L_08B03D2C;
    case 836u: goto L_08B03D3C;
    case 837u: goto L_08B03D64;
    case 838u: goto L_08B03D6C;
    case 839u: goto L_08B03D88;
    case 840u: goto L_08B03D90;
    case 841u: goto L_08B03D9C;
    case 842u: goto L_08B03DB0;
    case 843u: goto L_08B03DCC;
    case 844u: goto L_08B03DD4;
    case 845u: goto L_08B03DF0;
    case 846u: goto L_08B03DF8;
    case 847u: goto L_08B03E08;
    case 848u: goto L_08B03E14;
    case 849u: goto L_08B03E24;
    case 850u: goto L_08B03E54;
    case 851u: goto L_08B03E78;
    case 852u: goto L_08B03E80;
    case 853u: goto L_08B03E90;
    case 854u: goto L_08B03E9C;
    case 855u: goto L_08B03EA8;
    case 856u: goto L_08B03ED0;
    case 857u: goto L_08B03EF8;
    case 858u: goto L_08B03F0C;
    case 859u: goto L_08B03F28;
    case 860u: goto L_08B03F30;
    case 861u: goto L_08B03F4C;
    case 862u: goto L_08B03F54;
    case 863u: goto L_08B03F60;
    case 864u: goto L_08B03F6C;
    case 865u: goto L_08B03F88;
    case 866u: goto L_08B03F90;
    case 867u: goto L_08B03F98;
    case 868u: goto L_08B03FA8;
    case 869u: goto L_08B03FD0;
    case 870u: goto L_08B03FE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B00000:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B00018u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 649u, 0x08AFEC70u>(ctx, &aot_mem) && ctx.pc == 0x08B00018u) goto L_08B00018;
    return;
L_08B00018:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0039C;
      }
      goto L_08B00020;
    }
L_08B00020:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B00030u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 679u, 0x08AFEEACu>(ctx, &aot_mem) && ctx.pc == 0x08B00030u) goto L_08B00030;
    return;
L_08B00030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B0039C;
      }
      goto L_08B0003C;
    }
L_08B0003C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B000D0;
      }
      goto L_08B00060;
    }
L_08B00060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B0006Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 888u, 0x08AFBD8Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0006Cu) goto L_08B0006C;
    return;
L_08B0006C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B000AC;
      }
      goto L_08B0007C;
    }
L_08B0007C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(106), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B000DC;
      }
      goto L_08B000A4;
    }
L_08B000A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00138;
      }
      goto L_08B000AC;
    }
L_08B000AC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B000C8u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 649u, 0x08AFEC70u>(ctx, &aot_mem) && ctx.pc == 0x08B000C8u) goto L_08B000C8;
    return;
L_08B000C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0039C;
      }
      goto L_08B000D0;
    }
L_08B000D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B0039C;
      }
      goto L_08B000DC;
    }
L_08B000DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B00114;
      }
      goto L_08B000F0;
    }
L_08B000F0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B0010Cu);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 649u, 0x08AFEC70u>(ctx, &aot_mem) && ctx.pc == 0x08B0010Cu) goto L_08B0010C;
    return;
L_08B0010C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0039C;
      }
      goto L_08B00114;
    }
L_08B00114:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B00130u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 649u, 0x08AFEC70u>(ctx, &aot_mem) && ctx.pc == 0x08B00130u) goto L_08B00130;
    return;
L_08B00130:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0039C;
      }
      goto L_08B00138;
    }
L_08B00138:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B00148u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 679u, 0x08AFEEACu>(ctx, &aot_mem) && ctx.pc == 0x08B00148u) goto L_08B00148;
    return;
L_08B00148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B0039C;
      }
      goto L_08B00154;
    }
L_08B00154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B001DC;
      }
      goto L_08B00164;
    }
L_08B00164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(107), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B001C0;
      }
      goto L_08B00194;
    }
L_08B00194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B001B8u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 649u, 0x08AFEC70u>(ctx, &aot_mem) && ctx.pc == 0x08B001B8u) goto L_08B001B8;
    return;
L_08B001B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0039C;
      }
      goto L_08B001C0;
    }
L_08B001C0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B001D0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 679u, 0x08AFEEACu>(ctx, &aot_mem) && ctx.pc == 0x08B001D0u) goto L_08B001D0;
    return;
L_08B001D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B0039C;
      }
      goto L_08B001DC;
    }
L_08B001DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B001E8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 898u, 0x08AFBDFCu>(ctx, &aot_mem) && ctx.pc == 0x08B001E8u) goto L_08B001E8;
    return;
L_08B001E8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00294;
      }
      goto L_08B00210;
    }
L_08B00210:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(109), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00294;
      }
      goto L_08B00238;
    }
L_08B00238:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B00270;
      }
      goto L_08B0024C;
    }
L_08B0024C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B00268u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 649u, 0x08AFEC70u>(ctx, &aot_mem) && ctx.pc == 0x08B00268u) goto L_08B00268;
    return;
L_08B00268:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0039C;
      }
      goto L_08B00270;
    }
L_08B00270:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B0028Cu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 649u, 0x08AFEC70u>(ctx, &aot_mem) && ctx.pc == 0x08B0028Cu) goto L_08B0028C;
    return;
L_08B0028C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0039C;
      }
      goto L_08B00294;
    }
L_08B00294:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B002A0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 888u, 0x08AFBD8Cu>(ctx, &aot_mem) && ctx.pc == 0x08B002A0u) goto L_08B002A0;
    return;
L_08B002A0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B002C8;
      }
      goto L_08B002AC;
    }
L_08B002AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(110), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    goto L_08B002C8;
L_08B002C8:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B0036C;
      }
      goto L_08B002D0;
    }
L_08B002D0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0036C;
      }
      goto L_08B002D8;
    }
L_08B002D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B00310;
      }
      goto L_08B002E8;
    }
L_08B002E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(111), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0036C;
      }
      goto L_08B00310;
    }
L_08B00310:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B00348;
      }
      goto L_08B00324;
    }
L_08B00324:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B00340u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 649u, 0x08AFEC70u>(ctx, &aot_mem) && ctx.pc == 0x08B00340u) goto L_08B00340;
    return;
L_08B00340:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0039C;
      }
      goto L_08B00348;
    }
L_08B00348:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B00364u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 649u, 0x08AFEC70u>(ctx, &aot_mem) && ctx.pc == 0x08B00364u) goto L_08B00364;
    return;
L_08B00364:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0039C;
      }
      goto L_08B0036C;
    }
L_08B0036C:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B00380;
      }
      goto L_08B00374;
    }
L_08B00374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B0039C;
      }
      goto L_08B00380;
    }
L_08B00380:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B00390u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 679u, 0x08AFEEACu>(ctx, &aot_mem) && ctx.pc == 0x08B00390u) goto L_08B00390;
    return;
L_08B00390:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B0039C;
      }
      goto L_08B0039C;
    }
L_08B0039C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B003BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08B00584;
      }
      goto L_08B003F8;
    }
L_08B003F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00450;
      }
      goto L_08B00404;
    }
L_08B00404:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0046C;
      }
      goto L_08B0042C;
    }
L_08B0042C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B00448u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 744u, 0x08AFF340u>(ctx, &aot_mem) && ctx.pc == 0x08B00448u) goto L_08B00448;
    return;
L_08B00448:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B007CC;
      }
      goto L_08B00450;
    }
L_08B00450:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B00460u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 782u, 0x08AFF5F0u>(ctx, &aot_mem) && ctx.pc == 0x08B00460u) goto L_08B00460;
    return;
L_08B00460:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B007CC;
      }
      goto L_08B0046C;
    }
L_08B0046C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00500;
      }
      goto L_08B00490;
    }
L_08B00490:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B0049Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 888u, 0x08AFBD8Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0049Cu) goto L_08B0049C;
    return;
L_08B0049C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B004DC;
      }
      goto L_08B004AC;
    }
L_08B004AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(106), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B0050C;
      }
      goto L_08B004D4;
    }
L_08B004D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00568;
      }
      goto L_08B004DC;
    }
L_08B004DC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B004F8u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 744u, 0x08AFF340u>(ctx, &aot_mem) && ctx.pc == 0x08B004F8u) goto L_08B004F8;
    return;
L_08B004F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B007CC;
      }
      goto L_08B00500;
    }
L_08B00500:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B007CC;
      }
      goto L_08B0050C;
    }
L_08B0050C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B00544;
      }
      goto L_08B00520;
    }
L_08B00520:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B0053Cu);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 744u, 0x08AFF340u>(ctx, &aot_mem) && ctx.pc == 0x08B0053Cu) goto L_08B0053C;
    return;
L_08B0053C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B007CC;
      }
      goto L_08B00544;
    }
L_08B00544:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B00560u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 744u, 0x08AFF340u>(ctx, &aot_mem) && ctx.pc == 0x08B00560u) goto L_08B00560;
    return;
L_08B00560:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B007CC;
      }
      goto L_08B00568;
    }
L_08B00568:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B00578u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 782u, 0x08AFF5F0u>(ctx, &aot_mem) && ctx.pc == 0x08B00578u) goto L_08B00578;
    return;
L_08B00578:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B007CC;
      }
      goto L_08B00584;
    }
L_08B00584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B0060C;
      }
      goto L_08B00594;
    }
L_08B00594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(107), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B005F0;
      }
      goto L_08B005C4;
    }
L_08B005C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B005E8u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 744u, 0x08AFF340u>(ctx, &aot_mem) && ctx.pc == 0x08B005E8u) goto L_08B005E8;
    return;
L_08B005E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B007CC;
      }
      goto L_08B005F0;
    }
L_08B005F0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B00600u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 782u, 0x08AFF5F0u>(ctx, &aot_mem) && ctx.pc == 0x08B00600u) goto L_08B00600;
    return;
L_08B00600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B007CC;
      }
      goto L_08B0060C;
    }
L_08B0060C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B00618u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 898u, 0x08AFBDFCu>(ctx, &aot_mem) && ctx.pc == 0x08B00618u) goto L_08B00618;
    return;
L_08B00618:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B006C4;
      }
      goto L_08B00640;
    }
L_08B00640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(109), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B006C4;
      }
      goto L_08B00668;
    }
L_08B00668:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B006A0;
      }
      goto L_08B0067C;
    }
L_08B0067C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B00698u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 744u, 0x08AFF340u>(ctx, &aot_mem) && ctx.pc == 0x08B00698u) goto L_08B00698;
    return;
L_08B00698:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B007CC;
      }
      goto L_08B006A0;
    }
L_08B006A0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B006BCu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 744u, 0x08AFF340u>(ctx, &aot_mem) && ctx.pc == 0x08B006BCu) goto L_08B006BC;
    return;
L_08B006BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B007CC;
      }
      goto L_08B006C4;
    }
L_08B006C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B006D0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 888u, 0x08AFBD8Cu>(ctx, &aot_mem) && ctx.pc == 0x08B006D0u) goto L_08B006D0;
    return;
L_08B006D0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B006F8;
      }
      goto L_08B006DC;
    }
L_08B006DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(110), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    goto L_08B006F8;
L_08B006F8:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B0079C;
      }
      goto L_08B00700;
    }
L_08B00700:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0079C;
      }
      goto L_08B00708;
    }
L_08B00708:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B00740;
      }
      goto L_08B00718;
    }
L_08B00718:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(111), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0079C;
      }
      goto L_08B00740;
    }
L_08B00740:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B00778;
      }
      goto L_08B00754;
    }
L_08B00754:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B00770u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 744u, 0x08AFF340u>(ctx, &aot_mem) && ctx.pc == 0x08B00770u) goto L_08B00770;
    return;
L_08B00770:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B007CC;
      }
      goto L_08B00778;
    }
L_08B00778:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B00794u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 744u, 0x08AFF340u>(ctx, &aot_mem) && ctx.pc == 0x08B00794u) goto L_08B00794;
    return;
L_08B00794:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B007CC;
      }
      goto L_08B0079C;
    }
L_08B0079C:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B007B0;
      }
      goto L_08B007A4;
    }
L_08B007A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B007CC;
      }
      goto L_08B007B0;
    }
L_08B007B0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B007C0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 782u, 0x08AFF5F0u>(ctx, &aot_mem) && ctx.pc == 0x08B007C0u) goto L_08B007C0;
    return;
L_08B007C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B007CC;
      }
      goto L_08B007CC;
    }
L_08B007CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B007EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20904)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B00810;
      }
      goto L_08B00808;
    }
L_08B00808:
    ctx.gpr[31] = (0x08B00810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x08B00810u) goto L_08B00810;
    return;
L_08B00810:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20904)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00824:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0086C;
      }
      goto L_08B00834;
    }
L_08B00834:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9788));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-19824), 0u);
      if (branch_taken) {
          goto L_08B00858;
      }
      goto L_08B0084C;
    }
L_08B0084C:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9948));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08B00858;
L_08B00858:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0086C;
      }
      goto L_08B00864;
    }
L_08B00864:
    ctx.gpr[31] = (0x08B0086Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08B0086Cu) goto L_08B0086C;
    return;
L_08B0086C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00878:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B00990;
      }
      goto L_08B0089C;
    }
L_08B0089C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9772));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B008DC;
      }
      goto L_08B008B8;
    }
L_08B008B8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B008DC;
      }
      goto L_08B008C0;
    }
L_08B008C0:
    ctx.gpr[31] = (0x08B008C8u);
    // nop
    goto L_08B009AC;
L_08B008C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B008DC;
      }
      goto L_08B008D4;
    }
L_08B008D4:
    ctx.gpr[31] = (0x08B008DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08B008DCu) goto L_08B008DC;
    return;
L_08B008DC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00924;
      }
      goto L_08B008E4;
    }
L_08B008E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B00904;
      }
      goto L_08B008F8;
    }
L_08B008F8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    goto L_08B008FC;
L_08B008FC:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B008FC;
      }
      goto L_08B00904;
    }
L_08B00904:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00924;
      }
      goto L_08B0090C;
    }
L_08B0090C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00924;
      }
      goto L_08B00914;
    }
L_08B00914:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00924;
      }
      goto L_08B0091C;
    }
L_08B0091C:
    ctx.gpr[31] = (0x08B00924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08B00924u) goto L_08B00924;
    return;
L_08B00924:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00950;
      }
      goto L_08B0092C;
    }
L_08B0092C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00950;
      }
      goto L_08B00934;
    }
L_08B00934:
    ctx.gpr[31] = (0x08B0093Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08B009AC;
L_08B0093C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00950;
      }
      goto L_08B00948;
    }
L_08B00948:
    ctx.gpr[31] = (0x08B00950u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08B00950u) goto L_08B00950;
    return;
L_08B00950:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_08B00980;
      }
      goto L_08B00958;
    }
L_08B00958:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9788));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-19824), 0u);
      if (branch_taken) {
          goto L_08B0097C;
      }
      goto L_08B00970;
    }
L_08B00970:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9948));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08B0097C;
L_08B0097C:
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    goto L_08B00980;
L_08B00980:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00990;
      }
      goto L_08B00988;
    }
L_08B00988:
    ctx.gpr[31] = (0x08B00990u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08B00990u) goto L_08B00990;
    return;
L_08B00990:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B009AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B009F0;
      }
      goto L_08B009D0;
    }
L_08B009D0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B009E4;
      }
      goto L_08B009DC;
    }
L_08B009DC:
    ctx.gpr[31] = (0x08B009E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08B009E4u) goto L_08B009E4;
    return;
L_08B009E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B009D0;
      }
      goto L_08B009F0;
    }
L_08B009F0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00A0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B00A28u);
    ctx.gpr[4] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08B00A28u) goto L_08B00A28;
    return;
L_08B00A28:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00A40;
      }
      goto L_08B00A34;
    }
L_08B00A34:
    ctx.gpr[31] = (0x08B00A3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 167u, 0x088B53DCu>(ctx, &aot_mem) && ctx.pc == 0x08B00A3Cu) goto L_08B00A3C;
    return;
L_08B00A3C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08B00A40;
L_08B00A40:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[31] = (0x08B00A4Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-19824), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 261u, 0x08A29668u>(ctx, &aot_mem) && ctx.pc == 0x08B00A4Cu) goto L_08B00A4C;
    return;
L_08B00A4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-19824)));
    ctx.gpr[31] = (0x08B00A58u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 259u, 0x08A29650u>(ctx, &aot_mem) && ctx.pc == 0x08B00A58u) goto L_08B00A58;
    return;
L_08B00A58:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00A6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[9] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[10]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[9] = (ctx.gpr[9] >> 30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[17] < ctx.gpr[8] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08B00AD0;
      }
      goto L_08B00AC0;
    }
L_08B00AC0:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B00ADC;
      }
      goto L_08B00AD0;
    }
L_08B00AD0:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
    goto L_08B00ADC;
L_08B00ADC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08B00B38;
      }
      goto L_08B00AE4;
    }
L_08B00AE4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B00AFCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08B00AFCu) goto L_08B00AFC;
    return;
L_08B00AFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08B00B38;
      }
      goto L_08B00B14;
    }
L_08B00B14:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B00B28u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x08B00B28u) goto L_08B00B28;
    return;
L_08B00B28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08B00B38;
L_08B00B38:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B00B80;
      }
      goto L_08B00B48;
    }
L_08B00B48:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
        goto L_08B00B78;
    }
    goto L_08B00B54;
L_08B00B54:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
        goto L_08B00B78;
    }
    goto L_08B00B68;
L_08B00B68:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    goto L_08B00B78;
L_08B00B78:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B00B48;
      }
      goto L_08B00B80;
    }
L_08B00B80:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08B00BC8;
      }
      goto L_08B00B90;
    }
L_08B00B90:
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00BBC;
      }
      goto L_08B00B9C;
    }
L_08B00B9C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00BBC;
      }
      goto L_08B00BB0;
    }
L_08B00BB0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08B00BBC;
L_08B00BBC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B00C0C;
      }
      goto L_08B00BC8;
    }
L_08B00BC8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B00C08;
      }
      goto L_08B00BD0;
    }
L_08B00BD0:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
        goto L_08B00C00;
    }
    goto L_08B00BDC;
L_08B00BDC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
        goto L_08B00C00;
    }
    goto L_08B00BF0;
L_08B00BF0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_08B00C00;
L_08B00C00:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B00BD0;
      }
      goto L_08B00C08;
    }
L_08B00C08:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08B00C0C;
L_08B00C0C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B00C60;
      }
      goto L_08B00C14;
    }
L_08B00C14:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B00C60;
      }
      goto L_08B00C24;
    }
L_08B00C24:
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08B00C54;
    }
    goto L_08B00C30;
L_08B00C30:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08B00C54;
    }
    goto L_08B00C44;
L_08B00C44:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08B00C54;
L_08B00C54:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B00C24;
      }
      goto L_08B00C5C;
    }
L_08B00C5C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08B00C60;
L_08B00C60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[20];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B00CB4;
      }
      goto L_08B00C70;
    }
L_08B00C70:
    if (ctx.gpr[21] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
        goto L_08B00CA8;
    }
    goto L_08B00C78;
L_08B00C78:
    if (ctx.gpr[21] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
        goto L_08B00CA8;
    }
    goto L_08B00C80;
L_08B00C80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
        goto L_08B00CA8;
    }
    goto L_08B00C8C;
L_08B00C8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B00CA4;
      }
      goto L_08B00C9C;
    }
L_08B00C9C:
    ctx.gpr[31] = (0x08B00CA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08B00CA4u) goto L_08B00CA4;
    return;
L_08B00CA4:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    goto L_08B00CA8;
L_08B00CA8:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08B00C70;
      }
      goto L_08B00CB0;
    }
L_08B00CB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08B00CB4;
L_08B00CB4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00CC4;
      }
      goto L_08B00CBC;
    }
L_08B00CBC:
    ctx.gpr[31] = (0x08B00CC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08B00CC4u) goto L_08B00CC4;
    return;
L_08B00CC4:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00CFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08B00D10u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B00D10u) goto L_08B00D10;
    return;
L_08B00D10:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00D1C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00D24:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00D2C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00D34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[2] = (0u | 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08B00D44;
    }
    goto L_08B00D44;
L_08B00D44:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00D4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          goto L_08B00D88;
      }
      goto L_08B00D5C;
    }
L_08B00D5C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-13452));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B00D74;
      }
      goto L_08B00D68;
    }
L_08B00D68:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-13548));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_08B00D74;
L_08B00D74:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00D88;
      }
      goto L_08B00D80;
    }
L_08B00D80:
    ctx.gpr[31] = (0x08B00D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08B00D88u) goto L_08B00D88;
    return;
L_08B00D88:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00D94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          goto L_08B00DE0;
      }
      goto L_08B00DA4;
    }
L_08B00DA4:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9724));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B00DCC;
      }
      goto L_08B00DB0;
    }
L_08B00DB0:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-13452));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B00DCC;
      }
      goto L_08B00DC0;
    }
L_08B00DC0:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-13548));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_08B00DCC;
L_08B00DCC:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00DE0;
      }
      goto L_08B00DD8;
    }
L_08B00DD8:
    ctx.gpr[31] = (0x08B00DE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08B00DE0u) goto L_08B00DE0;
    return;
L_08B00DE0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00DEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B00E24;
      }
      goto L_08B00E08;
    }
L_08B00E08:
    ctx.gpr[31] = (0x08B00E10u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 182u, 0x08A31330u>(ctx, &aot_mem) && ctx.pc == 0x08B00E10u) goto L_08B00E10;
    return;
L_08B00E10:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00E24;
      }
      goto L_08B00E1C;
    }
L_08B00E1C:
    ctx.gpr[31] = (0x08B00E24u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08B00E24u) goto L_08B00E24;
    return;
L_08B00E24:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00E38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B00E50u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 582u, 0x088063D8u>(ctx, &aot_mem) && ctx.pc == 0x08B00E50u) goto L_08B00E50;
    return;
L_08B00E50:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00E64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B00EA0;
      }
      goto L_08B00E80;
    }
L_08B00E80:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08B00E8Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 585u, 0x08806498u>(ctx, &aot_mem) && ctx.pc == 0x08B00E8Cu) goto L_08B00E8C;
    return;
L_08B00E8C:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00EA0;
      }
      goto L_08B00E98;
    }
L_08B00E98:
    ctx.gpr[31] = (0x08B00EA0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08B00EA0u) goto L_08B00EA0;
    return;
L_08B00EA0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00EB4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (~(ctx.gpr[5] | 0u));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00EC8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00EDC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]);
    rt.memory().aot_store_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(3), ctx.gpr[6]);
    rt.memory().aot_store_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00F1C:
    ctx.gpr[4] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3176)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00F28:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00F34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B00F48u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 549u, 0x088EAFC8u>(ctx, &aot_mem) && ctx.pc == 0x08B00F48u) goto L_08B00F48;
    return;
L_08B00F48:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00F5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B0102C;
      }
      goto L_08B00F78;
    }
L_08B00F78:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(7128));
    ctx.gpr[31] = (0x08B00F84u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 358u, 0x088E9F80u>(ctx, &aot_mem) && ctx.pc == 0x08B00F84u) goto L_08B00F84;
    return;
L_08B00F84:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(6864));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(6768));
      if (branch_taken) {
          goto L_08B00FB8;
      }
      goto L_08B00F90;
    }
L_08B00F90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(6932)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(6768));
      if (branch_taken) {
          goto L_08B00FB8;
      }
      goto L_08B00FA0;
    }
L_08B00FA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(6928)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(6768));
        goto L_08B00FB8;
    }
    goto L_08B00FAC;
L_08B00FAC:
    ctx.gpr[31] = (0x08B00FB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08B00FB4u) goto L_08B00FB4;
    return;
L_08B00FB4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(6768));
    goto L_08B00FB8;
L_08B00FB8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00FE4;
      }
      goto L_08B00FC0;
    }
L_08B00FC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(6836)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00FE4;
      }
      goto L_08B00FD0;
    }
L_08B00FD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(6832)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00FE4;
      }
      goto L_08B00FDC;
    }
L_08B00FDC:
    ctx.gpr[31] = (0x08B00FE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08B00FE4u) goto L_08B00FE4;
    return;
L_08B00FE4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B0101C;
      }
      goto L_08B00FEC;
    }
L_08B00FEC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B0101C;
      }
      goto L_08B00FF4;
    }
L_08B00FF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B0101C;
      }
      goto L_08B01004;
    }
L_08B01004:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B0101C;
    }
    goto L_08B01010;
L_08B01010:
    ctx.gpr[31] = (0x08B01018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08B01018u) goto L_08B01018;
    return;
L_08B01018:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B0101C;
L_08B0101C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0102C;
      }
      goto L_08B01024;
    }
L_08B01024:
    ctx.gpr[31] = (0x08B0102Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08B0102Cu) goto L_08B0102C;
    return;
L_08B0102C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01040:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B0105Cu);
    ctx.gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x08B0105Cu) goto L_08B0105C;
    return;
L_08B0105C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01070:
    ctx.gpr[2] = (2224u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0107C:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4208));
    ctx.gpr[2] = (ctx.gpr[4] ^ ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01090:
    ctx.gpr[2] = (2224u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0109C:
    ctx.gpr[2] = (2224u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B010A8:
    ctx.gpr[6] = (2224u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4240));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B010D4;
      }
      goto L_08B010B8;
    }
L_08B010B8:
    ctx.gpr[6] = (2224u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4208));
    ctx.gpr[5] = (ctx.gpr[6] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B010D8;
      }
      goto L_08B010D4;
    }
L_08B010D4:
    ctx.gpr[4] = (0u | 1u);
    goto L_08B010D8;
L_08B010D8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B010E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B01130;
      }
      goto L_08B010FC;
    }
L_08B010FC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9628));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B01110u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 115u, 0x08AC4DBCu>(ctx, &aot_mem) && ctx.pc == 0x08B01110u) goto L_08B01110;
    return;
L_08B01110:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B0111Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 7u, 0x08AC4044u>(ctx, &aot_mem) && ctx.pc == 0x08B0111Cu) goto L_08B0111C;
    return;
L_08B0111C:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01130;
      }
      goto L_08B01128;
    }
L_08B01128:
    ctx.gpr[31] = (0x08B01130u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08B01130u) goto L_08B01130;
    return;
L_08B01130:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01144:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 7u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0114C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B01168u);
    ctx.gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 745u, 0x089C71ACu>(ctx, &aot_mem) && ctx.pc == 0x08B01168u) goto L_08B01168;
    return;
L_08B01168:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 48u);
    ctx.gpr[31] = (0x08B01178u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x08B01178u) goto L_08B01178;
    return;
L_08B01178:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B01190;
      }
      goto L_08B01184;
    }
L_08B01184:
    ctx.gpr[31] = (0x08B0118Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 410u, 0x08919880u>(ctx, &aot_mem) && ctx.pc == 0x08B0118Cu) goto L_08B0118C;
    return;
L_08B0118C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08B01190;
L_08B01190:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B011A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B011C0;
      }
      goto L_08B011B0;
    }
L_08B011B0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08B011C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08B011C0u) goto L_08B011C0;
    return;
L_08B011C0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B011CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B011E8u);
    ctx.gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 745u, 0x089C71ACu>(ctx, &aot_mem) && ctx.pc == 0x08B011E8u) goto L_08B011E8;
    return;
L_08B011E8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 48u);
    ctx.gpr[31] = (0x08B011F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x08B011F8u) goto L_08B011F8;
    return;
L_08B011F8:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08B01234;
      }
      goto L_08B01208;
    }
L_08B01208:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(33))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    goto L_08B01234;
L_08B01234:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01240:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B01254u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 412u, 0x089198D0u>(ctx, &aot_mem) && ctx.pc == 0x08B01254u) goto L_08B01254;
    return;
L_08B01254:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01260:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01268:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 96u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] | 128u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B012A4;
      }
      goto L_08B012A0;
    }
L_08B012A0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_08B012A4;
L_08B012A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B012AC:
    ctx.gpr[2] = (2224u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4780));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B012B8:
    ctx.gpr[6] = (2224u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4780));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B012E4;
      }
      goto L_08B012C8;
    }
L_08B012C8:
    ctx.gpr[6] = (2224u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4208));
    ctx.gpr[5] = (ctx.gpr[6] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B012E8;
      }
      goto L_08B012E4;
    }
L_08B012E4:
    ctx.gpr[4] = (0u | 1u);
    goto L_08B012E8;
L_08B012E8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B012F0:
    ctx.gpr[2] = (2224u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-23884));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B012FC:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23884));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08B01348;
      }
      goto L_08B0130C;
    }
L_08B0130C:
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4780));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B01338;
      }
      goto L_08B0131C;
    }
L_08B0131C:
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4208));
    ctx.gpr[5] = (ctx.gpr[7] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08B01340;
      }
      goto L_08B01338;
    }
L_08B01338:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08B01340;
L_08B01340:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0134C;
      }
      goto L_08B01348;
    }
L_08B01348:
    ctx.gpr[6] = (0u | 1u);
    goto L_08B0134C;
L_08B0134C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[6] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01354:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B01380u);
    ctx.gpr[4] = (ctx.gpr[18] << 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 665u, 0x08AA31B4u>(ctx, &aot_mem) && ctx.pc == 0x08B01380u) goto L_08B01380;
    return;
L_08B01380:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08B013D4;
      }
      goto L_08B013AC;
    }
L_08B013AC:
    ctx.gpr[18] = (ctx.gpr[19] << 4u);
    goto L_08B013B0;
L_08B013B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B013C0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    goto L_08B01538;
L_08B013C0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-16));
      if (branch_taken) {
          goto L_08B013B0;
      }
      goto L_08B013D4;
    }
L_08B013D4:
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
L_08B013F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08B01430;
      }
      goto L_08B01418;
    }
L_08B01418:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B01424u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B014F8;
L_08B01424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08B01418;
      }
      goto L_08B01430;
    }
L_08B01430:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01444:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[7];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08B014A0;
      }
      goto L_08B01464;
    }
L_08B01464:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_08B01468;
L_08B01468:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[8] = (0u | 1u);
        goto L_08B01480;
    }
    goto L_08B01480;
L_08B01480:
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01494;
      }
      goto L_08B0148C;
    }
L_08B0148C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B014A0;
      }
      goto L_08B01494;
    }
L_08B01494:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08B01468;
      }
      goto L_08B014A0;
    }
L_08B014A0:
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B014E0;
      }
      goto L_08B014B0;
    }
L_08B014B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B014CCu);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    goto L_08B01550;
L_08B014CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08B014D8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08B01538;
L_08B014D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B014E4;
      }
      goto L_08B014E0;
    }
L_08B014E0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B014E4;
L_08B014E4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B014F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B01518u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B01550;
L_08B01518:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08B01524u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08B01538;
L_08B01524:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01538:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01550:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01568:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[31] = (0x08B01590u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 665u, 0x08AA31B4u>(ctx, &aot_mem) && ctx.pc == 0x08B01590u) goto L_08B01590;
    return;
L_08B01590:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[31] = (0x08B0159Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 665u, 0x08AA31B4u>(ctx, &aot_mem) && ctx.pc == 0x08B0159Cu) goto L_08B0159C;
    return;
L_08B0159C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-128));
      if (branch_taken) {
          goto L_08B015F4;
      }
      goto L_08B015BC;
    }
L_08B015BC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08B015C0;
L_08B015C0:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] | 128u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08B015C0;
    }
    goto L_08B015F4;
L_08B015F4:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0160C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08B0161C;
L_08B0161C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B01648;
      }
      goto L_08B01628;
    }
L_08B01628:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B01640;
      }
      goto L_08B01630;
    }
L_08B01630:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08B01648;
      }
      goto L_08B01640;
    }
L_08B01640:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B016C4;
      }
      goto L_08B01648;
    }
L_08B01648:
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 128u);
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0161C;
      }
      goto L_08B01664;
    }
L_08B01664:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-128));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[7] & 127u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] & 127u);
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    goto L_08B016C4;
L_08B016C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B016CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 28u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B016E8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B016F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B01700u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08B0170C;
L_08B01700:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0170C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B01770;
      }
      goto L_08B01720;
    }
L_08B01720:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    goto L_08B0172C;
L_08B0172C:
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B01764;
      }
      goto L_08B01738;
    }
L_08B01738:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    goto L_08B0173C;
L_08B0173C:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08B0175C;
      }
      goto L_08B01748;
    }
L_08B01748:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B0173C;
      }
      goto L_08B01754;
    }
L_08B01754:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01764;
      }
      goto L_08B0175C;
    }
L_08B0175C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08B01774;
      }
      goto L_08B01764;
    }
L_08B01764:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B0172C;
      }
      goto L_08B01770;
    }
L_08B01770:
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
    goto L_08B01774;
L_08B01774:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0177C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B017C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x08B017C0u) goto L_08B017C0;
    return;
L_08B017C0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08B017E8u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08B01898;
L_08B017E8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08B01818;
      }
      goto L_08B01804;
    }
L_08B01804:
    ctx.gpr[16] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[31] = (0x08B01810u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08B01810u) goto L_08B01810;
    return;
L_08B01810:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08B01818;
      }
      goto L_08B01818;
    }
L_08B01818:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01830:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B01884;
      }
      goto L_08B0184C;
    }
L_08B0184C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B01870;
      }
      goto L_08B01858;
    }
L_08B01858:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B01874;
    }
    goto L_08B01860;
L_08B01860:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B01874;
    }
    goto L_08B01868;
L_08B01868:
    ctx.gpr[31] = (0x08B01870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08B01870u) goto L_08B01870;
    return;
L_08B01870:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B01874;
L_08B01874:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01884;
      }
      goto L_08B0187C;
    }
L_08B0187C:
    ctx.gpr[31] = (0x08B01884u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08B01884u) goto L_08B01884;
    return;
L_08B01884:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01898:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B018AC:
    ctx.gpr[2] = (2224u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(6316));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B018B8:
    ctx.gpr[2] = (2224u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(6316));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B018C4:
    ctx.gpr[6] = (2224u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(6316));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B018F0;
      }
      goto L_08B018D4;
    }
L_08B018D4:
    ctx.gpr[6] = (2224u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4208));
    ctx.gpr[5] = (ctx.gpr[6] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B018F4;
      }
      goto L_08B018F0;
    }
L_08B018F0:
    ctx.gpr[4] = (0u | 1u);
    goto L_08B018F4;
L_08B018F4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B018FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B0194C;
      }
      goto L_08B01918;
    }
L_08B01918:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9460));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B0192Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 115u, 0x08AC4DBCu>(ctx, &aot_mem) && ctx.pc == 0x08B0192Cu) goto L_08B0192C;
    return;
L_08B0192C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B01938u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 7u, 0x08AC4044u>(ctx, &aot_mem) && ctx.pc == 0x08B01938u) goto L_08B01938;
    return;
L_08B01938:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0194C;
      }
      goto L_08B01944;
    }
L_08B01944:
    ctx.gpr[31] = (0x08B0194Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08B0194Cu) goto L_08B0194C;
    return;
L_08B0194C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01960:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 6u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01968:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B01984u);
    ctx.gpr[4] = (0u | 72u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 745u, 0x089C71ACu>(ctx, &aot_mem) && ctx.pc == 0x08B01984u) goto L_08B01984;
    return;
L_08B01984:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 72u);
    ctx.gpr[31] = (0x08B01994u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x08B01994u) goto L_08B01994;
    return;
L_08B01994:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B019AC;
      }
      goto L_08B019A0;
    }
L_08B019A0:
    ctx.gpr[31] = (0x08B019A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 527u, 0x089364A4u>(ctx, &aot_mem) && ctx.pc == 0x08B019A8u) goto L_08B019A8;
    return;
L_08B019A8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08B019AC;
L_08B019AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B019BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B01A0C;
      }
      goto L_08B019D0;
    }
L_08B019D0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08B01A00;
      }
      goto L_08B019DC;
    }
L_08B019DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B019FC;
      }
      goto L_08B019F0;
    }
L_08B019F0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08B019FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08B019FCu) goto L_08B019FC;
    return;
L_08B019FC:
    ctx.gpr[4] = (2233u << 16u);
    goto L_08B01A00;
L_08B01A00:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B01A0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08B01A0Cu) goto L_08B01A0C;
    return;
L_08B01A0C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01A1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B01A40u);
    ctx.gpr[4] = (0u | 72u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 745u, 0x089C71ACu>(ctx, &aot_mem) && ctx.pc == 0x08B01A40u) goto L_08B01A40;
    return;
L_08B01A40:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 72u);
    ctx.gpr[31] = (0x08B01A50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x08B01A50u) goto L_08B01A50;
    return;
L_08B01A50:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B01B38;
      }
      goto L_08B01A5C;
    }
L_08B01A5C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08B01A74u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08B01A74u) goto L_08B01A74;
    return;
L_08B01A74:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(36));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(44));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(44));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(52));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08B01B38;
L_08B01B38:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01B4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B01B60u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 557u, 0x089367A4u>(ctx, &aot_mem) && ctx.pc == 0x08B01B60u) goto L_08B01B60;
    return;
L_08B01B60:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01B6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 4u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B01BE8;
      }
      goto L_08B01B8C;
    }
L_08B01B8C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08B01B90;
L_08B01B90:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08B01BA4;
    }
    goto L_08B01B9C;
L_08B01B9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B01C74;
      }
      goto L_08B01BA4;
    }
L_08B01BA4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08B01BB8;
    }
    goto L_08B01BB0;
L_08B01BB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B01C74;
      }
      goto L_08B01BB8;
    }
L_08B01BB8:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08B01BCC;
    }
    goto L_08B01BC4;
L_08B01BC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B01C74;
      }
      goto L_08B01BCC;
    }
L_08B01BCC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B01BE0;
      }
      goto L_08B01BD8;
    }
L_08B01BD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B01C74;
      }
      goto L_08B01BE0;
    }
L_08B01BE0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B01B90;
      }
      goto L_08B01BE8;
    }
L_08B01BE8:
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B01C1C;
      }
      goto L_08B01C08;
    }
L_08B01C08:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B01C74;
      }
      goto L_08B01C10;
    }
L_08B01C10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B01C60;
      }
      goto L_08B01C18;
    }
L_08B01C18:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    goto L_08B01C1C;
L_08B01C1C:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B01C44;
      }
      goto L_08B01C24;
    }
L_08B01C24:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B01C74;
      }
      goto L_08B01C2C;
    }
L_08B01C2C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08B01C44;
    }
    goto L_08B01C3C;
L_08B01C3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B01C74;
      }
      goto L_08B01C44;
    }
L_08B01C44:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08B01C5C;
    }
    goto L_08B01C54;
L_08B01C54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B01C74;
      }
      goto L_08B01C5C;
    }
L_08B01C5C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08B01C60;
L_08B01C60:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B01C74;
      }
      goto L_08B01C6C;
    }
L_08B01C6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B01C74;
      }
      goto L_08B01C74;
    }
L_08B01C74:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01C7C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01C90:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15184)));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1030), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15184)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1031), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01CA8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 96u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[5] << 8u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01CD4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01CDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(176), 0u);
    ctx.gpr[5] = (ctx.gpr[7] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(180), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01D10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          goto L_08B01D54;
      }
      goto L_08B01D20;
    }
L_08B01D20:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9292));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-20436), 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          goto L_08B01D40;
      }
      goto L_08B01D38;
    }
L_08B01D38:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9948));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08B01D40;
L_08B01D40:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01D54;
      }
      goto L_08B01D4C;
    }
L_08B01D4C:
    ctx.gpr[31] = (0x08B01D54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08B01D54u) goto L_08B01D54;
    return;
L_08B01D54:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01D60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B01DEC;
      }
      goto L_08B01D7C;
    }
L_08B01D7C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01DAC;
      }
      goto L_08B01D88;
    }
L_08B01D88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01DAC;
      }
      goto L_08B01D98;
    }
L_08B01D98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01DAC;
      }
      goto L_08B01DA4;
    }
L_08B01DA4:
    ctx.gpr[31] = (0x08B01DACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08B01DACu) goto L_08B01DAC;
    return;
L_08B01DAC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B01DDC;
      }
      goto L_08B01DB4;
    }
L_08B01DB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B01DDC;
      }
      goto L_08B01DC4;
    }
L_08B01DC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B01DDC;
    }
    goto L_08B01DD0;
L_08B01DD0:
    ctx.gpr[31] = (0x08B01DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08B01DD8u) goto L_08B01DD8;
    return;
L_08B01DD8:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B01DDC;
L_08B01DDC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01DEC;
      }
      goto L_08B01DE4;
    }
L_08B01DE4:
    ctx.gpr[31] = (0x08B01DECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08B01DECu) goto L_08B01DEC;
    return;
L_08B01DEC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01E00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B01F20;
      }
      goto L_08B01E24;
    }
L_08B01E24:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9276));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(832));
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(7520));
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[6] = (0u | 208u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08B01E50u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 366u, 0x08AF5CA4u>(ctx, &aot_mem) && ctx.pc == 0x08B01E50u) goto L_08B01E50;
    return;
L_08B01E50:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(108));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(76));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B01E88;
      }
      goto L_08B01E60;
    }
L_08B01E60:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B01E88;
      }
      goto L_08B01E70;
    }
L_08B01E70:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01E88;
      }
      goto L_08B01E78;
    }
L_08B01E78:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01E88;
      }
      goto L_08B01E80;
    }
L_08B01E80:
    ctx.gpr[31] = (0x08B01E88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08B01E88u) goto L_08B01E88;
    return;
L_08B01E88:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01EB4;
      }
      goto L_08B01E90;
    }
L_08B01E90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B01EB4;
      }
      goto L_08B01E9C;
    }
L_08B01E9C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01EB4;
      }
      goto L_08B01EA4;
    }
L_08B01EA4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01EB4;
      }
      goto L_08B01EAC;
    }
L_08B01EAC:
    ctx.gpr[31] = (0x08B01EB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08B01EB4u) goto L_08B01EB4;
    return;
L_08B01EB4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01EE0;
      }
      goto L_08B01EBC;
    }
L_08B01EBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B01EE0;
      }
      goto L_08B01EC8;
    }
L_08B01EC8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01EE0;
      }
      goto L_08B01ED0;
    }
L_08B01ED0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01EE0;
      }
      goto L_08B01ED8;
    }
L_08B01ED8:
    ctx.gpr[31] = (0x08B01EE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08B01EE0u) goto L_08B01EE0;
    return;
L_08B01EE0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_08B01F10;
      }
      goto L_08B01EE8;
    }
L_08B01EE8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9292));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-20436), 0u);
      if (branch_taken) {
          goto L_08B01F0C;
      }
      goto L_08B01F00;
    }
L_08B01F00:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9948));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08B01F0C;
L_08B01F0C:
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    goto L_08B01F10;
L_08B01F10:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01F20;
      }
      goto L_08B01F18;
    }
L_08B01F18:
    ctx.gpr[31] = (0x08B01F20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08B01F20u) goto L_08B01F20;
    return;
L_08B01F20:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01F3C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-18044));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01F6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08B01FB4;
      }
      goto L_08B01F94;
    }
L_08B01F94:
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B01FB4;
      }
      goto L_08B01FB4;
    }
L_08B01FB4:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08B01FC4u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B01FC4u) goto L_08B01FC4;
    return;
L_08B01FC4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01FD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01FE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01FF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B02094;
      }
      goto L_08B02018;
    }
L_08B02018:
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[17]);
    ctx.gpr[5] = (0u | 12u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08B02040;
      }
      goto L_08B02034;
    }
L_08B02034:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B02034;
      }
      goto L_08B02040;
    }
L_08B02040:
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08B0204Cu);
    ctx.gpr[4] = (0u | 0u);
    goto L_08B020AC;
L_08B0204C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B02070u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08B020C0;
L_08B02070:
    ctx.gpr[31] = (0x08B02078u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08B020AC;
L_08B02078:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B02094u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08B028F8;
L_08B02094:
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
L_08B020AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B020C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[16]);
    ctx.gpr[19] = (0u | 12u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 17 ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08B0229C;
      }
      goto L_08B02110;
    }
L_08B02110:
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    goto L_08B0211C;
L_08B0211C:
    if (ctx.gpr[18] == 0u) {
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[22]));
        goto L_08B02180;
    }
    goto L_08B02124;
L_08B02124:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-12));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08B0219C;
      }
      goto L_08B02174;
    }
L_08B02174:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08B021A4;
      }
      goto L_08B0217C;
    }
L_08B0217C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[22]));
    goto L_08B02180;
L_08B02180:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B02194u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    goto L_08B022C8;
L_08B02194:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0229C;
      }
      goto L_08B0219C;
    }
L_08B0219C:
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_08B021A4;
L_08B021A4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08B02204;
      }
      goto L_08B021AC;
    }
L_08B021AC:
    ctx.gpr[6] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[6] = (0u | 1u);
        goto L_08B021C0;
    }
    goto L_08B021C0;
L_08B021C0:
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_08B021D8;
    }
    goto L_08B021CC;
L_08B021CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B02250;
      }
      goto L_08B021D4;
    }
L_08B021D4:
    ctx.gpr[4] = (0u | 0u);
    goto L_08B021D8;
L_08B021D8:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08B021E8;
    }
    goto L_08B021E8;
L_08B021E8:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B021FC;
      }
      goto L_08B021F4;
    }
L_08B021F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B0224C;
      }
      goto L_08B021FC;
    }
L_08B021FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B0224C;
      }
      goto L_08B02204;
    }
L_08B02204:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[6] = (0u | 1u);
        goto L_08B02214;
    }
    goto L_08B02214;
L_08B02214:
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08B02228;
      }
      goto L_08B02220;
    }
L_08B02220:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B0224C;
      }
      goto L_08B02228;
    }
L_08B02228:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[6] = (0u | 1u);
        goto L_08B02238;
    }
    goto L_08B02238;
L_08B02238:
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0224C;
      }
      goto L_08B02244;
    }
L_08B02244:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B0224C;
      }
      goto L_08B0224C;
    }
L_08B0224C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_08B02250;
L_08B02250:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B02260u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    goto L_08B027B8;
L_08B02260:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B0227Cu);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    goto L_08B020C0;
L_08B0227C:
    ctx.gpr[17] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (ctx.gpr[23] - ctx.gpr[16]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0211C;
      }
      goto L_08B02298;
    }
L_08B02298:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[22]));
    goto L_08B0229C;
L_08B0229C:
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
L_08B022C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[31] = (0x08B022E0u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B022EC;
L_08B022E0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B022EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[8]);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[22] = (0u | 12u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B0233Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08B02454;
L_08B0233C:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[17] - ctx.gpr[16]);
      if (branch_taken) {
          goto L_08B023E0;
      }
      goto L_08B0234C;
    }
L_08B0234C:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    goto L_08B02350;
L_08B02350:
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08B0236C;
    }
    goto L_08B0236C;
L_08B0236C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B023D0;
      }
      goto L_08B02378;
    }
L_08B02378:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[21]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[22]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08B023D0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    goto L_08B02518;
L_08B023D0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B02350;
      }
      goto L_08B023E0;
    }
L_08B023E0:
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[16]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[22]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[20]));
      if (branch_taken) {
          goto L_08B02428;
      }
      goto L_08B023F8;
    }
L_08B023F8:
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08B02400;
L_08B02400:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-12));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B02410u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08B02734;
L_08B02410:
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[16]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[22]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B02400;
      }
      goto L_08B02428;
    }
L_08B02428:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02454:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[16]);
    ctx.gpr[20] = (0u | 12u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B024F8;
      }
      goto L_08B0249C;
    }
L_08B0249C:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[20] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] >> 31u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 1u));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[4] << 2u);
    ctx.gpr[18] = (ctx.gpr[16] + ctx.gpr[18]);
    goto L_08B024D0;
L_08B024D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B024E8u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    goto L_08B02518;
L_08B024E8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B024F8;
      }
      goto L_08B024F0;
    }
L_08B024F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-12));
      if (branch_taken) {
          goto L_08B024D0;
      }
      goto L_08B024F8;
    }
L_08B024F8:
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
L_08B02518:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B025EC;
      }
      goto L_08B02554;
    }
L_08B02554:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[10] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-12));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[9] = (0u | 1u);
        goto L_08B02588;
    }
    goto L_08B02588;
L_08B02588:
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B02598;
      }
      goto L_08B02594;
    }
L_08B02594:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    goto L_08B02598;
L_08B02598:
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B02554;
      }
      goto L_08B025EC;
    }
L_08B025EC:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08B02638;
      }
      goto L_08B025F4;
    }
L_08B025F4:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-12));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    goto L_08B02638;
L_08B02638:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[10]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_08B0268C;
L_08B0268C:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B02714;
      }
      goto L_08B02694;
    }
L_08B02694:
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[9] = (0u | 1u);
        goto L_08B026B8;
    }
    goto L_08B026B8;
L_08B026B8:
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08B02718;
    }
    goto L_08B026C4;
L_08B026C4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 1u));
    ctx.gpr[9] = (ctx.gpr[9] >> 31u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B0268C;
      }
      goto L_08B02714;
    }
L_08B02714:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08B02718;
L_08B02718:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02734:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[8]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (0u | 12u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33))))));
    ctx.gpr[31] = (0x08B027ACu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08B02518;
L_08B027AC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B027B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12));
    goto L_08B027F4;
L_08B027F4:
    ctx.gpr[5] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[5] = (0u | 1u);
        goto L_08B02808;
    }
    goto L_08B02808;
L_08B02808:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0283C;
      }
      goto L_08B02814;
    }
L_08B02814:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[5] = (0u | 1u);
        goto L_08B02830;
    }
    goto L_08B02830;
L_08B02830:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B02814;
      }
      goto L_08B0283C;
    }
L_08B0283C:
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[9] = (0u | 1u);
        goto L_08B02858;
    }
    goto L_08B02858;
L_08B02858:
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B02890;
      }
      goto L_08B02864;
    }
L_08B02864:
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12));
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[9] = (0u | 1u);
        goto L_08B02884;
    }
    goto L_08B02884;
L_08B02884:
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B02864;
      }
      goto L_08B02890;
    }
L_08B02890:
    ctx.gpr[9] = (ctx.gpr[4] < ctx.gpr[8] ? 1u : 0u);
    if (ctx.gpr[9] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08B028E4;
    }
    goto L_08B0289C;
L_08B0289C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12));
      if (branch_taken) {
          goto L_08B027F4;
      }
      goto L_08B028E4;
    }
L_08B028E4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B028F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[6] = (0u | 12u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
      if (branch_taken) {
          goto L_08B02960;
      }
      goto L_08B0292C;
    }
L_08B0292C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x08B0293Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08B02980;
L_08B0293C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B02958u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08B02BCC;
L_08B02958:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0296C;
      }
      goto L_08B02960;
    }
L_08B02960:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08B0296Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08B02980;
L_08B0296C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02980:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B029C4;
      }
      goto L_08B029BC;
    }
L_08B029BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B02ADC;
      }
      goto L_08B029C4;
    }
L_08B029C4:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08B02ADC;
      }
      goto L_08B029D0;
    }
L_08B029D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[23] = (0u | 12u);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(37))))));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35))))));
    goto L_08B029EC;
L_08B029EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[22] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08B02A28;
    }
    goto L_08B02A28;
L_08B02A28:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
        goto L_08B02AB8;
    }
    goto L_08B02A34;
L_08B02A34:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08B02A48u);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    goto L_08B01FD0;
L_08B02A48:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[18] - ctx.gpr[16]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08B02A98;
      }
      goto L_08B02A6C;
    }
L_08B02A6C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-12));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08B02A6C;
      }
      goto L_08B02A98;
    }
L_08B02A98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B02AC4;
      }
      goto L_08B02AB8;
    }
L_08B02AB8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B02AC4u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    goto L_08B02B0C;
L_08B02AC4:
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08B029EC;
      }
      goto L_08B02AD0;
    }
L_08B02AD0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[21]));
    goto L_08B02ADC;
L_08B02ADC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02B0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[7] = (0u | 1u);
        goto L_08B02B54;
    }
    goto L_08B02B54;
L_08B02B54:
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B02BAC;
      }
      goto L_08B02B60;
    }
L_08B02B60:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-12));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[7] = (0u | 1u);
        goto L_08B02BA0;
    }
    goto L_08B02BA0;
L_08B02BA0:
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B02B60;
      }
      goto L_08B02BAC;
    }
L_08B02BAC:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02BCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08B02C14;
      }
      goto L_08B02BF4;
    }
L_08B02BF4:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    goto L_08B02BF8;
L_08B02BF8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B02C08u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08B02B0C;
L_08B02C08:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08B02BF8;
      }
      goto L_08B02C14;
    }
L_08B02C14:
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
L_08B02C2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_08B02C4C;
      }
      goto L_08B02C3C;
    }
L_08B02C3C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B02C4C;
      }
      goto L_08B02C44;
    }
L_08B02C44:
    ctx.gpr[31] = (0x08B02C4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08B02C4Cu) goto L_08B02C4C;
    return;
L_08B02C4C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02C58:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02C68:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02C78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B02CBC;
      }
      goto L_08B02C9C;
    }
L_08B02C9C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B02CB0;
      }
      goto L_08B02CA8;
    }
L_08B02CA8:
    ctx.gpr[31] = (0x08B02CB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08B02CB0u) goto L_08B02CB0;
    return;
L_08B02CB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B02C9C;
      }
      goto L_08B02CBC;
    }
L_08B02CBC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02CD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B02D2C;
      }
      goto L_08B02CF4;
    }
L_08B02CF4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B02D1C;
      }
      goto L_08B02CFC;
    }
L_08B02CFC:
    ctx.gpr[31] = (0x08B02D04u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08B02C78;
L_08B02D04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B02D1C;
    }
    goto L_08B02D10;
L_08B02D10:
    ctx.gpr[31] = (0x08B02D18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08B02D18u) goto L_08B02D18;
    return;
L_08B02D18:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B02D1C;
L_08B02D1C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B02D2C;
      }
      goto L_08B02D24;
    }
L_08B02D24:
    ctx.gpr[31] = (0x08B02D2Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08B02D2Cu) goto L_08B02D2C;
    return;
L_08B02D2C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02D40:
    ctx.gpr[2] = (2224u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(11584));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02D4C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08B02D5C;
L_08B02D5C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B02D88;
      }
      goto L_08B02D68;
    }
L_08B02D68:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B02D80;
      }
      goto L_08B02D70;
    }
L_08B02D70:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08B02D88;
      }
      goto L_08B02D80;
    }
L_08B02D80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B02E04;
      }
      goto L_08B02D88;
    }
L_08B02D88:
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 128u);
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B02D5C;
      }
      goto L_08B02DA4;
    }
L_08B02DA4:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-128));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[7] & 127u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] & 127u);
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    goto L_08B02E04;
L_08B02E04:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02E0C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 48u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] | 128u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B02E48;
      }
      goto L_08B02E44;
    }
L_08B02E44:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_08B02E48;
L_08B02E48:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02E50:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 48u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[5] << 8u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02E7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08B02EAC;
      }
      goto L_08B02EA4;
    }
L_08B02EA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B02EF8;
      }
      goto L_08B02EAC;
    }
L_08B02EAC:
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08B02EF8;
      }
      goto L_08B02EB8;
    }
L_08B02EB8:
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[18]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    jump_target = ctx.gpr[16];
    ctx.gpr[31] = (0x08B02ED4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B02ED4u) goto L_08B02ED4;
    return;
L_08B02ED4:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08B02EB8;
      }
      goto L_08B02EF8;
    }
L_08B02EF8:
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
L_08B02F14:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-27356)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02F24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B02F78;
      }
      goto L_08B02F40;
    }
L_08B02F40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B02F64;
      }
      goto L_08B02F4C;
    }
L_08B02F4C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B02F68;
    }
    goto L_08B02F54;
L_08B02F54:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B02F68;
    }
    goto L_08B02F5C;
L_08B02F5C:
    ctx.gpr[31] = (0x08B02F64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08B02F64u) goto L_08B02F64;
    return;
L_08B02F64:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B02F68;
L_08B02F68:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B02F78;
      }
      goto L_08B02F70;
    }
L_08B02F70:
    ctx.gpr[31] = (0x08B02F78u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08B02F78u) goto L_08B02F78;
    return;
L_08B02F78:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02F8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B02FF0;
      }
      goto L_08B02FA8;
    }
L_08B02FA8:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B02FDC;
      }
      goto L_08B02FB4;
    }
L_08B02FB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B02FDC;
      }
      goto L_08B02FC4;
    }
L_08B02FC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B02FDC;
    }
    goto L_08B02FD0;
L_08B02FD0:
    ctx.gpr[31] = (0x08B02FD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08B02FD8u) goto L_08B02FD8;
    return;
L_08B02FD8:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B02FDC;
L_08B02FDC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08B02FF0;
      }
      goto L_08B02FE4;
    }
L_08B02FE4:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B02FF0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08B02FF0u) goto L_08B02FF0;
    return;
L_08B02FF0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B03004:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08B03030u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 489u, 0x08A05EE4u>(ctx, &aot_mem) && ctx.pc == 0x08B03030u) goto L_08B03030;
    return;
L_08B03030:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(176), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(178)));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(178), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(181)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(181), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(182)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(182), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(183)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(183), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(192));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(16))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(214)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(214), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(216));
    goto L_08B0312C;
L_08B0312C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08B0312C;
      }
      goto L_08B03180;
    }
L_08B03180:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(336), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(337)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(337), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(338)));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(338), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(340)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(340), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(341))))));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(341), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(342)));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(342), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(344)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(344), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(345)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(345), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B031D8:
    ctx.gpr[2] = (2224u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-18044));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B031E4:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18044));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08B03230;
      }
      goto L_08B031F4;
    }
L_08B031F4:
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4780));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B03220;
      }
      goto L_08B03204;
    }
L_08B03204:
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4208));
    ctx.gpr[5] = (ctx.gpr[7] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08B03228;
      }
      goto L_08B03220;
    }
L_08B03220:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08B03228;
L_08B03228:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03234;
      }
      goto L_08B03230;
    }
L_08B03230:
    ctx.gpr[6] = (0u | 1u);
    goto L_08B03234;
L_08B03234:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[6] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0323C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B0328C;
      }
      goto L_08B03258;
    }
L_08B03258:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9260));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B0326Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 115u, 0x08AC4DBCu>(ctx, &aot_mem) && ctx.pc == 0x08B0326Cu) goto L_08B0326C;
    return;
L_08B0326C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B03278u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 202u, 0x08A49B08u>(ctx, &aot_mem) && ctx.pc == 0x08B03278u) goto L_08B03278;
    return;
L_08B03278:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0328C;
      }
      goto L_08B03284;
    }
L_08B03284:
    ctx.gpr[31] = (0x08B0328Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08B0328Cu) goto L_08B0328C;
    return;
L_08B0328C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B032A0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B032A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B032C4u);
    ctx.gpr[4] = (0u | 352u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 745u, 0x089C71ACu>(ctx, &aot_mem) && ctx.pc == 0x08B032C4u) goto L_08B032C4;
    return;
L_08B032C4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 352u);
    ctx.gpr[31] = (0x08B032D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x08B032D4u) goto L_08B032D4;
    return;
L_08B032D4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B032EC;
      }
      goto L_08B032E0;
    }
L_08B032E0:
    ctx.gpr[31] = (0x08B032E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 693u, 0x0897F8B4u>(ctx, &aot_mem) && ctx.pc == 0x08B032E8u) goto L_08B032E8;
    return;
L_08B032E8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08B032EC;
L_08B032EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B032FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B03358;
      }
      goto L_08B03310;
    }
L_08B03310:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08B0334C;
      }
      goto L_08B03318;
    }
L_08B03318:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08B0334C;
      }
      goto L_08B03324;
    }
L_08B03324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08B0334C;
      }
      goto L_08B03334;
    }
L_08B03334:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (2233u << 16u);
        goto L_08B0334C;
    }
    goto L_08B03340;
L_08B03340:
    ctx.gpr[31] = (0x08B03348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08B03348u) goto L_08B03348;
    return;
L_08B03348:
    ctx.gpr[4] = (2233u << 16u);
    goto L_08B0334C;
L_08B0334C:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B03358u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08B03358u) goto L_08B03358;
    return;
L_08B03358:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B03368:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B03388u);
    ctx.gpr[4] = (0u | 352u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 745u, 0x089C71ACu>(ctx, &aot_mem) && ctx.pc == 0x08B03388u) goto L_08B03388;
    return;
L_08B03388:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 352u);
    ctx.gpr[31] = (0x08B03398u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x08B03398u) goto L_08B03398;
    return;
L_08B03398:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08B033B8;
      }
      goto L_08B033A8;
    }
L_08B033A8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B033B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B03004;
L_08B033B4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08B033B8;
L_08B033B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B033C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B033DCu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 740u, 0x0897FCF0u>(ctx, &aot_mem) && ctx.pc == 0x08B033DCu) goto L_08B033DC;
    return;
L_08B033DC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B033E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 4u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B03464;
      }
      goto L_08B03408;
    }
L_08B03408:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08B0340C;
L_08B0340C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08B03420;
    }
    goto L_08B03418;
L_08B03418:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B034F0;
      }
      goto L_08B03420;
    }
L_08B03420:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08B03434;
    }
    goto L_08B0342C;
L_08B0342C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B034F0;
      }
      goto L_08B03434;
    }
L_08B03434:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08B03448;
    }
    goto L_08B03440;
L_08B03440:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B034F0;
      }
      goto L_08B03448;
    }
L_08B03448:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B0345C;
      }
      goto L_08B03454;
    }
L_08B03454:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B034F0;
      }
      goto L_08B0345C;
    }
L_08B0345C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B0340C;
      }
      goto L_08B03464;
    }
L_08B03464:
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B03498;
      }
      goto L_08B03484;
    }
L_08B03484:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B034F0;
      }
      goto L_08B0348C;
    }
L_08B0348C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B034DC;
      }
      goto L_08B03494;
    }
L_08B03494:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    goto L_08B03498;
L_08B03498:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B034C0;
      }
      goto L_08B034A0;
    }
L_08B034A0:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B034F0;
      }
      goto L_08B034A8;
    }
L_08B034A8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08B034C0;
    }
    goto L_08B034B8;
L_08B034B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B034F0;
      }
      goto L_08B034C0;
    }
L_08B034C0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08B034D8;
    }
    goto L_08B034D0;
L_08B034D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B034F0;
      }
      goto L_08B034D8;
    }
L_08B034D8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08B034DC;
L_08B034DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B034F0;
      }
      goto L_08B034E8;
    }
L_08B034E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B034F0;
      }
      goto L_08B034F0;
    }
L_08B034F0:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B034F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B0356C;
      }
      goto L_08B03514;
    }
L_08B03514:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17060));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03534;
      }
      goto L_08B0352C;
    }
L_08B0352C:
    ctx.gpr[31] = (0x08B03534u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 585u, 0x08806498u>(ctx, &aot_mem) && ctx.pc == 0x08B03534u) goto L_08B03534;
    return;
L_08B03534:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B0355C;
      }
      goto L_08B0353C;
    }
L_08B0353C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17516));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B03558;
      }
      goto L_08B0354C;
    }
L_08B0354C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13548));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_08B03558;
L_08B03558:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B0355C;
L_08B0355C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0356C;
      }
      goto L_08B03564;
    }
L_08B03564:
    ctx.gpr[31] = (0x08B0356Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08B0356Cu) goto L_08B0356C;
    return;
L_08B0356C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B03580:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B03594:
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B035A4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08B035B4;
L_08B035B4:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B035E0;
      }
      goto L_08B035C0;
    }
L_08B035C0:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B035D8;
      }
      goto L_08B035C8;
    }
L_08B035C8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08B035E0;
      }
      goto L_08B035D8;
    }
L_08B035D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B0365C;
      }
      goto L_08B035E0;
    }
L_08B035E0:
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 128u);
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B035B4;
      }
      goto L_08B035FC;
    }
L_08B035FC:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-128));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[7] & 127u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] & 127u);
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(3248));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    goto L_08B0365C;
L_08B0365C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B03664:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 3248u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] | 128u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B036A0;
      }
      goto L_08B0369C;
    }
L_08B0369C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_08B036A0;
L_08B036A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B036A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
        goto L_08B03718;
    }
    goto L_08B036DC;
L_08B036DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08B036E8;
L_08B036E8:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
        goto L_08B03708;
    }
    goto L_08B036F8;
L_08B036F8:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B0370C;
      }
      goto L_08B03708;
    }
L_08B03708:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08B0370C;
L_08B0370C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08B036E8;
    }
    goto L_08B03714;
L_08B03714:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    goto L_08B03718;
L_08B03718:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
        goto L_08B03768;
    }
    goto L_08B0372C;
L_08B0372C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_08B03738;
L_08B03738:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_08B03758;
    }
    goto L_08B03748;
L_08B03748:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B0375C;
      }
      goto L_08B03758;
    }
L_08B03758:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08B0375C;
L_08B0375C:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_08B03738;
    }
    goto L_08B03764;
L_08B03764:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    goto L_08B03768;
L_08B03768:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08B037C0;
      }
      goto L_08B03794;
    }
L_08B03794:
    ctx.gpr[31] = (0x08B0379Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 888u, 0x08AFBD8Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0379Cu) goto L_08B0379C;
    return;
L_08B0379C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B03794;
      }
      goto L_08B037BC;
    }
L_08B037BC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08B037C0;
L_08B037C0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08B03860;
      }
      goto L_08B037F4;
    }
L_08B037F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08B03864;
    }
    goto L_08B03814;
L_08B03814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B038E4;
      }
      goto L_08B03820;
    }
L_08B03820:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08B03834u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 540u, 0x08AFE470u>(ctx, &aot_mem) && ctx.pc == 0x08B03834u) goto L_08B03834;
    return;
L_08B03834:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08B038E4;
      }
      goto L_08B03860;
    }
L_08B03860:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08B03864;
L_08B03864:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_08B038E4;
      }
      goto L_08B0387C;
    }
L_08B0387C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B0388Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 888u, 0x08AFBD8Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0388Cu) goto L_08B0388C;
    return;
L_08B0388C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08B038A8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 798u, 0x08AFF75Cu>(ctx, &aot_mem) && ctx.pc == 0x08B038A8u) goto L_08B038A8;
    return;
L_08B038A8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08B038C0;
    }
    goto L_08B038B4;
L_08B038B4:
    ctx.gpr[31] = (0x08B038BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08B038BCu) goto L_08B038BC;
    return;
L_08B038BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08B038C0;
L_08B038C0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B0387C;
      }
      goto L_08B038E4;
    }
L_08B038E4:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B03908:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08B03964;
      }
      goto L_08B03934;
    }
L_08B03934:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B03A14;
      }
      goto L_08B0393C;
    }
L_08B0393C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B03964;
      }
      goto L_08B03944;
    }
L_08B03944:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03A14;
      }
      goto L_08B03964;
    }
L_08B03964:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[4] = (0u | 24u);
    ctx.gpr[31] = (0x08B03978u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08B03978u) goto L_08B03978;
    return;
L_08B03978:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08B039A8;
      }
      goto L_08B0398C;
    }
L_08B0398C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[31] = (0x08B0399Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x08B0399Cu) goto L_08B0399C;
    return;
L_08B0399C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08B039A8;
L_08B039A8:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B039C4;
      }
      goto L_08B039B4;
    }
L_08B039B4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08B039C4;
L_08B039C4:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08B039FC;
      }
      goto L_08B039E4;
    }
L_08B039E4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08B03A9C;
      }
      goto L_08B039FC;
    }
L_08B039FC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08B03A9C;
      }
      goto L_08B03A0C;
    }
L_08B03A0C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08B03A9C;
      }
      goto L_08B03A14;
    }
L_08B03A14:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[4] = (0u | 24u);
    ctx.gpr[31] = (0x08B03A28u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08B03A28u) goto L_08B03A28;
    return;
L_08B03A28:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08B03A58;
      }
      goto L_08B03A3C;
    }
L_08B03A3C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[31] = (0x08B03A4Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x08B03A4Cu) goto L_08B03A4C;
    return;
L_08B03A4C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08B03A58;
L_08B03A58:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03A74;
      }
      goto L_08B03A64;
    }
L_08B03A64:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08B03A74;
L_08B03A74:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08B03A9C;
      }
      goto L_08B03A98;
    }
L_08B03A98:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08B03A9C;
L_08B03A9C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B03AB8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 865u, 0x08AFBC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08B03AB8u) goto L_08B03AB8;
    return;
L_08B03AB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
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
L_08B03AE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08B03B54;
      }
      goto L_08B03B1C;
    }
L_08B03B1C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08B03B48;
      }
      goto L_08B03B3C;
    }
L_08B03B3C:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B03B4C;
      }
      goto L_08B03B48;
    }
L_08B03B48:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08B03B4C;
L_08B03B4C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B03B1C;
      }
      goto L_08B03B54;
    }
L_08B03B54:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08B03BC4;
      }
      goto L_08B03B5C;
    }
L_08B03B5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B03B94;
      }
      goto L_08B03B84;
    }
L_08B03B84:
    ctx.gpr[31] = (0x08B03B8Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 898u, 0x08AFBDFCu>(ctx, &aot_mem) && ctx.pc == 0x08B03B8Cu) goto L_08B03B8C;
    return;
L_08B03B8C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B03BC4;
      }
      goto L_08B03B94;
    }
L_08B03B94:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B03BB0u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B03908;
L_08B03BB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08B03C2C;
      }
      goto L_08B03BC4;
    }
L_08B03BC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03C1C;
      }
      goto L_08B03BEC;
    }
L_08B03BEC:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B03C08u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B03908;
L_08B03C08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08B03C2C;
      }
      goto L_08B03C1C;
    }
L_08B03C1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08B03C2C;
L_08B03C2C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B03C4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08B03E14;
      }
      goto L_08B03C88;
    }
L_08B03C88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03CE0;
      }
      goto L_08B03C94;
    }
L_08B03C94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03CFC;
      }
      goto L_08B03CBC;
    }
L_08B03CBC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B03CD8u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B03908;
L_08B03CD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 8u, 0x08B0405Cu>(ctx, &aot_mem); return;
      }
      goto L_08B03CE0;
    }
L_08B03CE0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B03CF0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B03AE0;
L_08B03CF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 8u, 0x08B0405Cu>(ctx, &aot_mem); return;
      }
      goto L_08B03CFC;
    }
L_08B03CFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03D90;
      }
      goto L_08B03D20;
    }
L_08B03D20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B03D2Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 888u, 0x08AFBD8Cu>(ctx, &aot_mem) && ctx.pc == 0x08B03D2Cu) goto L_08B03D2C;
    return;
L_08B03D2C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B03D6C;
      }
      goto L_08B03D3C;
    }
L_08B03D3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(106), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B03D9C;
      }
      goto L_08B03D64;
    }
L_08B03D64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03DF8;
      }
      goto L_08B03D6C;
    }
L_08B03D6C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B03D88u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08B03908;
L_08B03D88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 8u, 0x08B0405Cu>(ctx, &aot_mem); return;
      }
      goto L_08B03D90;
    }
L_08B03D90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 8u, 0x08B0405Cu>(ctx, &aot_mem); return;
      }
      goto L_08B03D9C;
    }
L_08B03D9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B03DD4;
      }
      goto L_08B03DB0;
    }
L_08B03DB0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B03DCCu);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08B03908;
L_08B03DCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 8u, 0x08B0405Cu>(ctx, &aot_mem); return;
      }
      goto L_08B03DD4;
    }
L_08B03DD4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B03DF0u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B03908;
L_08B03DF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 8u, 0x08B0405Cu>(ctx, &aot_mem); return;
      }
      goto L_08B03DF8;
    }
L_08B03DF8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B03E08u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B03AE0;
L_08B03E08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 8u, 0x08B0405Cu>(ctx, &aot_mem); return;
      }
      goto L_08B03E14;
    }
L_08B03E14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B03E9C;
      }
      goto L_08B03E24;
    }
L_08B03E24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(107), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03E80;
      }
      goto L_08B03E54;
    }
L_08B03E54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B03E78u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08B03908;
L_08B03E78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 8u, 0x08B0405Cu>(ctx, &aot_mem); return;
      }
      goto L_08B03E80;
    }
L_08B03E80:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B03E90u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B03AE0;
L_08B03E90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 8u, 0x08B0405Cu>(ctx, &aot_mem); return;
      }
      goto L_08B03E9C;
    }
L_08B03E9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B03EA8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 898u, 0x08AFBDFCu>(ctx, &aot_mem) && ctx.pc == 0x08B03EA8u) goto L_08B03EA8;
    return;
L_08B03EA8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03F54;
      }
      goto L_08B03ED0;
    }
L_08B03ED0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(109), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03F54;
      }
      goto L_08B03EF8;
    }
L_08B03EF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B03F30;
      }
      goto L_08B03F0C;
    }
L_08B03F0C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B03F28u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08B03908;
L_08B03F28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 8u, 0x08B0405Cu>(ctx, &aot_mem); return;
      }
      goto L_08B03F30;
    }
L_08B03F30:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B03F4Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B03908;
L_08B03F4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 8u, 0x08B0405Cu>(ctx, &aot_mem); return;
      }
      goto L_08B03F54;
    }
L_08B03F54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B03F60u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 888u, 0x08AFBD8Cu>(ctx, &aot_mem) && ctx.pc == 0x08B03F60u) goto L_08B03F60;
    return;
L_08B03F60:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B03F88;
      }
      goto L_08B03F6C;
    }
L_08B03F6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(110), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    goto L_08B03F88;
L_08B03F88:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 4u, 0x08B0402Cu>(ctx, &aot_mem); return;
      }
      goto L_08B03F90;
    }
L_08B03F90:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 4u, 0x08B0402Cu>(ctx, &aot_mem); return;
      }
      goto L_08B03F98;
    }
L_08B03F98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B03FD0;
      }
      goto L_08B03FA8;
    }
L_08B03FA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(111), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 4u, 0x08B0402Cu>(ctx, &aot_mem); return;
      }
      goto L_08B03FD0;
    }
L_08B03FD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 2u, 0x08B04008u>(ctx, &aot_mem); return;
      }
      goto L_08B03FE4;
    }
L_08B03FE4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B04000u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08B03908;
}

void recomp_unit_0191(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0191_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_191(Runtime &runtime) {
    runtime.register_generated_unit(191u, 0x08B00000u, 16384u, &recomp_unit_0191, &recomp_unit_0191_entry);
    runtime.register_function(0x08B00000u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00018u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00020u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00030u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0003Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00060u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0006Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0007Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B000A4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B000ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B000C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B000D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B000DCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B000F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0010Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00114u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00130u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00138u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00148u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00154u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00164u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00194u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B001B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B001C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B001D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B001DCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B001E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00210u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00238u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0024Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00268u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00270u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0028Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00294u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B002A0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B002ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B002C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B002D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B002D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B002E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00310u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00324u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00340u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00348u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00364u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0036Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00374u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00380u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00390u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0039Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B003BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B003F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00404u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0042Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00448u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00450u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00460u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0046Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00490u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0049Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B004ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B004D4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B004DCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B004F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00500u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0050Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00520u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0053Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00544u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00560u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00568u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00578u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00584u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00594u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B005C4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B005E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B005F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00600u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0060Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00618u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00640u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00668u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0067Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00698u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B006A0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B006BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B006C4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B006D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B006DCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B006F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00700u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00708u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00718u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00740u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00754u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00770u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00778u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00794u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0079Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B007A4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B007B0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B007C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B007CCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B007ECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00808u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00810u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00824u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00834u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0084Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00858u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00864u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0086Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00878u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0089Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B008B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B008C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B008C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B008D4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B008DCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B008E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B008F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B008FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00904u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0090Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00914u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0091Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00924u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0092Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00934u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0093Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00948u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00950u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00958u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00970u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0097Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00980u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00988u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00990u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B009ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B009D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B009DCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B009E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B009F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00A0Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00A28u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00A34u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00A3Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00A40u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00A4Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00A58u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00A6Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00AC0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00AD0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00ADCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00AE4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00AFCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B14u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B28u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B38u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B48u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B54u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B68u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B78u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B80u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B90u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B9Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00BB0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00BBCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00BC8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00BD0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00BDCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00BF0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C00u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C08u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C0Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C14u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C24u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C30u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C44u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C54u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C5Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C60u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C70u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C78u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C80u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C8Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C9Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00CA4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00CA8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00CB0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00CB4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00CBCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00CC4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00CFCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D10u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D1Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D24u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D2Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D34u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D44u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D4Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D5Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D68u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D74u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D80u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D88u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D94u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00DA4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00DB0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00DC0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00DCCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00DD8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00DE0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00DECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E08u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E10u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E1Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E24u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E38u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E50u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E64u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E80u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E8Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E98u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00EA0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00EB4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00EC8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00EDCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F1Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F28u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F34u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F48u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F5Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F78u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F84u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F90u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00FA0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00FACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00FB4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00FB8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00FC0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00FD0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00FDCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00FE4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00FECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00FF4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01004u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01010u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01018u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0101Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01024u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0102Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01040u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0105Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01070u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0107Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01090u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0109Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B010A8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B010B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B010D4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B010D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B010E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B010FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01110u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0111Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01128u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01130u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01144u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0114Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01168u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01178u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01184u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0118Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01190u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B011A0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B011B0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B011C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B011CCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B011E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B011F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01208u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01234u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01240u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01254u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01260u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01268u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B012A0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B012A4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B012ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B012B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B012C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B012E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B012E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B012F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B012FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0130Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0131Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01338u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01340u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01348u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0134Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01354u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01380u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B013ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B013B0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B013C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B013D4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B013F4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01418u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01424u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01430u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01444u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01464u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01468u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01480u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0148Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01494u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B014A0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B014B0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B014CCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B014D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B014E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B014E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B014F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01518u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01524u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01538u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01550u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01568u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01590u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0159Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B015BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B015C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B015F4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0160Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0161Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01628u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01630u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01640u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01648u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01664u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B016C4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B016CCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B016E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B016F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01700u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0170Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01720u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0172Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01738u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0173Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01748u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01754u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0175Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01764u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01770u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01774u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0177Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B017C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B017E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01804u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01810u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01818u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01830u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0184Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01858u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01860u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01868u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01870u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01874u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0187Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01884u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01898u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B018ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B018B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B018C4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B018D4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B018F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B018F4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B018FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01918u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0192Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01938u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01944u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0194Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01960u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01968u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01984u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01994u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B019A0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B019A8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B019ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B019BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B019D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B019DCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B019F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B019FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01A00u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01A0Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01A1Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01A40u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01A50u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01A5Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01A74u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B38u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B4Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B60u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B6Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B8Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B90u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B9Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01BA4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01BB0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01BB8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01BC4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01BCCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01BD8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01BE0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01BE8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C08u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C10u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C18u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C1Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C24u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C2Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C3Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C44u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C54u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C5Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C60u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C6Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C74u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C7Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C90u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01CA8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01CD4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01CDCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D10u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D20u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D38u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D40u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D4Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D54u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D60u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D7Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D88u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D98u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01DA4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01DACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01DB4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01DC4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01DD0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01DD8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01DDCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01DE4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01DECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E00u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E24u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E50u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E60u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E70u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E78u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E80u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E88u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E90u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E9Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01EA4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01EACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01EB4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01EBCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01EC8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01ED0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01ED8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01EE0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01EE8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F00u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F0Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F10u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F18u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F20u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F3Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F6Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F94u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01FB4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01FC4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01FD0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01FE4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01FF8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02018u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02034u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02040u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0204Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02070u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02078u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02094u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B020ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B020C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02110u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0211Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02124u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02174u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0217Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02180u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02194u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0219Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B021A4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B021ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B021C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B021CCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B021D4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B021D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B021E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B021F4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B021FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02204u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02214u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02220u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02228u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02238u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02244u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0224Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02250u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02260u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0227Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02298u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0229Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B022C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B022E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B022ECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0233Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0234Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02350u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0236Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02378u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B023D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B023E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B023F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02400u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02410u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02428u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02454u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0249Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B024D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B024E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B024F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B024F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02518u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02554u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02588u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02594u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02598u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B025ECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B025F4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02638u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0268Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02694u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B026B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B026C4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02714u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02718u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02734u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B027ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B027B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B027F4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02808u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02814u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02830u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0283Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02858u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02864u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02884u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02890u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0289Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B028E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B028F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0292Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0293Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02958u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02960u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0296Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02980u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B029BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B029C4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B029D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B029ECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02A28u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02A34u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02A48u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02A6Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02A98u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02AB8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02AC4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02AD0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02ADCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02B0Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02B54u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02B60u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02BA0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02BACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02BCCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02BF4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02BF8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C08u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C14u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C2Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C3Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C44u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C4Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C58u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C68u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C78u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C9Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02CA8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02CB0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02CBCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02CD8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02CF4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02CFCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02D04u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02D10u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02D18u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02D1Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02D24u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02D2Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02D40u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02D4Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02D5Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02D68u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02D70u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02D80u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02D88u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02DA4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E04u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E0Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E44u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E48u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E50u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E7Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02EA4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02EACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02EB8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02ED4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02EF8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F14u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F24u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F40u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F4Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F54u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F5Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F64u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F68u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F70u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F78u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F8Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02FA8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02FB4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02FC4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02FD0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02FD8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02FDCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02FE4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02FF0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03004u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03030u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0312Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03180u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B031D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B031E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B031F4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03204u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03220u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03228u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03230u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03234u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0323Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03258u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0326Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03278u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03284u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0328Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B032A0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B032A8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B032C4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B032D4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B032E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B032E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B032ECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B032FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03310u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03318u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03324u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03334u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03340u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03348u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0334Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03358u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03368u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03388u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03398u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B033A8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B033B4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B033B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B033C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B033DCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B033E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03408u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0340Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03418u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03420u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0342Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03434u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03440u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03448u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03454u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0345Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03464u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03484u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0348Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03494u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03498u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B034A0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B034A8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B034B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B034C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B034D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B034D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B034DCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B034E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B034F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B034F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03514u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0352Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03534u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0353Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0354Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03558u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0355Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03564u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0356Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03580u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03594u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B035A4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B035B4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B035C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B035C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B035D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B035E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B035FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0365Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03664u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0369Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B036A0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B036A8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B036DCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B036E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B036F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03708u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0370Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03714u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03718u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0372Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03738u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03748u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03758u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0375Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03764u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03768u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03794u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0379Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B037BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B037C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B037F4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03814u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03820u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03834u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03860u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03864u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0387Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0388Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B038A8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B038B4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B038BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B038C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B038E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03908u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03934u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0393Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03944u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03964u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03978u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0398Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0399Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B039A8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B039B4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B039C4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B039E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B039FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03A0Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03A14u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03A28u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03A3Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03A4Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03A58u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03A64u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03A74u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03A98u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03A9Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03AB8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03AE0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03B1Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03B3Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03B48u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03B4Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03B54u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03B5Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03B84u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03B8Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03B94u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03BB0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03BC4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03BECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03C08u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03C1Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03C2Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03C4Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03C88u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03C94u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03CBCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03CD8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03CE0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03CF0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03CFCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03D20u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03D2Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03D3Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03D64u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03D6Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03D88u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03D90u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03D9Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03DB0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03DCCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03DD4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03DF0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03DF8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E08u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E14u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E24u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E54u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E78u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E80u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E90u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E9Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03EA8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03ED0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03EF8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F0Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F28u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F30u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F4Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F54u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F60u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F6Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F88u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F90u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F98u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03FA8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03FD0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03FE4u, &recomp_unit_0191, "recomp_unit_0191");
}
} // namespace psprecomp
