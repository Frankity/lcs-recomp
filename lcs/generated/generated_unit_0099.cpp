#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0099[4086] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 4, 0, 0, 5, 0, 0, 6, 0, 7, 8, 0, 9, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 14,
    0, 0, 15, 0, 16, 17, 0, 18, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 0, 24, 0, 25,
    26, 27, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 33, 0, 34,
    35, 36, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0,
    0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 46, 47, 48, 0, 0, 49, 0, 0,
    0, 0, 50, 0, 51, 0, 0, 0, 0, 52, 0, 0, 53, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0,
    58, 0, 0, 59, 0, 60, 61, 0, 62, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 0, 70, 0, 71, 72, 0, 73, 0, 74, 0, 0, 0, 0, 75, 0, 76, 0,
    0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 81, 82, 83, 0, 0, 0, 84, 0, 0, 0, 0, 85,
    0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 90, 91, 92, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0,
    0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 99, 100, 101, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0,
    0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 108, 109, 110, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0, 119, 120,
    121, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0,
    0, 127, 0, 0, 128, 0, 129, 130, 0, 131, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 137,
    0, 138, 139, 140, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 147, 148, 149, 0, 0,
    150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0, 156, 157, 158, 0, 0, 159,
    0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 164, 0, 0, 165, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 169, 0, 170, 171, 172, 0, 0, 173, 0, 0, 0,
    0, 174, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 179, 0,
    0, 180, 0, 181, 182, 183, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 192, 193, 194, 0, 0, 195, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0,
    0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 202, 203, 0, 204, 0, 0, 205, 0, 0,
    0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 209, 0, 0, 210, 0, 211, 212, 213, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0,
    0, 216, 0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 220, 221, 222, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225,
    0, 0, 0, 226, 0, 0, 227, 0, 0, 228, 0, 229, 230, 231, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234,
    0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0,
    240, 0, 0, 241, 0, 0, 242, 0, 243, 244, 0, 245, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 0, 253, 0, 254, 255, 0, 256, 0, 257, 0, 0, 0, 0, 258,
    0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 262, 0, 0, 263, 0, 0,
    264, 0, 265, 266, 0, 267, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 274, 0, 0, 275, 0, 276, 277, 0, 278, 0, 0, 279, 0, 0, 0, 0, 280, 0, 281, 0,
    0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 285, 0, 286, 287, 0, 288, 0,
    0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0, 293, 0, 0, 294, 0, 295, 296, 0, 297, 0, 0, 298, 0, 0, 0,
    0, 299, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0, 302, 0, 0, 303, 0, 304, 305, 306, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0,
    0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 312, 0, 313, 314, 315, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 322, 0, 0,
    323, 0, 324, 325, 326, 0, 0, 327, 0, 0, 0, 0, 328, 329, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 332, 0,
    0, 333, 0, 334, 335, 336, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 339, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 341, 0, 0, 342, 0, 0, 343, 0, 344, 345, 0, 346, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 350, 0,
    0, 351, 0, 0, 352, 0, 353, 354, 355, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 360, 0, 0, 361, 0,
    362, 363, 364, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 369, 0, 0, 370, 0,
    371, 372, 373, 0, 0, 374, 0, 0, 0, 0, 375, 0, 376, 0, 0, 0, 377, 0, 0, 378, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 380, 0, 0, 381, 0, 0, 382, 0, 0, 383, 0, 384, 385, 0, 386, 0, 0, 387, 0, 0, 0, 0, 388, 0, 389, 0, 0, 0, 0, 0,
    0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 392, 0, 0, 393, 0, 394, 395, 0, 396, 0, 0, 397,
    0, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 401, 0, 0, 402, 0, 403, 404, 0, 405, 0, 0, 406, 0, 0, 0, 0,
    407, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 410, 0, 0, 411, 0, 412, 413, 414, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0,
    0, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 419, 0, 0, 420, 0, 421, 422, 423, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0, 431, 0,
    432, 433, 434, 0, 0, 435, 0, 0, 0, 0, 436, 437, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 440, 0, 0, 441,
    0, 442, 443, 0, 444, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 449, 0,
    0, 450, 0, 451, 452, 0, 453, 0, 0, 454, 0, 0, 0, 0, 455, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 458, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 466, 0, 467, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 470, 471, 0, 472,
    0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 0, 0, 0, 0, 0,
    477, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 479, 480, 0, 481, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 484, 0, 485, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 488, 489, 0, 490, 0,
    0, 0, 0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 494, 0, 0, 0, 0, 0, 0, 495, 0,
    0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 497, 498, 0, 499, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 502, 0, 503, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 506, 507, 0, 508, 0,
    0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 512, 0, 0, 0, 0, 0, 0,
    513, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 515, 516, 0, 517, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 519, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 520, 0, 521, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 524, 525, 0, 526,
    0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 530, 0, 0, 0, 0, 0, 0,
    531, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 533, 534, 0, 535, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 537, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 539, 0, 540, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0,
    0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 548,
    0, 549, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 552, 0, 0, 553, 0, 0, 0, 554, 0, 555, 0, 0, 0, 0, 0, 556, 0, 0, 0, 557, 0, 558, 0, 0, 0, 0, 0, 0, 0, 559, 0,
    0, 0, 0, 560, 0, 561, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 563, 0, 0, 564, 0, 0, 0, 565, 0, 0, 0, 566, 0, 567, 0, 0,
    0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 571, 0, 572, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 575,
    0, 576, 0, 577, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 579, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581,
    0, 582, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 587, 0, 0, 0, 0, 0, 588, 0, 0, 0, 589, 0, 0, 0, 0, 590, 0, 0,
    0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 593, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0,
    0, 596, 597, 0, 598, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 600, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    602, 0, 603, 0, 0, 0, 0, 0, 604, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 607,
    0, 608, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 611, 0, 0, 612, 0, 0, 613, 0,
    0, 614, 0, 0, 615, 616, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 618, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 620, 0, 0, 0,
    0, 0, 0, 621, 622, 0, 623, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 626, 627, 0, 0, 0, 628, 0, 629,
    0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 633, 0, 634, 0, 0, 0, 0, 0, 635, 0, 636,
    0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 643, 0, 644, 0, 0,
    0, 0, 0, 645, 0, 0, 0, 646, 0, 647, 0, 648, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 651, 0, 652,
    0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 655, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 657, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 660, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0,
    0, 0, 0, 662, 0, 0, 663, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 667, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0,
    0, 0, 0, 669, 0, 0, 670, 671, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 673, 0, 0, 0, 0, 0, 674, 0, 0, 675, 0, 0, 676, 0, 0, 677, 0, 678, 0, 0, 0, 0,
    0, 0, 679, 0, 0, 0, 680, 0, 0, 681, 0, 0, 0, 682, 0, 0, 0, 683, 0, 684, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 686, 0,
    0, 687, 0, 0, 0, 0, 688, 0, 0, 0, 0, 689, 0, 690, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 692, 0, 0, 693, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0, 696, 0, 0, 0, 0, 0, 697, 0, 0, 0, 698, 0, 0, 699, 700, 0,
    0, 0, 0, 0, 0, 0, 0, 701, 0, 702, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 705, 706, 0, 707,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 709, 0, 0, 0, 710, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 0, 712, 0, 713,
    0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 716, 717, 0, 718, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0,
    720, 0, 0, 0, 0, 0, 0, 0, 721, 0, 722, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 724, 0, 0, 725, 0, 0, 0, 726, 0, 0, 0,
    727, 0, 728, 0, 0, 0, 0, 0, 0, 729, 0, 0, 0, 730, 0, 0, 0, 731, 0, 0, 0, 0, 0, 732, 0, 0, 0, 733, 0, 734, 0, 735,
    0, 0, 0, 0, 0, 0, 736, 0, 0, 737, 0, 0, 0, 738, 0, 739, 0, 0, 0, 740, 0, 741, 0, 0, 0, 0, 0, 0, 742, 0, 0, 0,
    0, 0, 743, 0, 744, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 0, 0, 0, 746, 0, 747, 0, 0, 0, 748, 0, 749, 0, 0, 0, 0,
    0, 750, 0, 0, 0, 751, 0, 0, 752, 0, 0, 0, 753, 754, 0, 0, 0, 0, 0, 0, 0, 0, 755, 0, 756, 0, 0, 0, 0, 0, 0, 757,
    0, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 759, 760, 0, 761, 0, 0, 0, 762, 0, 763, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 765,
    0, 0, 766, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 768, 0, 0, 769, 0, 0, 0, 770, 0, 771, 0, 0, 0, 0, 0, 0, 0, 772, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 773, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 774, 0, 0, 775, 0, 0, 0, 776, 0, 777, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 779, 0, 0, 780, 0, 781, 0,
    0, 0, 0, 0, 0, 0, 782, 0, 0, 0, 0, 783, 0, 0, 784, 0, 0, 785, 0, 786, 0, 0, 787, 0, 788, 0, 0, 0, 0, 0, 0, 0,
    789, 0, 0, 0, 0, 790, 0, 0, 0, 791, 792, 0, 0, 0, 0, 0, 0, 0, 0, 793, 0, 794, 0, 0, 0, 0, 0, 0, 795, 0, 0, 0,
    0, 796, 0, 0, 0, 0, 0, 0, 797, 798, 0, 799, 0, 0, 0, 0, 0, 0, 0, 800, 0, 0, 0, 0, 801, 0, 802, 0, 0, 803, 0, 804,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 806, 807, 808, 0, 809, 810, 0, 811, 0, 812, 0, 813,
    0, 0, 0, 0, 0, 814, 0, 0, 0, 815, 0, 0, 0, 816, 817, 0, 0, 0, 0, 0, 0, 0, 0, 818, 0, 819, 0, 0, 0, 0, 0, 0,
    820, 0, 0, 0, 0, 821, 0, 0, 0, 0, 0, 0, 822, 823, 0, 824, 0, 0, 0, 0, 0, 825, 0, 0, 0, 826, 0, 0, 0, 827, 828, 0,
    0, 0, 0, 0, 0, 0, 0, 829, 0, 830, 0, 0, 0, 0, 0, 0, 831, 0, 0, 0, 0, 832, 0, 0, 0, 0, 0, 0, 833, 834, 0, 835,
    0, 0, 0, 0, 0, 836, 0, 0, 0, 837, 0, 838, 0, 839, 0, 0, 0, 0, 0, 0, 840, 0, 0, 0, 841, 0, 0, 0, 0, 842, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 843, 0, 844, 0, 0, 0, 0, 0, 0, 845, 0, 0, 0, 846,
    0, 0, 847, 0, 0, 0, 0, 848, 0, 0, 0, 0, 849, 0, 850, 0, 0, 0, 0, 851, 0, 0, 0, 0, 0, 0, 0, 0, 852, 0, 0, 0,
    853, 0, 0, 854, 0, 0, 855, 0, 856, 857, 0, 0, 858, 0, 0, 0, 0, 0, 859, 0, 0, 0, 0, 0, 0, 860, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 861, 0, 862, 0, 0, 0, 0, 0, 0, 863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 864, 0, 865, 0, 0, 0, 0, 0, 0, 866, 0,
    0, 867, 0, 0, 0, 0, 0, 0, 868, 0, 869, 0, 0, 0, 0, 0, 0, 870, 0, 871, 0, 0, 0, 0, 0, 872, 0, 0, 873, 0, 0, 0,
    874, 0, 875, 0, 0, 0, 876, 0, 877, 0, 0, 0, 0, 0, 0, 0, 878, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 879, 0, 0, 0, 0, 0, 0, 0, 0, 880, 0, 0, 0, 0, 0, 881, 0, 0, 0, 882, 0, 0, 0,
    0, 883, 0, 0, 0, 0, 0, 884, 0, 0, 0, 885, 0, 0, 0, 0, 0, 886, 0, 0, 0, 887,
};
void recomp_unit_0099_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08990000u;
        entry_id = (entry_delta < 16344u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0099[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08990000;
    case 2u: goto L_08990038;
    case 3u: goto L_08990058;
    case 4u: goto L_08990084;
    case 5u: goto L_08990090;
    case 6u: goto L_0899009C;
    case 7u: goto L_089900A4;
    case 8u: goto L_089900A8;
    case 9u: goto L_089900B0;
    case 10u: goto L_089900BC;
    case 11u: goto L_089900D0;
    case 12u: goto L_089900E4;
    case 13u: goto L_089900F0;
    case 14u: goto L_089900FC;
    case 15u: goto L_08990108;
    case 16u: goto L_08990110;
    case 17u: goto L_08990114;
    case 18u: goto L_0899011C;
    case 19u: goto L_08990128;
    case 20u: goto L_0899013C;
    case 21u: goto L_08990150;
    case 22u: goto L_0899015C;
    case 23u: goto L_08990168;
    case 24u: goto L_08990174;
    case 25u: goto L_0899017C;
    case 26u: goto L_08990180;
    case 27u: goto L_08990184;
    case 28u: goto L_08990190;
    case 29u: goto L_089901A4;
    case 30u: goto L_089901C8;
    case 31u: goto L_089901DC;
    case 32u: goto L_089901E8;
    case 33u: goto L_089901F4;
    case 34u: goto L_089901FC;
    case 35u: goto L_08990200;
    case 36u: goto L_08990204;
    case 37u: goto L_08990210;
    case 38u: goto L_08990224;
    case 39u: goto L_0899024C;
    case 40u: goto L_08990278;
    case 41u: goto L_0899028C;
    case 42u: goto L_089902B4;
    case 43u: goto L_089902C0;
    case 44u: goto L_089902CC;
    case 45u: goto L_089902D8;
    case 46u: goto L_089902E0;
    case 47u: goto L_089902E4;
    case 48u: goto L_089902E8;
    case 49u: goto L_089902F4;
    case 50u: goto L_08990308;
    case 51u: goto L_08990310;
    case 52u: goto L_08990324;
    case 53u: goto L_08990330;
    case 54u: goto L_08990334;
    case 55u: goto L_08990340;
    case 56u: goto L_08990368;
    case 57u: goto L_08990374;
    case 58u: goto L_08990380;
    case 59u: goto L_0899038C;
    case 60u: goto L_08990394;
    case 61u: goto L_08990398;
    case 62u: goto L_089903A0;
    case 63u: goto L_089903A8;
    case 64u: goto L_089903BC;
    case 65u: goto L_089903CC;
    case 66u: goto L_089903D8;
    case 67u: goto L_0899041C;
    case 68u: goto L_08990428;
    case 69u: goto L_08990434;
    case 70u: goto L_08990440;
    case 71u: goto L_08990448;
    case 72u: goto L_0899044C;
    case 73u: goto L_08990454;
    case 74u: goto L_0899045C;
    case 75u: goto L_08990470;
    case 76u: goto L_08990478;
    case 77u: goto L_08990498;
    case 78u: goto L_089904B0;
    case 79u: goto L_089904BC;
    case 80u: goto L_089904C8;
    case 81u: goto L_089904D0;
    case 82u: goto L_089904D4;
    case 83u: goto L_089904D8;
    case 84u: goto L_089904E8;
    case 85u: goto L_089904FC;
    case 86u: goto L_0899051C;
    case 87u: goto L_08990528;
    case 88u: goto L_08990534;
    case 89u: goto L_08990540;
    case 90u: goto L_08990548;
    case 91u: goto L_0899054C;
    case 92u: goto L_08990550;
    case 93u: goto L_08990560;
    case 94u: goto L_08990574;
    case 95u: goto L_08990598;
    case 96u: goto L_089905A8;
    case 97u: goto L_089905B4;
    case 98u: goto L_089905C0;
    case 99u: goto L_089905C8;
    case 100u: goto L_089905CC;
    case 101u: goto L_089905D0;
    case 102u: goto L_089905E0;
    case 103u: goto L_089905F4;
    case 104u: goto L_08990608;
    case 105u: goto L_0899061C;
    case 106u: goto L_08990628;
    case 107u: goto L_08990634;
    case 108u: goto L_0899063C;
    case 109u: goto L_08990640;
    case 110u: goto L_08990644;
    case 111u: goto L_08990650;
    case 112u: goto L_08990664;
    case 113u: goto L_0899068C;
    case 114u: goto L_089906A0;
    case 115u: goto L_089906CC;
    case 116u: goto L_089906D8;
    case 117u: goto L_089906E4;
    case 118u: goto L_089906F0;
    case 119u: goto L_089906F8;
    case 120u: goto L_089906FC;
    case 121u: goto L_08990700;
    case 122u: goto L_08990710;
    case 123u: goto L_08990724;
    case 124u: goto L_0899072C;
    case 125u: goto L_0899074C;
    case 126u: goto L_08990778;
    case 127u: goto L_08990784;
    case 128u: goto L_08990790;
    case 129u: goto L_08990798;
    case 130u: goto L_0899079C;
    case 131u: goto L_089907A4;
    case 132u: goto L_089907B0;
    case 133u: goto L_089907C4;
    case 134u: goto L_089907D8;
    case 135u: goto L_089907E4;
    case 136u: goto L_089907F0;
    case 137u: goto L_089907FC;
    case 138u: goto L_08990804;
    case 139u: goto L_08990808;
    case 140u: goto L_0899080C;
    case 141u: goto L_08990818;
    case 142u: goto L_0899082C;
    case 143u: goto L_08990840;
    case 144u: goto L_0899084C;
    case 145u: goto L_08990858;
    case 146u: goto L_08990864;
    case 147u: goto L_0899086C;
    case 148u: goto L_08990870;
    case 149u: goto L_08990874;
    case 150u: goto L_08990880;
    case 151u: goto L_08990894;
    case 152u: goto L_089908B8;
    case 153u: goto L_089908C8;
    case 154u: goto L_089908D4;
    case 155u: goto L_089908E0;
    case 156u: goto L_089908E8;
    case 157u: goto L_089908EC;
    case 158u: goto L_089908F0;
    case 159u: goto L_089908FC;
    case 160u: goto L_08990910;
    case 161u: goto L_08990938;
    case 162u: goto L_0899094C;
    case 163u: goto L_08990968;
    case 164u: goto L_0899096C;
    case 165u: goto L_08990978;
    case 166u: goto L_089909A8;
    case 167u: goto L_089909BC;
    case 168u: goto L_089909C8;
    case 169u: goto L_089909D4;
    case 170u: goto L_089909DC;
    case 171u: goto L_089909E0;
    case 172u: goto L_089909E4;
    case 173u: goto L_089909F0;
    case 174u: goto L_08990A04;
    case 175u: goto L_08990A0C;
    case 176u: goto L_08990A1C;
    case 177u: goto L_08990A60;
    case 178u: goto L_08990A6C;
    case 179u: goto L_08990A78;
    case 180u: goto L_08990A84;
    case 181u: goto L_08990A8C;
    case 182u: goto L_08990A90;
    case 183u: goto L_08990A94;
    case 184u: goto L_08990AA0;
    case 185u: goto L_08990AB4;
    case 186u: goto L_08990AC4;
    case 187u: goto L_08990AD0;
    case 188u: goto L_08990B14;
    case 189u: goto L_08990B20;
    case 190u: goto L_08990B2C;
    case 191u: goto L_08990B38;
    case 192u: goto L_08990B40;
    case 193u: goto L_08990B44;
    case 194u: goto L_08990B48;
    case 195u: goto L_08990B54;
    case 196u: goto L_08990B68;
    case 197u: goto L_08990B70;
    case 198u: goto L_08990B90;
    case 199u: goto L_08990BBC;
    case 200u: goto L_08990BC8;
    case 201u: goto L_08990BD4;
    case 202u: goto L_08990BDC;
    case 203u: goto L_08990BE0;
    case 204u: goto L_08990BE8;
    case 205u: goto L_08990BF4;
    case 206u: goto L_08990C08;
    case 207u: goto L_08990C1C;
    case 208u: goto L_08990C28;
    case 209u: goto L_08990C34;
    case 210u: goto L_08990C40;
    case 211u: goto L_08990C48;
    case 212u: goto L_08990C4C;
    case 213u: goto L_08990C50;
    case 214u: goto L_08990C5C;
    case 215u: goto L_08990C70;
    case 216u: goto L_08990C84;
    case 217u: goto L_08990C90;
    case 218u: goto L_08990C9C;
    case 219u: goto L_08990CA8;
    case 220u: goto L_08990CB0;
    case 221u: goto L_08990CB4;
    case 222u: goto L_08990CB8;
    case 223u: goto L_08990CC4;
    case 224u: goto L_08990CD8;
    case 225u: goto L_08990CFC;
    case 226u: goto L_08990D0C;
    case 227u: goto L_08990D18;
    case 228u: goto L_08990D24;
    case 229u: goto L_08990D2C;
    case 230u: goto L_08990D30;
    case 231u: goto L_08990D34;
    case 232u: goto L_08990D40;
    case 233u: goto L_08990D54;
    case 234u: goto L_08990D7C;
    case 235u: goto L_08990D90;
    case 236u: goto L_08990DAC;
    case 237u: goto L_08990DB0;
    case 238u: goto L_08990DBC;
    case 239u: goto L_08990DEC;
    case 240u: goto L_08990E00;
    case 241u: goto L_08990E0C;
    case 242u: goto L_08990E18;
    case 243u: goto L_08990E20;
    case 244u: goto L_08990E24;
    case 245u: goto L_08990E2C;
    case 246u: goto L_08990E34;
    case 247u: goto L_08990E48;
    case 248u: goto L_08990E58;
    case 249u: goto L_08990E64;
    case 250u: goto L_08990EA8;
    case 251u: goto L_08990EB4;
    case 252u: goto L_08990EC0;
    case 253u: goto L_08990ECC;
    case 254u: goto L_08990ED4;
    case 255u: goto L_08990ED8;
    case 256u: goto L_08990EE0;
    case 257u: goto L_08990EE8;
    case 258u: goto L_08990EFC;
    case 259u: goto L_08990F0C;
    case 260u: goto L_08990F18;
    case 261u: goto L_08990F5C;
    case 262u: goto L_08990F68;
    case 263u: goto L_08990F74;
    case 264u: goto L_08990F80;
    case 265u: goto L_08990F88;
    case 266u: goto L_08990F8C;
    case 267u: goto L_08990F94;
    case 268u: goto L_08990F9C;
    case 269u: goto L_08990FB0;
    case 270u: goto L_08990FC0;
    case 271u: goto L_08990FD0;
    case 272u: goto L_08991014;
    case 273u: goto L_08991024;
    case 274u: goto L_08991030;
    case 275u: goto L_0899103C;
    case 276u: goto L_08991044;
    case 277u: goto L_08991048;
    case 278u: goto L_08991050;
    case 279u: goto L_0899105C;
    case 280u: goto L_08991070;
    case 281u: goto L_08991078;
    case 282u: goto L_08991098;
    case 283u: goto L_089910CC;
    case 284u: goto L_089910D8;
    case 285u: goto L_089910E4;
    case 286u: goto L_089910EC;
    case 287u: goto L_089910F0;
    case 288u: goto L_089910F8;
    case 289u: goto L_08991104;
    case 290u: goto L_08991118;
    case 291u: goto L_0899112C;
    case 292u: goto L_08991138;
    case 293u: goto L_08991144;
    case 294u: goto L_08991150;
    case 295u: goto L_08991158;
    case 296u: goto L_0899115C;
    case 297u: goto L_08991164;
    case 298u: goto L_08991170;
    case 299u: goto L_08991184;
    case 300u: goto L_08991198;
    case 301u: goto L_089911A4;
    case 302u: goto L_089911B0;
    case 303u: goto L_089911BC;
    case 304u: goto L_089911C4;
    case 305u: goto L_089911C8;
    case 306u: goto L_089911CC;
    case 307u: goto L_089911D8;
    case 308u: goto L_089911EC;
    case 309u: goto L_08991210;
    case 310u: goto L_08991224;
    case 311u: goto L_08991230;
    case 312u: goto L_0899123C;
    case 313u: goto L_08991244;
    case 314u: goto L_08991248;
    case 315u: goto L_0899124C;
    case 316u: goto L_08991258;
    case 317u: goto L_0899126C;
    case 318u: goto L_08991294;
    case 319u: goto L_089912AC;
    case 320u: goto L_089912D8;
    case 321u: goto L_089912E8;
    case 322u: goto L_089912F4;
    case 323u: goto L_08991300;
    case 324u: goto L_08991308;
    case 325u: goto L_0899130C;
    case 326u: goto L_08991310;
    case 327u: goto L_0899131C;
    case 328u: goto L_08991330;
    case 329u: goto L_08991334;
    case 330u: goto L_08991358;
    case 331u: goto L_0899136C;
    case 332u: goto L_08991378;
    case 333u: goto L_08991384;
    case 334u: goto L_0899138C;
    case 335u: goto L_08991390;
    case 336u: goto L_08991394;
    case 337u: goto L_089913A4;
    case 338u: goto L_089913B8;
    case 339u: goto L_089913C0;
    case 340u: goto L_089913E0;
    case 341u: goto L_0899140C;
    case 342u: goto L_08991418;
    case 343u: goto L_08991424;
    case 344u: goto L_0899142C;
    case 345u: goto L_08991430;
    case 346u: goto L_08991438;
    case 347u: goto L_08991444;
    case 348u: goto L_08991458;
    case 349u: goto L_0899146C;
    case 350u: goto L_08991478;
    case 351u: goto L_08991484;
    case 352u: goto L_08991490;
    case 353u: goto L_08991498;
    case 354u: goto L_0899149C;
    case 355u: goto L_089914A0;
    case 356u: goto L_089914AC;
    case 357u: goto L_089914C0;
    case 358u: goto L_089914D4;
    case 359u: goto L_089914E0;
    case 360u: goto L_089914EC;
    case 361u: goto L_089914F8;
    case 362u: goto L_08991500;
    case 363u: goto L_08991504;
    case 364u: goto L_08991508;
    case 365u: goto L_08991514;
    case 366u: goto L_08991528;
    case 367u: goto L_0899154C;
    case 368u: goto L_08991560;
    case 369u: goto L_0899156C;
    case 370u: goto L_08991578;
    case 371u: goto L_08991580;
    case 372u: goto L_08991584;
    case 373u: goto L_08991588;
    case 374u: goto L_08991594;
    case 375u: goto L_089915A8;
    case 376u: goto L_089915B0;
    case 377u: goto L_089915C0;
    case 378u: goto L_089915CC;
    case 379u: goto L_089915D8;
    case 380u: goto L_08991608;
    case 381u: goto L_08991614;
    case 382u: goto L_08991620;
    case 383u: goto L_0899162C;
    case 384u: goto L_08991634;
    case 385u: goto L_08991638;
    case 386u: goto L_08991640;
    case 387u: goto L_0899164C;
    case 388u: goto L_08991660;
    case 389u: goto L_08991668;
    case 390u: goto L_08991688;
    case 391u: goto L_089916C4;
    case 392u: goto L_089916D0;
    case 393u: goto L_089916DC;
    case 394u: goto L_089916E4;
    case 395u: goto L_089916E8;
    case 396u: goto L_089916F0;
    case 397u: goto L_089916FC;
    case 398u: goto L_08991710;
    case 399u: goto L_08991724;
    case 400u: goto L_08991734;
    case 401u: goto L_08991740;
    case 402u: goto L_0899174C;
    case 403u: goto L_08991754;
    case 404u: goto L_08991758;
    case 405u: goto L_08991760;
    case 406u: goto L_0899176C;
    case 407u: goto L_08991780;
    case 408u: goto L_08991794;
    case 409u: goto L_089917A4;
    case 410u: goto L_089917B0;
    case 411u: goto L_089917BC;
    case 412u: goto L_089917C4;
    case 413u: goto L_089917C8;
    case 414u: goto L_089917CC;
    case 415u: goto L_089917D8;
    case 416u: goto L_089917EC;
    case 417u: goto L_08991810;
    case 418u: goto L_08991820;
    case 419u: goto L_0899182C;
    case 420u: goto L_08991838;
    case 421u: goto L_08991840;
    case 422u: goto L_08991844;
    case 423u: goto L_08991848;
    case 424u: goto L_08991854;
    case 425u: goto L_08991868;
    case 426u: goto L_08991890;
    case 427u: goto L_089918A4;
    case 428u: goto L_089918CC;
    case 429u: goto L_089918E0;
    case 430u: goto L_089918EC;
    case 431u: goto L_089918F8;
    case 432u: goto L_08991900;
    case 433u: goto L_08991904;
    case 434u: goto L_08991908;
    case 435u: goto L_08991914;
    case 436u: goto L_08991928;
    case 437u: goto L_0899192C;
    case 438u: goto L_08991950;
    case 439u: goto L_08991964;
    case 440u: goto L_08991970;
    case 441u: goto L_0899197C;
    case 442u: goto L_08991984;
    case 443u: goto L_08991988;
    case 444u: goto L_08991990;
    case 445u: goto L_0899199C;
    case 446u: goto L_089919B0;
    case 447u: goto L_089919D8;
    case 448u: goto L_089919EC;
    case 449u: goto L_089919F8;
    case 450u: goto L_08991A04;
    case 451u: goto L_08991A0C;
    case 452u: goto L_08991A10;
    case 453u: goto L_08991A18;
    case 454u: goto L_08991A24;
    case 455u: goto L_08991A38;
    case 456u: goto L_08991A40;
    case 457u: goto L_08991A88;
    case 458u: goto L_08991B98;
    case 459u: goto L_08991BA4;
    case 460u: goto L_08991BBC;
    case 461u: goto L_08991BE8;
    case 462u: goto L_08991C20;
    case 463u: goto L_08991C3C;
    case 464u: goto L_08991C50;
    case 465u: goto L_08991C6C;
    case 466u: goto L_08991C9C;
    case 467u: goto L_08991CA4;
    case 468u: goto L_08991CC0;
    case 469u: goto L_08991CD4;
    case 470u: goto L_08991CF0;
    case 471u: goto L_08991CF4;
    case 472u: goto L_08991CFC;
    case 473u: goto L_08991D10;
    case 474u: goto L_08991D2C;
    case 475u: goto L_08991D5C;
    case 476u: goto L_08991D64;
    case 477u: goto L_08991D80;
    case 478u: goto L_08991D94;
    case 479u: goto L_08991DB0;
    case 480u: goto L_08991DB4;
    case 481u: goto L_08991DBC;
    case 482u: goto L_08991DD8;
    case 483u: goto L_08991DE8;
    case 484u: goto L_08991E18;
    case 485u: goto L_08991E20;
    case 486u: goto L_08991E3C;
    case 487u: goto L_08991E50;
    case 488u: goto L_08991E6C;
    case 489u: goto L_08991E70;
    case 490u: goto L_08991E78;
    case 491u: goto L_08991E94;
    case 492u: goto L_08991EA4;
    case 493u: goto L_08991ED4;
    case 494u: goto L_08991EDC;
    case 495u: goto L_08991EF8;
    case 496u: goto L_08991F0C;
    case 497u: goto L_08991F28;
    case 498u: goto L_08991F2C;
    case 499u: goto L_08991F34;
    case 500u: goto L_08991F48;
    case 501u: goto L_08991F64;
    case 502u: goto L_08991F98;
    case 503u: goto L_08991FA0;
    case 504u: goto L_08991FBC;
    case 505u: goto L_08991FD0;
    case 506u: goto L_08991FEC;
    case 507u: goto L_08991FF0;
    case 508u: goto L_08991FF8;
    case 509u: goto L_0899200C;
    case 510u: goto L_08992028;
    case 511u: goto L_0899205C;
    case 512u: goto L_08992064;
    case 513u: goto L_08992080;
    case 514u: goto L_08992094;
    case 515u: goto L_089920B0;
    case 516u: goto L_089920B4;
    case 517u: goto L_089920BC;
    case 518u: goto L_089920D8;
    case 519u: goto L_089920E8;
    case 520u: goto L_0899211C;
    case 521u: goto L_08992124;
    case 522u: goto L_08992140;
    case 523u: goto L_08992154;
    case 524u: goto L_08992170;
    case 525u: goto L_08992174;
    case 526u: goto L_0899217C;
    case 527u: goto L_08992198;
    case 528u: goto L_089921A8;
    case 529u: goto L_089921DC;
    case 530u: goto L_089921E4;
    case 531u: goto L_08992200;
    case 532u: goto L_08992214;
    case 533u: goto L_08992230;
    case 534u: goto L_08992234;
    case 535u: goto L_0899223C;
    case 536u: goto L_0899225C;
    case 537u: goto L_0899226C;
    case 538u: goto L_0899229C;
    case 539u: goto L_089922B0;
    case 540u: goto L_089922B8;
    case 541u: goto L_089922D4;
    case 542u: goto L_08992320;
    case 543u: goto L_08992330;
    case 544u: goto L_08992378;
    case 545u: goto L_08992390;
    case 546u: goto L_089923C4;
    case 547u: goto L_089923EC;
    case 548u: goto L_089923FC;
    case 549u: goto L_08992404;
    case 550u: goto L_08992420;
    case 551u: goto L_08992430;
    case 552u: goto L_08992484;
    case 553u: goto L_08992490;
    case 554u: goto L_089924A0;
    case 555u: goto L_089924A8;
    case 556u: goto L_089924C0;
    case 557u: goto L_089924D0;
    case 558u: goto L_089924D8;
    case 559u: goto L_089924F8;
    case 560u: goto L_0899250C;
    case 561u: goto L_08992514;
    case 562u: goto L_08992530;
    case 563u: goto L_08992540;
    case 564u: goto L_0899254C;
    case 565u: goto L_0899255C;
    case 566u: goto L_0899256C;
    case 567u: goto L_08992574;
    case 568u: goto L_0899258C;
    case 569u: goto L_089925BC;
    case 570u: goto L_089925D8;
    case 571u: goto L_08992614;
    case 572u: goto L_0899261C;
    case 573u: goto L_08992638;
    case 574u: goto L_08992674;
    case 575u: goto L_0899267C;
    case 576u: goto L_08992684;
    case 577u: goto L_0899268C;
    case 578u: goto L_089926A8;
    case 579u: goto L_089926B8;
    case 580u: goto L_089926C8;
    case 581u: goto L_089926FC;
    case 582u: goto L_08992704;
    case 583u: goto L_08992724;
    case 584u: goto L_08992734;
    case 585u: goto L_08992788;
    case 586u: goto L_089927B0;
    case 587u: goto L_089927B8;
    case 588u: goto L_089927D0;
    case 589u: goto L_089927E0;
    case 590u: goto L_089927F4;
    case 591u: goto L_0899280C;
    case 592u: goto L_08992830;
    case 593u: goto L_08992838;
    case 594u: goto L_08992854;
    case 595u: goto L_08992868;
    case 596u: goto L_08992884;
    case 597u: goto L_08992888;
    case 598u: goto L_08992890;
    case 599u: goto L_089928AC;
    case 600u: goto L_089928BC;
    case 601u: goto L_089928CC;
    case 602u: goto L_08992900;
    case 603u: goto L_08992908;
    case 604u: goto L_08992920;
    case 605u: goto L_0899292C;
    case 606u: goto L_08992958;
    case 607u: goto L_0899297C;
    case 608u: goto L_08992984;
    case 609u: goto L_0899299C;
    case 610u: goto L_089929D0;
    case 611u: goto L_089929E0;
    case 612u: goto L_089929EC;
    case 613u: goto L_089929F8;
    case 614u: goto L_08992A04;
    case 615u: goto L_08992A10;
    case 616u: goto L_08992A14;
    case 617u: goto L_08992A38;
    case 618u: goto L_08992A40;
    case 619u: goto L_08992A5C;
    case 620u: goto L_08992A70;
    case 621u: goto L_08992A8C;
    case 622u: goto L_08992A90;
    case 623u: goto L_08992A98;
    case 624u: goto L_08992AB4;
    case 625u: goto L_08992AD4;
    case 626u: goto L_08992AE0;
    case 627u: goto L_08992AE4;
    case 628u: goto L_08992AF4;
    case 629u: goto L_08992AFC;
    case 630u: goto L_08992B08;
    case 631u: goto L_08992B28;
    case 632u: goto L_08992B40;
    case 633u: goto L_08992B54;
    case 634u: goto L_08992B5C;
    case 635u: goto L_08992B74;
    case 636u: goto L_08992B7C;
    case 637u: goto L_08992B98;
    case 638u: goto L_08992BA8;
    case 639u: goto L_08992BF4;
    case 640u: goto L_08992C1C;
    case 641u: goto L_08992C3C;
    case 642u: goto L_08992C60;
    case 643u: goto L_08992C6C;
    case 644u: goto L_08992C74;
    case 645u: goto L_08992C8C;
    case 646u: goto L_08992C9C;
    case 647u: goto L_08992CA4;
    case 648u: goto L_08992CAC;
    case 649u: goto L_08992CC8;
    case 650u: goto L_08992CD8;
    case 651u: goto L_08992CF4;
    case 652u: goto L_08992CFC;
    case 653u: goto L_08992D18;
    case 654u: goto L_08992D38;
    case 655u: goto L_08992D44;
    case 656u: goto L_08992D48;
    case 657u: goto L_08992D90;
    case 658u: goto L_08992DA0;
    case 659u: goto L_08992DC8;
    case 660u: goto L_08992DD0;
    case 661u: goto L_08992DEC;
    case 662u: goto L_08992E0C;
    case 663u: goto L_08992E18;
    case 664u: goto L_08992E1C;
    case 665u: goto L_08992E68;
    case 666u: goto L_08992EC8;
    case 667u: goto L_08992ED0;
    case 668u: goto L_08992EEC;
    case 669u: goto L_08992F0C;
    case 670u: goto L_08992F18;
    case 671u: goto L_08992F1C;
    case 672u: goto L_08992FA0;
    case 673u: goto L_08992FA8;
    case 674u: goto L_08992FC0;
    case 675u: goto L_08992FCC;
    case 676u: goto L_08992FD8;
    case 677u: goto L_08992FE4;
    case 678u: goto L_08992FEC;
    case 679u: goto L_08993008;
    case 680u: goto L_08993018;
    case 681u: goto L_08993024;
    case 682u: goto L_08993034;
    case 683u: goto L_08993044;
    case 684u: goto L_0899304C;
    case 685u: goto L_08993068;
    case 686u: goto L_08993078;
    case 687u: goto L_08993084;
    case 688u: goto L_08993098;
    case 689u: goto L_089930AC;
    case 690u: goto L_089930B4;
    case 691u: goto L_089930D0;
    case 692u: goto L_089930E0;
    case 693u: goto L_089930EC;
    case 694u: goto L_08993114;
    case 695u: goto L_08993138;
    case 696u: goto L_08993140;
    case 697u: goto L_08993158;
    case 698u: goto L_08993168;
    case 699u: goto L_08993174;
    case 700u: goto L_08993178;
    case 701u: goto L_0899319C;
    case 702u: goto L_089931A4;
    case 703u: goto L_089931C0;
    case 704u: goto L_089931D4;
    case 705u: goto L_089931F0;
    case 706u: goto L_089931F4;
    case 707u: goto L_089931FC;
    case 708u: goto L_0899322C;
    case 709u: goto L_08993234;
    case 710u: goto L_08993244;
    case 711u: goto L_08993250;
    case 712u: goto L_08993274;
    case 713u: goto L_0899327C;
    case 714u: goto L_08993298;
    case 715u: goto L_089932AC;
    case 716u: goto L_089932C8;
    case 717u: goto L_089932CC;
    case 718u: goto L_089932D4;
    case 719u: goto L_089932F0;
    case 720u: goto L_08993300;
    case 721u: goto L_08993320;
    case 722u: goto L_08993328;
    case 723u: goto L_08993344;
    case 724u: goto L_08993354;
    case 725u: goto L_08993360;
    case 726u: goto L_08993370;
    case 727u: goto L_08993380;
    case 728u: goto L_08993388;
    case 729u: goto L_089933A4;
    case 730u: goto L_089933B4;
    case 731u: goto L_089933C4;
    case 732u: goto L_089933DC;
    case 733u: goto L_089933EC;
    case 734u: goto L_089933F4;
    case 735u: goto L_089933FC;
    case 736u: goto L_08993418;
    case 737u: goto L_08993424;
    case 738u: goto L_08993434;
    case 739u: goto L_0899343C;
    case 740u: goto L_0899344C;
    case 741u: goto L_08993454;
    case 742u: goto L_08993470;
    case 743u: goto L_08993488;
    case 744u: goto L_08993490;
    case 745u: goto L_089934AC;
    case 746u: goto L_089934CC;
    case 747u: goto L_089934D4;
    case 748u: goto L_089934E4;
    case 749u: goto L_089934EC;
    case 750u: goto L_08993504;
    case 751u: goto L_08993514;
    case 752u: goto L_08993520;
    case 753u: goto L_08993530;
    case 754u: goto L_08993534;
    case 755u: goto L_08993558;
    case 756u: goto L_08993560;
    case 757u: goto L_0899357C;
    case 758u: goto L_08993590;
    case 759u: goto L_089935AC;
    case 760u: goto L_089935B0;
    case 761u: goto L_089935B8;
    case 762u: goto L_089935C8;
    case 763u: goto L_089935D0;
    case 764u: goto L_089935EC;
    case 765u: goto L_089935FC;
    case 766u: goto L_08993608;
    case 767u: goto L_0899362C;
    case 768u: goto L_08993634;
    case 769u: goto L_08993640;
    case 770u: goto L_08993650;
    case 771u: goto L_08993658;
    case 772u: goto L_08993678;
    case 773u: goto L_089936A0;
    case 774u: goto L_0899370C;
    case 775u: goto L_08993718;
    case 776u: goto L_08993728;
    case 777u: goto L_08993730;
    case 778u: goto L_08993754;
    case 779u: goto L_08993764;
    case 780u: goto L_08993770;
    case 781u: goto L_08993778;
    case 782u: goto L_08993798;
    case 783u: goto L_089937AC;
    case 784u: goto L_089937B8;
    case 785u: goto L_089937C4;
    case 786u: goto L_089937CC;
    case 787u: goto L_089937D8;
    case 788u: goto L_089937E0;
    case 789u: goto L_08993800;
    case 790u: goto L_08993814;
    case 791u: goto L_08993824;
    case 792u: goto L_08993828;
    case 793u: goto L_0899384C;
    case 794u: goto L_08993854;
    case 795u: goto L_08993870;
    case 796u: goto L_08993884;
    case 797u: goto L_089938A0;
    case 798u: goto L_089938A4;
    case 799u: goto L_089938AC;
    case 800u: goto L_089938CC;
    case 801u: goto L_089938E0;
    case 802u: goto L_089938E8;
    case 803u: goto L_089938F4;
    case 804u: goto L_089938FC;
    case 805u: goto L_08993924;
    case 806u: goto L_08993950;
    case 807u: goto L_08993954;
    case 808u: goto L_08993958;
    case 809u: goto L_08993960;
    case 810u: goto L_08993964;
    case 811u: goto L_0899396C;
    case 812u: goto L_08993974;
    case 813u: goto L_0899397C;
    case 814u: goto L_08993994;
    case 815u: goto L_089939A4;
    case 816u: goto L_089939B4;
    case 817u: goto L_089939B8;
    case 818u: goto L_089939DC;
    case 819u: goto L_089939E4;
    case 820u: goto L_08993A00;
    case 821u: goto L_08993A14;
    case 822u: goto L_08993A30;
    case 823u: goto L_08993A34;
    case 824u: goto L_08993A3C;
    case 825u: goto L_08993A54;
    case 826u: goto L_08993A64;
    case 827u: goto L_08993A74;
    case 828u: goto L_08993A78;
    case 829u: goto L_08993A9C;
    case 830u: goto L_08993AA4;
    case 831u: goto L_08993AC0;
    case 832u: goto L_08993AD4;
    case 833u: goto L_08993AF0;
    case 834u: goto L_08993AF4;
    case 835u: goto L_08993AFC;
    case 836u: goto L_08993B14;
    case 837u: goto L_08993B24;
    case 838u: goto L_08993B2C;
    case 839u: goto L_08993B34;
    case 840u: goto L_08993B50;
    case 841u: goto L_08993B60;
    case 842u: goto L_08993B74;
    case 843u: goto L_08993BC8;
    case 844u: goto L_08993BD0;
    case 845u: goto L_08993BEC;
    case 846u: goto L_08993BFC;
    case 847u: goto L_08993C08;
    case 848u: goto L_08993C1C;
    case 849u: goto L_08993C30;
    case 850u: goto L_08993C38;
    case 851u: goto L_08993C4C;
    case 852u: goto L_08993C70;
    case 853u: goto L_08993C80;
    case 854u: goto L_08993C8C;
    case 855u: goto L_08993C98;
    case 856u: goto L_08993CA0;
    case 857u: goto L_08993CA4;
    case 858u: goto L_08993CB0;
    case 859u: goto L_08993CC8;
    case 860u: goto L_08993CE4;
    case 861u: goto L_08993D2C;
    case 862u: goto L_08993D34;
    case 863u: goto L_08993D50;
    case 864u: goto L_08993DD4;
    case 865u: goto L_08993DDC;
    case 866u: goto L_08993DF8;
    case 867u: goto L_08993E04;
    case 868u: goto L_08993E20;
    case 869u: goto L_08993E28;
    case 870u: goto L_08993E44;
    case 871u: goto L_08993E4C;
    case 872u: goto L_08993E64;
    case 873u: goto L_08993E70;
    case 874u: goto L_08993E80;
    case 875u: goto L_08993E88;
    case 876u: goto L_08993E98;
    case 877u: goto L_08993EA0;
    case 878u: goto L_08993EC0;
    case 879u: goto L_08993F24;
    case 880u: goto L_08993F48;
    case 881u: goto L_08993F60;
    case 882u: goto L_08993F70;
    case 883u: goto L_08993F84;
    case 884u: goto L_08993F9C;
    case 885u: goto L_08993FAC;
    case 886u: goto L_08993FC4;
    case 887u: goto L_08993FD4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08990000:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-21776));
    ctx.gpr[5] = (17154u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[21] = (2228u << 16u);
    ctx.gpr[5] = (17182u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[5] = (17194u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-21648)));
    jump_target = ctx.gpr[1];
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990038:
    ctx.gpr[4] = (0u | 45u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08990058u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 95u, 0x08968850u>(ctx, &aot_mem) && ctx.pc == 0x08990058u) goto L_08990058;
    return;
L_08990058:
    ctx.gpr[4] = (2226u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21752));
    ctx.gpr[20] = (2226u << 16u);
    ctx.gpr[30] = (2226u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-21768));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-21760));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089900B0;
      }
      goto L_08990084;
    }
L_08990084:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08990090u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08990090u) goto L_08990090;
    return;
L_08990090:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089900A8;
      }
      goto L_0899009C;
    }
L_0899009C:
    ctx.gpr[31] = (0x089900A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089900A4u) goto L_089900A4;
    return;
L_089900A4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_089900A8;
L_089900A8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089900B0;
L_089900B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089900BCu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x089900BCu) goto L_089900BC;
    return;
L_089900BC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089900D0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x089900D0u) goto L_089900D0;
    return;
L_089900D0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24864)));
    ctx.gpr[5] = (0u | 164u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x089900E4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 23u, 0x089881F4u>(ctx, &aot_mem) && ctx.pc == 0x089900E4u) goto L_089900E4;
    return;
L_089900E4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_0899011C;
      }
      goto L_089900F0;
    }
L_089900F0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089900FCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089900FCu) goto L_089900FC;
    return;
L_089900FC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990114;
      }
      goto L_08990108;
    }
L_08990108:
    ctx.gpr[31] = (0x08990110u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08990110u) goto L_08990110;
    return;
L_08990110:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08990114;
L_08990114:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0899011C;
L_0899011C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08990128u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08990128u) goto L_08990128;
    return;
L_08990128:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0899013Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x0899013Cu) goto L_0899013C;
    return;
L_0899013C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24864)));
    ctx.gpr[5] = (0u | 176u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08990150u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 23u, 0x089881F4u>(ctx, &aot_mem) && ctx.pc == 0x08990150u) goto L_08990150;
    return;
L_08990150:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08990184;
      }
      goto L_0899015C;
    }
L_0899015C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08990168u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08990168u) goto L_08990168;
    return;
L_08990168:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990180;
      }
      goto L_08990174;
    }
L_08990174:
    ctx.gpr[31] = (0x0899017Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0899017Cu) goto L_0899017C;
    return;
L_0899017C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08990180;
L_08990180:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    goto L_08990184;
L_08990184:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08990190u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08990190u) goto L_08990190;
    return;
L_08990190:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089901A4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x089901A4u) goto L_089901A4;
    return;
L_089901A4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24860)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24864)));
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[7]);
    ctx.gpr[4] = (0u | 240u);
    ctx.gpr[5] = (0u | 152u);
    ctx.gpr[31] = (0x089901C8u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 23u, 0x089881F4u>(ctx, &aot_mem) && ctx.pc == 0x089901C8u) goto L_089901C8;
    return;
L_089901C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (17274u << 16u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08990204;
      }
      goto L_089901DC;
    }
L_089901DC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089901E8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089901E8u) goto L_089901E8;
    return;
L_089901E8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990200;
      }
      goto L_089901F4;
    }
L_089901F4:
    ctx.gpr[31] = (0x089901FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089901FCu) goto L_089901FC;
    return;
L_089901FC:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08990200;
L_08990200:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    goto L_08990204;
L_08990204:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x08990210u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08990210u) goto L_08990210;
    return;
L_08990210:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08990224u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08990224u) goto L_08990224;
    return;
L_08990224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08990470;
      }
      goto L_0899024C;
    }
L_0899024C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (17264u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[16] = (2226u << 16u);
    ctx.gpr[5] = (17188u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-21744));
      if (branch_taken) {
          goto L_08990310;
      }
      goto L_08990278;
    }
L_08990278:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24856)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0899028Cu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 116u, 0x088A8618u>(ctx, &aot_mem) && ctx.pc == 0x0899028Cu) goto L_0899028C;
    return;
L_0899028C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(83)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(81)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(82)));
    ctx.gpr[31] = (0x089902B4u);
    ctx.gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 95u, 0x08968850u>(ctx, &aot_mem) && ctx.pc == 0x089902B4u) goto L_089902B4;
    return;
L_089902B4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_089902E8;
      }
      goto L_089902C0;
    }
L_089902C0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089902CCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089902CCu) goto L_089902CC;
    return;
L_089902CC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089902E4;
      }
      goto L_089902D8;
    }
L_089902D8:
    ctx.gpr[31] = (0x089902E0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089902E0u) goto L_089902E0;
    return;
L_089902E0:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    goto L_089902E4;
L_089902E4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    goto L_089902E8;
L_089902E8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089902F4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x089902F4u) goto L_089902F4;
    return;
L_089902F4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08990308u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08990308u) goto L_08990308;
    return;
L_08990308:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08990470;
      }
      goto L_08990310;
    }
L_08990310:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08990324u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 49u, 0x088A82B0u>(ctx, &aot_mem) && ctx.pc == 0x08990324u) goto L_08990324;
    return;
L_08990324:
    ctx.gpr[21] = (2226u << 16u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-21736));
      if (branch_taken) {
          goto L_08990334;
      }
      goto L_08990330;
    }
L_08990330:
    ctx.gpr[17] = (0u | 1u);
    goto L_08990334;
L_08990334:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08990340u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 103u, 0x088A853Cu>(ctx, &aot_mem) && ctx.pc == 0x08990340u) goto L_08990340;
    return;
L_08990340:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(87)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(85)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(86)));
    ctx.gpr[31] = (0x08990368u);
    ctx.gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 95u, 0x08968850u>(ctx, &aot_mem) && ctx.pc == 0x08990368u) goto L_08990368;
    return;
L_08990368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_089903A0;
      }
      goto L_08990374;
    }
L_08990374:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08990380u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08990380u) goto L_08990380;
    return;
L_08990380:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990398;
      }
      goto L_0899038C;
    }
L_0899038C:
    ctx.gpr[31] = (0x08990394u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08990394u) goto L_08990394;
    return;
L_08990394:
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
    goto L_08990398;
L_08990398:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089903A0;
L_089903A0:
    ctx.gpr[31] = (0x089903A8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x089903A8u) goto L_089903A8;
    return;
L_089903A8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089903BCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x089903BCu) goto L_089903BC;
    return;
L_089903BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089903CCu);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 49u, 0x088A82B0u>(ctx, &aot_mem) && ctx.pc == 0x089903CCu) goto L_089903CC;
    return;
L_089903CC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089903D8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 103u, 0x088A853Cu>(ctx, &aot_mem) && ctx.pc == 0x089903D8u) goto L_089903D8;
    return;
L_089903D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[9] = (17200u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(87)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(85)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(86)));
    ctx.gpr[31] = (0x0899041Cu);
    ctx.gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 95u, 0x08968850u>(ctx, &aot_mem) && ctx.pc == 0x0899041Cu) goto L_0899041C;
    return;
L_0899041C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08990454;
      }
      goto L_08990428;
    }
L_08990428:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08990434u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08990434u) goto L_08990434;
    return;
L_08990434:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899044C;
      }
      goto L_08990440;
    }
L_08990440:
    ctx.gpr[31] = (0x08990448u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08990448u) goto L_08990448;
    return;
L_08990448:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0899044C;
L_0899044C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08990454;
L_08990454:
    ctx.gpr[31] = (0x0899045Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0899045Cu) goto L_0899045C;
    return;
L_0899045C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08990470u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08990470u) goto L_08990470;
    return;
L_08990470:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08991A40;
      }
      goto L_08990478;
    }
L_08990478:
    ctx.gpr[4] = (0u | 47u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (0u | 255u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08990498u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 95u, 0x08968850u>(ctx, &aot_mem) && ctx.pc == 0x08990498u) goto L_08990498;
    return;
L_08990498:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[4] = (17188u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089904D8;
      }
      goto L_089904B0;
    }
L_089904B0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089904BCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089904BCu) goto L_089904BC;
    return;
L_089904BC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089904D4;
      }
      goto L_089904C8;
    }
L_089904C8:
    ctx.gpr[31] = (0x089904D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089904D0u) goto L_089904D0;
    return;
L_089904D0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089904D4;
L_089904D4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    goto L_089904D8;
L_089904D8:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089904E8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21728));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x089904E8u) goto L_089904E8;
    return;
L_089904E8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089904FCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x089904FCu) goto L_089904FC;
    return;
L_089904FC:
    ctx.gpr[4] = (0u | 47u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 75u);
    ctx.gpr[7] = (0u | 151u);
    ctx.gpr[31] = (0x0899051Cu);
    ctx.gpr[8] = (0u | 75u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 95u, 0x08968850u>(ctx, &aot_mem) && ctx.pc == 0x0899051Cu) goto L_0899051C;
    return;
L_0899051C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_08990550;
      }
      goto L_08990528;
    }
L_08990528:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08990534u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08990534u) goto L_08990534;
    return;
L_08990534:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899054C;
      }
      goto L_08990540;
    }
L_08990540:
    ctx.gpr[31] = (0x08990548u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08990548u) goto L_08990548;
    return;
L_08990548:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0899054C;
L_0899054C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    goto L_08990550;
L_08990550:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08990560u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21720));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08990560u) goto L_08990560;
    return;
L_08990560:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08990574u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08990574u) goto L_08990574;
    return;
L_08990574:
    ctx.gpr[9] = (17200u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (0u | 47u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08990598u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 95u, 0x08968850u>(ctx, &aot_mem) && ctx.pc == 0x08990598u) goto L_08990598;
    return;
L_08990598:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[4] = (17194u << 16u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089905D0;
      }
      goto L_089905A8;
    }
L_089905A8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089905B4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089905B4u) goto L_089905B4;
    return;
L_089905B4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089905CC;
      }
      goto L_089905C0;
    }
L_089905C0:
    ctx.gpr[31] = (0x089905C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089905C8u) goto L_089905C8;
    return;
L_089905C8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089905CC;
L_089905CC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    goto L_089905D0;
L_089905D0:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089905E0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21712));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x089905E0u) goto L_089905E0;
    return;
L_089905E0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089905F4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x089905F4u) goto L_089905F4;
    return;
L_089905F4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24864)));
    ctx.gpr[4] = (0u | 240u);
    ctx.gpr[5] = (0u | 152u);
    ctx.gpr[31] = (0x08990608u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 23u, 0x089881F4u>(ctx, &aot_mem) && ctx.pc == 0x08990608u) goto L_08990608;
    return;
L_08990608:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (17274u << 16u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08990644;
      }
      goto L_0899061C;
    }
L_0899061C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08990628u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08990628u) goto L_08990628;
    return;
L_08990628:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990640;
      }
      goto L_08990634;
    }
L_08990634:
    ctx.gpr[31] = (0x0899063Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0899063Cu) goto L_0899063C;
    return;
L_0899063C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08990640;
L_08990640:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    goto L_08990644;
L_08990644:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08990650u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08990650u) goto L_08990650;
    return;
L_08990650:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08990664u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08990664u) goto L_08990664;
    return;
L_08990664:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08990724;
      }
      goto L_0899068C;
    }
L_0899068C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24856)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089906A0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 116u, 0x088A8618u>(ctx, &aot_mem) && ctx.pc == 0x089906A0u) goto L_089906A0;
    return;
L_089906A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[9] = (17264u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(91)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(89)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(90)));
    ctx.gpr[31] = (0x089906CCu);
    ctx.gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 95u, 0x08968850u>(ctx, &aot_mem) && ctx.pc == 0x089906CCu) goto L_089906CC;
    return;
L_089906CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_08990700;
      }
      goto L_089906D8;
    }
L_089906D8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089906E4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089906E4u) goto L_089906E4;
    return;
L_089906E4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089906FC;
      }
      goto L_089906F0;
    }
L_089906F0:
    ctx.gpr[31] = (0x089906F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089906F8u) goto L_089906F8;
    return;
L_089906F8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089906FC;
L_089906FC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    goto L_08990700;
L_08990700:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08990710u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21704));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08990710u) goto L_08990710;
    return;
L_08990710:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08990724u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08990724u) goto L_08990724;
    return;
L_08990724:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08991A40;
      }
      goto L_0899072C;
    }
L_0899072C:
    ctx.gpr[4] = (0u | 45u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (0u | 255u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x0899074Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 95u, 0x08968850u>(ctx, &aot_mem) && ctx.pc == 0x0899074Cu) goto L_0899074C;
    return;
L_0899074C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21752));
    ctx.gpr[20] = (2226u << 16u);
    ctx.gpr[30] = (2226u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-21768));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-21760));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089907A4;
      }
      goto L_08990778;
    }
L_08990778:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08990784u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08990784u) goto L_08990784;
    return;
L_08990784:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899079C;
      }
      goto L_08990790;
    }
L_08990790:
    ctx.gpr[31] = (0x08990798u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08990798u) goto L_08990798;
    return;
L_08990798:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0899079C;
L_0899079C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089907A4;
L_089907A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089907B0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x089907B0u) goto L_089907B0;
    return;
L_089907B0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089907C4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x089907C4u) goto L_089907C4;
    return;
L_089907C4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24864)));
    ctx.gpr[5] = (0u | 164u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x089907D8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 23u, 0x089881F4u>(ctx, &aot_mem) && ctx.pc == 0x089907D8u) goto L_089907D8;
    return;
L_089907D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_0899080C;
      }
      goto L_089907E4;
    }
L_089907E4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089907F0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089907F0u) goto L_089907F0;
    return;
L_089907F0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990808;
      }
      goto L_089907FC;
    }
L_089907FC:
    ctx.gpr[31] = (0x08990804u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08990804u) goto L_08990804;
    return;
L_08990804:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08990808;
L_08990808:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    goto L_0899080C;
L_0899080C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08990818u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08990818u) goto L_08990818;
    return;
L_08990818:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0899082Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x0899082Cu) goto L_0899082C;
    return;
L_0899082C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24864)));
    ctx.gpr[5] = (0u | 176u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08990840u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 23u, 0x089881F4u>(ctx, &aot_mem) && ctx.pc == 0x08990840u) goto L_08990840;
    return;
L_08990840:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08990874;
      }
      goto L_0899084C;
    }
L_0899084C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08990858u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08990858u) goto L_08990858;
    return;
L_08990858:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990870;
      }
      goto L_08990864;
    }
L_08990864:
    ctx.gpr[31] = (0x0899086Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0899086Cu) goto L_0899086C;
    return;
L_0899086C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08990870;
L_08990870:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    goto L_08990874;
L_08990874:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08990880u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08990880u) goto L_08990880;
    return;
L_08990880:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08990894u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08990894u) goto L_08990894;
    return;
L_08990894:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24860)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24864)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (0u | 188u);
    ctx.gpr[31] = (0x089908B8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 23u, 0x089881F4u>(ctx, &aot_mem) && ctx.pc == 0x089908B8u) goto L_089908B8;
    return;
L_089908B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[4] = (17206u << 16u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089908F0;
      }
      goto L_089908C8;
    }
L_089908C8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089908D4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089908D4u) goto L_089908D4;
    return;
L_089908D4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089908EC;
      }
      goto L_089908E0;
    }
L_089908E0:
    ctx.gpr[31] = (0x089908E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089908E8u) goto L_089908E8;
    return;
L_089908E8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089908EC;
L_089908EC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    goto L_089908F0;
L_089908F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x089908FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x089908FCu) goto L_089908FC;
    return;
L_089908FC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08990910u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08990910u) goto L_08990910;
    return;
L_08990910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08990B68;
      }
      goto L_08990938;
    }
L_08990938:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x0899094Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 49u, 0x088A82B0u>(ctx, &aot_mem) && ctx.pc == 0x0899094Cu) goto L_0899094C;
    return;
L_0899094C:
    ctx.gpr[22] = (2226u << 16u);
    ctx.gpr[21] = (2226u << 16u);
    ctx.gpr[20] = (2226u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-21744));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-21736));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-21696));
      if (branch_taken) {
          goto L_0899096C;
      }
      goto L_08990968;
    }
L_08990968:
    ctx.gpr[16] = (0u | 1u);
    goto L_0899096C;
L_0899096C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08990978u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 103u, 0x088A853Cu>(ctx, &aot_mem) && ctx.pc == 0x08990978u) goto L_08990978;
    return;
L_08990978:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[9] = (17264u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(95)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(93)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(94)));
    ctx.gpr[31] = (0x089909A8u);
    ctx.gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 95u, 0x08968850u>(ctx, &aot_mem) && ctx.pc == 0x089909A8u) goto L_089909A8;
    return;
L_089909A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (17274u << 16u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089909E4;
      }
      goto L_089909BC;
    }
L_089909BC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089909C8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089909C8u) goto L_089909C8;
    return;
L_089909C8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089909E0;
      }
      goto L_089909D4;
    }
L_089909D4:
    ctx.gpr[31] = (0x089909DCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089909DCu) goto L_089909DC;
    return;
L_089909DC:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089909E0;
L_089909E0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    goto L_089909E4;
L_089909E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089909F0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x089909F0u) goto L_089909F0;
    return;
L_089909F0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08990A04u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08990A04u) goto L_08990A04;
    return;
L_08990A04:
    ctx.gpr[31] = (0x08990A0Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 296u, 0x088A945Cu>(ctx, &aot_mem) && ctx.pc == 0x08990A0Cu) goto L_08990A0C;
    return;
L_08990A0C:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[31] = (0x08990A1Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 104u, 0x088A8558u>(ctx, &aot_mem) && ctx.pc == 0x08990A1Cu) goto L_08990A1C;
    return;
L_08990A1C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(93), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[9] = (17188u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(95), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(95)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(93)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(94)));
    ctx.gpr[31] = (0x08990A60u);
    ctx.gpr[4] = (0u | 46u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 95u, 0x08968850u>(ctx, &aot_mem) && ctx.pc == 0x08990A60u) goto L_08990A60;
    return;
L_08990A60:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_08990A94;
      }
      goto L_08990A6C;
    }
L_08990A6C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08990A78u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08990A78u) goto L_08990A78;
    return;
L_08990A78:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990A90;
      }
      goto L_08990A84;
    }
L_08990A84:
    ctx.gpr[31] = (0x08990A8Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08990A8Cu) goto L_08990A8C;
    return;
L_08990A8C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08990A90;
L_08990A90:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    goto L_08990A94;
L_08990A94:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08990AA0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08990AA0u) goto L_08990AA0;
    return;
L_08990AA0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08990AB4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08990AB4u) goto L_08990AB4;
    return;
L_08990AB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08990AC4u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 49u, 0x088A82B0u>(ctx, &aot_mem) && ctx.pc == 0x08990AC4u) goto L_08990AC4;
    return;
L_08990AC4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08990AD0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 103u, 0x088A853Cu>(ctx, &aot_mem) && ctx.pc == 0x08990AD0u) goto L_08990AD0;
    return;
L_08990AD0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(93), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[9] = (17200u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(95), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(95)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(93)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(94)));
    ctx.gpr[31] = (0x08990B14u);
    ctx.gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 95u, 0x08968850u>(ctx, &aot_mem) && ctx.pc == 0x08990B14u) goto L_08990B14;
    return;
L_08990B14:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08990B48;
      }
      goto L_08990B20;
    }
L_08990B20:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08990B2Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08990B2Cu) goto L_08990B2C;
    return;
L_08990B2C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990B44;
      }
      goto L_08990B38;
    }
L_08990B38:
    ctx.gpr[31] = (0x08990B40u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08990B40u) goto L_08990B40;
    return;
L_08990B40:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08990B44;
L_08990B44:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    goto L_08990B48;
L_08990B48:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08990B54u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08990B54u) goto L_08990B54;
    return;
L_08990B54:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08990B68u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08990B68u) goto L_08990B68;
    return;
L_08990B68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08991A40;
      }
      goto L_08990B70;
    }
L_08990B70:
    ctx.gpr[4] = (0u | 45u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (0u | 255u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08990B90u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 95u, 0x08968850u>(ctx, &aot_mem) && ctx.pc == 0x08990B90u) goto L_08990B90;
    return;
L_08990B90:
    ctx.gpr[4] = (2226u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21752));
    ctx.gpr[20] = (2226u << 16u);
    ctx.gpr[30] = (2226u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-21768));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-21760));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08990BE8;
      }
      goto L_08990BBC;
    }
L_08990BBC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08990BC8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08990BC8u) goto L_08990BC8;
    return;
L_08990BC8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990BE0;
      }
      goto L_08990BD4;
    }
L_08990BD4:
    ctx.gpr[31] = (0x08990BDCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08990BDCu) goto L_08990BDC;
    return;
L_08990BDC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08990BE0;
L_08990BE0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08990BE8;
L_08990BE8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08990BF4u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08990BF4u) goto L_08990BF4;
    return;
L_08990BF4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08990C08u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08990C08u) goto L_08990C08;
    return;
L_08990C08:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24864)));
    ctx.gpr[5] = (0u | 164u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08990C1Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 23u, 0x089881F4u>(ctx, &aot_mem) && ctx.pc == 0x08990C1Cu) goto L_08990C1C;
    return;
L_08990C1C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_08990C50;
      }
      goto L_08990C28;
    }
L_08990C28:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08990C34u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08990C34u) goto L_08990C34;
    return;
L_08990C34:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990C4C;
      }
      goto L_08990C40;
    }
L_08990C40:
    ctx.gpr[31] = (0x08990C48u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08990C48u) goto L_08990C48;
    return;
L_08990C48:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08990C4C;
L_08990C4C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    goto L_08990C50;
L_08990C50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08990C5Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08990C5Cu) goto L_08990C5C;
    return;
L_08990C5C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08990C70u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08990C70u) goto L_08990C70;
    return;
L_08990C70:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24864)));
    ctx.gpr[5] = (0u | 176u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08990C84u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 23u, 0x089881F4u>(ctx, &aot_mem) && ctx.pc == 0x08990C84u) goto L_08990C84;
    return;
L_08990C84:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08990CB8;
      }
      goto L_08990C90;
    }
L_08990C90:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08990C9Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08990C9Cu) goto L_08990C9C;
    return;
L_08990C9C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990CB4;
      }
      goto L_08990CA8;
    }
L_08990CA8:
    ctx.gpr[31] = (0x08990CB0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08990CB0u) goto L_08990CB0;
    return;
L_08990CB0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08990CB4;
L_08990CB4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    goto L_08990CB8;
L_08990CB8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08990CC4u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08990CC4u) goto L_08990CC4;
    return;
L_08990CC4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08990CD8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08990CD8u) goto L_08990CD8;
    return;
L_08990CD8:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24860)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24864)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (0u | 188u);
    ctx.gpr[31] = (0x08990CFCu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 23u, 0x089881F4u>(ctx, &aot_mem) && ctx.pc == 0x08990CFCu) goto L_08990CFC;
    return;
L_08990CFC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[4] = (17206u << 16u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08990D34;
      }
      goto L_08990D0C;
    }
L_08990D0C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08990D18u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08990D18u) goto L_08990D18;
    return;
L_08990D18:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990D30;
      }
      goto L_08990D24;
    }
L_08990D24:
    ctx.gpr[31] = (0x08990D2Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08990D2Cu) goto L_08990D2C;
    return;
L_08990D2C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08990D30;
L_08990D30:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    goto L_08990D34;
L_08990D34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x08990D40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08990D40u) goto L_08990D40;
    return;
L_08990D40:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08990D54u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08990D54u) goto L_08990D54;
    return;
L_08990D54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991070;
      }
      goto L_08990D7C;
    }
L_08990D7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08990D90u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 49u, 0x088A82B0u>(ctx, &aot_mem) && ctx.pc == 0x08990D90u) goto L_08990D90;
    return;
L_08990D90:
    ctx.gpr[22] = (2226u << 16u);
    ctx.gpr[16] = (2226u << 16u);
    ctx.gpr[17] = (2226u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-21744));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-21736));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-21696));
      if (branch_taken) {
          goto L_08990DB0;
      }
      goto L_08990DAC;
    }
L_08990DAC:
    ctx.gpr[20] = (0u | 1u);
    goto L_08990DB0;
L_08990DB0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08990DBCu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 103u, 0x088A853Cu>(ctx, &aot_mem) && ctx.pc == 0x08990DBCu) goto L_08990DBC;
    return;
L_08990DBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[9] = (17264u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(99)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(97)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(98)));
    ctx.gpr[31] = (0x08990DECu);
    ctx.gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 95u, 0x08968850u>(ctx, &aot_mem) && ctx.pc == 0x08990DECu) goto L_08990DEC;
    return;
L_08990DEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (17274u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08990E2C;
      }
      goto L_08990E00;
    }
L_08990E00:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x08990E0Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08990E0Cu) goto L_08990E0C;
    return;
L_08990E0C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990E24;
      }
      goto L_08990E18;
    }
L_08990E18:
    ctx.gpr[31] = (0x08990E20u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08990E20u) goto L_08990E20;
    return;
L_08990E20:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_08990E24;
L_08990E24:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08990E2C;
L_08990E2C:
    ctx.gpr[31] = (0x08990E34u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08990E34u) goto L_08990E34;
    return;
L_08990E34:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08990E48u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08990E48u) goto L_08990E48;
    return;
L_08990E48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08990E58u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 49u, 0x088A82B0u>(ctx, &aot_mem) && ctx.pc == 0x08990E58u) goto L_08990E58;
    return;
L_08990E58:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08990E64u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 103u, 0x088A853Cu>(ctx, &aot_mem) && ctx.pc == 0x08990E64u) goto L_08990E64;
    return;
L_08990E64:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[9] = (17188u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(99), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(99)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(97)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(98)));
    ctx.gpr[31] = (0x08990EA8u);
    ctx.gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 95u, 0x08968850u>(ctx, &aot_mem) && ctx.pc == 0x08990EA8u) goto L_08990EA8;
    return;
L_08990EA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_08990EE0;
      }
      goto L_08990EB4;
    }
L_08990EB4:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x08990EC0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08990EC0u) goto L_08990EC0;
    return;
L_08990EC0:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990ED8;
      }
      goto L_08990ECC;
    }
L_08990ECC:
    ctx.gpr[31] = (0x08990ED4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08990ED4u) goto L_08990ED4;
    return;
L_08990ED4:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_08990ED8;
L_08990ED8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08990EE0;
L_08990EE0:
    ctx.gpr[31] = (0x08990EE8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08990EE8u) goto L_08990EE8;
    return;
L_08990EE8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08990EFCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08990EFCu) goto L_08990EFC;
    return;
L_08990EFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08990F0Cu);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 49u, 0x088A82B0u>(ctx, &aot_mem) && ctx.pc == 0x08990F0Cu) goto L_08990F0C;
    return;
L_08990F0C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08990F18u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 104u, 0x088A8558u>(ctx, &aot_mem) && ctx.pc == 0x08990F18u) goto L_08990F18;
    return;
L_08990F18:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[9] = (17200u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(99), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(99)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(97)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(98)));
    ctx.gpr[31] = (0x08990F5Cu);
    ctx.gpr[4] = (0u | 46u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 95u, 0x08968850u>(ctx, &aot_mem) && ctx.pc == 0x08990F5Cu) goto L_08990F5C;
    return;
L_08990F5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08990F94;
      }
      goto L_08990F68;
    }
L_08990F68:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08990F74u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08990F74u) goto L_08990F74;
    return;
L_08990F74:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990F8C;
      }
      goto L_08990F80;
    }
L_08990F80:
    ctx.gpr[31] = (0x08990F88u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08990F88u) goto L_08990F88;
    return;
L_08990F88:
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
    goto L_08990F8C;
L_08990F8C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08990F94;
L_08990F94:
    ctx.gpr[31] = (0x08990F9Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08990F9Cu) goto L_08990F9C;
    return;
L_08990F9C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08990FB0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08990FB0u) goto L_08990FB0;
    return;
L_08990FB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08990FC0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 49u, 0x088A82B0u>(ctx, &aot_mem) && ctx.pc == 0x08990FC0u) goto L_08990FC0;
    return;
L_08990FC0:
    ctx.gpr[5] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[31] = (0x08990FD0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 104u, 0x088A8558u>(ctx, &aot_mem) && ctx.pc == 0x08990FD0u) goto L_08990FD0;
    return;
L_08990FD0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[9] = (17212u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(99), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(99)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(97)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(98)));
    ctx.gpr[31] = (0x08991014u);
    ctx.gpr[4] = (0u | 46u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 95u, 0x08968850u>(ctx, &aot_mem) && ctx.pc == 0x08991014u) goto L_08991014;
    return;
L_08991014:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[5] = (17206u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08991050;
      }
      goto L_08991024;
    }
L_08991024:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08991030u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08991030u) goto L_08991030;
    return;
L_08991030:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991048;
      }
      goto L_0899103C;
    }
L_0899103C:
    ctx.gpr[31] = (0x08991044u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08991044u) goto L_08991044;
    return;
L_08991044:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08991048;
L_08991048:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08991050;
L_08991050:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[31] = (0x0899105Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21688));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0899105Cu) goto L_0899105C;
    return;
L_0899105C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08991070u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08991070u) goto L_08991070;
    return;
L_08991070:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08991A40;
      }
      goto L_08991078;
    }
L_08991078:
    ctx.gpr[4] = (0u | 45u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08991098u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 95u, 0x08968850u>(ctx, &aot_mem) && ctx.pc == 0x08991098u) goto L_08991098;
    return;
L_08991098:
    ctx.gpr[4] = (2226u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21752));
    ctx.gpr[20] = (2226u << 16u);
    ctx.gpr[30] = (2226u << 16u);
    ctx.gpr[5] = (17264u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-21768));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-21760));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089910F8;
      }
      goto L_089910CC;
    }
L_089910CC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089910D8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089910D8u) goto L_089910D8;
    return;
L_089910D8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089910F0;
      }
      goto L_089910E4;
    }
L_089910E4:
    ctx.gpr[31] = (0x089910ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089910ECu) goto L_089910EC;
    return;
L_089910EC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_089910F0;
L_089910F0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089910F8;
L_089910F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08991104u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08991104u) goto L_08991104;
    return;
L_08991104:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08991118u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08991118u) goto L_08991118;
    return;
L_08991118:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24864)));
    ctx.gpr[5] = (0u | 164u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x0899112Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 23u, 0x089881F4u>(ctx, &aot_mem) && ctx.pc == 0x0899112Cu) goto L_0899112C;
    return;
L_0899112C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_08991164;
      }
      goto L_08991138;
    }
L_08991138:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08991144u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08991144u) goto L_08991144;
    return;
L_08991144:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899115C;
      }
      goto L_08991150;
    }
L_08991150:
    ctx.gpr[31] = (0x08991158u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08991158u) goto L_08991158;
    return;
L_08991158:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0899115C;
L_0899115C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08991164;
L_08991164:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08991170u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08991170u) goto L_08991170;
    return;
L_08991170:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08991184u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08991184u) goto L_08991184;
    return;
L_08991184:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24864)));
    ctx.gpr[5] = (0u | 176u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08991198u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 23u, 0x089881F4u>(ctx, &aot_mem) && ctx.pc == 0x08991198u) goto L_08991198;
    return;
L_08991198:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_089911CC;
      }
      goto L_089911A4;
    }
L_089911A4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089911B0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089911B0u) goto L_089911B0;
    return;
L_089911B0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089911C8;
      }
      goto L_089911BC;
    }
L_089911BC:
    ctx.gpr[31] = (0x089911C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089911C4u) goto L_089911C4;
    return;
L_089911C4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089911C8;
L_089911C8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    goto L_089911CC;
L_089911CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089911D8u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x089911D8u) goto L_089911D8;
    return;
L_089911D8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089911ECu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x089911ECu) goto L_089911EC;
    return;
L_089911EC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24860)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24864)));
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[7]);
    ctx.gpr[4] = (0u | 240u);
    ctx.gpr[5] = (0u | 152u);
    ctx.gpr[31] = (0x08991210u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 23u, 0x089881F4u>(ctx, &aot_mem) && ctx.pc == 0x08991210u) goto L_08991210;
    return;
L_08991210:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (17274u << 16u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0899124C;
      }
      goto L_08991224;
    }
L_08991224:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08991230u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08991230u) goto L_08991230;
    return;
L_08991230:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991248;
      }
      goto L_0899123C;
    }
L_0899123C:
    ctx.gpr[31] = (0x08991244u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08991244u) goto L_08991244;
    return;
L_08991244:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08991248;
L_08991248:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    goto L_0899124C;
L_0899124C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x08991258u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08991258u) goto L_08991258;
    return;
L_08991258:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0899126Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x0899126Cu) goto L_0899126C;
    return;
L_0899126C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (0u | 164u);
      if (branch_taken) {
          goto L_08991334;
      }
      goto L_08991294;
    }
L_08991294:
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24856)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089912ACu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 116u, 0x088A8618u>(ctx, &aot_mem) && ctx.pc == 0x089912ACu) goto L_089912AC;
    return;
L_089912AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[9] = (17188u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(103)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(101)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(102)));
    ctx.gpr[31] = (0x089912D8u);
    ctx.gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 95u, 0x08968850u>(ctx, &aot_mem) && ctx.pc == 0x089912D8u) goto L_089912D8;
    return;
L_089912D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[19] = (2226u << 16u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-21744));
      if (branch_taken) {
          goto L_08991310;
      }
      goto L_089912E8;
    }
L_089912E8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089912F4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089912F4u) goto L_089912F4;
    return;
L_089912F4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899130C;
      }
      goto L_08991300;
    }
L_08991300:
    ctx.gpr[31] = (0x08991308u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08991308u) goto L_08991308;
    return;
L_08991308:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0899130C;
L_0899130C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    goto L_08991310;
L_08991310:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899131Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0899131Cu) goto L_0899131C;
    return;
L_0899131C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08991330u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08991330u) goto L_08991330;
    return;
L_08991330:
    ctx.gpr[16] = (0u | 176u);
    goto L_08991334;
L_08991334:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (0u | 51u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (0u | 255u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (0u | 75u);
    ctx.gpr[7] = (0u | 151u);
    ctx.gpr[31] = (0x08991358u);
    ctx.gpr[8] = (0u | 75u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 95u, 0x08968850u>(ctx, &aot_mem) && ctx.pc == 0x08991358u) goto L_08991358;
    return;
L_08991358:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
      if (branch_taken) {
          goto L_08991394;
      }
      goto L_0899136C;
    }
L_0899136C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08991378u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08991378u) goto L_08991378;
    return;
L_08991378:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991390;
      }
      goto L_08991384;
    }
L_08991384:
    ctx.gpr[31] = (0x0899138Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0899138Cu) goto L_0899138C;
    return;
L_0899138C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08991390;
L_08991390:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    goto L_08991394;
L_08991394:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089913A4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21680));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x089913A4u) goto L_089913A4;
    return;
L_089913A4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089913B8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x089913B8u) goto L_089913B8;
    return;
L_089913B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08991A40;
      }
      goto L_089913C0;
    }
L_089913C0:
    ctx.gpr[4] = (0u | 45u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x089913E0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 95u, 0x08968850u>(ctx, &aot_mem) && ctx.pc == 0x089913E0u) goto L_089913E0;
    return;
L_089913E0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21752));
    ctx.gpr[20] = (2226u << 16u);
    ctx.gpr[30] = (2226u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-21768));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-21760));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08991438;
      }
      goto L_0899140C;
    }
L_0899140C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08991418u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08991418u) goto L_08991418;
    return;
L_08991418:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991430;
      }
      goto L_08991424;
    }
L_08991424:
    ctx.gpr[31] = (0x0899142Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0899142Cu) goto L_0899142C;
    return;
L_0899142C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08991430;
L_08991430:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08991438;
L_08991438:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08991444u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08991444u) goto L_08991444;
    return;
L_08991444:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08991458u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08991458u) goto L_08991458;
    return;
L_08991458:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24864)));
    ctx.gpr[5] = (0u | 164u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x0899146Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 23u, 0x089881F4u>(ctx, &aot_mem) && ctx.pc == 0x0899146Cu) goto L_0899146C;
    return;
L_0899146C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_089914A0;
      }
      goto L_08991478;
    }
L_08991478:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08991484u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08991484u) goto L_08991484;
    return;
L_08991484:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899149C;
      }
      goto L_08991490;
    }
L_08991490:
    ctx.gpr[31] = (0x08991498u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08991498u) goto L_08991498;
    return;
L_08991498:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0899149C;
L_0899149C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    goto L_089914A0;
L_089914A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089914ACu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x089914ACu) goto L_089914AC;
    return;
L_089914AC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089914C0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x089914C0u) goto L_089914C0;
    return;
L_089914C0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24864)));
    ctx.gpr[5] = (0u | 176u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x089914D4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 23u, 0x089881F4u>(ctx, &aot_mem) && ctx.pc == 0x089914D4u) goto L_089914D4;
    return;
L_089914D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08991508;
      }
      goto L_089914E0;
    }
L_089914E0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089914ECu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089914ECu) goto L_089914EC;
    return;
L_089914EC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991504;
      }
      goto L_089914F8;
    }
L_089914F8:
    ctx.gpr[31] = (0x08991500u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08991500u) goto L_08991500;
    return;
L_08991500:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08991504;
L_08991504:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    goto L_08991508;
L_08991508:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08991514u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08991514u) goto L_08991514;
    return;
L_08991514:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08991528u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08991528u) goto L_08991528;
    return;
L_08991528:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24860)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24864)));
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[7]);
    ctx.gpr[4] = (0u | 240u);
    ctx.gpr[5] = (0u | 152u);
    ctx.gpr[31] = (0x0899154Cu);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 23u, 0x089881F4u>(ctx, &aot_mem) && ctx.pc == 0x0899154Cu) goto L_0899154C;
    return;
L_0899154C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (17274u << 16u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08991588;
      }
      goto L_08991560;
    }
L_08991560:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0899156Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0899156Cu) goto L_0899156C;
    return;
L_0899156C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991584;
      }
      goto L_08991578;
    }
L_08991578:
    ctx.gpr[31] = (0x08991580u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08991580u) goto L_08991580;
    return;
L_08991580:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08991584;
L_08991584:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    goto L_08991588;
L_08991588:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x08991594u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08991594u) goto L_08991594;
    return;
L_08991594:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089915A8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x089915A8u) goto L_089915A8;
    return;
L_089915A8:
    ctx.gpr[31] = (0x089915B0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 290u, 0x088A9424u>(ctx, &aot_mem) && ctx.pc == 0x089915B0u) goto L_089915B0;
    return;
L_089915B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08991660;
      }
      goto L_089915C0;
    }
L_089915C0:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x089915CCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 290u, 0x088A9424u>(ctx, &aot_mem) && ctx.pc == 0x089915CCu) goto L_089915CC;
    return;
L_089915CC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089915D8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 116u, 0x088A8618u>(ctx, &aot_mem) && ctx.pc == 0x089915D8u) goto L_089915D8;
    return;
L_089915D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (17264u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(107)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(105)));
    ctx.gpr[9] = (17188u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(106)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[31] = (0x08991608u);
    ctx.gpr[4] = (0u | 53u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 95u, 0x08968850u>(ctx, &aot_mem) && ctx.pc == 0x08991608u) goto L_08991608;
    return;
L_08991608:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[5] = (2226u << 16u);
      if (branch_taken) {
          goto L_08991640;
      }
      goto L_08991614;
    }
L_08991614:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08991620u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08991620u) goto L_08991620;
    return;
L_08991620:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991638;
      }
      goto L_0899162C;
    }
L_0899162C:
    ctx.gpr[31] = (0x08991634u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08991634u) goto L_08991634;
    return;
L_08991634:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08991638;
L_08991638:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[5] = (2226u << 16u);
    goto L_08991640;
L_08991640:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899164Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21672));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0899164Cu) goto L_0899164C;
    return;
L_0899164C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08991660u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08991660u) goto L_08991660;
    return;
L_08991660:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08991A40;
      }
      goto L_08991668;
    }
L_08991668:
    ctx.gpr[4] = (0u | 45u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (0u | 255u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08991688u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 95u, 0x08968850u>(ctx, &aot_mem) && ctx.pc == 0x08991688u) goto L_08991688;
    return;
L_08991688:
    ctx.gpr[5] = (17274u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2226u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21752));
    ctx.gpr[20] = (2226u << 16u);
    ctx.gpr[30] = (2226u << 16u);
    ctx.gpr[5] = (17264u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-21768));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-21760));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089916F0;
      }
      goto L_089916C4;
    }
L_089916C4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089916D0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089916D0u) goto L_089916D0;
    return;
L_089916D0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089916E8;
      }
      goto L_089916DC;
    }
L_089916DC:
    ctx.gpr[31] = (0x089916E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089916E4u) goto L_089916E4;
    return;
L_089916E4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_089916E8;
L_089916E8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089916F0;
L_089916F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089916FCu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x089916FCu) goto L_089916FC;
    return;
L_089916FC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08991710u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08991710u) goto L_08991710;
    return;
L_08991710:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24864)));
    ctx.gpr[5] = (0u | 164u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08991724u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 23u, 0x089881F4u>(ctx, &aot_mem) && ctx.pc == 0x08991724u) goto L_08991724;
    return;
L_08991724:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[4] = (17182u << 16u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08991760;
      }
      goto L_08991734;
    }
L_08991734:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08991740u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08991740u) goto L_08991740;
    return;
L_08991740:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991758;
      }
      goto L_0899174C;
    }
L_0899174C:
    ctx.gpr[31] = (0x08991754u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08991754u) goto L_08991754;
    return;
L_08991754:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08991758;
L_08991758:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08991760;
L_08991760:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899176Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0899176Cu) goto L_0899176C;
    return;
L_0899176C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08991780u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08991780u) goto L_08991780;
    return;
L_08991780:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24864)));
    ctx.gpr[5] = (0u | 176u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08991794u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 23u, 0x089881F4u>(ctx, &aot_mem) && ctx.pc == 0x08991794u) goto L_08991794;
    return;
L_08991794:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[4] = (17194u << 16u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089917CC;
      }
      goto L_089917A4;
    }
L_089917A4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089917B0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089917B0u) goto L_089917B0;
    return;
L_089917B0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089917C8;
      }
      goto L_089917BC;
    }
L_089917BC:
    ctx.gpr[31] = (0x089917C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089917C4u) goto L_089917C4;
    return;
L_089917C4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089917C8;
L_089917C8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    goto L_089917CC;
L_089917CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089917D8u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x089917D8u) goto L_089917D8;
    return;
L_089917D8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089917ECu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x089917ECu) goto L_089917EC;
    return;
L_089917EC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24860)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24864)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (0u | 188u);
    ctx.gpr[31] = (0x08991810u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 23u, 0x089881F4u>(ctx, &aot_mem) && ctx.pc == 0x08991810u) goto L_08991810;
    return;
L_08991810:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[4] = (17206u << 16u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08991848;
      }
      goto L_08991820;
    }
L_08991820:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0899182Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0899182Cu) goto L_0899182C;
    return;
L_0899182C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991844;
      }
      goto L_08991838;
    }
L_08991838:
    ctx.gpr[31] = (0x08991840u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08991840u) goto L_08991840;
    return;
L_08991840:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08991844;
L_08991844:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    goto L_08991848;
L_08991848:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x08991854u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08991854u) goto L_08991854;
    return;
L_08991854:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08991868u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08991868u) goto L_08991868;
    return;
L_08991868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (0u | 152u);
      if (branch_taken) {
          goto L_0899192C;
      }
      goto L_08991890;
    }
L_08991890:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24856)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089918A4u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 116u, 0x088A8618u>(ctx, &aot_mem) && ctx.pc == 0x089918A4u) goto L_089918A4;
    return;
L_089918A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(111)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(109)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(110)));
    ctx.gpr[31] = (0x089918CCu);
    ctx.gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 95u, 0x08968850u>(ctx, &aot_mem) && ctx.pc == 0x089918CCu) goto L_089918CC;
    return;
L_089918CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[19] = (2226u << 16u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-21744));
      if (branch_taken) {
          goto L_08991908;
      }
      goto L_089918E0;
    }
L_089918E0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089918ECu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089918ECu) goto L_089918EC;
    return;
L_089918EC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991904;
      }
      goto L_089918F8;
    }
L_089918F8:
    ctx.gpr[31] = (0x08991900u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08991900u) goto L_08991900;
    return;
L_08991900:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08991904;
L_08991904:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    goto L_08991908;
L_08991908:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08991914u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08991914u) goto L_08991914;
    return;
L_08991914:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08991928u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08991928u) goto L_08991928;
    return;
L_08991928:
    ctx.gpr[16] = (0u | 164u);
    goto L_0899192C;
L_0899192C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (0u | 50u);
    ctx.gpr[5] = (0u | 255u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[6] = (0u | 75u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[7] = (0u | 151u);
    ctx.gpr[31] = (0x08991950u);
    ctx.gpr[8] = (0u | 75u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 95u, 0x08968850u>(ctx, &aot_mem) && ctx.pc == 0x08991950u) goto L_08991950;
    return;
L_08991950:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_08991990;
      }
      goto L_08991964;
    }
L_08991964:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08991970u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08991970u) goto L_08991970;
    return;
L_08991970:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991988;
      }
      goto L_0899197C;
    }
L_0899197C:
    ctx.gpr[31] = (0x08991984u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08991984u) goto L_08991984;
    return;
L_08991984:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    goto L_08991988;
L_08991988:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08991990;
L_08991990:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[31] = (0x0899199Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21664));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0899199Cu) goto L_0899199C;
    return;
L_0899199C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089919B0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x089919B0u) goto L_089919B0;
    return;
L_089919B0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (0u | 52u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x089919D8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 95u, 0x08968850u>(ctx, &aot_mem) && ctx.pc == 0x089919D8u) goto L_089919D8;
    return;
L_089919D8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_08991A18;
      }
      goto L_089919EC;
    }
L_089919EC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089919F8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089919F8u) goto L_089919F8;
    return;
L_089919F8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991A10;
      }
      goto L_08991A04;
    }
L_08991A04:
    ctx.gpr[31] = (0x08991A0Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08991A0Cu) goto L_08991A0C;
    return;
L_08991A0C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08991A10;
L_08991A10:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08991A18;
L_08991A18:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[31] = (0x08991A24u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21656));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08991A24u) goto L_08991A24;
    return;
L_08991A24:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08991A38u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08991A38u) goto L_08991A38;
    return;
L_08991A38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08991A40;
      }
      goto L_08991A40;
    }
L_08991A40:
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
L_08991A88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25548)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2228u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25552)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[8] = (ctx.gpr[5] | 14571u);
    ctx.gpr[2] = (2228u << 16u);
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-25544), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (2228u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25524)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[3] = (2228u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-25512)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-25516)));
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25508), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25500), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[13] = (2228u << 16u);
    ctx.gpr[12] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(-25536), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-25540), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[11] = (15744u << 16u);
    ctx.gpr[14] = (2228u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[7] = (16281u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[15] = (2228u << 16u);
    ctx.gpr[3] = (ctx.gpr[7] | 39322u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(-25532), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(-25528), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[9] = (16268u << 16u);
    ctx.gpr[24] = (2228u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] | 52429u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-25520), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[25] = (2228u << 16u);
    ctx.gpr[17] = (2277u << 16u);
    ctx.gpr[18] = (2221u << 16u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[2] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-7488));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(14208));
    ctx.gpr[5] = (0u | 70u);
    ctx.gpr[6] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(-25504), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08991B98u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-25496), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 351u, 0x08AF5B00u>(ctx, &aot_mem) && ctx.pc == 0x08991B98u) goto L_08991B98;
    return;
L_08991B98:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08991BA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24808));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x08991BA4u) goto L_08991BA4;
    return;
L_08991BA4:
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
L_08991BBC:
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
L_08991BE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-592));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1205));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(99) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 108u, 0x089948FCu>(ctx, &aot_mem); return;
      }
      goto L_08991C20;
    }
L_08991C20:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1205));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-21208)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08991C3C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08991C50u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x08991C50u) goto L_08991C50;
    return;
L_08991C50:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08991C6Cu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08991C6Cu) goto L_08991C6C;
    return;
L_08991C6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08991CA4;
      }
      goto L_08991C9C;
    }
L_08991C9C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08991CF4;
      }
      goto L_08991CA4;
    }
L_08991CA4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08991CD4;
    }
    goto L_08991CC0;
L_08991CC0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08991CF4;
      }
      goto L_08991CD4;
    }
L_08991CD4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991CF4;
      }
      goto L_08991CF0;
    }
L_08991CF0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08991CF4;
L_08991CF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08991CFC;
    }
L_08991CFC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08991D10u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x08991D10u) goto L_08991D10;
    return;
L_08991D10:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08991D2Cu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08991D2Cu) goto L_08991D2C;
    return;
L_08991D2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08991D64;
      }
      goto L_08991D5C;
    }
L_08991D5C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08991DB4;
      }
      goto L_08991D64;
    }
L_08991D64:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08991D94;
    }
    goto L_08991D80;
L_08991D80:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08991DB4;
      }
      goto L_08991D94;
    }
L_08991D94:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991DB4;
      }
      goto L_08991DB0;
    }
L_08991DB0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08991DB4;
L_08991DB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08991DBC;
    }
L_08991DBC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08991DD8u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08991DD8u) goto L_08991DD8;
    return;
L_08991DD8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08991DE8u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x08991DE8u) goto L_08991DE8;
    return;
L_08991DE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08991E20;
      }
      goto L_08991E18;
    }
L_08991E18:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08991E70;
      }
      goto L_08991E20;
    }
L_08991E20:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08991E50;
    }
    goto L_08991E3C;
L_08991E3C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08991E70;
      }
      goto L_08991E50;
    }
L_08991E50:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991E70;
      }
      goto L_08991E6C;
    }
L_08991E6C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08991E70;
L_08991E70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08991E78;
    }
L_08991E78:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08991E94u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08991E94u) goto L_08991E94;
    return;
L_08991E94:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08991EA4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x08991EA4u) goto L_08991EA4;
    return;
L_08991EA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08991EDC;
      }
      goto L_08991ED4;
    }
L_08991ED4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08991F2C;
      }
      goto L_08991EDC;
    }
L_08991EDC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08991F0C;
    }
    goto L_08991EF8;
L_08991EF8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08991F2C;
      }
      goto L_08991F0C;
    }
L_08991F0C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991F2C;
      }
      goto L_08991F28;
    }
L_08991F28:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08991F2C;
L_08991F2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08991F34;
    }
L_08991F34:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08991F48u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x08991F48u) goto L_08991F48;
    return;
L_08991F48:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08991F64u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08991F64u) goto L_08991F64;
    return;
L_08991F64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08991FA0;
      }
      goto L_08991F98;
    }
L_08991F98:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08991FF0;
      }
      goto L_08991FA0;
    }
L_08991FA0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08991FD0;
    }
    goto L_08991FBC;
L_08991FBC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08991FF0;
      }
      goto L_08991FD0;
    }
L_08991FD0:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991FF0;
      }
      goto L_08991FEC;
    }
L_08991FEC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08991FF0;
L_08991FF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08991FF8;
    }
L_08991FF8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0899200Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0899200Cu) goto L_0899200C;
    return;
L_0899200C:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08992028u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08992028u) goto L_08992028;
    return;
L_08992028:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08992064;
      }
      goto L_0899205C;
    }
L_0899205C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089920B4;
      }
      goto L_08992064;
    }
L_08992064:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08992094;
    }
    goto L_08992080;
L_08992080:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089920B4;
      }
      goto L_08992094;
    }
L_08992094:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089920B4;
      }
      goto L_089920B0;
    }
L_089920B0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089920B4;
L_089920B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_089920BC;
    }
L_089920BC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089920D8u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089920D8u) goto L_089920D8;
    return;
L_089920D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089920E8u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x089920E8u) goto L_089920E8;
    return;
L_089920E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08992124;
      }
      goto L_0899211C;
    }
L_0899211C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08992174;
      }
      goto L_08992124;
    }
L_08992124:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08992154;
    }
    goto L_08992140;
L_08992140:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08992174;
      }
      goto L_08992154;
    }
L_08992154:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08992174;
      }
      goto L_08992170;
    }
L_08992170:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08992174;
L_08992174:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_0899217C;
    }
L_0899217C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08992198u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08992198u) goto L_08992198;
    return;
L_08992198:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089921A8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x089921A8u) goto L_089921A8;
    return;
L_089921A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089921E4;
      }
      goto L_089921DC;
    }
L_089921DC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08992234;
      }
      goto L_089921E4;
    }
L_089921E4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08992214;
    }
    goto L_08992200;
L_08992200:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08992234;
      }
      goto L_08992214;
    }
L_08992214:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08992234;
      }
      goto L_08992230;
    }
L_08992230:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08992234;
L_08992234:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_0899223C;
    }
L_0899223C:
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0899225Cu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0899225Cu) goto L_0899225C;
    return;
L_0899225C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0899226Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0899226Cu) goto L_0899226C;
    return;
L_0899226C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1400)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1412)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[31] = (0x0899229Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 138u, 0x08A81838u>(ctx, &aot_mem) && ctx.pc == 0x0899229Cu) goto L_0899229C;
    return;
L_0899229C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089922B0u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x089922B0u) goto L_089922B0;
    return;
L_089922B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_089922B8;
    }
L_089922B8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x089922D4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089922D4u) goto L_089922D4;
    return;
L_089922D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x08992320u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 43u, 0x08978454u>(ctx, &aot_mem) && ctx.pc == 0x08992320u) goto L_08992320;
    return;
L_08992320:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08992378;
      }
      goto L_08992330;
    }
L_08992330:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089923EC;
      }
      goto L_08992378;
    }
L_08992378:
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (0x08992390u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 711u, 0x08977838u>(ctx, &aot_mem) && ctx.pc == 0x08992390u) goto L_08992390;
    return;
L_08992390:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (0x089923C4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 711u, 0x08977838u>(ctx, &aot_mem) && ctx.pc == 0x089923C4u) goto L_089923C4;
    return;
L_089923C4:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_089923EC;
L_089923EC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089923FCu);
    ctx.gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x089923FCu) goto L_089923FC;
    return;
L_089923FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08992404;
    }
L_08992404:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08992420u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08992420u) goto L_08992420;
    return;
L_08992420:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x08992430u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08992430u) goto L_08992430;
    return;
L_08992430:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
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
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089924A0;
      }
      goto L_08992484;
    }
L_08992484:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089924A0;
      }
      goto L_08992490;
    }
L_08992490:
    ctx.gpr[4] = (15969u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1496), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089924A0;
L_089924A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_089924A8;
    }
L_089924A8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089924C0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089924C0u) goto L_089924C0;
    return;
L_089924C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[31] = (0x089924D0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29520), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 913u, 0x089CBE08u>(ctx, &aot_mem) && ctx.pc == 0x089924D0u) goto L_089924D0;
    return;
L_089924D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_089924D8;
    }
L_089924D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089924F8u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x089924F8u) goto L_089924F8;
    return;
L_089924F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x0899250Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 552u, 0x08AE7510u>(ctx, &aot_mem) && ctx.pc == 0x0899250Cu) goto L_0899250C;
    return;
L_0899250C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08992514;
    }
L_08992514:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08992530u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08992530u) goto L_08992530;
    return;
L_08992530:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08992540u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08992540u) goto L_08992540;
    return;
L_08992540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0899255C;
      }
      goto L_0899254C;
    }
L_0899254C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(602))))));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(602), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0899256C;
      }
      goto L_0899255C;
    }
L_0899255C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(602))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(602), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0899256C;
L_0899256C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08992574;
    }
L_08992574:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0899258Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0899258Cu) goto L_0899258C;
    return;
L_0899258C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(340), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_089925BC;
    }
L_089925BC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089925D8u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089925D8u) goto L_089925D8;
    return;
L_089925D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08992614u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08992614u) goto L_08992614;
    return;
L_08992614:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_0899261C;
    }
L_0899261C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08992638u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08992638u) goto L_08992638;
    return;
L_08992638:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[31] = (0x08992674u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 129u, 0x089E8A70u>(ctx, &aot_mem) && ctx.pc == 0x08992674u) goto L_08992674;
    return;
L_08992674:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_0899267C;
    }
L_0899267C:
    ctx.gpr[31] = (0x08992684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 136u, 0x089E8AE8u>(ctx, &aot_mem) && ctx.pc == 0x08992684u) goto L_08992684;
    return;
L_08992684:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_0899268C;
    }
L_0899268C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089926A8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089926A8u) goto L_089926A8;
    return;
L_089926A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[31] = (0x089926B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089926B8u) goto L_089926B8;
    return;
L_089926B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089926C8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089926C8u) goto L_089926C8;
    return;
L_089926C8:
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
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[31] = (0x089926FCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x089926FCu) goto L_089926FC;
    return;
L_089926FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08992704;
    }
L_08992704:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08992724u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08992724u) goto L_08992724;
    return;
L_08992724:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x08992734u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08992734u) goto L_08992734;
    return;
L_08992734:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08992788u);
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x08992788u) goto L_08992788;
    return;
L_08992788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089927B0u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x089927B0u) goto L_089927B0;
    return;
L_089927B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_089927B8;
    }
L_089927B8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089927D0u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089927D0u) goto L_089927D0;
    return;
L_089927D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089927E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089927E0u) goto L_089927E0;
    return;
L_089927E0:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(412)));
    ctx.gpr[6] = (ctx.gpr[6] & 32768u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0899280C;
      }
      goto L_089927F4;
    }
L_089927F4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(412)));
    ctx.gpr[7] = (65535u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(32767));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(412), ctx.gpr[6]);
    goto L_0899280C;
L_0899280C:
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
          goto L_08992838;
      }
      goto L_08992830;
    }
L_08992830:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08992888;
      }
      goto L_08992838;
    }
L_08992838:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08992868;
    }
    goto L_08992854;
L_08992854:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08992888;
      }
      goto L_08992868;
    }
L_08992868:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08992888;
      }
      goto L_08992884;
    }
L_08992884:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08992888;
L_08992888:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08992890;
    }
L_08992890:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089928ACu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089928ACu) goto L_089928AC;
    return;
L_089928AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[31] = (0x089928BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089928BCu) goto L_089928BC;
    return;
L_089928BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089928CCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089928CCu) goto L_089928CC;
    return;
L_089928CC:
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
    ctx.gpr[5] = (0u | 46u);
    ctx.gpr[31] = (0x08992900u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x08992900u) goto L_08992900;
    return;
L_08992900:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08992908;
    }
L_08992908:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08992920u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08992920u) goto L_08992920;
    return;
L_08992920:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08992958;
      }
      goto L_0899292C;
    }
L_0899292C:
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1412), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (0u | 20u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(7128), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 230u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(7136), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(7132), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(7168), 0u);
      if (branch_taken) {
          goto L_0899297C;
      }
      goto L_08992958;
    }
L_08992958:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1412), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(7128), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(7136), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(7132), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(7168), ctx.gpr[4]);
    goto L_0899297C;
L_0899297C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08992984;
    }
L_08992984:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0899299Cu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0899299Cu) goto L_0899299C;
    return;
L_0899299C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08992A14;
      }
      goto L_089929D0;
    }
L_089929D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08992A14;
      }
      goto L_089929E0;
    }
L_089929E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089929ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 126u, 0x088A08E8u>(ctx, &aot_mem) && ctx.pc == 0x089929ECu) goto L_089929EC;
    return;
L_089929EC:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08992A10;
      }
      goto L_089929F8;
    }
L_089929F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08992A04u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 126u, 0x088A08E8u>(ctx, &aot_mem) && ctx.pc == 0x08992A04u) goto L_08992A04;
    return;
L_08992A04:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08992A14;
      }
      goto L_08992A10;
    }
L_08992A10:
    ctx.gpr[18] = (0u | 1u);
    goto L_08992A14;
L_08992A14:
    ctx.gpr[4] = (0u < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_08992A40;
      }
      goto L_08992A38;
    }
L_08992A38:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08992A90;
      }
      goto L_08992A40;
    }
L_08992A40:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08992A70;
    }
    goto L_08992A5C;
L_08992A5C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08992A90;
      }
      goto L_08992A70;
    }
L_08992A70:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08992A90;
      }
      goto L_08992A8C;
    }
L_08992A8C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08992A90;
L_08992A90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08992A98;
    }
L_08992A98:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08992AB4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08992AB4u) goto L_08992AB4;
    return;
L_08992AB4:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08992AE4;
      }
      goto L_08992AD4;
    }
L_08992AD4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08992AE0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x08992AE0u) goto L_08992AE0;
    return;
L_08992AE0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08992AE4;
L_08992AE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08992AF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 639u, 0x08957DB8u>(ctx, &aot_mem) && ctx.pc == 0x08992AF4u) goto L_08992AF4;
    return;
L_08992AF4:
    ctx.gpr[31] = (0x08992AFCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 698u, 0x08967198u>(ctx, &aot_mem) && ctx.pc == 0x08992AFCu) goto L_08992AFC;
    return;
L_08992AFC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
      if (branch_taken) {
          goto L_08992B08;
      }
      goto L_08992B08;
    }
L_08992B08:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08992B28u);
    ctx.gpr[7] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 7u, 0x089680CCu>(ctx, &aot_mem) && ctx.pc == 0x08992B28u) goto L_08992B28;
    return;
L_08992B28:
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08992B40u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 81u, 0x089685DCu>(ctx, &aot_mem) && ctx.pc == 0x08992B40u) goto L_08992B40;
    return;
L_08992B40:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992B54u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08992B54u) goto L_08992B54;
    return;
L_08992B54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08992B5C;
    }
L_08992B5C:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08992B74u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08992B74u) goto L_08992B74;
    return;
L_08992B74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08992B7C;
    }
L_08992B7C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08992B98u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08992B98u) goto L_08992B98;
    return;
L_08992B98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08992BA8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08992BA8u) goto L_08992BA8;
    return;
L_08992BA8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (17076u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08992C1C;
      }
      goto L_08992BF4;
    }
L_08992BF4:
    ctx.gpr[4] = (16585u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08992BF4;
      }
      goto L_08992C1C;
    }
L_08992C1C:
    ctx.gpr[4] = (16585u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08992C60;
      }
      goto L_08992C3C;
    }
L_08992C3C:
    ctx.gpr[4] = (16585u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08992C3C;
      }
      goto L_08992C60;
    }
L_08992C60:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (0x08992C6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 152u, 0x0880CB20u>(ctx, &aot_mem) && ctx.pc == 0x08992C6Cu) goto L_08992C6C;
    return;
L_08992C6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08992C74;
    }
L_08992C74:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08992C8Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08992C8Cu) goto L_08992C8C;
    return;
L_08992C8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08992C9Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08992C9Cu) goto L_08992C9C;
    return;
L_08992C9C:
    ctx.gpr[31] = (0x08992CA4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 153u, 0x0880CB28u>(ctx, &aot_mem) && ctx.pc == 0x08992CA4u) goto L_08992CA4;
    return;
L_08992CA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08992CAC;
    }
L_08992CAC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08992CC8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08992CC8u) goto L_08992CC8;
    return;
L_08992CC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08992CD8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08992CD8u) goto L_08992CD8;
    return;
L_08992CD8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08992CF4u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 154u, 0x0880CB38u>(ctx, &aot_mem) && ctx.pc == 0x08992CF4u) goto L_08992CF4;
    return;
L_08992CF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08992CFC;
    }
L_08992CFC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08992D18u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08992D18u) goto L_08992D18;
    return;
L_08992D18:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08992D48;
      }
      goto L_08992D38;
    }
L_08992D38:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08992D44u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x08992D44u) goto L_08992D44;
    return;
L_08992D44:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08992D48;
L_08992D48:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[10] = (18804u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[10] = (ctx.gpr[10] | 9214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08992D90u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 416u, 0x08975BA8u>(ctx, &aot_mem) && ctx.pc == 0x08992D90u) goto L_08992D90;
    return;
L_08992D90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[31] = (0x08992DA0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 711u, 0x08977838u>(ctx, &aot_mem) && ctx.pc == 0x08992DA0u) goto L_08992DA0;
    return;
L_08992DA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992DC8u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08992DC8u) goto L_08992DC8;
    return;
L_08992DC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08992DD0;
    }
L_08992DD0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08992DECu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08992DECu) goto L_08992DEC;
    return;
L_08992DEC:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08992E1C;
      }
      goto L_08992E0C;
    }
L_08992E0C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08992E18u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x08992E18u) goto L_08992E18;
    return;
L_08992E18:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08992E1C;
L_08992E1C:
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26868)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[5] = (18804u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 9214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08992E68u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 416u, 0x08975BA8u>(ctx, &aot_mem) && ctx.pc == 0x08992E68u) goto L_08992E68;
    return;
L_08992E68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] << 4u);
    ctx.gpr[6] = (ctx.gpr[2] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992EC8u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08992EC8u) goto L_08992EC8;
    return;
L_08992EC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08992ED0;
    }
L_08992ED0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[31] = (0x08992EECu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08992EECu) goto L_08992EEC;
    return;
L_08992EEC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08992F1C;
      }
      goto L_08992F0C;
    }
L_08992F0C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08992F18u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x08992F18u) goto L_08992F18;
    return;
L_08992F18:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08992F1C;
L_08992F1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (15948u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[10] = (ctx.gpr[11] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[2] = (17174u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[11] = (ctx.gpr[3] & 255u);
    ctx.gpr[31] = (0x08992FA0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 328u, 0x089FA154u>(ctx, &aot_mem) && ctx.pc == 0x08992FA0u) goto L_08992FA0;
    return;
L_08992FA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08992FA8;
    }
L_08992FA8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08992FC0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08992FC0u) goto L_08992FC0;
    return;
L_08992FC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08992FD8;
      }
      goto L_08992FCC;
    }
L_08992FCC:
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(15927), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08992FE4;
      }
      goto L_08992FD8;
    }
L_08992FD8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(15927), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08992FE4;
L_08992FE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08992FEC;
    }
L_08992FEC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08993008u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08993008u) goto L_08993008;
    return;
L_08993008:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08993018u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08993018u) goto L_08993018;
    return;
L_08993018:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08993034;
      }
      goto L_08993024;
    }
L_08993024:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(323))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(323), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08993044;
      }
      goto L_08993034;
    }
L_08993034:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(323))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(323), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08993044;
L_08993044:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_0899304C;
    }
L_0899304C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08993068u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08993068u) goto L_08993068;
    return;
L_08993068:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08993078u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08993078u) goto L_08993078;
    return;
L_08993078:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08993098;
      }
      goto L_08993084;
    }
L_08993084:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089930AC;
      }
      goto L_08993098;
    }
L_08993098:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (65534u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_089930AC;
L_089930AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_089930B4;
    }
L_089930B4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089930D0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089930D0u) goto L_089930D0;
    return;
L_089930D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089930E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x089930E0u) goto L_089930E0;
    return;
L_089930E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08993114;
      }
      goto L_089930EC;
    }
L_089930EC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (65535u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08993138;
      }
      goto L_08993114;
    }
L_08993114:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (65535u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08993138;
L_08993138:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08993140;
    }
L_08993140:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08993158u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08993158u) goto L_08993158;
    return;
L_08993158:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08993168u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x08993168u) goto L_08993168;
    return;
L_08993168:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(266)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08993178;
      }
      goto L_08993174;
    }
L_08993174:
    ctx.gpr[4] = (0u | 1u);
    goto L_08993178;
L_08993178:
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
          goto L_089931A4;
      }
      goto L_0899319C;
    }
L_0899319C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089931F4;
      }
      goto L_089931A4;
    }
L_089931A4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089931D4;
    }
    goto L_089931C0;
L_089931C0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089931F4;
      }
      goto L_089931D4;
    }
L_089931D4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089931F4;
      }
      goto L_089931F0;
    }
L_089931F0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089931F4;
L_089931F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_089931FC;
    }
L_089931FC:
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
    ctx.gpr[31] = (0x0899322Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 466u, 0x089D7190u>(ctx, &aot_mem) && ctx.pc == 0x0899322Cu) goto L_0899322C;
    return;
L_0899322C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08993234;
    }
L_08993234:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7407)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08993250;
      }
      goto L_08993244;
    }
L_08993244:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7407), static_cast<std::uint8_t>(0u));
    goto L_08993250;
L_08993250:
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
          goto L_0899327C;
      }
      goto L_08993274;
    }
L_08993274:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089932CC;
      }
      goto L_0899327C;
    }
L_0899327C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089932AC;
    }
    goto L_08993298;
L_08993298:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089932CC;
      }
      goto L_089932AC;
    }
L_089932AC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089932CC;
      }
      goto L_089932C8;
    }
L_089932C8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089932CC;
L_089932CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_089932D4;
    }
L_089932D4:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089932F0u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089932F0u) goto L_089932F0;
    return;
L_089932F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08993300u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08993300u) goto L_08993300;
    return;
L_08993300:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1212)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08993320u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08993320u) goto L_08993320;
    return;
L_08993320:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08993328;
    }
L_08993328:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08993344u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08993344u) goto L_08993344;
    return;
L_08993344:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08993354u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08993354u) goto L_08993354;
    return;
L_08993354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08993370;
      }
      goto L_08993360;
    }
L_08993360:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(602))))));
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(602), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08993380;
      }
      goto L_08993370;
    }
L_08993370:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(602))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(602), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08993380;
L_08993380:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08993388;
    }
L_08993388:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089933A4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089933A4u) goto L_089933A4;
    return;
L_089933A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089933B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x089933B4u) goto L_089933B4;
    return;
L_089933B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(417), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_089933C4;
    }
L_089933C4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089933DCu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089933DCu) goto L_089933DC;
    return;
L_089933DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089933ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x089933ECu) goto L_089933EC;
    return;
L_089933EC:
    ctx.gpr[31] = (0x089933F4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 160u, 0x0880CBD0u>(ctx, &aot_mem) && ctx.pc == 0x089933F4u) goto L_089933F4;
    return;
L_089933F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_089933FC;
    }
L_089933FC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08993418u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08993418u) goto L_08993418;
    return;
L_08993418:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899343C;
      }
      goto L_08993424;
    }
L_08993424:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08993434u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 199u, 0x08864E08u>(ctx, &aot_mem) && ctx.pc == 0x08993434u) goto L_08993434;
    return;
L_08993434:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899344C;
      }
      goto L_0899343C;
    }
L_0899343C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0899344Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 199u, 0x08864E08u>(ctx, &aot_mem) && ctx.pc == 0x0899344Cu) goto L_0899344C;
    return;
L_0899344C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08993454;
    }
L_08993454:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08993470u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08993470u) goto L_08993470;
    return;
L_08993470:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x08993488u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 197u, 0x08864DE4u>(ctx, &aot_mem) && ctx.pc == 0x08993488u) goto L_08993488;
    return;
L_08993488:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08993490;
    }
L_08993490:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089934ACu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089934ACu) goto L_089934AC;
    return;
L_089934AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x089934CCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 348u, 0x0898616Cu>(ctx, &aot_mem) && ctx.pc == 0x089934CCu) goto L_089934CC;
    return;
L_089934CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_089934D4;
    }
L_089934D4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x089934E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 672u, 0x0887F140u>(ctx, &aot_mem) && ctx.pc == 0x089934E4u) goto L_089934E4;
    return;
L_089934E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_089934EC;
    }
L_089934EC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08993504u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08993504u) goto L_08993504;
    return;
L_08993504:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08993514u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x08993514u) goto L_08993514;
    return;
L_08993514:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08993534;
      }
      goto L_08993520;
    }
L_08993520:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08993534;
      }
      goto L_08993530;
    }
L_08993530:
    ctx.gpr[5] = (0u | 1u);
    goto L_08993534;
L_08993534:
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
          goto L_08993560;
      }
      goto L_08993558;
    }
L_08993558:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089935B0;
      }
      goto L_08993560;
    }
L_08993560:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08993590;
    }
    goto L_0899357C;
L_0899357C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089935B0;
      }
      goto L_08993590;
    }
L_08993590:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089935B0;
      }
      goto L_089935AC;
    }
L_089935AC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089935B0;
L_089935B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_089935B8;
    }
L_089935B8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x089935C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 8u, 0x08880098u>(ctx, &aot_mem) && ctx.pc == 0x089935C8u) goto L_089935C8;
    return;
L_089935C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_089935D0;
    }
L_089935D0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089935ECu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089935ECu) goto L_089935EC;
    return;
L_089935EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089935FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089935FCu) goto L_089935FC;
    return;
L_089935FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08993634;
      }
      goto L_08993608;
    }
L_08993608:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899362Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 659u, 0x08887620u>(ctx, &aot_mem) && ctx.pc == 0x0899362Cu) goto L_0899362C;
    return;
L_0899362C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08993650;
      }
      goto L_08993634;
    }
L_08993634:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08993640u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 686u, 0x088877F4u>(ctx, &aot_mem) && ctx.pc == 0x08993640u) goto L_08993640;
    return;
L_08993640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_08993650;
L_08993650:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08993658;
    }
L_08993658:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993678u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x08993678u) goto L_08993678;
    return;
L_08993678:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[31] = (0x089936A0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089936A0u) goto L_089936A0;
    return;
L_089936A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(272), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(274), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(276), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(278), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(280), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(282), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(284), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(286), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(288), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(290), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(292), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0899370Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 222u, 0x08871740u>(ctx, &aot_mem) && ctx.pc == 0x0899370Cu) goto L_0899370C;
    return;
L_0899370C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08993728;
      }
      goto L_08993718;
    }
L_08993718:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.gpr[31] = (0x08993728u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21580));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08993728u) goto L_08993728;
    return;
L_08993728:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08993770;
      }
      goto L_08993730;
    }
L_08993730:
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(290));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[31] = (0x08993754u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 342u, 0x08871F34u>(ctx, &aot_mem) && ctx.pc == 0x08993754u) goto L_08993754;
    return;
L_08993754:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.gpr[31] = (0x08993764u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 252u, 0x0887192Cu>(ctx, &aot_mem) && ctx.pc == 0x08993764u) goto L_08993764;
    return;
L_08993764:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08993730;
      }
      goto L_08993770;
    }
L_08993770:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08993778;
    }
L_08993778:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993798u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x08993798u) goto L_08993798;
    return;
L_08993798:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x089937ACu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 542u, 0x08A8B30Cu>(ctx, &aot_mem) && ctx.pc == 0x089937ACu) goto L_089937AC;
    return;
L_089937AC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089937CC;
      }
      goto L_089937B8;
    }
L_089937B8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6115));
    ctx.gpr[31] = (0x089937C4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x089937C4u) goto L_089937C4;
    return;
L_089937C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089937D8;
      }
      goto L_089937CC;
    }
L_089937CC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6115));
    ctx.gpr[31] = (0x089937D8u);
    ctx.gpr[5] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x089937D8u) goto L_089937D8;
    return;
L_089937D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_089937E0;
    }
L_089937E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993800u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x08993800u) goto L_08993800;
    return;
L_08993800:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08993814u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 534u, 0x08A8B274u>(ctx, &aot_mem) && ctx.pc == 0x08993814u) goto L_08993814;
    return;
L_08993814:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08993828;
      }
      goto L_08993824;
    }
L_08993824:
    ctx.gpr[4] = (0u | 1u);
    goto L_08993828;
L_08993828:
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
          goto L_08993854;
      }
      goto L_0899384C;
    }
L_0899384C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089938A4;
      }
      goto L_08993854;
    }
L_08993854:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08993884;
    }
    goto L_08993870;
L_08993870:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089938A4;
      }
      goto L_08993884;
    }
L_08993884:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089938A4;
      }
      goto L_089938A0;
    }
L_089938A0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089938A4;
L_089938A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_089938AC;
    }
L_089938AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089938CCu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x089938CCu) goto L_089938CC;
    return;
L_089938CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x089938E0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 542u, 0x08A8B30Cu>(ctx, &aot_mem) && ctx.pc == 0x089938E0u) goto L_089938E0;
    return;
L_089938E0:
    ctx.gpr[31] = (0x089938E8u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(6115));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 476u, 0x089C6124u>(ctx, &aot_mem) && ctx.pc == 0x089938E8u) goto L_089938E8;
    return;
L_089938E8:
    ctx.gpr[16] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_089938FC;
      }
      goto L_089938F4;
    }
L_089938F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08993958;
      }
      goto L_089938FC;
    }
L_089938FC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7564)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7564)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08993954;
      }
      goto L_08993924;
    }
L_08993924:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[7] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7568)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7568)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08993958;
      }
      goto L_08993950;
    }
L_08993950:
    ctx.gpr[4] = (0u | 1u);
    goto L_08993954;
L_08993954:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08993958;
L_08993958:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08993974;
      }
      goto L_08993960;
    }
L_08993960:
    ctx.gpr[4] = (2226u << 16u);
    goto L_08993964;
L_08993964:
    ctx.gpr[31] = (0x0899396Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21616));
    goto L_08991BBC;
L_0899396C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_08993964;
      }
      goto L_08993974;
    }
L_08993974:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_0899397C;
    }
L_0899397C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08993994u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08993994u) goto L_08993994;
    return;
L_08993994:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089939A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089939A4u) goto L_089939A4;
    return;
L_089939A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089939B8;
      }
      goto L_089939B4;
    }
L_089939B4:
    ctx.gpr[4] = (0u | 1u);
    goto L_089939B8;
L_089939B8:
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
          goto L_089939E4;
      }
      goto L_089939DC;
    }
L_089939DC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08993A34;
      }
      goto L_089939E4;
    }
L_089939E4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08993A14;
    }
    goto L_08993A00;
L_08993A00:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08993A34;
      }
      goto L_08993A14;
    }
L_08993A14:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08993A34;
      }
      goto L_08993A30;
    }
L_08993A30:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08993A34;
L_08993A34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08993A3C;
    }
L_08993A3C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08993A54u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08993A54u) goto L_08993A54;
    return;
L_08993A54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08993A64u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08993A64u) goto L_08993A64;
    return;
L_08993A64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08993A78;
      }
      goto L_08993A74;
    }
L_08993A74:
    ctx.gpr[4] = (0u | 1u);
    goto L_08993A78;
L_08993A78:
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
          goto L_08993AA4;
      }
      goto L_08993A9C;
    }
L_08993A9C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08993AF4;
      }
      goto L_08993AA4;
    }
L_08993AA4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08993AD4;
    }
    goto L_08993AC0;
L_08993AC0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08993AF4;
      }
      goto L_08993AD4;
    }
L_08993AD4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08993AF4;
      }
      goto L_08993AF0;
    }
L_08993AF0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08993AF4;
L_08993AF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08993AFC;
    }
L_08993AFC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08993B14u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08993B14u) goto L_08993B14;
    return;
L_08993B14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08993B24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08993B24u) goto L_08993B24;
    return;
L_08993B24:
    ctx.gpr[31] = (0x08993B2Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 60u, 0x088886B0u>(ctx, &aot_mem) && ctx.pc == 0x08993B2Cu) goto L_08993B2C;
    return;
L_08993B2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08993B34;
    }
L_08993B34:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x08993B50u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08993B50u) goto L_08993B50;
    return;
L_08993B50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08993B60u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08993B60u) goto L_08993B60;
    return;
L_08993B60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08993B74u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x08993B74u) goto L_08993B74;
    return;
L_08993B74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[17];
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08993BC8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 190u, 0x089A4D08u>(ctx, &aot_mem) && ctx.pc == 0x08993BC8u) goto L_08993BC8;
    return;
L_08993BC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08993BD0;
    }
L_08993BD0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08993BECu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08993BECu) goto L_08993BEC;
    return;
L_08993BEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08993BFCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08993BFCu) goto L_08993BFC;
    return;
L_08993BFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08993C1C;
      }
      goto L_08993C08;
    }
L_08993C08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08993C30;
      }
      goto L_08993C1C;
    }
L_08993C1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (65504u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_08993C30;
L_08993C30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08993C38;
    }
L_08993C38:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08993C4Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x08993C4Cu) goto L_08993C4C;
    return;
L_08993C4C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (ctx.gpr[2] - ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08993C70u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08993C70u) goto L_08993C70;
    return;
L_08993C70:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_08993CB0;
    }
    goto L_08993C80;
L_08993C80:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08993C8Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08993C8Cu) goto L_08993C8C;
    return;
L_08993C8C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08993CA4;
      }
      goto L_08993C98;
    }
L_08993C98:
    ctx.gpr[31] = (0x08993CA0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08993CA0u) goto L_08993CA0;
    return;
L_08993CA0:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08993CA4;
L_08993CA4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_08993CB0;
L_08993CB0:
    ctx.gpr[18] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08993CC8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24444)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08993CC8u) goto L_08993CC8;
    return;
L_08993CC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08993CE4u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x08993CE4u) goto L_08993CE4;
    return;
L_08993CE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] & 65535u);
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08993D2Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8840));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 406u, 0x08AC6D6Cu>(ctx, &aot_mem) && ctx.pc == 0x08993D2Cu) goto L_08993D2C;
    return;
L_08993D2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08993D34;
    }
L_08993D34:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 13u);
    ctx.gpr[31] = (0x08993D50u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08993D50u) goto L_08993D50;
    return;
L_08993D50:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(296));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(312));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(328));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.gpr[31] = (0x08993DD4u);
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 417u, 0x08AE9CBCu>(ctx, &aot_mem) && ctx.pc == 0x08993DD4u) goto L_08993DD4;
    return;
L_08993DD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08993DDC;
    }
L_08993DDC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08993DF8u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08993DF8u) goto L_08993DF8;
    return;
L_08993DF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08993E28;
      }
      goto L_08993E04;
    }
L_08993E04:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22640)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08993E20u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 283u, 0x08A7D868u>(ctx, &aot_mem) && ctx.pc == 0x08993E20u) goto L_08993E20;
    return;
L_08993E20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08993E44;
      }
      goto L_08993E28;
    }
L_08993E28:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22640)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08993E44u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 283u, 0x08A7D868u>(ctx, &aot_mem) && ctx.pc == 0x08993E44u) goto L_08993E44;
    return;
L_08993E44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08993E4C;
    }
L_08993E4C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08993E64u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08993E64u) goto L_08993E64;
    return;
L_08993E64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08993E88;
      }
      goto L_08993E70;
    }
L_08993E70:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22640)));
    ctx.gpr[31] = (0x08993E80u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 287u, 0x08A7D89Cu>(ctx, &aot_mem) && ctx.pc == 0x08993E80u) goto L_08993E80;
    return;
L_08993E80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08993E98;
      }
      goto L_08993E88;
    }
L_08993E88:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22640)));
    ctx.gpr[31] = (0x08993E98u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 287u, 0x08A7D89Cu>(ctx, &aot_mem) && ctx.pc == 0x08993E98u) goto L_08993E98;
    return;
L_08993E98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08993EA0;
    }
L_08993EA0:
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08993EC0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08993EC0u) goto L_08993EC0;
    return;
L_08993EC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(300)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(304)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(308)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(312)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(316)));
    ctx.gpr[6] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(320)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[31] = (0x08993F24u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08993F24u) goto L_08993F24;
    return;
L_08993F24:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(300), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(308), 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(316), 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 109u, 0x08994900u>(ctx, &aot_mem); return;
      }
      goto L_08993F48;
    }
L_08993F48:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08993F60u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08993F60u) goto L_08993F60;
    return;
L_08993F60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08993F70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08993F70u) goto L_08993F70;
    return;
L_08993F70:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 2u, 0x08994008u>(ctx, &aot_mem); return;
      }
      goto L_08993F84;
    }
L_08993F84:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08993FAC;
      }
      goto L_08993F9C;
    }
L_08993F9C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08993FD4;
      }
      goto L_08993FAC;
    }
L_08993FAC:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08993FD4;
      }
      goto L_08993FC4;
    }
L_08993FC4:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08993FD4;
L_08993FD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(296));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08994000u);
    ctx.gpr[6] = (0u | 1u);
    ctx.pc = jump_target;
    (void)rt.invoke_chained_call(ctx, &aot_mem);
    return;
}

void recomp_unit_0099(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0099_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_99(Runtime &runtime) {
    runtime.register_generated_unit(99u, 0x08990000u, 16384u, &recomp_unit_0099, &recomp_unit_0099_entry);
    runtime.register_function(0x08990000u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990038u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990058u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990084u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990090u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899009Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089900A4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089900A8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089900B0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089900BCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089900D0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089900E4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089900F0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089900FCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990108u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990110u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990114u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899011Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990128u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899013Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990150u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899015Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990168u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990174u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899017Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990180u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990184u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990190u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089901A4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089901C8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089901DCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089901E8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089901F4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089901FCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990200u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990204u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990210u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990224u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899024Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990278u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899028Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089902B4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089902C0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089902CCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089902D8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089902E0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089902E4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089902E8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089902F4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990308u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990310u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990324u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990330u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990334u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990340u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990368u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990374u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990380u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899038Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990394u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990398u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089903A0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089903A8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089903BCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089903CCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089903D8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899041Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990428u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990434u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990440u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990448u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899044Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990454u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899045Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990470u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990478u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990498u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089904B0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089904BCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089904C8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089904D0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089904D4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089904D8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089904E8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089904FCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899051Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990528u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990534u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990540u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990548u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899054Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990550u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990560u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990574u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990598u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089905A8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089905B4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089905C0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089905C8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089905CCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089905D0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089905E0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089905F4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990608u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899061Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990628u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990634u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899063Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990640u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990644u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990650u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990664u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899068Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089906A0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089906CCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089906D8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089906E4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089906F0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089906F8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089906FCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990700u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990710u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990724u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899072Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899074Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990778u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990784u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990790u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990798u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899079Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089907A4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089907B0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089907C4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089907D8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089907E4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089907F0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089907FCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990804u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990808u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899080Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990818u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899082Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990840u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899084Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990858u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990864u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899086Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990870u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990874u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990880u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990894u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089908B8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089908C8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089908D4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089908E0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089908E8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089908ECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089908F0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089908FCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990910u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990938u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899094Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990968u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899096Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990978u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089909A8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089909BCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089909C8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089909D4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089909DCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089909E0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089909E4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089909F0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990A04u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990A0Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990A1Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990A60u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990A6Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990A78u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990A84u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990A8Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990A90u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990A94u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990AA0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990AB4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990AC4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990AD0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990B14u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990B20u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990B2Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990B38u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990B40u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990B44u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990B48u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990B54u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990B68u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990B70u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990B90u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990BBCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990BC8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990BD4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990BDCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990BE0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990BE8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990BF4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990C08u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990C1Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990C28u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990C34u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990C40u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990C48u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990C4Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990C50u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990C5Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990C70u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990C84u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990C90u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990C9Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990CA8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990CB0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990CB4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990CB8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990CC4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990CD8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990CFCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990D0Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990D18u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990D24u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990D2Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990D30u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990D34u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990D40u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990D54u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990D7Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990D90u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990DACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990DB0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990DBCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990DECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E00u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E0Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E18u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E20u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E24u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E2Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E34u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E48u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E58u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E64u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990EA8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990EB4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990EC0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990ECCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990ED4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990ED8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990EE0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990EE8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990EFCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990F0Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990F18u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990F5Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990F68u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990F74u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990F80u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990F88u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990F8Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990F94u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990F9Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990FB0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990FC0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990FD0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991014u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991024u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991030u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899103Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991044u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991048u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991050u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899105Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991070u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991078u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991098u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089910CCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089910D8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089910E4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089910ECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089910F0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089910F8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991104u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991118u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899112Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991138u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991144u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991150u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991158u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899115Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991164u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991170u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991184u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991198u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089911A4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089911B0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089911BCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089911C4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089911C8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089911CCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089911D8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089911ECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991210u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991224u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991230u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899123Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991244u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991248u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899124Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991258u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899126Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991294u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089912ACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089912D8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089912E8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089912F4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991300u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991308u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899130Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991310u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899131Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991330u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991334u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991358u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899136Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991378u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991384u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899138Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991390u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991394u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089913A4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089913B8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089913C0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089913E0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899140Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991418u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991424u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899142Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991430u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991438u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991444u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991458u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899146Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991478u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991484u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991490u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991498u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899149Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089914A0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089914ACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089914C0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089914D4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089914E0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089914ECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089914F8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991500u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991504u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991508u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991514u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991528u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899154Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991560u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899156Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991578u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991580u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991584u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991588u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991594u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089915A8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089915B0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089915C0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089915CCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089915D8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991608u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991614u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991620u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899162Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991634u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991638u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991640u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899164Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991660u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991668u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991688u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089916C4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089916D0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089916DCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089916E4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089916E8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089916F0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089916FCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991710u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991724u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991734u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991740u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899174Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991754u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991758u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991760u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899176Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991780u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991794u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089917A4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089917B0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089917BCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089917C4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089917C8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089917CCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089917D8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089917ECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991810u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991820u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899182Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991838u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991840u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991844u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991848u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991854u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991868u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991890u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089918A4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089918CCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089918E0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089918ECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089918F8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991900u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991904u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991908u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991914u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991928u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899192Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991950u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991964u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991970u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899197Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991984u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991988u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991990u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899199Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089919B0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089919D8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089919ECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089919F8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991A04u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991A0Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991A10u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991A18u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991A24u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991A38u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991A40u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991A88u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991B98u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991BA4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991BBCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991BE8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991C20u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991C3Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991C50u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991C6Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991C9Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991CA4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991CC0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991CD4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991CF0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991CF4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991CFCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991D10u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991D2Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991D5Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991D64u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991D80u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991D94u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991DB0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991DB4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991DBCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991DD8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991DE8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991E18u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991E20u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991E3Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991E50u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991E6Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991E70u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991E78u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991E94u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991EA4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991ED4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991EDCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991EF8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991F0Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991F28u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991F2Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991F34u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991F48u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991F64u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991F98u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991FA0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991FBCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991FD0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991FECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991FF0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991FF8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899200Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992028u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899205Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992064u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992080u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992094u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089920B0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089920B4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089920BCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089920D8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089920E8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899211Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992124u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992140u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992154u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992170u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992174u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899217Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992198u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089921A8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089921DCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089921E4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992200u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992214u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992230u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992234u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899223Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899225Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899226Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899229Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089922B0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089922B8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089922D4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992320u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992330u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992378u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992390u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089923C4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089923ECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089923FCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992404u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992420u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992430u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992484u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992490u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089924A0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089924A8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089924C0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089924D0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089924D8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089924F8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899250Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992514u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992530u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992540u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899254Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899255Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899256Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992574u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899258Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089925BCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089925D8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992614u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899261Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992638u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992674u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899267Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992684u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899268Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089926A8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089926B8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089926C8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089926FCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992704u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992724u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992734u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992788u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089927B0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089927B8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089927D0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089927E0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089927F4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899280Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992830u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992838u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992854u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992868u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992884u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992888u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992890u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089928ACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089928BCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089928CCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992900u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992908u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992920u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899292Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992958u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899297Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992984u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899299Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089929D0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089929E0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089929ECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089929F8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992A04u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992A10u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992A14u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992A38u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992A40u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992A5Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992A70u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992A8Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992A90u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992A98u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992AB4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992AD4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992AE0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992AE4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992AF4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992AFCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992B08u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992B28u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992B40u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992B54u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992B5Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992B74u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992B7Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992B98u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992BA8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992BF4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992C1Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992C3Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992C60u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992C6Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992C74u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992C8Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992C9Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992CA4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992CACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992CC8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992CD8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992CF4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992CFCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992D18u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992D38u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992D44u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992D48u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992D90u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992DA0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992DC8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992DD0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992DECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992E0Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992E18u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992E1Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992E68u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992EC8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992ED0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992EECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992F0Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992F18u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992F1Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992FA0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992FA8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992FC0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992FCCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992FD8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992FE4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992FECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993008u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993018u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993024u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993034u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993044u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899304Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993068u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993078u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993084u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993098u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089930ACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089930B4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089930D0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089930E0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089930ECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993114u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993138u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993140u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993158u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993168u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993174u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993178u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899319Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089931A4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089931C0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089931D4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089931F0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089931F4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089931FCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899322Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993234u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993244u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993250u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993274u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899327Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993298u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089932ACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089932C8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089932CCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089932D4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089932F0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993300u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993320u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993328u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993344u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993354u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993360u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993370u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993380u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993388u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089933A4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089933B4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089933C4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089933DCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089933ECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089933F4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089933FCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993418u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993424u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993434u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899343Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899344Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993454u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993470u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993488u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993490u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089934ACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089934CCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089934D4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089934E4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089934ECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993504u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993514u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993520u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993530u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993534u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993558u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993560u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899357Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993590u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089935ACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089935B0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089935B8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089935C8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089935D0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089935ECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089935FCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993608u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899362Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993634u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993640u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993650u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993658u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993678u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089936A0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899370Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993718u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993728u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993730u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993754u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993764u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993770u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993778u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993798u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089937ACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089937B8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089937C4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089937CCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089937D8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089937E0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993800u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993814u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993824u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993828u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899384Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993854u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993870u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993884u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089938A0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089938A4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089938ACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089938CCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089938E0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089938E8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089938F4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089938FCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993924u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993950u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993954u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993958u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993960u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993964u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899396Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993974u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899397Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993994u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089939A4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089939B4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089939B8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089939DCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089939E4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993A00u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993A14u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993A30u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993A34u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993A3Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993A54u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993A64u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993A74u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993A78u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993A9Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993AA4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993AC0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993AD4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993AF0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993AF4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993AFCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993B14u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993B24u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993B2Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993B34u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993B50u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993B60u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993B74u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993BC8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993BD0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993BECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993BFCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993C08u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993C1Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993C30u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993C38u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993C4Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993C70u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993C80u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993C8Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993C98u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993CA0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993CA4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993CB0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993CC8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993CE4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993D2Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993D34u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993D50u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993DD4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993DDCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993DF8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993E04u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993E20u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993E28u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993E44u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993E4Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993E64u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993E70u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993E80u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993E88u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993E98u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993EA0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993EC0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993F24u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993F48u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993F60u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993F70u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993F84u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993F9Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993FACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993FC4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993FD4u, &recomp_unit_0099, "recomp_unit_0099");
}
} // namespace psprecomp
